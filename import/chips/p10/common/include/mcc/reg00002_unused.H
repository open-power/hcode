/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mcc/reg00002_unused.H $       */
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

#ifndef __MCC_REG00002_H_UNUSED__
#define __MCC_REG00002_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> PREP_[CRYPTO_DECRYPT_CRYPTOKEY2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CRYPTO_DECRYPT_CRYPTOKEY2A(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CRYPTO_DECRYPT_CRYPTOKEY2A;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CRYPTO_DECRYPT_CRYPTOKEY2A]

//>> GET_[CRYPTO_DECRYPT_CRYPTOKEY2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CRYPTO_DECRYPT_CRYPTOKEY2A(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CRYPTO_DECRYPT_CRYPTOKEY2A;
#endif
    return fapi2::getScom(i_target, CRYPTO_DECRYPT_CRYPTOKEY2A, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CRYPTO_DECRYPT_CRYPTOKEY2A]

//>> PUT_[CRYPTO_DECRYPT_CRYPTOKEY2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CRYPTO_DECRYPT_CRYPTOKEY2A(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY2A));
#endif
    return fapi2::putScom(i_target, CRYPTO_DECRYPT_CRYPTOKEY2A, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CRYPTO_DECRYPT_CRYPTOKEY2A]


//>> SET_[CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A]
static inline fapi2::buffer<uint64_t>& SET_CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY2A));
#endif
    return o_data.insertFromRight<CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A,
           CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A]

//>> SET_[CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A]
static inline fapi2::buffer<uint64_t>& SET_CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY2A));
#endif
    return o_data.insertFromRight<CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A,
           CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A]

//>> GET_[CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A]
static inline fapi2::buffer<uint64_t>& GET_CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_DECRYPT_CRYPTOKEY2A));
#endif
    return i_data.extractToRight<CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A,
           CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CRYPTO_DECRYPT_CRYPTOKEY2A_KEY2A]

//>> PREP_[DSTL_DSLTWAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DSTL_DSLTWAT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSLTWAT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DSTL_DSLTWAT]

//>> GET_[DSTL_DSLTWAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DSTL_DSLTWAT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSLTWAT;
#endif
    return fapi2::getScom(i_target, DSTL_DSLTWAT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DSTL_DSLTWAT]

//>> PUT_[DSTL_DSLTWAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DSTL_DSLTWAT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return fapi2::putScom(i_target, DSTL_DSLTWAT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DSTL_DSLTWAT]


//>> SET_[DSTL_DSLTWAT_CHANA_WAT_ACT_PMU]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_ACT_PMU(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_ACT_PMU,
           DSTL_DSLTWAT_CHANA_WAT_ACT_PMU_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_ACT_PMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_ACT_PMU]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_ACT_PMU]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_ACT_PMU(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_ACT_PMU,
           DSTL_DSLTWAT_CHANA_WAT_ACT_PMU_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_ACT_PMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_ACT_PMU]

//>> GET_[DSTL_DSLTWAT_CHANA_WAT_ACT_PMU]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANA_WAT_ACT_PMU(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANA_WAT_ACT_PMU,
           DSTL_DSLTWAT_CHANA_WAT_ACT_PMU_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_ACT_PMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANA_WAT_ACT_PMU]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_ACT_PMU]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_ACT_PMU(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_ACT_PMU,
           DSTL_DSLTWAT_CHANB_WAT_ACT_PMU_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_ACT_PMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_ACT_PMU]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_ACT_PMU]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_ACT_PMU(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_ACT_PMU,
           DSTL_DSLTWAT_CHANB_WAT_ACT_PMU_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_ACT_PMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_ACT_PMU]

//>> GET_[DSTL_DSLTWAT_CHANB_WAT_ACT_PMU]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANB_WAT_ACT_PMU(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANB_WAT_ACT_PMU,
           DSTL_DSLTWAT_CHANB_WAT_ACT_PMU_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_ACT_PMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANB_WAT_ACT_PMU]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN,
           DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN,
           DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN]

//>> GET_[DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN,
           DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN,
           DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN,
           DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN]

//>> GET_[DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN,
           DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN,
           DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN,
           DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN]

//>> GET_[DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN,
           DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN,
           DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN,
           DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN]

//>> GET_[DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN,
           DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN,
           DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN,
           DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN]

//>> GET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN,
           DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN,
           DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN,
           DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN]

//>> GET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN,
           DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN,
           DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN,
           DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN]

//>> GET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN,
           DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN,
           DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN,
           DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN]

//>> GET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN,
           DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN,
           DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN]

//>> SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN,
           DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN]

//>> GET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN,
           DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN,
           DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN]

//>> SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN,
           DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN]

//>> GET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN,
           DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN]

//>> SET_[DSTL_DSLTWAT_RESERVED_24_62]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_RESERVED_24_62(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_RESERVED_24_62,
           DSTL_DSLTWAT_RESERVED_24_62_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSLTWAT_RESERVED_24_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_RESERVED_24_62]

//>> SET_[DSTL_DSLTWAT_RESERVED_24_62]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSLTWAT_RESERVED_24_62(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return o_data.insertFromRight<DSTL_DSLTWAT_RESERVED_24_62,
           DSTL_DSLTWAT_RESERVED_24_62_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSLTWAT_RESERVED_24_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSLTWAT_RESERVED_24_62]

//>> GET_[DSTL_DSLTWAT_RESERVED_24_62]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSLTWAT_RESERVED_24_62(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSLTWAT));
#endif
    return i_data.extractToRight<DSTL_DSLTWAT_RESERVED_24_62,
           DSTL_DSLTWAT_RESERVED_24_62_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSLTWAT_RESERVED_24_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSLTWAT_RESERVED_24_62]

//>> PREP_[WDF_HCA_ACCUM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WDF_HCA_ACCUM_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_HCA_ACCUM_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WDF_HCA_ACCUM_REG]

//>> GET_[WDF_HCA_ACCUM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WDF_HCA_ACCUM_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_HCA_ACCUM_REG;
#endif
    return fapi2::getScom(i_target, WDF_HCA_ACCUM_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WDF_HCA_ACCUM_REG]

//>> PUT_[WDF_HCA_ACCUM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WDF_HCA_ACCUM_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WDF_HCA_ACCUM_REG));
#endif
    return fapi2::putScom(i_target, WDF_HCA_ACCUM_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WDF_HCA_ACCUM_REG]


//>> SET_[WDF_HCA_ACCUM_REG_ACCUM_REG]
static inline fapi2::buffer<uint64_t>& SET_WDF_HCA_ACCUM_REG_ACCUM_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_HCA_ACCUM_REG));
#endif
    return o_data.insertFromRight<WDF_HCA_ACCUM_REG_ACCUM_REG,
           WDF_HCA_ACCUM_REG_ACCUM_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_HCA_ACCUM_REG_ACCUM_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_HCA_ACCUM_REG_ACCUM_REG]

//>> SET_[WDF_HCA_ACCUM_REG_ACCUM_REG]
static inline fapi2::buffer<uint64_t>& SET_WDF_HCA_ACCUM_REG_ACCUM_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_HCA_ACCUM_REG));
#endif
    return o_data.insertFromRight<WDF_HCA_ACCUM_REG_ACCUM_REG,
           WDF_HCA_ACCUM_REG_ACCUM_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_HCA_ACCUM_REG_ACCUM_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_HCA_ACCUM_REG_ACCUM_REG]

//>> GET_[WDF_HCA_ACCUM_REG_ACCUM_REG]
static inline fapi2::buffer<uint64_t>& GET_WDF_HCA_ACCUM_REG_ACCUM_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_HCA_ACCUM_REG));
#endif
    return i_data.extractToRight<WDF_HCA_ACCUM_REG_ACCUM_REG,
           WDF_HCA_ACCUM_REG_ACCUM_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_HCA_ACCUM_REG_ACCUM_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_HCA_ACCUM_REG_ACCUM_REG]

//>> PREP_[WDF_WBMGR_TAG_INFO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WDF_WBMGR_TAG_INFO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_WBMGR_TAG_INFO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WDF_WBMGR_TAG_INFO]

//>> GET_[WDF_WBMGR_TAG_INFO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WDF_WBMGR_TAG_INFO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_WBMGR_TAG_INFO;
#endif
    return fapi2::getScom(i_target, WDF_WBMGR_TAG_INFO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO]

//>> PUT_[WDF_WBMGR_TAG_INFO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WDF_WBMGR_TAG_INFO(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return fapi2::putScom(i_target, WDF_WBMGR_TAG_INFO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WDF_WBMGR_TAG_INFO]


//>> SET_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.insertFromRight<WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.insertFromRight<WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.setBit<WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]

//>> CLEAR_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.clearBit<WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]

//>> GET_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& GET_WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return i_data.extractToRight<WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]

//>> GET_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]
static inline bool GET_WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return i_data.getBit<WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.insertFromRight<WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.insertFromRight<WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.setBit<WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]

//>> CLEAR_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.clearBit<WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]

//>> GET_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& GET_WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return i_data.extractToRight<WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]

//>> GET_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]
static inline bool GET_WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return i_data.getBit<WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.insertFromRight<WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.insertFromRight<WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.setBit<WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]

//>> CLEAR_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.clearBit<WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]

//>> GET_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& GET_WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return i_data.extractToRight<WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]

//>> GET_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]
static inline bool GET_WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return i_data.getBit<WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.insertFromRight<WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.insertFromRight<WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.setBit<WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]

//>> CLEAR_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.clearBit<WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]

//>> GET_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]
static inline fapi2::buffer<uint64_t>& GET_WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return i_data.extractToRight<WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]

//>> GET_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]
static inline bool GET_WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return i_data.getBit<WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_TAG_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.insertFromRight<WDF_WBMGR_TAG_INFO_TAG_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_TAG_OVERRUN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_TAG_OVERRUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.insertFromRight<WDF_WBMGR_TAG_INFO_TAG_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_TAG_OVERRUN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]

//>> SET_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_WDF_WBMGR_TAG_INFO_TAG_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.setBit<WDF_WBMGR_TAG_INFO_TAG_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_TAG_OVERRUN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]

//>> CLEAR_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WBMGR_TAG_INFO_TAG_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return o_data.clearBit<WDF_WBMGR_TAG_INFO_TAG_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_TAG_OVERRUN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]

//>> GET_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]
static inline fapi2::buffer<uint64_t>& GET_WDF_WBMGR_TAG_INFO_TAG_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return i_data.extractToRight<WDF_WBMGR_TAG_INFO_TAG_OVERRUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_TAG_OVERRUN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]

//>> GET_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]
static inline bool GET_WDF_WBMGR_TAG_INFO_TAG_OVERRUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WBMGR_TAG_INFO));
#endif
    return i_data.getBit<WDF_WBMGR_TAG_INFO_TAG_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WBMGR_TAG_INFO_TAG_OVERRUN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WBMGR_TAG_INFO_TAG_OVERRUN]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
