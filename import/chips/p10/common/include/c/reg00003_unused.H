/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00003_unused.H $         */
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

#ifndef __C_REG00003_H_UNUSED__
#define __C_REG00003_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[EC_LS_LSU_HOLD_OUT_REG9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG9]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG9;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG9(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG9]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
CLEAR_EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_DALC_MP3_L1WK_MP_ACCESS_CONCURRENTLY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_RACP_MP4_RC5_RADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
SET_EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
SET_EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
SET_EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
CLEAR_EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
GET_EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_RC4_SSP_DRAIN_AND_SNOOP_CONCURRENTLY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_LMQ_MP4_INVALID_ENTRY_LHR_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_RELAUNCH_PENDING_INVALID_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_ENTRY_INVALID_WAIT_STATE_CHANGE_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_LLQ_ERROR_FINISH_WAIT_STATE_NON_ZERO_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_SCOM_PARITY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_RC5_STORE_DRAIN_PARITY_ERROR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_DCACHE_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_SETP_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_EADIR_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG9));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG9_RADA_DYNAM_SET_DELETED_HOLD_OUT]

//>> PREP_[EC_PC_COMMON_SPR_V1_HMER_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_V1_HMER_RW_WAND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V1_HMER_RW_WAND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_V1_HMER_RW_WAND]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_V1_HMER_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V1_HMER_RW_WAND;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_V1_HMER_RW_WAND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_RW_WAND]

//>> PUT_[EC_PC_COMMON_SPR_V1_HMER_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_V1_HMER_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_V1_HMER_RW_WAND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_V1_HMER_RW_WAND]

//>> PREP_[EC_PC_COMMON_SPR_V1_HMER_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_V1_HMER_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V1_HMER_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_V1_HMER_WO_OR]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_V1_HMER_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V1_HMER_WO_OR;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_V1_HMER_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_WO_OR]

//>> PUT_[EC_PC_COMMON_SPR_V1_HMER_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_V1_HMER_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_V1_HMER_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_V1_HMER_WO_OR]


//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_MALFUNCTION_ALERT]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_SPARE_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_1]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_DONE]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SUSPEND_MODE]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFAC_ERR]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TFX_ERR]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_SPARE_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_6]

//>> SET_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]

//>> SET_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]

//>> SET_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]

//>> CLEAR_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]

//>> GET_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]

//>> GET_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]
static inline bool GET_P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SPURR_SCALE_LIMIT]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_SPARE_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_7]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_FAIL]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_DONE]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_SPARE_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_10]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_PROC_RCVY_AGAIN]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_SPARE_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_12]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_SPARE_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_13]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_SPARE_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_14]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_SPARE_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_15]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_SCOM_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_TRIG_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_19(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_SPARE_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_19(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_19]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_20(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_SPARE_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]

//>> CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V1_HMER_SPARE_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_20(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_SPARE_20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]
static inline bool GET_EC_PC_COMMON_SPR_V1_HMER_SPARE_20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V1_HMER_SPARE_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_SPARE_20]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS,
           EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS]

//>> SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS,
           EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS]

//>> GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V1_HMER_RW_WAND, EC_PC_COMMON_SPR_V1_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS,
           EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V1_HMER_V1_HMER_XSCOM_STATUS]

//>> PREP_[EC_PC_TOD_SYNC000]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TOD_SYNC000(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC000;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TOD_SYNC000]

//>> GET_[EC_PC_TOD_SYNC000]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TOD_SYNC000(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC000;
#endif
    return fapi2::getScom(i_target, EC_PC_TOD_SYNC000, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TOD_SYNC000]

//>> PUT_[EC_PC_TOD_SYNC000]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TOD_SYNC000(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC000));
#endif
    return fapi2::putScom(i_target, EC_PC_TOD_SYNC000, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TOD_SYNC000]


//>> SET_[EC_PC_TOD_SYNC000_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC000_TOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC000));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC000_TOD,
           EC_PC_TOD_SYNC000_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC000_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC000_TOD]

//>> SET_[EC_PC_TOD_SYNC000_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC000_TOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC000));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC000_TOD,
           EC_PC_TOD_SYNC000_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC000_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC000_TOD]

//>> GET_[EC_PC_TOD_SYNC000_TOD]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC000_TOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC000));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC000_TOD,
           EC_PC_TOD_SYNC000_TOD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC000_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC000_TOD]

//>> SET_[EC_PC_TOD_SYNC000_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC000_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC000));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC000_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC000_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC000_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC000_CHIP_TOD_STATUS]

//>> SET_[EC_PC_TOD_SYNC000_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC000_CHIP_TOD_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC000));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC000_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC000_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC000_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC000_CHIP_TOD_STATUS]

//>> GET_[EC_PC_TOD_SYNC000_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC000_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC000));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC000_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC000_CHIP_TOD_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC000_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC000_CHIP_TOD_STATUS]

//>> PREP_[EC_PC_TOD_SYNC111]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TOD_SYNC111(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC111;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TOD_SYNC111]

//>> GET_[EC_PC_TOD_SYNC111]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TOD_SYNC111(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC111;
#endif
    return fapi2::getScom(i_target, EC_PC_TOD_SYNC111, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TOD_SYNC111]

//>> PUT_[EC_PC_TOD_SYNC111]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TOD_SYNC111(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC111));
#endif
    return fapi2::putScom(i_target, EC_PC_TOD_SYNC111, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TOD_SYNC111]


//>> SET_[EC_PC_TOD_SYNC111_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC111_TOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC111));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC111_TOD,
           EC_PC_TOD_SYNC111_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC111_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC111_TOD]

//>> SET_[EC_PC_TOD_SYNC111_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC111_TOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC111));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC111_TOD,
           EC_PC_TOD_SYNC111_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC111_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC111_TOD]

//>> GET_[EC_PC_TOD_SYNC111_TOD]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC111_TOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC111));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC111_TOD,
           EC_PC_TOD_SYNC111_TOD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC111_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC111_TOD]

//>> SET_[EC_PC_TOD_SYNC111_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC111_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC111));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC111_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC111_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC111_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC111_CHIP_TOD_STATUS]

//>> SET_[EC_PC_TOD_SYNC111_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC111_CHIP_TOD_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC111));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC111_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC111_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC111_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC111_CHIP_TOD_STATUS]

//>> GET_[EC_PC_TOD_SYNC111_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC111_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC111));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC111_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC111_CHIP_TOD_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC111_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC111_CHIP_TOD_STATUS]

//>> PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE1_TR_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_2]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE1_TR_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_2]

//>> PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE1_TR_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_2]


//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_2_A,
           EC_PC_TRACE1_TR_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_A]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_2_A,
           EC_PC_TRACE1_TR_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_A]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_2_A,
           EC_PC_TRACE1_TR_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_A]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_2_B,
           EC_PC_TRACE1_TR_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_B]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_2_B,
           EC_PC_TRACE1_TR_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_B]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_2_B,
           EC_PC_TRACE1_TR_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_2_B]

//>> PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE2_TR_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_9]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE2_TR_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_9;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9]

//>> PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE2_TR_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_9]


//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE,
           EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_9_SPARE_LT]

//>> PREP_[L2TRA_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR0_CONFIG_4]

//>> GET_[L2TRA_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_4;
#endif
    return fapi2::getScom(i_target, L2TRA_TR0_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_4]

//>> PUT_[L2TRA_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_4));
#endif
    return fapi2::putScom(i_target, L2TRA_TR0_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR0_CONFIG_4]


//>> SET_[L2TRA_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_4_A,
           L2TRA_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_4_A]

//>> SET_[L2TRA_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_4_A,
           L2TRA_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_4_A]

//>> GET_[L2TRA_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_4_A,
           L2TRA_TR0_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_4_A]

//>> SET_[L2TRA_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_4_B,
           L2TRA_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_4_B]

//>> SET_[L2TRA_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_4_B,
           L2TRA_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_4_B]

//>> GET_[L2TRA_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_4_B,
           L2TRA_TR0_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_4_B]

//>> PREP_[L2_L2MISC_L2CERRS_RD_EPS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2_L2MISC_L2CERRS_RD_EPS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_RD_EPS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2_L2MISC_L2CERRS_RD_EPS_REG]

//>> GET_[L2_L2MISC_L2CERRS_RD_EPS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2_L2MISC_L2CERRS_RD_EPS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_RD_EPS_REG;
#endif
    return fapi2::getScom(i_target, L2_L2MISC_L2CERRS_RD_EPS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_RD_EPS_REG]

//>> PUT_[L2_L2MISC_L2CERRS_RD_EPS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2_L2MISC_L2CERRS_RD_EPS_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_RD_EPS_REG));
#endif
    return fapi2::putScom(i_target, L2_L2MISC_L2CERRS_RD_EPS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2_L2MISC_L2CERRS_RD_EPS_REG]


//>> SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_RD_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE,
           L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE]

//>> SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_RD_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE,
           L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE]

//>> GET_[L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_RD_EPS_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE,
           L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_RD_EPS_REG_0_RD_EPS_VALUE]

//>> SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_RD_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE,
           L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE]

//>> SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_RD_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE,
           L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE]

//>> GET_[L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_RD_EPS_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE,
           L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_RD_EPS_REG_1_RD_EPS_VALUE]

//>> SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_RD_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE,
           L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE]

//>> SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_RD_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE,
           L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE]

//>> GET_[L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_RD_EPS_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE,
           L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_RD_EPS_REG_2_RD_EPS_VALUE]

//>> PREP_[L3_MISC_L3CERRS_ERR_RPT0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3_MISC_L3CERRS_ERR_RPT0_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_ERR_RPT0_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3_MISC_L3CERRS_ERR_RPT0_REG]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3_MISC_L3CERRS_ERR_RPT0_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_ERR_RPT0_REG;
#endif
    return fapi2::getScom(i_target, L3_MISC_L3CERRS_ERR_RPT0_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG]

//>> PUT_[L3_MISC_L3CERRS_ERR_RPT0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3_MISC_L3CERRS_ERR_RPT0_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return fapi2::putScom(i_target, L3_MISC_L3CERRS_ERR_RPT0_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3_MISC_L3CERRS_ERR_RPT0_REG]


//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3CORTR_NO_LCO_TGTS_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN0_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN1_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_DATA_RTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_CRESP_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_UNSOLICITED_CRESP_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_UNSOLICITED_CRESP_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR2]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_MC_FP_MATE_CMD_ERR3]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_FSM_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_WI_UNSOLICITED_DATA_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_PF_UNSOLICITED_DATA_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR,
           L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR,
           L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR,
           L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_TM_CAM_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_COFSM_ADDR_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SNFSM_ADDR_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL0_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL1_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_CACHE_INHIBIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL2_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_L3SDRTL3_BAD_HPC_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_SN_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_RD_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CI_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT0_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT0_REG_CO_MACHINE_HANG_ERR]

//>> PREP_[L3_MISC_L3CERRS_ERR_RPT1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3_MISC_L3CERRS_ERR_RPT1_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_ERR_RPT1_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3_MISC_L3CERRS_ERR_RPT1_REG]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3_MISC_L3CERRS_ERR_RPT1_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_ERR_RPT1_REG;
#endif
    return fapi2::getScom(i_target, L3_MISC_L3CERRS_ERR_RPT1_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG]

//>> PUT_[L3_MISC_L3CERRS_ERR_RPT1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3_MISC_L3CERRS_ERR_RPT1_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return fapi2::putScom(i_target, L3_MISC_L3CERRS_ERR_RPT1_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3_MISC_L3CERRS_ERR_RPT1_REG]


//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_RD_OVERRUN_CK_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3L2CTL_PF_OVERRUN_CK_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3CICTL_CI_OVERRUN_CK_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA0_DW_DIR_HIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3XMEMA1_DW_DIR_HIT_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_WR_INVAL_MEMBER_CCAR0]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CAC_RD_INVAL_MEMBER_CCAR0]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_NC_CMD_REQ_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L2_CMD_REQ_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_L3_CMD_REQ_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_12_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_13_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_14_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR0]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_MC_FP_MATE_CMD_ERR1]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_OVERFLOW_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PB_TOKEN_UNDERFLOW_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_19_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_20_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_PF_MACHINE_W4DT_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_WI_MACHINE_W4DT_HANG_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_CO_CRESP_ACK_DEAD_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_ERR_RPT1_24_SPARE]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_RCMD_ADDR_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_TTAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN2_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]

//>> SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]

//>> GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]
static inline bool GET_L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_RPT1_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_RPT1_REG_SN3_CRESP_ATAG_P_ERR]

//>> PREP_[NC_NCCHTM_NCCHTSC_HTM_CTRL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCCHTM_NCCHTSC_HTM_CTRL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_HTM_CTRL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCCHTM_NCCHTSC_HTM_CTRL]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCCHTM_NCCHTSC_HTM_CTRL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_HTM_CTRL;
#endif
    return fapi2::getScom(i_target, NC_NCCHTM_NCCHTSC_HTM_CTRL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL]

//>> PUT_[NC_NCCHTM_NCCHTSC_HTM_CTRL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCCHTM_NCCHTSC_HTM_CTRL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return fapi2::putScom(i_target, NC_NCCHTM_NCCHTSC_HTM_CTRL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCCHTM_NCCHTSC_HTM_CTRL]


//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_TRIG]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_TRIG]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MTSPR_MARK]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_MARK]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG0_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_DBG1_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_RUN_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP0_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_CHIP1_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1112]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_XSTOP_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CTRL));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415,
           NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CTRL_SPARE1415]

//>> PREP_[NC_NCCHTM_NCCHTSC_HTM_PTRC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCCHTM_NCCHTSC_HTM_PTRC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_HTM_PTRC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCCHTM_NCCHTSC_HTM_PTRC]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_PTRC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCCHTM_NCCHTSC_HTM_PTRC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_HTM_PTRC;
#endif
    return fapi2::getScom(i_target, NC_NCCHTM_NCCHTSC_HTM_PTRC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_PTRC]

//>> PUT_[NC_NCCHTM_NCCHTSC_HTM_PTRC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCCHTM_NCCHTSC_HTM_PTRC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_PTRC));
#endif
    return fapi2::putScom(i_target, NC_NCCHTM_NCCHTSC_HTM_PTRC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCCHTM_NCCHTSC_HTM_PTRC]


//>> PREP_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW]

//>> GET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW]

//>> PUT_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW, NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND,
                           NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW]

//>> PREP_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND]

//>> GET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND]

//>> PUT_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW, NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND,
                           NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND]

//>> PREP_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR]

//>> GET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR]

//>> PUT_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW, NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND,
                           NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR]


//>> SET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW, NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND,
                           NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK,
           NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK]

//>> SET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW, NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND,
                           NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK,
           NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK]

//>> GET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_MASK_REG_RW, NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_AND,
                           NC_NCMISC_NCSCOMS_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK,
           NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_FIR_MASK_REG_FIR_MASK]

//>> PREP_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1]

//>> PUT_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1]


//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_4_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_3_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_2_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG1_1_LPAR_ID]

//>> PREP_[PSCOM_ERROR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PSCOM_ERROR_MASK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PSCOM_ERROR_MASK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PSCOM_ERROR_MASK]

//>> GET_[PSCOM_ERROR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PSCOM_ERROR_MASK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PSCOM_ERROR_MASK;
#endif
    return fapi2::getScom(i_target, PSCOM_ERROR_MASK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PSCOM_ERROR_MASK]

//>> PUT_[PSCOM_ERROR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PSCOM_ERROR_MASK(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return fapi2::putScom(i_target, PSCOM_ERROR_MASK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PSCOM_ERROR_MASK]


//>> SET_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> CLEAR_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline bool GET_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> CLEAR_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline bool GET_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> CLEAR_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline bool GET_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> SET_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> SET_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> CLEAR_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> GET_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> GET_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline bool GET_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> SET_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> CLEAR_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> GET_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> GET_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline bool GET_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> SET_[PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_UL_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> SET_[PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> CLEAR_[PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> GET_[PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_UL_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> GET_[PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline bool GET_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> CLEAR_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline bool GET_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> CLEAR_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline bool GET_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> CLEAR_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline bool GET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> CLEAR_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline bool GET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> CLEAR_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline bool GET_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> SET_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> SET_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> CLEAR_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> GET_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_PSCOM_LOCK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> GET_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline bool GET_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> CLEAR_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline bool GET_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> CLEAR_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline bool GET_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> CLEAR_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> GET_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> GET_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline bool GET_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> SET_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> SET_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> SET_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> CLEAR_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> GET_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_GENERAL_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> GET_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline bool GET_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> CLEAR_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline bool GET_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> CLEAR_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline bool GET_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
