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


//>> PREP_[CRYPTO_ENCRYPT_CRYPTOKEY1B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CRYPTO_ENCRYPT_CRYPTOKEY1B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CRYPTO_ENCRYPT_CRYPTOKEY1B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CRYPTO_ENCRYPT_CRYPTOKEY1B]

//>> GET_[CRYPTO_ENCRYPT_CRYPTOKEY1B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CRYPTO_ENCRYPT_CRYPTOKEY1B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CRYPTO_ENCRYPT_CRYPTOKEY1B;
#endif
    return fapi2::getScom(i_target, CRYPTO_ENCRYPT_CRYPTOKEY1B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CRYPTO_ENCRYPT_CRYPTOKEY1B]

//>> PUT_[CRYPTO_ENCRYPT_CRYPTOKEY1B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CRYPTO_ENCRYPT_CRYPTOKEY1B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CRYPTO_ENCRYPT_CRYPTOKEY1B));
#endif
    return fapi2::putScom(i_target, CRYPTO_ENCRYPT_CRYPTOKEY1B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CRYPTO_ENCRYPT_CRYPTOKEY1B]


//>> SET_[CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B]
static inline fapi2::buffer<uint64_t>& SET_CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_ENCRYPT_CRYPTOKEY1B));
#endif
    return o_data.insertFromRight<CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B,
           CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B]

//>> SET_[CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B]
static inline fapi2::buffer<uint64_t>& SET_CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_ENCRYPT_CRYPTOKEY1B));
#endif
    return o_data.insertFromRight<CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B,
           CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B]

//>> GET_[CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B]
static inline fapi2::buffer<uint64_t>& GET_CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_ENCRYPT_CRYPTOKEY1B));
#endif
    return i_data.extractToRight<CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B,
           CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CRYPTO_ENCRYPT_CRYPTOKEY1B_KEY1B]

//>> PREP_[DSTL_DSTLCFG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DSTL_DSTLCFG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSTLCFG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DSTL_DSTLCFG2]

//>> GET_[DSTL_DSTLCFG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DSTL_DSTLCFG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSTLCFG2;
#endif
    return fapi2::getScom(i_target, DSTL_DSTLCFG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DSTL_DSTLCFG2]

//>> PUT_[DSTL_DSTLCFG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DSTL_DSTLCFG2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return fapi2::putScom(i_target, DSTL_DSTLCFG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DSTL_DSTLCFG2]


//>> SET_[DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING]

//>> SET_[DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING]

//>> GET_[DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_TEMPLATE0_RATE_PACING]

//>> SET_[DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING]

//>> SET_[DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING]

//>> GET_[DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_TEMPLATE1_RATE_PACING]

//>> SET_[DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING]

//>> SET_[DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING]

//>> GET_[DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_TEMPLATE4_RATE_PACING]

//>> SET_[DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING]

//>> SET_[DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING]

//>> GET_[DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING,
           DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_TEMPLATE7_RATE_PACING]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_RESET]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_RESET]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_FORCE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_FORCE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_USTL_SOURCED]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_USTL_SOURCED]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LINK_DOWN]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LINK_DOWN]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_CH_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_CH_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLX_XSTOP]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLX_XSTOP]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_COUNTER_ERR]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_COUNTER_ERR]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_TLXVC3_OVERUSE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_TLXVC3_OVERUSE]

//>> SET_[DSTL_DSTLCFG2_RESERVED_32_35]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_RESERVED_32_35(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_RESERVED_32_35,
           DSTL_DSTLCFG2_RESERVED_32_35_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_RESERVED_32_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_RESERVED_32_35]

//>> SET_[DSTL_DSTLCFG2_RESERVED_32_35]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_RESERVED_32_35(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_RESERVED_32_35,
           DSTL_DSTLCFG2_RESERVED_32_35_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_RESERVED_32_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_RESERVED_32_35]

//>> GET_[DSTL_DSTLCFG2_RESERVED_32_35]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_RESERVED_32_35(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_RESERVED_32_35,
           DSTL_DSTLCFG2_RESERVED_32_35_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_RESERVED_32_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_RESERVED_32_35]

//>> SET_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]

//>> SET_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]

//>> SET_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]

//>> CLEAR_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]

//>> GET_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]

//>> GET_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]
static inline bool GET_DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_SEL_USTL_PMU_EVENTS]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_DSTL_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_DSTL_TIMEOUT]

//>> SET_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]

//>> SET_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]

//>> SET_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]

//>> GET_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]

//>> GET_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]
static inline bool GET_DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_MAX_CREDIT_CHECK_DIS]

//>> SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE,
           DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE]

//>> SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE,
           DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE]

//>> GET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE,
           DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CMD_TYPE]

//>> SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]

//>> SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]

//>> SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]

//>> CLEAR_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]

//>> GET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]

//>> GET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]
static inline bool GET_DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_ARM_SET]

//>> SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]

//>> SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]

//>> SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]

//>> CLEAR_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]

//>> GET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]

//>> GET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]
static inline bool GET_DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_INJ_ADDR_ERR_CONT]

//>> SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]

//>> SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]

//>> SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]

//>> CLEAR_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]

//>> GET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]

//>> GET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]
static inline bool GET_DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_POPS]

//>> SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]

//>> SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]

//>> SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]

//>> CLEAR_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]

//>> GET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]

//>> GET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]
static inline bool GET_DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_BOGUS_STALL_MODE_LOCAL]

//>> SET_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]

//>> SET_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]

//>> SET_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]

//>> CLEAR_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]

//>> GET_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]

//>> GET_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]
static inline bool GET_DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CHANA_SEL_PSAVE_PMU_EVENTS]

//>> SET_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]

//>> SET_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]

//>> SET_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]

//>> CLEAR_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]

//>> GET_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]

//>> GET_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]
static inline bool GET_DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CHANB_SEL_PSAVE_PMU_EVENTS]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_A_FAIL_DIS_LOCAL_PARITY]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]

//>> SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.setBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]

//>> CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.clearBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]

//>> GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]
static inline bool GET_DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.getBit<DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_CFG_SUBCH_B_FAIL_DIS_LOCAL_PARITY]

//>> SET_[DSTL_DSTLCFG2_RESERVED_51_62]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_RESERVED_51_62(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_RESERVED_51_62,
           DSTL_DSTLCFG2_RESERVED_51_62_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCFG2_RESERVED_51_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_RESERVED_51_62]

//>> SET_[DSTL_DSTLCFG2_RESERVED_51_62]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCFG2_RESERVED_51_62(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return o_data.insertFromRight<DSTL_DSTLCFG2_RESERVED_51_62,
           DSTL_DSTLCFG2_RESERVED_51_62_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCFG2_RESERVED_51_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCFG2_RESERVED_51_62]

//>> GET_[DSTL_DSTLCFG2_RESERVED_51_62]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCFG2_RESERVED_51_62(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCFG2));
#endif
    return i_data.extractToRight<DSTL_DSTLCFG2_RESERVED_51_62,
           DSTL_DSTLCFG2_RESERVED_51_62_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCFG2_RESERVED_51_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCFG2_RESERVED_51_62]

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

//>> PREP_[USTL_USTLFAILMASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLFAILMASK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFAILMASK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLFAILMASK]

//>> GET_[USTL_USTLFAILMASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLFAILMASK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFAILMASK;
#endif
    return fapi2::getScom(i_target, USTL_USTLFAILMASK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLFAILMASK]

//>> PUT_[USTL_USTLFAILMASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLFAILMASK(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return fapi2::putScom(i_target, USTL_USTLFAILMASK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLFAILMASK]


//>> SET_[USTL_USTLFAILMASK_RECOVER_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFAILMASK_RECOVER_ENABLE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return o_data.insertFromRight<USTL_USTLFAILMASK_RECOVER_ENABLE_MASK,
           USTL_USTLFAILMASK_RECOVER_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLFAILMASK_RECOVER_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFAILMASK_RECOVER_ENABLE_MASK]

//>> SET_[USTL_USTLFAILMASK_RECOVER_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFAILMASK_RECOVER_ENABLE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return o_data.insertFromRight<USTL_USTLFAILMASK_RECOVER_ENABLE_MASK,
           USTL_USTLFAILMASK_RECOVER_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLFAILMASK_RECOVER_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFAILMASK_RECOVER_ENABLE_MASK]

//>> GET_[USTL_USTLFAILMASK_RECOVER_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLFAILMASK_RECOVER_ENABLE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return i_data.extractToRight<USTL_USTLFAILMASK_RECOVER_ENABLE_MASK,
           USTL_USTLFAILMASK_RECOVER_ENABLE_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLFAILMASK_RECOVER_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLFAILMASK_RECOVER_ENABLE_MASK]

//>> SET_[USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return o_data.insertFromRight<USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK,
           USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK]

//>> SET_[USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return o_data.insertFromRight<USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK,
           USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK]

//>> GET_[USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return i_data.extractToRight<USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK,
           USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLFAILMASK_CHECKSTOP_ENABLE_MASK]

//>> SET_[USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return o_data.insertFromRight<USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK,
           USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK]

//>> SET_[USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return o_data.insertFromRight<USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK,
           USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK]

//>> GET_[USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return i_data.extractToRight<USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK,
           USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLFAILMASK_CHAN_FAIL_ENABLE_MASK]

//>> SET_[USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return o_data.insertFromRight<USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE,
           USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE]

//>> SET_[USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return o_data.insertFromRight<USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE,
           USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE]

//>> GET_[USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFAILMASK));
#endif
    return i_data.extractToRight<USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE,
           USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLFAILMASK_CHANNEL_FAIL_TYPE_DISABLE]

//>> PREP_[USTL_USTLFIRMASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLFIRMASK_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFIRMASK_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLFIRMASK_RW]

//>> GET_[USTL_USTLFIRMASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLFIRMASK_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFIRMASK_RW;
#endif
    return fapi2::getScom(i_target, USTL_USTLFIRMASK_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLFIRMASK_RW]

//>> PUT_[USTL_USTLFIRMASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLFIRMASK_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRMASK_RW, USTL_USTLFIRMASK_WO_AND, USTL_USTLFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, USTL_USTLFIRMASK_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLFIRMASK_RW]

//>> PREP_[USTL_USTLFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFIRMASK_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLFIRMASK_WO_AND]

//>> GET_[USTL_USTLFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFIRMASK_WO_AND;
#endif
    return fapi2::getScom(i_target, USTL_USTLFIRMASK_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLFIRMASK_WO_AND]

//>> PUT_[USTL_USTLFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRMASK_RW, USTL_USTLFIRMASK_WO_AND, USTL_USTLFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, USTL_USTLFIRMASK_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLFIRMASK_WO_AND]

//>> PREP_[USTL_USTLFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFIRMASK_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLFIRMASK_WO_OR]

//>> GET_[USTL_USTLFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFIRMASK_WO_OR;
#endif
    return fapi2::getScom(i_target, USTL_USTLFIRMASK_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLFIRMASK_WO_OR]

//>> PUT_[USTL_USTLFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRMASK_RW, USTL_USTLFIRMASK_WO_AND, USTL_USTLFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, USTL_USTLFIRMASK_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLFIRMASK_WO_OR]


//>> SET_[USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRMASK_RW, USTL_USTLFIRMASK_WO_AND, USTL_USTLFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK,
           USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK]

//>> SET_[USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRMASK_RW, USTL_USTLFIRMASK_WO_AND, USTL_USTLFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK,
           USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK]

//>> GET_[USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRMASK_RW, USTL_USTLFIRMASK_WO_AND, USTL_USTLFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK,
           USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLFIRMASK_USTLFIRMASK_FIR_MASK]

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
