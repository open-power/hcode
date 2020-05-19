/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mcc/reg00011_unused.H $       */
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

#ifndef __MCC_REG00011_H_UNUSED__
#define __MCC_REG00011_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> PREP_[CRYPTO_DECRYPT_CRYPTOKEY1B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CRYPTO_DECRYPT_CRYPTOKEY1B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CRYPTO_DECRYPT_CRYPTOKEY1B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CRYPTO_DECRYPT_CRYPTOKEY1B]

//>> GET_[CRYPTO_DECRYPT_CRYPTOKEY1B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CRYPTO_DECRYPT_CRYPTOKEY1B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CRYPTO_DECRYPT_CRYPTOKEY1B;
#endif
    return fapi2::getScom(i_target, CRYPTO_DECRYPT_CRYPTOKEY1B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CRYPTO_DECRYPT_CRYPTOKEY1B]

//>> PUT_[CRYPTO_DECRYPT_CRYPTOKEY1B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CRYPTO_DECRYPT_CRYPTOKEY1B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY1B));
#endif
    return fapi2::putScom(i_target, CRYPTO_DECRYPT_CRYPTOKEY1B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CRYPTO_DECRYPT_CRYPTOKEY1B]


//>> SET_[CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B]
static inline fapi2::buffer<uint64_t>& SET_CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY1B));
#endif
    return o_data.insertFromRight<CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B,
           CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B]

//>> SET_[CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B]
static inline fapi2::buffer<uint64_t>& SET_CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY1B));
#endif
    return o_data.insertFromRight<CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B,
           CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B]

//>> GET_[CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B]
static inline fapi2::buffer<uint64_t>& GET_CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY1B));
#endif
    return i_data.extractToRight<CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B,
           CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CRYPTO_DECRYPT_CRYPTOKEY1B_KEY1B]

//>> PREP_[DSTL_DSTLCREDIT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DSTL_DSTLCREDIT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSTLCREDIT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DSTL_DSTLCREDIT]

//>> GET_[DSTL_DSTLCREDIT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DSTL_DSTLCREDIT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSTLCREDIT;
#endif
    return fapi2::getScom(i_target, DSTL_DSTLCREDIT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DSTL_DSTLCREDIT]

//>> PUT_[DSTL_DSTLCREDIT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DSTL_DSTLCREDIT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return fapi2::putScom(i_target, DSTL_DSTLCREDIT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DSTL_DSTLCREDIT]


//>> SET_[DSTL_DSTLCREDIT_XVC0_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_XVC0_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_XVC0_CREDIT_INIT,
           DSTL_DSTLCREDIT_XVC0_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XVC0_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_XVC0_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_XVC0_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_XVC0_CREDIT_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_XVC0_CREDIT_INIT,
           DSTL_DSTLCREDIT_XVC0_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XVC0_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_XVC0_CREDIT_INIT]

//>> GET_[DSTL_DSTLCREDIT_XVC0_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCREDIT_XVC0_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return i_data.extractToRight<DSTL_DSTLCREDIT_XVC0_CREDIT_INIT,
           DSTL_DSTLCREDIT_XVC0_CREDIT_INIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XVC0_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCREDIT_XVC0_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_XVC3_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_XVC3_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_XVC3_CREDIT_INIT,
           DSTL_DSTLCREDIT_XVC3_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XVC3_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_XVC3_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_XVC3_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_XVC3_CREDIT_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_XVC3_CREDIT_INIT,
           DSTL_DSTLCREDIT_XVC3_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XVC3_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_XVC3_CREDIT_INIT]

//>> GET_[DSTL_DSTLCREDIT_XVC3_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCREDIT_XVC3_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return i_data.extractToRight<DSTL_DSTLCREDIT_XVC3_CREDIT_INIT,
           DSTL_DSTLCREDIT_XVC3_CREDIT_INIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XVC3_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCREDIT_XVC3_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT,
           DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT,
           DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT]

//>> GET_[DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return i_data.extractToRight<DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT,
           DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCREDIT_XDCP0_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_VC0_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_VC0_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_VC0_CREDIT_INIT,
           DSTL_DSTLCREDIT_VC0_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCREDIT_VC0_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_VC0_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_VC0_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_VC0_CREDIT_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_VC0_CREDIT_INIT,
           DSTL_DSTLCREDIT_VC0_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCREDIT_VC0_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_VC0_CREDIT_INIT]

//>> GET_[DSTL_DSTLCREDIT_VC0_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCREDIT_VC0_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return i_data.extractToRight<DSTL_DSTLCREDIT_VC0_CREDIT_INIT,
           DSTL_DSTLCREDIT_VC0_CREDIT_INIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCREDIT_VC0_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCREDIT_VC0_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_VC1_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_VC1_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_VC1_CREDIT_INIT,
           DSTL_DSTLCREDIT_VC1_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCREDIT_VC1_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_VC1_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_VC1_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_VC1_CREDIT_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_VC1_CREDIT_INIT,
           DSTL_DSTLCREDIT_VC1_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCREDIT_VC1_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_VC1_CREDIT_INIT]

//>> GET_[DSTL_DSTLCREDIT_VC1_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCREDIT_VC1_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return i_data.extractToRight<DSTL_DSTLCREDIT_VC1_CREDIT_INIT,
           DSTL_DSTLCREDIT_VC1_CREDIT_INIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCREDIT_VC1_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCREDIT_VC1_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_DCP1_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_DCP1_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_DCP1_CREDIT_INIT,
           DSTL_DSTLCREDIT_DCP1_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCREDIT_DCP1_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_DCP1_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_DCP1_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_DCP1_CREDIT_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_DCP1_CREDIT_INIT,
           DSTL_DSTLCREDIT_DCP1_CREDIT_INIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCREDIT_DCP1_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_DCP1_CREDIT_INIT]

//>> GET_[DSTL_DSTLCREDIT_DCP1_CREDIT_INIT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCREDIT_DCP1_CREDIT_INIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return i_data.extractToRight<DSTL_DSTLCREDIT_DCP1_CREDIT_INIT,
           DSTL_DSTLCREDIT_DCP1_CREDIT_INIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCREDIT_DCP1_CREDIT_INIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCREDIT_DCP1_CREDIT_INIT]

//>> SET_[DSTL_DSTLCREDIT_XDCP0_CHANA_POOL]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_XDCP0_CHANA_POOL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_XDCP0_CHANA_POOL,
           DSTL_DSTLCREDIT_XDCP0_CHANA_POOL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XDCP0_CHANA_POOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_XDCP0_CHANA_POOL]

//>> SET_[DSTL_DSTLCREDIT_XDCP0_CHANA_POOL]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_XDCP0_CHANA_POOL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_XDCP0_CHANA_POOL,
           DSTL_DSTLCREDIT_XDCP0_CHANA_POOL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XDCP0_CHANA_POOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_XDCP0_CHANA_POOL]

//>> GET_[DSTL_DSTLCREDIT_XDCP0_CHANA_POOL]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCREDIT_XDCP0_CHANA_POOL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return i_data.extractToRight<DSTL_DSTLCREDIT_XDCP0_CHANA_POOL,
           DSTL_DSTLCREDIT_XDCP0_CHANA_POOL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XDCP0_CHANA_POOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCREDIT_XDCP0_CHANA_POOL]

//>> SET_[DSTL_DSTLCREDIT_XDCP0_CHANB_POOL]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_XDCP0_CHANB_POOL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_XDCP0_CHANB_POOL,
           DSTL_DSTLCREDIT_XDCP0_CHANB_POOL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XDCP0_CHANB_POOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_XDCP0_CHANB_POOL]

//>> SET_[DSTL_DSTLCREDIT_XDCP0_CHANB_POOL]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLCREDIT_XDCP0_CHANB_POOL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return o_data.insertFromRight<DSTL_DSTLCREDIT_XDCP0_CHANB_POOL,
           DSTL_DSTLCREDIT_XDCP0_CHANB_POOL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XDCP0_CHANB_POOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLCREDIT_XDCP0_CHANB_POOL]

//>> GET_[DSTL_DSTLCREDIT_XDCP0_CHANB_POOL]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLCREDIT_XDCP0_CHANB_POOL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLCREDIT));
#endif
    return i_data.extractToRight<DSTL_DSTLCREDIT_XDCP0_CHANB_POOL,
           DSTL_DSTLCREDIT_XDCP0_CHANB_POOL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLCREDIT_XDCP0_CHANB_POOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLCREDIT_XDCP0_CHANB_POOL]

//>> PREP_[USTL_USTLERRRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLERRRPT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLERRRPT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLERRRPT]

//>> GET_[USTL_USTLERRRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLERRRPT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLERRRPT;
#endif
    return fapi2::getScom(i_target, USTL_USTLERRRPT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLERRRPT]

//>> PUT_[USTL_USTLERRRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLERRRPT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return fapi2::putScom(i_target, USTL_USTLERRRPT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLERRRPT]


//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_RDCMD_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_CMTQ_CM2P_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FAIL_CM2F_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BADCRC_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_FLIT_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_FLIT_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BAD_DATA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BAD_DATA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_SUE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_SUE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_COMP_META_NOT_VALID_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_DATA_BUFFER_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMMIT_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_READ_RESPONSE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_COMP_META_NOT_VALID_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_MCHWFM_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_REG_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_DBG_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG_INJ_FIR_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_TMPL9_TO_MANY_DATA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_TMPL9_TO_MANY_DATA]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_EXCESS_DATA_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_EXCESS_DATA_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_BOGUS_QUEUE_OVERFLOW_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANA_META_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CHANB_META_PARITY_ERROR_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANA_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_READ_USTL_DUPLICATE_OW_CHANB_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]

//>> SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.setBit<USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]

//>> CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return o_data.clearBit<USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]

//>> GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]
static inline bool GET_USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRRPT));
#endif
    return i_data.getBit<USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRRPT_USTLERRPRT_CNFG2_REG_PE_HOLD_OUT]

//>> PREP_[USTL_USTLFIRWOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLFIRWOF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFIRWOF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLFIRWOF]

//>> GET_[USTL_USTLFIRWOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLFIRWOF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFIRWOF;
#endif
    return fapi2::getScom(i_target, USTL_USTLFIRWOF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLFIRWOF]

//>> PUT_[USTL_USTLFIRWOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLFIRWOF(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRWOF));
#endif
    return fapi2::putScom(i_target, USTL_USTLFIRWOF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLFIRWOF]


//>> SET_[USTL_USTLFIRWOF_USTLFIRWOF_WOF]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFIRWOF_USTLFIRWOF_WOF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRWOF));
#endif
    return o_data.insertFromRight<USTL_USTLFIRWOF_USTLFIRWOF_WOF,
           USTL_USTLFIRWOF_USTLFIRWOF_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLFIRWOF_USTLFIRWOF_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFIRWOF_USTLFIRWOF_WOF]

//>> SET_[USTL_USTLFIRWOF_USTLFIRWOF_WOF]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFIRWOF_USTLFIRWOF_WOF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRWOF));
#endif
    return o_data.insertFromRight<USTL_USTLFIRWOF_USTLFIRWOF_WOF,
           USTL_USTLFIRWOF_USTLFIRWOF_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLFIRWOF_USTLFIRWOF_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFIRWOF_USTLFIRWOF_WOF]

//>> GET_[USTL_USTLFIRWOF_USTLFIRWOF_WOF]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLFIRWOF_USTLFIRWOF_WOF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRWOF));
#endif
    return i_data.extractToRight<USTL_USTLFIRWOF_USTLFIRWOF_WOF,
           USTL_USTLFIRWOF_USTLFIRWOF_WOF_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLFIRWOF_USTLFIRWOF_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLFIRWOF_USTLFIRWOF_WOF]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
