/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00014_unused.H $         */
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

#ifndef __C_REG00014_H_UNUSED__
#define __C_REG00014_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[ATOMIC_LOCK_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_ATOMIC_LOCK_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ATOMIC_LOCK_MASK_LATCH_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[ATOMIC_LOCK_MASK_LATCH_REG]

//>> GET_[ATOMIC_LOCK_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_ATOMIC_LOCK_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ATOMIC_LOCK_MASK_LATCH_REG;
#endif
    return fapi2::getScom(i_target, ATOMIC_LOCK_MASK_LATCH_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[ATOMIC_LOCK_MASK_LATCH_REG]

//>> PUT_[ATOMIC_LOCK_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_ATOMIC_LOCK_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_MASK_LATCH_REG));
#endif
    return fapi2::putScom(i_target, ATOMIC_LOCK_MASK_LATCH_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[ATOMIC_LOCK_MASK_LATCH_REG]


//>> SET_[ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]
static inline fapi2::buffer<uint64_t>& SET_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_MASK_LATCH_REG));
#endif
    return o_data.insertFromRight<ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK,
           ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]

//>> SET_[ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]
static inline fapi2::buffer<uint64_t>& SET_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_MASK_LATCH_REG));
#endif
    return o_data.insertFromRight<ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK,
           ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]

//>> GET_[ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]
static inline fapi2::buffer<uint64_t>& GET_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_MASK_LATCH_REG));
#endif
    return i_data.extractToRight<ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK,
           ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]

//>> PREP_[EC_LS_LSU_HOLD_OUT_REG12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG12(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG12;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG12]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG12(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG12;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG12, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG12(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG12, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG12]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S0_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_ALLOC_COLLISION_ON_NON_DERAT_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_BOTH_SRQZ_HAS_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_NON_OW_STORE_HAS_MULTIPLE_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_S1_OW_STORE_HAS_TOO_MANY_DATA_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_RES_FM_VIOLATION_WITH_MV_HIT_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
CLEAR_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L0_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_FINAL_PASS_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_LD_OP_UNEXPECTED_FINISH_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
CLEAR_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG12));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG12_L1_FLS_SECURITY_LD_FINISH_W_EXCPT_AND_DVAL_HOLD_OUT]

//>> PREP_[EC_LS_LSU_HOLD_OUT_REG4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG4;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG4]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_MP3_RADA_ERR_HOLD_OUT_SET7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG4));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG4_RC5_SNOOP_RADA_ERR_HOLD_OUT_SET7]

//>> PREP_[EC_PC_PMC_CORE_THREAD_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_PMC_CORE_THREAD_STATE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMC_CORE_THREAD_STATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_PMC_CORE_THREAD_STATE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_PMC_CORE_THREAD_STATE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMC_CORE_THREAD_STATE;
#endif
    return fapi2::getScom(i_target, EC_PC_PMC_CORE_THREAD_STATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE]

//>> PUT_[EC_PC_PMC_CORE_THREAD_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_PMC_CORE_THREAD_STATE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return fapi2::putScom(i_target, EC_PC_PMC_CORE_THREAD_STATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_PMC_CORE_THREAD_STATE]


//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_PSSCR_RL]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_PSSCR_RL]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_PSSCR_RL]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL,
           EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_PSSCR_RL]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.setBit<EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]

//>> CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.clearBit<EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]
static inline bool GET_EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.getBit<EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT0_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.setBit<EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]

//>> CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.clearBit<EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]
static inline bool GET_EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.getBit<EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT1_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.setBit<EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]

//>> CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.clearBit<EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]
static inline bool GET_EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.getBit<EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT2_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.setBit<EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]

//>> CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.clearBit<EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]
static inline bool GET_EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.getBit<EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_VT3_STOP_STATE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.setBit<EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]

//>> CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.clearBit<EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]
static inline bool GET_EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.getBit<EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_LPAR_MODE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]

//>> SET_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.setBit<EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]

//>> CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return o_data.clearBit<EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]

//>> GET_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]
static inline bool GET_EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMC_CORE_THREAD_STATE));
#endif
    return i_data.getBit<EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMC_CORE_THREAD_STATE_FUSED_CORE_MODE]

//>> PREP_[EC_PC_PMU_SPRCOR_OCC_SCOMD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_PMU_SPRCOR_OCC_SCOMD(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_OCC_SCOMD;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_PMU_SPRCOR_OCC_SCOMD]

//>> GET_[EC_PC_PMU_SPRCOR_OCC_SCOMD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_PMU_SPRCOR_OCC_SCOMD(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_OCC_SCOMD;
#endif
    return fapi2::getScom(i_target, EC_PC_PMU_SPRCOR_OCC_SCOMD, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_OCC_SCOMD]

//>> PUT_[EC_PC_PMU_SPRCOR_OCC_SCOMD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_PMU_SPRCOR_OCC_SCOMD(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_OCC_SCOMD));
#endif
    return fapi2::putScom(i_target, EC_PC_PMU_SPRCOR_OCC_SCOMD, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_PMU_SPRCOR_OCC_SCOMD]


//>> PREP_[EC_PC_SCR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_SCR6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SCR6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_SCR6]

//>> GET_[EC_PC_SCR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_SCR6(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SCR6;
#endif
    return fapi2::getScom(i_target, EC_PC_SCR6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_SCR6]

//>> PUT_[EC_PC_SCR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_SCR6(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_SCR6));
#endif
    return fapi2::putScom(i_target, EC_PC_SCR6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_SCR6]


//>> PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE2_TR_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_4]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE2_TR_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_4;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_4]

//>> PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE2_TR_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_4));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_4]


//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_4_A,
           EC_PC_TRACE2_TR_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_A]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_4_A,
           EC_PC_TRACE2_TR_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_A]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_4_A,
           EC_PC_TRACE2_TR_TR0_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_A]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_4_B,
           EC_PC_TRACE2_TR_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_B]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_4_B,
           EC_PC_TRACE2_TR_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_B]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_4_B,
           EC_PC_TRACE2_TR_TR0_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_4_B]

//>> PREP_[L2TRA_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR0_CONFIG_9]

//>> GET_[L2TRA_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_9;
#endif
    return fapi2::getScom(i_target, L2TRA_TR0_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9]

//>> PUT_[L2TRA_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return fapi2::putScom(i_target, L2TRA_TR0_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR0_CONFIG_9]


//>> SET_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.setBit<L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.getBit<L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.setBit<L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.getBit<L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL,
           L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK,
           L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK,
           L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK,
           L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK,
           L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK,
           L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK,
           L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK,
           L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK,
           L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK,
           L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK,
           L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK,
           L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK,
           L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.setBit<L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.getBit<L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.setBit<L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.getBit<L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE,
           L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE,
           L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE,
           L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.setBit<L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.getBit<L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.setBit<L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.getBit<L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.setBit<L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.getBit<L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.setBit<L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.getBit<L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.setBit<L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.getBit<L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L2TRA_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_SPARE_LT]

//>> SET_[L2TRA_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_SPARE_LT]

//>> SET_[L2TRA_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.setBit<L2TRA_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_9_SPARE_LT]

//>> CLEAR_[L2TRA_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L2TRA_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR0_CONFIG_9_SPARE_LT]

//>> GET_[L2TRA_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_SPARE_LT]

//>> GET_[L2TRA_TR0_CONFIG_9_SPARE_LT]
static inline bool GET_L2TRA_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_9));
#endif
    return i_data.getBit<L2TRA_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_9_SPARE_LT]

//>> PREP_[L2TRA_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR1_CONFIG_0]

//>> GET_[L2TRA_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG_0;
#endif
    return fapi2::getScom(i_target, L2TRA_TR1_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_0]

//>> PUT_[L2TRA_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_0));
#endif
    return fapi2::putScom(i_target, L2TRA_TR1_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR1_CONFIG_0]


//>> SET_[L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_0));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[L3_MISC_L3CERRS_FIR_ACTION0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3_MISC_L3CERRS_FIR_ACTION0_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_FIR_ACTION0_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3_MISC_L3CERRS_FIR_ACTION0_REG]

//>> GET_[L3_MISC_L3CERRS_FIR_ACTION0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3_MISC_L3CERRS_FIR_ACTION0_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_FIR_ACTION0_REG;
#endif
    return fapi2::getScom(i_target, L3_MISC_L3CERRS_FIR_ACTION0_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3_MISC_L3CERRS_FIR_ACTION0_REG]

//>> PUT_[L3_MISC_L3CERRS_FIR_ACTION0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3_MISC_L3CERRS_FIR_ACTION0_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_FIR_ACTION0_REG));
#endif
    return fapi2::putScom(i_target, L3_MISC_L3CERRS_FIR_ACTION0_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3_MISC_L3CERRS_FIR_ACTION0_REG]


//>> SET_[L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_FIR_ACTION0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0,
           L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0]

//>> SET_[L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_FIR_ACTION0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0,
           L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0]

//>> GET_[L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_FIR_ACTION0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0,
           L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_FIR_ACTION0_REG_FIR_ACTION0]

//>> PREP_[L3_MISC_L3CERRS_FIR_ACTION1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3_MISC_L3CERRS_FIR_ACTION1_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_FIR_ACTION1_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3_MISC_L3CERRS_FIR_ACTION1_REG]

//>> GET_[L3_MISC_L3CERRS_FIR_ACTION1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3_MISC_L3CERRS_FIR_ACTION1_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_FIR_ACTION1_REG;
#endif
    return fapi2::getScom(i_target, L3_MISC_L3CERRS_FIR_ACTION1_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3_MISC_L3CERRS_FIR_ACTION1_REG]

//>> PUT_[L3_MISC_L3CERRS_FIR_ACTION1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3_MISC_L3CERRS_FIR_ACTION1_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_FIR_ACTION1_REG));
#endif
    return fapi2::putScom(i_target, L3_MISC_L3CERRS_FIR_ACTION1_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3_MISC_L3CERRS_FIR_ACTION1_REG]


//>> SET_[L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_FIR_ACTION1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1,
           L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1]

//>> SET_[L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_FIR_ACTION1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1,
           L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1]

//>> GET_[L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_FIR_ACTION1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1,
           L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_FIR_ACTION1_REG_FIR_ACTION1]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
