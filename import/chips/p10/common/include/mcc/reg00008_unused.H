/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mcc/reg00008_unused.H $       */
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

#ifndef __MCC_REG00008_H_UNUSED__
#define __MCC_REG00008_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> PREP_[CRYPTO_DECRYPT_CRYPTOKEY2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CRYPTO_DECRYPT_CRYPTOKEY2B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CRYPTO_DECRYPT_CRYPTOKEY2B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CRYPTO_DECRYPT_CRYPTOKEY2B]

//>> GET_[CRYPTO_DECRYPT_CRYPTOKEY2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CRYPTO_DECRYPT_CRYPTOKEY2B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CRYPTO_DECRYPT_CRYPTOKEY2B;
#endif
    return fapi2::getScom(i_target, CRYPTO_DECRYPT_CRYPTOKEY2B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CRYPTO_DECRYPT_CRYPTOKEY2B]

//>> PUT_[CRYPTO_DECRYPT_CRYPTOKEY2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CRYPTO_DECRYPT_CRYPTOKEY2B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY2B));
#endif
    return fapi2::putScom(i_target, CRYPTO_DECRYPT_CRYPTOKEY2B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CRYPTO_DECRYPT_CRYPTOKEY2B]


//>> SET_[CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B]
static inline fapi2::buffer<uint64_t>& SET_CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY2B));
#endif
    return o_data.insertFromRight<CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B,
           CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B]

//>> SET_[CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B]
static inline fapi2::buffer<uint64_t>& SET_CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY2B));
#endif
    return o_data.insertFromRight<CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B,
           CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B]

//>> GET_[CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B]
static inline fapi2::buffer<uint64_t>& GET_CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY2B));
#endif
    return i_data.extractToRight<CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B,
           CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CRYPTO_DECRYPT_CRYPTOKEY2B_KEY2B]

//>> PREP_[USTL_USTLBADRESP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLBADRESP(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLBADRESP;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLBADRESP]

//>> GET_[USTL_USTLBADRESP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLBADRESP(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLBADRESP;
#endif
    return fapi2::getScom(i_target, USTL_USTLBADRESP, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLBADRESP]

//>> PUT_[USTL_USTLBADRESP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLBADRESP(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return fapi2::putScom(i_target, USTL_USTLBADRESP, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLBADRESP]


//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_VAL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_VAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_A_BAD_RESP_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_VAL]

//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_VAL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_A_BAD_RESP_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_VAL]

//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_VAL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_VAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.setBit<USTL_USTLBADRESP_A_BAD_RESP_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_VAL]

//>> CLEAR_[USTL_USTLBADRESP_A_BAD_RESP_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLBADRESP_A_BAD_RESP_VAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.clearBit<USTL_USTLBADRESP_A_BAD_RESP_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLBADRESP_A_BAD_RESP_VAL]

//>> GET_[USTL_USTLBADRESP_A_BAD_RESP_VAL]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLBADRESP_A_BAD_RESP_VAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.extractToRight<USTL_USTLBADRESP_A_BAD_RESP_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_A_BAD_RESP_VAL]

//>> GET_[USTL_USTLBADRESP_A_BAD_RESP_VAL]
static inline bool GET_USTL_USTLBADRESP_A_BAD_RESP_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.getBit<USTL_USTLBADRESP_A_BAD_RESP_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_A_BAD_RESP_VAL]

//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]

//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]

//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.setBit<USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]

//>> CLEAR_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.clearBit<USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]

//>> GET_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.extractToRight<USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]

//>> GET_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]
static inline bool GET_USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.getBit<USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_A_BAD_RESP_IS_WRITE]

//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]

//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]

//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.setBit<USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]

//>> CLEAR_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.clearBit<USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]

//>> GET_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.extractToRight<USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]

//>> GET_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]
static inline bool GET_USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.getBit<USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_A_BAD_RESP_IS_GOOD]

//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_TAG]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_TAG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_A_BAD_RESP_TAG,
           USTL_USTLBADRESP_A_BAD_RESP_TAG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_TAG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_TAG]

//>> SET_[USTL_USTLBADRESP_A_BAD_RESP_TAG]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_A_BAD_RESP_TAG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_A_BAD_RESP_TAG,
           USTL_USTLBADRESP_A_BAD_RESP_TAG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_TAG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_A_BAD_RESP_TAG]

//>> GET_[USTL_USTLBADRESP_A_BAD_RESP_TAG]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLBADRESP_A_BAD_RESP_TAG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.extractToRight<USTL_USTLBADRESP_A_BAD_RESP_TAG,
           USTL_USTLBADRESP_A_BAD_RESP_TAG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLBADRESP_A_BAD_RESP_TAG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_A_BAD_RESP_TAG]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_VAL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_VAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_B_BAD_RESP_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_VAL]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_VAL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_B_BAD_RESP_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_VAL]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_VAL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_VAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.setBit<USTL_USTLBADRESP_B_BAD_RESP_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_VAL]

//>> CLEAR_[USTL_USTLBADRESP_B_BAD_RESP_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLBADRESP_B_BAD_RESP_VAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.clearBit<USTL_USTLBADRESP_B_BAD_RESP_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLBADRESP_B_BAD_RESP_VAL]

//>> GET_[USTL_USTLBADRESP_B_BAD_RESP_VAL]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLBADRESP_B_BAD_RESP_VAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.extractToRight<USTL_USTLBADRESP_B_BAD_RESP_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_B_BAD_RESP_VAL]

//>> GET_[USTL_USTLBADRESP_B_BAD_RESP_VAL]
static inline bool GET_USTL_USTLBADRESP_B_BAD_RESP_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.getBit<USTL_USTLBADRESP_B_BAD_RESP_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_B_BAD_RESP_VAL]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.setBit<USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]

//>> CLEAR_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.clearBit<USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]

//>> GET_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.extractToRight<USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]

//>> GET_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]
static inline bool GET_USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.getBit<USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_B_BAD_RESP_IS_WRITE]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.setBit<USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]

//>> CLEAR_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.clearBit<USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]

//>> GET_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.extractToRight<USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]

//>> GET_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]
static inline bool GET_USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.getBit<USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_B_BAD_RESP_IS_GOOD]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_TAG]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_TAG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_B_BAD_RESP_TAG,
           USTL_USTLBADRESP_B_BAD_RESP_TAG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_TAG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_TAG]

//>> SET_[USTL_USTLBADRESP_B_BAD_RESP_TAG]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLBADRESP_B_BAD_RESP_TAG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return o_data.insertFromRight<USTL_USTLBADRESP_B_BAD_RESP_TAG,
           USTL_USTLBADRESP_B_BAD_RESP_TAG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_TAG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLBADRESP_B_BAD_RESP_TAG]

//>> GET_[USTL_USTLBADRESP_B_BAD_RESP_TAG]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLBADRESP_B_BAD_RESP_TAG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLBADRESP));
#endif
    return i_data.extractToRight<USTL_USTLBADRESP_B_BAD_RESP_TAG,
           USTL_USTLBADRESP_B_BAD_RESP_TAG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLBADRESP_B_BAD_RESP_TAG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLBADRESP_B_BAD_RESP_TAG]

//>> PREP_[USTL_USTLERRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLERRPT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLERRPT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLERRPT]

//>> GET_[USTL_USTLERRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLERRPT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLERRPT;
#endif
    return fapi2::getScom(i_target, USTL_USTLERRPT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLERRPT]

//>> PUT_[USTL_USTLERRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLERRPT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return fapi2::putScom(i_target, USTL_USTLERRPT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLERRPT]


//>> SET_[USTL_USTLERRPT_DF_CMT_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_CMT_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_DF_CMT_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMT_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_CMT_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_CMT_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_CMT_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_DF_CMT_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMT_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_CMT_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_CMT_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_CMT_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_DF_CMT_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMT_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_CMT_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_DF_CMT_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_DF_CMT_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_DF_CMT_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMT_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_DF_CMT_PAR_ERR]

//>> GET_[USTL_USTLERRPT_DF_CMT_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_DF_CMT_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_DF_CMT_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMT_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_DF_CMT_PAR_ERR]

//>> GET_[USTL_USTLERRPT_DF_CMT_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_DF_CMT_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_DF_CMT_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMT_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_DF_CMT_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_CMD_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_CMD_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_DF_CMD_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMD_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_CMD_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_CMD_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_CMD_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_DF_CMD_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMD_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_CMD_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_CMD_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_CMD_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_DF_CMD_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMD_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_CMD_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_DF_CMD_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_DF_CMD_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_DF_CMD_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMD_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_DF_CMD_PAR_ERR]

//>> GET_[USTL_USTLERRPT_DF_CMD_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_DF_CMD_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_DF_CMD_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMD_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_DF_CMD_PAR_ERR]

//>> GET_[USTL_USTLERRPT_DF_CMD_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_DF_CMD_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_DF_CMD_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_DF_CMD_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_DF_CMD_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]

//>> GET_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]

//>> GET_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_DF_BUFF_MGR_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_NO_BUFF_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_NO_BUFF_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_DF_NO_BUFF_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_DF_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_NO_BUFF_ERR]

//>> SET_[USTL_USTLERRPT_DF_NO_BUFF_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_NO_BUFF_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_DF_NO_BUFF_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_DF_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_NO_BUFF_ERR]

//>> SET_[USTL_USTLERRPT_DF_NO_BUFF_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_NO_BUFF_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_DF_NO_BUFF_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_DF_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_NO_BUFF_ERR]

//>> CLEAR_[USTL_USTLERRPT_DF_NO_BUFF_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_DF_NO_BUFF_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_DF_NO_BUFF_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_DF_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_DF_NO_BUFF_ERR]

//>> GET_[USTL_USTLERRPT_DF_NO_BUFF_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_DF_NO_BUFF_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_DF_NO_BUFF_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_DF_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_DF_NO_BUFF_ERR]

//>> GET_[USTL_USTLERRPT_DF_NO_BUFF_ERR]
static inline bool GET_USTL_USTLERRPT_DF_NO_BUFF_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_DF_NO_BUFF_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_DF_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_DF_NO_BUFF_ERR]

//>> SET_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]

//>> SET_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]

//>> GET_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]

//>> GET_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_DF_DSTL_WB_READ_TAG_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_NO_BUFF_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_NO_BUFF_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_NO_BUFF_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_RT_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_NO_BUFF_ERR]

//>> SET_[USTL_USTLERRPT_RT_NO_BUFF_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_NO_BUFF_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_NO_BUFF_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_RT_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_NO_BUFF_ERR]

//>> SET_[USTL_USTLERRPT_RT_NO_BUFF_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_NO_BUFF_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_RT_NO_BUFF_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_RT_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_NO_BUFF_ERR]

//>> CLEAR_[USTL_USTLERRPT_RT_NO_BUFF_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_RT_NO_BUFF_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_RT_NO_BUFF_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_RT_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_RT_NO_BUFF_ERR]

//>> GET_[USTL_USTLERRPT_RT_NO_BUFF_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_RT_NO_BUFF_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_RT_NO_BUFF_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_RT_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_NO_BUFF_ERR]

//>> GET_[USTL_USTLERRPT_RT_NO_BUFF_ERR]
static inline bool GET_USTL_USTLERRPT_RT_NO_BUFF_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_RT_NO_BUFF_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_RT_NO_BUFF_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_NO_BUFF_ERR]

//>> SET_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_BUFF_MGR_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_MCS_SLICE0_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_MCS_SLICE1_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_MCS_SLICE2_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_MCS_SLICE3_WRITE_DISP_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_MCS_WB_DONE_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.insertFromRight<USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]

//>> SET_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.setBit<USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]

//>> CLEAR_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return o_data.clearBit<USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.extractToRight<USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]

//>> GET_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]
static inline bool GET_USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLERRPT));
#endif
    return i_data.getBit<USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLERRPT_RT_DSTL_WB_READ_TAG_PAR_ERR]

//>> PREP_[USTL_USTLSTATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLSTATUS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLSTATUS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLSTATUS]

//>> GET_[USTL_USTLSTATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLSTATUS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLSTATUS;
#endif
    return fapi2::getScom(i_target, USTL_USTLSTATUS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLSTATUS]

//>> PUT_[USTL_USTLSTATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLSTATUS(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return fapi2::putScom(i_target, USTL_USTLSTATUS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLSTATUS]


//>> SET_[USTL_USTLSTATUS_CHANA_LOL_MODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_LOL_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_LOL_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_LOL_MODE]

//>> SET_[USTL_USTLSTATUS_CHANA_LOL_MODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_LOL_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_LOL_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_LOL_MODE]

//>> SET_[USTL_USTLSTATUS_CHANA_LOL_MODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_LOL_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_LOL_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_LOL_MODE]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_LOL_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_LOL_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_LOL_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_LOL_MODE]

//>> GET_[USTL_USTLSTATUS_CHANA_LOL_MODE]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_LOL_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_LOL_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_LOL_MODE]

//>> GET_[USTL_USTLSTATUS_CHANA_LOL_MODE]
static inline bool GET_USTL_USTLSTATUS_CHANA_LOL_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_LOL_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_LOL_MODE]

//>> SET_[USTL_USTLSTATUS_CHANB_LOL_MODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_LOL_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_LOL_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_LOL_MODE]

//>> SET_[USTL_USTLSTATUS_CHANB_LOL_MODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_LOL_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_LOL_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_LOL_MODE]

//>> SET_[USTL_USTLSTATUS_CHANB_LOL_MODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_LOL_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_LOL_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_LOL_MODE]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_LOL_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_LOL_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_LOL_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_LOL_MODE]

//>> GET_[USTL_USTLSTATUS_CHANB_LOL_MODE]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_LOL_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_LOL_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_LOL_MODE]

//>> GET_[USTL_USTLSTATUS_CHANB_LOL_MODE]
static inline bool GET_USTL_USTLSTATUS_CHANB_LOL_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_LOL_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_LOL_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_LOL_MODE]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_RD]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_CNFGMMIO_WR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_RD]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_RESP_MEM_WR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_RD]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_CNFGMMIO_WR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_RD]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_RESP_MEM_WR]

//>> SET_[USTL_USTLSTATUS_FAIL_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_FAIL_RESP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_FAIL_RESP,
           USTL_USTLSTATUS_FAIL_RESP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_FAIL_RESP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_FAIL_RESP]

//>> SET_[USTL_USTLSTATUS_FAIL_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_FAIL_RESP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_FAIL_RESP,
           USTL_USTLSTATUS_FAIL_RESP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_FAIL_RESP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_FAIL_RESP]

//>> GET_[USTL_USTLSTATUS_FAIL_RESP]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_FAIL_RESP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_FAIL_RESP,
           USTL_USTLSTATUS_FAIL_RESP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_FAIL_RESP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_FAIL_RESP]

//>> SET_[USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS,
           USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS]

//>> SET_[USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS,
           USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS]

//>> GET_[USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS,
           USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_LANE_WIDTH_STATUS]

//>> SET_[USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS,
           USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS]

//>> SET_[USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS,
           USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS]

//>> GET_[USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS,
           USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_LANE_WIDTH_STATUS]

//>> SET_[USTL_USTLSTATUS_CHANA_WAT_FIRED]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_WAT_FIRED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_WAT_FIRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_WAT_FIRED]

//>> SET_[USTL_USTLSTATUS_CHANA_WAT_FIRED]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_WAT_FIRED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_WAT_FIRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_WAT_FIRED]

//>> SET_[USTL_USTLSTATUS_CHANA_WAT_FIRED]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_WAT_FIRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_WAT_FIRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_WAT_FIRED]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_WAT_FIRED]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_WAT_FIRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_WAT_FIRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_WAT_FIRED]

//>> GET_[USTL_USTLSTATUS_CHANA_WAT_FIRED]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_WAT_FIRED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_WAT_FIRED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_WAT_FIRED]

//>> GET_[USTL_USTLSTATUS_CHANA_WAT_FIRED]
static inline bool GET_USTL_USTLSTATUS_CHANA_WAT_FIRED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_WAT_FIRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_WAT_FIRED]

//>> SET_[USTL_USTLSTATUS_CHANB_WAT_FIRED]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_WAT_FIRED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_WAT_FIRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_WAT_FIRED]

//>> SET_[USTL_USTLSTATUS_CHANB_WAT_FIRED]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_WAT_FIRED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_WAT_FIRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_WAT_FIRED]

//>> SET_[USTL_USTLSTATUS_CHANB_WAT_FIRED]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_WAT_FIRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_WAT_FIRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_WAT_FIRED]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_WAT_FIRED]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_WAT_FIRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_WAT_FIRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_WAT_FIRED]

//>> GET_[USTL_USTLSTATUS_CHANB_WAT_FIRED]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_WAT_FIRED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_WAT_FIRED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_WAT_FIRED]

//>> GET_[USTL_USTLSTATUS_CHANB_WAT_FIRED]
static inline bool GET_USTL_USTLSTATUS_CHANB_WAT_FIRED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_WAT_FIRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_WAT_FIRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_WAT_FIRED]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_RD_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_CNFG_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_UNDEFINED_CODE]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_WR_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_RD_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RD_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_WR_DATA_ERROR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_BAD_LEN_ADDR]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_CNFG_RDWR_RESP]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_UNDEFINED_CODE]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_WR_RETRY]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]

//>> SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]

//>> CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]

//>> GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]
static inline bool GET_USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANA_FAIL_MEM_CNTL]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.insertFromRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]

//>> SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.setBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]

//>> CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]
static inline fapi2::buffer<uint64_t>& CLEAR_USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return o_data.clearBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.extractToRight<USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]

//>> GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]
static inline bool GET_USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLSTATUS));
#endif
    return i_data.getBit<USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLSTATUS_CHANB_FAIL_MEM_CNTL]

//>> PREP_[WDF_WDFDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WDF_WDFDBG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_WDFDBG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WDF_WDFDBG]

//>> GET_[WDF_WDFDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WDF_WDFDBG(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_WDFDBG;
#endif
    return fapi2::getScom(i_target, WDF_WDFDBG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WDF_WDFDBG]

//>> PUT_[WDF_WDFDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WDF_WDFDBG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return fapi2::putScom(i_target, WDF_WDFDBG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WDF_WDFDBG]


//>> SET_[WDF_WDFDBG_DBG_SPARE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_DBG_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.insertFromRight<WDF_WDFDBG_DBG_SPARE,
           WDF_WDFDBG_DBG_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFDBG_DBG_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_DBG_SPARE]

//>> SET_[WDF_WDFDBG_DBG_SPARE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_DBG_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.insertFromRight<WDF_WDFDBG_DBG_SPARE,
           WDF_WDFDBG_DBG_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFDBG_DBG_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_DBG_SPARE]

//>> GET_[WDF_WDFDBG_DBG_SPARE]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFDBG_DBG_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return i_data.extractToRight<WDF_WDFDBG_DBG_SPARE,
           WDF_WDFDBG_DBG_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFDBG_DBG_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFDBG_DBG_SPARE]

//>> SET_[WDF_WDFDBG_WAT_EVENT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_WAT_EVENT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.insertFromRight<WDF_WDFDBG_WAT_EVENT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFDBG_WAT_EVENT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_WAT_EVENT_ENABLE]

//>> SET_[WDF_WDFDBG_WAT_EVENT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_WAT_EVENT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.insertFromRight<WDF_WDFDBG_WAT_EVENT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFDBG_WAT_EVENT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_WAT_EVENT_ENABLE]

//>> SET_[WDF_WDFDBG_WAT_EVENT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_WAT_EVENT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.setBit<WDF_WDFDBG_WAT_EVENT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WDFDBG_WAT_EVENT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_WAT_EVENT_ENABLE]

//>> CLEAR_[WDF_WDFDBG_WAT_EVENT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WDFDBG_WAT_EVENT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.clearBit<WDF_WDFDBG_WAT_EVENT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WDFDBG_WAT_EVENT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WDFDBG_WAT_EVENT_ENABLE]

//>> GET_[WDF_WDFDBG_WAT_EVENT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFDBG_WAT_EVENT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return i_data.extractToRight<WDF_WDFDBG_WAT_EVENT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFDBG_WAT_EVENT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFDBG_WAT_EVENT_ENABLE]

//>> GET_[WDF_WDFDBG_WAT_EVENT_ENABLE]
static inline bool GET_WDF_WDFDBG_WAT_EVENT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return i_data.getBit<WDF_WDFDBG_WAT_EVENT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WDFDBG_WAT_EVENT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFDBG_WAT_EVENT_ENABLE]

//>> SET_[WDF_WDFDBG_WAT_SPARE1]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_WAT_SPARE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.insertFromRight<WDF_WDFDBG_WAT_SPARE1,
           WDF_WDFDBG_WAT_SPARE1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFDBG_WAT_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_WAT_SPARE1]

//>> SET_[WDF_WDFDBG_WAT_SPARE1]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_WAT_SPARE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.insertFromRight<WDF_WDFDBG_WAT_SPARE1,
           WDF_WDFDBG_WAT_SPARE1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFDBG_WAT_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_WAT_SPARE1]

//>> GET_[WDF_WDFDBG_WAT_SPARE1]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFDBG_WAT_SPARE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return i_data.extractToRight<WDF_WDFDBG_WAT_SPARE1,
           WDF_WDFDBG_WAT_SPARE1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFDBG_WAT_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFDBG_WAT_SPARE1]

//>> SET_[WDF_WDFDBG_WAT0_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_WAT0_EVENT_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.insertFromRight<WDF_WDFDBG_WAT0_EVENT_SELECT,
           WDF_WDFDBG_WAT0_EVENT_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFDBG_WAT0_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_WAT0_EVENT_SELECT]

//>> SET_[WDF_WDFDBG_WAT0_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_WAT0_EVENT_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.insertFromRight<WDF_WDFDBG_WAT0_EVENT_SELECT,
           WDF_WDFDBG_WAT0_EVENT_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFDBG_WAT0_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_WAT0_EVENT_SELECT]

//>> GET_[WDF_WDFDBG_WAT0_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFDBG_WAT0_EVENT_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return i_data.extractToRight<WDF_WDFDBG_WAT0_EVENT_SELECT,
           WDF_WDFDBG_WAT0_EVENT_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFDBG_WAT0_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFDBG_WAT0_EVENT_SELECT]

//>> SET_[WDF_WDFDBG_WAT1_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_WAT1_EVENT_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.insertFromRight<WDF_WDFDBG_WAT1_EVENT_SELECT,
           WDF_WDFDBG_WAT1_EVENT_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFDBG_WAT1_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_WAT1_EVENT_SELECT]

//>> SET_[WDF_WDFDBG_WAT1_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFDBG_WAT1_EVENT_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return o_data.insertFromRight<WDF_WDFDBG_WAT1_EVENT_SELECT,
           WDF_WDFDBG_WAT1_EVENT_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFDBG_WAT1_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFDBG_WAT1_EVENT_SELECT]

//>> GET_[WDF_WDFDBG_WAT1_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFDBG_WAT1_EVENT_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFDBG));
#endif
    return i_data.extractToRight<WDF_WDFDBG_WAT1_EVENT_SELECT,
           WDF_WDFDBG_WAT1_EVENT_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFDBG_WAT1_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFDBG_WAT1_EVENT_SELECT]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
