/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pauc/reg00008_unused.H $      */
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

#ifndef __PAUC_REG00008_H_UNUSED__
#define __PAUC_REG00008_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> PREP_[DL_PPE_WRAP_MIB_XIMEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_MIB_XIMEM(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_MIB_XIMEM;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_MIB_XIMEM]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_MIB_XIMEM(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_MIB_XIMEM;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_MIB_XIMEM, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM]

//>> PUT_[DL_PPE_WRAP_MIB_XIMEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_MIB_XIMEM(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_MIB_XIMEM, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_MIB_XIMEM]


//>> SET_[DL_PPE_WRAP_MIB_XIMEM_ADDR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_ADDR,
           DL_PPE_WRAP_MIB_XIMEM_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_ADDR]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_ADDR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_ADDR,
           DL_PPE_WRAP_MIB_XIMEM_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_ADDR]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_ADDR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_MIB_XIMEM_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_MIB_XIMEM_ADDR,
           DL_PPE_WRAP_MIB_XIMEM_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_ADDR]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_R_NW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_R_NW]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_R_NW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_R_NW]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.setBit<DL_PPE_WRAP_MIB_XIMEM_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_R_NW]

//>> CLEAR_[DL_PPE_WRAP_MIB_XIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_MIB_XIMEM_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.clearBit<DL_PPE_WRAP_MIB_XIMEM_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_MIB_XIMEM_R_NW]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_MIB_XIMEM_R_NW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_MIB_XIMEM_R_NW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_R_NW]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_R_NW]
static inline bool GET_DL_PPE_WRAP_MIB_XIMEM_R_NW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.getBit<DL_PPE_WRAP_MIB_XIMEM_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_R_NW]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_BUSY]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_BUSY]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.setBit<DL_PPE_WRAP_MIB_XIMEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_BUSY]

//>> CLEAR_[DL_PPE_WRAP_MIB_XIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_MIB_XIMEM_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.clearBit<DL_PPE_WRAP_MIB_XIMEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_MIB_XIMEM_BUSY]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_MIB_XIMEM_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_MIB_XIMEM_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_BUSY]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_BUSY]
static inline bool GET_DL_PPE_WRAP_MIB_XIMEM_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.getBit<DL_PPE_WRAP_MIB_XIMEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_BUSY]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.setBit<DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.clearBit<DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]
static inline bool GET_DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.getBit<DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_IMPRECISE_ERROR_PENDING]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE,
           DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE,
           DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE,
           DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_BYTE_ENABLE]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_LINE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_LINE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_LINE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_LINE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_LINE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.setBit<DL_PPE_WRAP_MIB_XIMEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]

//>> CLEAR_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_MIB_XIMEM_LINE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.clearBit<DL_PPE_WRAP_MIB_XIMEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_MIB_XIMEM_LINE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_MIB_XIMEM_LINE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]
static inline bool GET_DL_PPE_WRAP_MIB_XIMEM_LINE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.getBit<DL_PPE_WRAP_MIB_XIMEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_LINE_MODE]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_ERROR,
           DL_PPE_WRAP_MIB_XIMEM_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_ERROR]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_ERROR,
           DL_PPE_WRAP_MIB_XIMEM_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_ERROR]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_MIB_XIMEM_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_MIB_XIMEM_ERROR,
           DL_PPE_WRAP_MIB_XIMEM_ERROR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_ERROR]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.setBit<DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]

//>> CLEAR_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.clearBit<DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]
static inline bool GET_DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.getBit<DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_IFETCH_PENDING]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]

//>> SET_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.setBit<DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]

//>> CLEAR_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return o_data.clearBit<DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]

//>> GET_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]
static inline bool GET_DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_MIB_XIMEM));
#endif
    return i_data.getBit<DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_MIB_XIMEM_DATAOP_PENDING]

//>> PREP_[DL_PPE_WRAP_XIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_XIRAMDBG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIRAMDBG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_XIRAMDBG]

//>> GET_[DL_PPE_WRAP_XIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_XIRAMDBG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIRAMDBG;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_XIRAMDBG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG]

//>> PUT_[DL_PPE_WRAP_XIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_XIRAMDBG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_XIRAMDBG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_XIRAMDBG]


//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_HS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_HS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_HC,
           DL_PPE_WRAP_XIRAMDBG_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_HC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_HC,
           DL_PPE_WRAP_XIRAMDBG_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HC]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_HC,
           DL_PPE_WRAP_XIRAMDBG_XSR_HC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_HC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_HCP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_HCP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_RIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_RIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_SIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_SIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_TRAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_TRAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_IAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_IAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC,
           DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC,
           DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC,
           DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_RDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_RDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_WDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_WDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_TRH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_TRH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_SMS,
           DL_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_SMS]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_SMS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_SMS,
           DL_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_SMS]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_SMS,
           DL_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_SMS]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_EP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_EP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_ST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_ST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_MFE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_MFE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline bool GET_DL_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_MCS,
           DL_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_MCS]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_XSR_MCS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_XSR_MCS,
           DL_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_XSR_MCS]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_XSR_MCS,
           DL_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_XSR_MCS]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0,
           DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]

//>> SET_[DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0,
           DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]

//>> GET_[DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0,
           DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]

//>> PREP_[PB_CFG_TLPM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_CFG_TLPM_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_TLPM_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_CFG_TLPM_REG]

//>> GET_[PB_CFG_TLPM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_CFG_TLPM_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_TLPM_REG;
#endif
    return fapi2::getScom(i_target, PB_CFG_TLPM_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_CFG_TLPM_REG]

//>> PUT_[PB_CFG_TLPM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_CFG_TLPM_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return fapi2::putScom(i_target, PB_CFG_TLPM_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_CFG_TLPM_REG]


//>> SET_[PB_CFG_TLPM_REG_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_EN]

//>> SET_[PB_CFG_TLPM_REG_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_EN]

//>> SET_[PB_CFG_TLPM_REG_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.setBit<PB_CFG_TLPM_REG_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_EN]

//>> CLEAR_[PB_CFG_TLPM_REG_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_TLPM_REG_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.clearBit<PB_CFG_TLPM_REG_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_TLPM_REG_EN]

//>> GET_[PB_CFG_TLPM_REG_EN]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_EN]

//>> GET_[PB_CFG_TLPM_REG_EN]
static inline bool GET_PB_CFG_TLPM_REG_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.getBit<PB_CFG_TLPM_REG_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_EN]

//>> SET_[PB_CFG_TLPM_REG_RESET_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_RESET_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_RESET_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_RESET_MODE]

//>> SET_[PB_CFG_TLPM_REG_RESET_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_RESET_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_RESET_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_RESET_MODE]

//>> SET_[PB_CFG_TLPM_REG_RESET_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_RESET_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.setBit<PB_CFG_TLPM_REG_RESET_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_TLPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_RESET_MODE]

//>> CLEAR_[PB_CFG_TLPM_REG_RESET_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_TLPM_REG_RESET_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.clearBit<PB_CFG_TLPM_REG_RESET_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_TLPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_TLPM_REG_RESET_MODE]

//>> GET_[PB_CFG_TLPM_REG_RESET_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_RESET_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_RESET_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_RESET_MODE]

//>> GET_[PB_CFG_TLPM_REG_RESET_MODE]
static inline bool GET_PB_CFG_TLPM_REG_RESET_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.getBit<PB_CFG_TLPM_REG_RESET_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_TLPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_RESET_MODE]

//>> SET_[PB_CFG_TLPM_REG_COUNTER_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_COUNTER_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_COUNTER_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_COUNTER_MODE]

//>> SET_[PB_CFG_TLPM_REG_COUNTER_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_COUNTER_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_COUNTER_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_COUNTER_MODE]

//>> SET_[PB_CFG_TLPM_REG_COUNTER_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_COUNTER_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.setBit<PB_CFG_TLPM_REG_COUNTER_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_TLPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_COUNTER_MODE]

//>> CLEAR_[PB_CFG_TLPM_REG_COUNTER_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_TLPM_REG_COUNTER_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.clearBit<PB_CFG_TLPM_REG_COUNTER_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_TLPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_TLPM_REG_COUNTER_MODE]

//>> GET_[PB_CFG_TLPM_REG_COUNTER_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_COUNTER_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_COUNTER_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_COUNTER_MODE]

//>> GET_[PB_CFG_TLPM_REG_COUNTER_MODE]
static inline bool GET_PB_CFG_TLPM_REG_COUNTER_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.getBit<PB_CFG_TLPM_REG_COUNTER_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_TLPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_COUNTER_MODE]

//>> SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]

//>> SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]

//>> SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.setBit<PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]

//>> CLEAR_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.clearBit<PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]

//>> GET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]

//>> GET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]
static inline bool GET_PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.getBit<PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_DIS]

//>> SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]

//>> SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]

//>> SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.setBit<PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]

//>> CLEAR_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.clearBit<PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]

//>> GET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]

//>> GET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]
static inline bool GET_PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.getBit<PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_GLOBAL_PMISC_MODE]

//>> SET_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_EXTERNAL_FREEZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_EXTERNAL_FREEZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]

//>> SET_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_EXTERNAL_FREEZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_EXTERNAL_FREEZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]

//>> SET_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_EXTERNAL_FREEZE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.setBit<PB_CFG_TLPM_REG_EXTERNAL_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]

//>> CLEAR_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_TLPM_REG_EXTERNAL_FREEZE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.clearBit<PB_CFG_TLPM_REG_EXTERNAL_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]

//>> GET_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_EXTERNAL_FREEZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_EXTERNAL_FREEZE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]

//>> GET_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]
static inline bool GET_PB_CFG_TLPM_REG_EXTERNAL_FREEZE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.getBit<PB_CFG_TLPM_REG_EXTERNAL_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_TLPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_EXTERNAL_FREEZE]

//>> SET_[PB_CFG_TLPM_REG_0_1_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_0_1_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_0_1_OP,
           PB_CFG_TLPM_REG_0_1_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_0_1_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_0_1_OP]

//>> SET_[PB_CFG_TLPM_REG_0_1_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_0_1_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_0_1_OP,
           PB_CFG_TLPM_REG_0_1_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_0_1_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_0_1_OP]

//>> GET_[PB_CFG_TLPM_REG_0_1_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_0_1_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_0_1_OP,
           PB_CFG_TLPM_REG_0_1_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_0_1_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_0_1_OP]

//>> SET_[PB_CFG_TLPM_REG_2_3_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_2_3_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_2_3_OP,
           PB_CFG_TLPM_REG_2_3_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_2_3_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_2_3_OP]

//>> SET_[PB_CFG_TLPM_REG_2_3_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_2_3_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_2_3_OP,
           PB_CFG_TLPM_REG_2_3_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_2_3_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_2_3_OP]

//>> GET_[PB_CFG_TLPM_REG_2_3_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_2_3_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_2_3_OP,
           PB_CFG_TLPM_REG_2_3_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_2_3_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_2_3_OP]

//>> SET_[PB_CFG_TLPM_REG_4_5_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_4_5_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_4_5_OP,
           PB_CFG_TLPM_REG_4_5_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_4_5_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_4_5_OP]

//>> SET_[PB_CFG_TLPM_REG_4_5_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_4_5_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_4_5_OP,
           PB_CFG_TLPM_REG_4_5_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_4_5_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_4_5_OP]

//>> GET_[PB_CFG_TLPM_REG_4_5_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_4_5_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_4_5_OP,
           PB_CFG_TLPM_REG_4_5_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_4_5_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_4_5_OP]

//>> SET_[PB_CFG_TLPM_REG_6_7_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_6_7_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_6_7_OP,
           PB_CFG_TLPM_REG_6_7_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_6_7_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_6_7_OP]

//>> SET_[PB_CFG_TLPM_REG_6_7_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_6_7_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_6_7_OP,
           PB_CFG_TLPM_REG_6_7_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_6_7_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_6_7_OP]

//>> GET_[PB_CFG_TLPM_REG_6_7_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_6_7_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_6_7_OP,
           PB_CFG_TLPM_REG_6_7_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_6_7_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_6_7_OP]

//>> SET_[PB_CFG_TLPM_REG_8_9_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_8_9_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_8_9_OP,
           PB_CFG_TLPM_REG_8_9_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_8_9_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_8_9_OP]

//>> SET_[PB_CFG_TLPM_REG_8_9_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_8_9_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_8_9_OP,
           PB_CFG_TLPM_REG_8_9_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_8_9_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_8_9_OP]

//>> GET_[PB_CFG_TLPM_REG_8_9_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_8_9_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_8_9_OP,
           PB_CFG_TLPM_REG_8_9_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_8_9_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_8_9_OP]

//>> SET_[PB_CFG_TLPM_REG_10_11_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_10_11_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_10_11_OP,
           PB_CFG_TLPM_REG_10_11_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_10_11_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_10_11_OP]

//>> SET_[PB_CFG_TLPM_REG_10_11_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_10_11_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_10_11_OP,
           PB_CFG_TLPM_REG_10_11_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_10_11_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_10_11_OP]

//>> GET_[PB_CFG_TLPM_REG_10_11_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_10_11_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_10_11_OP,
           PB_CFG_TLPM_REG_10_11_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_10_11_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_10_11_OP]

//>> SET_[PB_CFG_TLPM_REG_12_13_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_12_13_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_12_13_OP,
           PB_CFG_TLPM_REG_12_13_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_12_13_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_12_13_OP]

//>> SET_[PB_CFG_TLPM_REG_12_13_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_12_13_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_12_13_OP,
           PB_CFG_TLPM_REG_12_13_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_12_13_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_12_13_OP]

//>> GET_[PB_CFG_TLPM_REG_12_13_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_12_13_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_12_13_OP,
           PB_CFG_TLPM_REG_12_13_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_12_13_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_12_13_OP]

//>> SET_[PB_CFG_TLPM_REG_14_15_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_14_15_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_14_15_OP,
           PB_CFG_TLPM_REG_14_15_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_14_15_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_14_15_OP]

//>> SET_[PB_CFG_TLPM_REG_14_15_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_14_15_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_14_15_OP,
           PB_CFG_TLPM_REG_14_15_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_14_15_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_14_15_OP]

//>> GET_[PB_CFG_TLPM_REG_14_15_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_14_15_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_14_15_OP,
           PB_CFG_TLPM_REG_14_15_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_14_15_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_14_15_OP]

//>> SET_[PB_CFG_TLPM_REG_16_17_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_16_17_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_16_17_OP,
           PB_CFG_TLPM_REG_16_17_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_16_17_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_16_17_OP]

//>> SET_[PB_CFG_TLPM_REG_16_17_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_16_17_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_16_17_OP,
           PB_CFG_TLPM_REG_16_17_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_16_17_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_16_17_OP]

//>> GET_[PB_CFG_TLPM_REG_16_17_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_16_17_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_16_17_OP,
           PB_CFG_TLPM_REG_16_17_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_16_17_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_16_17_OP]

//>> SET_[PB_CFG_TLPM_REG_18_19_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_18_19_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_18_19_OP,
           PB_CFG_TLPM_REG_18_19_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_18_19_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_18_19_OP]

//>> SET_[PB_CFG_TLPM_REG_18_19_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_18_19_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_18_19_OP,
           PB_CFG_TLPM_REG_18_19_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_18_19_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_18_19_OP]

//>> GET_[PB_CFG_TLPM_REG_18_19_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_18_19_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_18_19_OP,
           PB_CFG_TLPM_REG_18_19_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_18_19_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_18_19_OP]

//>> SET_[PB_CFG_TLPM_REG_20_21_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_20_21_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_20_21_OP,
           PB_CFG_TLPM_REG_20_21_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_20_21_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_20_21_OP]

//>> SET_[PB_CFG_TLPM_REG_20_21_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_20_21_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_20_21_OP,
           PB_CFG_TLPM_REG_20_21_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_20_21_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_20_21_OP]

//>> GET_[PB_CFG_TLPM_REG_20_21_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_20_21_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_20_21_OP,
           PB_CFG_TLPM_REG_20_21_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_20_21_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_20_21_OP]

//>> SET_[PB_CFG_TLPM_REG_22_23_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_22_23_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_22_23_OP,
           PB_CFG_TLPM_REG_22_23_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_22_23_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_22_23_OP]

//>> SET_[PB_CFG_TLPM_REG_22_23_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_22_23_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_22_23_OP,
           PB_CFG_TLPM_REG_22_23_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_22_23_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_22_23_OP]

//>> GET_[PB_CFG_TLPM_REG_22_23_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_22_23_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_22_23_OP,
           PB_CFG_TLPM_REG_22_23_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_22_23_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_22_23_OP]

//>> SET_[PB_CFG_TLPM_REG_24_25_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_24_25_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_24_25_OP,
           PB_CFG_TLPM_REG_24_25_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_24_25_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_24_25_OP]

//>> SET_[PB_CFG_TLPM_REG_24_25_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_24_25_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_24_25_OP,
           PB_CFG_TLPM_REG_24_25_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_24_25_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_24_25_OP]

//>> GET_[PB_CFG_TLPM_REG_24_25_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_24_25_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_24_25_OP,
           PB_CFG_TLPM_REG_24_25_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_24_25_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_24_25_OP]

//>> SET_[PB_CFG_TLPM_REG_26_27_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_26_27_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_26_27_OP,
           PB_CFG_TLPM_REG_26_27_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_26_27_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_26_27_OP]

//>> SET_[PB_CFG_TLPM_REG_26_27_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_26_27_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_26_27_OP,
           PB_CFG_TLPM_REG_26_27_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_26_27_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_26_27_OP]

//>> GET_[PB_CFG_TLPM_REG_26_27_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_26_27_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_26_27_OP,
           PB_CFG_TLPM_REG_26_27_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_26_27_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_26_27_OP]

//>> SET_[PB_CFG_TLPM_REG_28_29_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_28_29_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_28_29_OP,
           PB_CFG_TLPM_REG_28_29_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_28_29_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_28_29_OP]

//>> SET_[PB_CFG_TLPM_REG_28_29_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_28_29_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_28_29_OP,
           PB_CFG_TLPM_REG_28_29_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_28_29_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_28_29_OP]

//>> GET_[PB_CFG_TLPM_REG_28_29_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_28_29_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_28_29_OP,
           PB_CFG_TLPM_REG_28_29_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_28_29_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_28_29_OP]

//>> SET_[PB_CFG_TLPM_REG_30_31_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_30_31_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_30_31_OP,
           PB_CFG_TLPM_REG_30_31_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_30_31_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_30_31_OP]

//>> SET_[PB_CFG_TLPM_REG_30_31_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_30_31_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_30_31_OP,
           PB_CFG_TLPM_REG_30_31_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_30_31_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_30_31_OP]

//>> GET_[PB_CFG_TLPM_REG_30_31_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_30_31_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_30_31_OP,
           PB_CFG_TLPM_REG_30_31_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_30_31_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_30_31_OP]

//>> SET_[PB_CFG_TLPM_REG_CASCADE_PMU0]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_CASCADE_PMU0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_CASCADE_PMU0,
           PB_CFG_TLPM_REG_CASCADE_PMU0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_CASCADE_PMU0]

//>> SET_[PB_CFG_TLPM_REG_CASCADE_PMU0]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_CASCADE_PMU0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_CASCADE_PMU0,
           PB_CFG_TLPM_REG_CASCADE_PMU0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_CASCADE_PMU0]

//>> GET_[PB_CFG_TLPM_REG_CASCADE_PMU0]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_CASCADE_PMU0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_CASCADE_PMU0,
           PB_CFG_TLPM_REG_CASCADE_PMU0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_CASCADE_PMU0]

//>> SET_[PB_CFG_TLPM_REG_CASCADE_PMU1]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_CASCADE_PMU1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_CASCADE_PMU1,
           PB_CFG_TLPM_REG_CASCADE_PMU1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_CASCADE_PMU1]

//>> SET_[PB_CFG_TLPM_REG_CASCADE_PMU1]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_CASCADE_PMU1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_CASCADE_PMU1,
           PB_CFG_TLPM_REG_CASCADE_PMU1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_CASCADE_PMU1]

//>> GET_[PB_CFG_TLPM_REG_CASCADE_PMU1]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_CASCADE_PMU1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_CASCADE_PMU1,
           PB_CFG_TLPM_REG_CASCADE_PMU1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_CASCADE_PMU1]

//>> SET_[PB_CFG_TLPM_REG_CASCADE_PMU2]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_CASCADE_PMU2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_CASCADE_PMU2,
           PB_CFG_TLPM_REG_CASCADE_PMU2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_CASCADE_PMU2]

//>> SET_[PB_CFG_TLPM_REG_CASCADE_PMU2]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_CASCADE_PMU2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_CASCADE_PMU2,
           PB_CFG_TLPM_REG_CASCADE_PMU2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_CASCADE_PMU2]

//>> GET_[PB_CFG_TLPM_REG_CASCADE_PMU2]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_CASCADE_PMU2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_CASCADE_PMU2,
           PB_CFG_TLPM_REG_CASCADE_PMU2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_CASCADE_PMU2]

//>> SET_[PB_CFG_TLPM_REG_CASCADE_PMU3]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_CASCADE_PMU3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_CASCADE_PMU3,
           PB_CFG_TLPM_REG_CASCADE_PMU3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_CASCADE_PMU3]

//>> SET_[PB_CFG_TLPM_REG_CASCADE_PMU3]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_CASCADE_PMU3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_CASCADE_PMU3,
           PB_CFG_TLPM_REG_CASCADE_PMU3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_CASCADE_PMU3]

//>> GET_[PB_CFG_TLPM_REG_CASCADE_PMU3]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_CASCADE_PMU3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_CASCADE_PMU3,
           PB_CFG_TLPM_REG_CASCADE_PMU3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_CASCADE_PMU3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_CASCADE_PMU3]

//>> SET_[PB_CFG_TLPM_REG_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_SPARE,
           PB_CFG_TLPM_REG_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_REG_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_SPARE]

//>> SET_[PB_CFG_TLPM_REG_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_REG_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_REG_SPARE,
           PB_CFG_TLPM_REG_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_REG_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_REG_SPARE]

//>> GET_[PB_CFG_TLPM_REG_SPARE]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_REG_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_REG_SPARE,
           PB_CFG_TLPM_REG_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_REG_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_REG_SPARE]

//>> PREP_[PB_PMU3_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PMU3_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU3_CNPM_COUNTER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PMU3_CNPM_COUNTER]

//>> GET_[PB_PMU3_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PMU3_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU3_CNPM_COUNTER;
#endif
    return fapi2::getScom(i_target, PB_PMU3_CNPM_COUNTER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PMU3_CNPM_COUNTER]

//>> PUT_[PB_PMU3_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PMU3_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return fapi2::putScom(i_target, PB_PMU3_CNPM_COUNTER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PMU3_CNPM_COUNTER]


//>> SET_[PB_PMU3_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU3_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU3_CNPM_COUNTER_0,
           PB_PMU3_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU3_CNPM_COUNTER_0]

//>> SET_[PB_PMU3_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU3_CNPM_COUNTER_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU3_CNPM_COUNTER_0,
           PB_PMU3_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU3_CNPM_COUNTER_0]

//>> GET_[PB_PMU3_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU3_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU3_CNPM_COUNTER_0,
           PB_PMU3_CNPM_COUNTER_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU3_CNPM_COUNTER_0]

//>> SET_[PB_PMU3_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU3_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU3_CNPM_COUNTER_1,
           PB_PMU3_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU3_CNPM_COUNTER_1]

//>> SET_[PB_PMU3_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU3_CNPM_COUNTER_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU3_CNPM_COUNTER_1,
           PB_PMU3_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU3_CNPM_COUNTER_1]

//>> GET_[PB_PMU3_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU3_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU3_CNPM_COUNTER_1,
           PB_PMU3_CNPM_COUNTER_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU3_CNPM_COUNTER_1]

//>> SET_[PB_PMU3_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU3_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU3_CNPM_COUNTER_2,
           PB_PMU3_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU3_CNPM_COUNTER_2]

//>> SET_[PB_PMU3_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU3_CNPM_COUNTER_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU3_CNPM_COUNTER_2,
           PB_PMU3_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU3_CNPM_COUNTER_2]

//>> GET_[PB_PMU3_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU3_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU3_CNPM_COUNTER_2,
           PB_PMU3_CNPM_COUNTER_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU3_CNPM_COUNTER_2]

//>> SET_[PB_PMU3_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU3_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU3_CNPM_COUNTER_3,
           PB_PMU3_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU3_CNPM_COUNTER_3]

//>> SET_[PB_PMU3_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU3_CNPM_COUNTER_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU3_CNPM_COUNTER_3,
           PB_PMU3_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU3_CNPM_COUNTER_3]

//>> GET_[PB_PMU3_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU3_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU3_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU3_CNPM_COUNTER_3,
           PB_PMU3_CNPM_COUNTER_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU3_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU3_CNPM_COUNTER_3]

//>> PREP_[PB_TL_LINK_DATA_23_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_TL_LINK_DATA_23_CFG_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_DATA_23_CFG_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_TL_LINK_DATA_23_CFG_REG]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_TL_LINK_DATA_23_CFG_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_DATA_23_CFG_REG;
#endif
    return fapi2::getScom(i_target, PB_TL_LINK_DATA_23_CFG_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG]

//>> PUT_[PB_TL_LINK_DATA_23_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_TL_LINK_DATA_23_CFG_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return fapi2::putScom(i_target, PB_TL_LINK_DATA_23_CFG_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_TL_LINK_DATA_23_CFG_REG]


//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.setBit<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]

//>> CLEAR_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]
static inline bool GET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.getBit<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_0]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC0_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.setBit<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]

//>> CLEAR_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]
static inline bool GET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.getBit<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_1]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DOB_VC1_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_HI_BACKOFF_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_LO_BACKOFF_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT,
           PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_VC_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.setBit<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]

//>> CLEAR_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]
static inline bool GET_PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.getBit<PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_LINK23_DIB_RTAG_DATA_ASY_LIMIT]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2,
           PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2]

//>> SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2,
           PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2]

//>> GET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_23_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2,
           PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_23_CFG_REG_DIBDOB23_SP_2]

//>> PREP_[PHY_PPE_WRAP_SCOM_CNTL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_SCOM_CNTL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOM_CNTL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_SCOM_CNTL]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_SCOM_CNTL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOM_CNTL;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_SCOM_CNTL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL]

//>> PUT_[PHY_PPE_WRAP_SCOM_CNTL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_SCOM_CNTL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_SCOM_CNTL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_SCOM_CNTL]


//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]

//>> CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]
static inline bool GET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_IORESET]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]

//>> CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]
static inline bool GET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_PDWN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]

//>> CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]
static inline bool GET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_ARB_ECC_INJECT_ERR]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING,
           PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING,
           PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING,
           PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_INTERLEAVING]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY,
           PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY,
           PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY,
           PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_ASYNC_DLY]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY,
           PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY,
           PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY,
           PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_ASYNC_DLY]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]

//>> CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]
static inline bool GET_PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_SOURCED_HANG_PULSE_EN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]

//>> CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]
static inline bool GET_PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_PPE_IO_VALID_DLY_CHKN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]

//>> CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]
static inline bool GET_PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_IO_PPE_DONE_DLY_CHKN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]

//>> CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]
static inline bool GET_PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_MMIO_ECHO_CHKN]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES,
           PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES]

//>> SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES,
           PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES]

//>> GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_CNTL));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES,
           PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_CNTL_SCOM_PPE_SPARES]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_P_4X_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_P_4X_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_P_4X_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_P_4X_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_P_4X_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_P_4X_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_P_4X_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_P_4X_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_P_4X_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X,
           TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_P_4X_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X,
           TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_P_4X_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X,
           TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_P_4X_PB_TX_ZCAL_P_4X]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_SWO5_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO5_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_SWO5_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO5_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO5_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_SWO5_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO5_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO5_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO5_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39,
           TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO5_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39,
           TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO5_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39,
           TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO5_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_32_39]

//>> PREP_[TXIRLM_REGS_ZCAL_FIR_RESET_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_ZCAL_FIR_RESET_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_ZCAL_FIR_RESET_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_ZCAL_FIR_RESET_PB]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_ZCAL_FIR_RESET_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_ZCAL_FIR_RESET_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_ZCAL_FIR_RESET_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB]

//>> PUT_[TXIRLM_REGS_ZCAL_FIR_RESET_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_ZCAL_FIR_RESET_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_ZCAL_FIR_RESET_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_ZCAL_FIR_RESET_PB]


//>> SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]

//>> SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]

//>> SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]

//>> CLEAR_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]
static inline bool GET_TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_CLR_PAR_ERRS]

//>> SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]

//>> SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]

//>> SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]

//>> CLEAR_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]
static inline bool GET_TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_RESET_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_RESET_PB_FIR_RESET]

//>> PREP_[WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WOF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WOF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WOF]

//>> GET_[WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WOF(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WOF;
#endif
    return fapi2::getScom(i_target, WOF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WOF]

//>> PUT_[WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WOF(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return fapi2::putScom(i_target, WOF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WOF]


//>> SET_[WOF_ANY_WOF]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_WOF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_ANY_WOF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_WOF]

//>> SET_[WOF_ANY_WOF]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_WOF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_ANY_WOF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_WOF]

//>> SET_[WOF_ANY_WOF]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_WOF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_ANY_WOF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_WOF]

//>> CLEAR_[WOF_ANY_WOF]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_ANY_WOF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_ANY_WOF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_ANY_WOF]

//>> GET_[WOF_ANY_WOF]
static inline fapi2::buffer<uint64_t>& GET_WOF_ANY_WOF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_ANY_WOF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_ANY_WOF]

//>> GET_[WOF_ANY_WOF]
static inline bool GET_WOF_ANY_WOF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_ANY_WOF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_ANY_WOF]

//>> SET_[WOF_RESERVED1W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED1W(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_RESERVED1W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED1W]

//>> SET_[WOF_RESERVED1W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED1W(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_RESERVED1W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED1W]

//>> SET_[WOF_RESERVED1W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED1W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_RESERVED1W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED1W]

//>> CLEAR_[WOF_RESERVED1W]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_RESERVED1W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_RESERVED1W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_RESERVED1W]

//>> GET_[WOF_RESERVED1W]
static inline fapi2::buffer<uint64_t>& GET_WOF_RESERVED1W(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_RESERVED1W,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_RESERVED1W]

//>> GET_[WOF_RESERVED1W]
static inline bool GET_WOF_RESERVED1W(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_RESERVED1W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_RESERVED1W]

//>> SET_[WOF_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_LOCAL_XSTOP]

//>> SET_[WOF_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_LOCAL_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_LOCAL_XSTOP]

//>> SET_[WOF_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_LOCAL_XSTOP]

//>> CLEAR_[WOF_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_ANY_LOCAL_XSTOP]

//>> GET_[WOF_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_WOF_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_ANY_LOCAL_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_ANY_LOCAL_XSTOP]

//>> GET_[WOF_ANY_LOCAL_XSTOP]
static inline bool GET_WOF_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_ANY_LOCAL_XSTOP]

//>> SET_[WOF_RESERVED3W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED3W(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_RESERVED3W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED3W]

//>> SET_[WOF_RESERVED3W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED3W(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_RESERVED3W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED3W]

//>> SET_[WOF_RESERVED3W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED3W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_RESERVED3W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED3W]

//>> CLEAR_[WOF_RESERVED3W]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_RESERVED3W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_RESERVED3W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_RESERVED3W]

//>> GET_[WOF_RESERVED3W]
static inline fapi2::buffer<uint64_t>& GET_WOF_RESERVED3W(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_RESERVED3W,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_RESERVED3W]

//>> GET_[WOF_RESERVED3W]
static inline bool GET_WOF_RESERVED3W(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_RESERVED3W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_RESERVED3W]

//>> SET_[WOF_PERV]
static inline fapi2::buffer<uint64_t>& SET_WOF_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_PERV]

//>> SET_[WOF_PERV]
static inline fapi2::buffer<uint64_t>& SET_WOF_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_PERV]

//>> SET_[WOF_PERV]
static inline fapi2::buffer<uint64_t>& SET_WOF_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_PERV]

//>> CLEAR_[WOF_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_PERV]

//>> GET_[WOF_PERV]
static inline fapi2::buffer<uint64_t>& GET_WOF_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_PERV]

//>> GET_[WOF_PERV]
static inline bool GET_WOF_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_PERV]

//>> SET_[WOF_IN05]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN05]

//>> SET_[WOF_IN05]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN05]

//>> SET_[WOF_IN05]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN05]

//>> CLEAR_[WOF_IN05]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN05]

//>> GET_[WOF_IN05]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN05]

//>> GET_[WOF_IN05]
static inline bool GET_WOF_IN05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN05]

//>> SET_[WOF_IN06]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN06]

//>> SET_[WOF_IN06]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN06]

//>> SET_[WOF_IN06]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN06]

//>> CLEAR_[WOF_IN06]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN06]

//>> GET_[WOF_IN06]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN06]

//>> GET_[WOF_IN06]
static inline bool GET_WOF_IN06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN06]

//>> SET_[WOF_IN07]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN07]

//>> SET_[WOF_IN07]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN07]

//>> SET_[WOF_IN07]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN07]

//>> CLEAR_[WOF_IN07]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN07]

//>> GET_[WOF_IN07]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN07]

//>> GET_[WOF_IN07]
static inline bool GET_WOF_IN07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN07]

//>> SET_[WOF_IN08]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN08]

//>> SET_[WOF_IN08]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN08]

//>> SET_[WOF_IN08]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN08]

//>> CLEAR_[WOF_IN08]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN08]

//>> GET_[WOF_IN08]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN08]

//>> GET_[WOF_IN08]
static inline bool GET_WOF_IN08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN08]

//>> SET_[WOF_IN09]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN09]

//>> SET_[WOF_IN09]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN09]

//>> SET_[WOF_IN09]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN09]

//>> CLEAR_[WOF_IN09]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN09]

//>> GET_[WOF_IN09]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN09]

//>> GET_[WOF_IN09]
static inline bool GET_WOF_IN09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN09]

//>> SET_[WOF_IN010]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN010(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN010]

//>> SET_[WOF_IN010]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN010(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN010]

//>> SET_[WOF_IN010]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN010(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN010]

//>> CLEAR_[WOF_IN010]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN010(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN010]

//>> GET_[WOF_IN010]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN010(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN010,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN010]

//>> GET_[WOF_IN010]
static inline bool GET_WOF_IN010(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN010]

//>> SET_[WOF_IN011]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN011(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN011]

//>> SET_[WOF_IN011]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN011(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN011]

//>> SET_[WOF_IN011]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN011(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN011]

//>> CLEAR_[WOF_IN011]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN011(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN011]

//>> GET_[WOF_IN011]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN011(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN011,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN011]

//>> GET_[WOF_IN011]
static inline bool GET_WOF_IN011(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN011]

//>> SET_[WOF_IN012]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN012(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN012]

//>> SET_[WOF_IN012]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN012(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN012]

//>> SET_[WOF_IN012]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN012(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN012]

//>> CLEAR_[WOF_IN012]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN012(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN012]

//>> GET_[WOF_IN012]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN012(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN012,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN012]

//>> GET_[WOF_IN012]
static inline bool GET_WOF_IN012(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN012]

//>> SET_[WOF_IN013]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN013(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN013]

//>> SET_[WOF_IN013]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN013(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN013]

//>> SET_[WOF_IN013]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN013(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN013]

//>> CLEAR_[WOF_IN013]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN013(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN013]

//>> GET_[WOF_IN013]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN013(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN013,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN013]

//>> GET_[WOF_IN013]
static inline bool GET_WOF_IN013(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN013]

//>> SET_[WOF_IN014]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN014(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN014]

//>> SET_[WOF_IN014]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN014(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN014]

//>> SET_[WOF_IN014]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN014(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN014]

//>> CLEAR_[WOF_IN014]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN014(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN014]

//>> GET_[WOF_IN014]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN014(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN014,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN014]

//>> GET_[WOF_IN014]
static inline bool GET_WOF_IN014(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN014]

//>> SET_[WOF_IN015]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN015(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN015]

//>> SET_[WOF_IN015]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN015(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN015]

//>> SET_[WOF_IN015]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN015(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN015]

//>> CLEAR_[WOF_IN015]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN015(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN015]

//>> GET_[WOF_IN015]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN015(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN015,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN015]

//>> GET_[WOF_IN015]
static inline bool GET_WOF_IN015(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN015]

//>> SET_[WOF_IN016]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN016(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN016,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN016]

//>> SET_[WOF_IN016]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN016(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN016,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN016]

//>> SET_[WOF_IN016]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN016(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN016>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN016]

//>> CLEAR_[WOF_IN016]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN016(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN016>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN016]

//>> GET_[WOF_IN016]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN016(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN016,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN016]

//>> GET_[WOF_IN016]
static inline bool GET_WOF_IN016(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN016>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN016]

//>> SET_[WOF_IN017]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN017(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN017,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN017]

//>> SET_[WOF_IN017]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN017(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN017,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN017]

//>> SET_[WOF_IN017]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN017(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN017>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN017]

//>> CLEAR_[WOF_IN017]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN017(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN017>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN017]

//>> GET_[WOF_IN017]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN017(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN017,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN017]

//>> GET_[WOF_IN017]
static inline bool GET_WOF_IN017(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN017>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN017]

//>> SET_[WOF_IN018]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN018(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN018,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN018]

//>> SET_[WOF_IN018]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN018(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN018,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN018]

//>> SET_[WOF_IN018]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN018(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN018>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN018]

//>> CLEAR_[WOF_IN018]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN018(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN018>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN018]

//>> GET_[WOF_IN018]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN018(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN018,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN018]

//>> GET_[WOF_IN018]
static inline bool GET_WOF_IN018(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN018>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN018]

//>> SET_[WOF_IN019]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN019(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN019,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN019]

//>> SET_[WOF_IN019]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN019(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN019,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN019]

//>> SET_[WOF_IN019]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN019(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN019>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN019]

//>> CLEAR_[WOF_IN019]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN019(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN019>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN019]

//>> GET_[WOF_IN019]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN019(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN019,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN019]

//>> GET_[WOF_IN019]
static inline bool GET_WOF_IN019(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN019>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN019]

//>> SET_[WOF_IN020]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN020(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN020,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN020]

//>> SET_[WOF_IN020]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN020(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN020,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN020]

//>> SET_[WOF_IN020]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN020(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN020>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN020]

//>> CLEAR_[WOF_IN020]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN020(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN020>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN020]

//>> GET_[WOF_IN020]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN020(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN020,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN020]

//>> GET_[WOF_IN020]
static inline bool GET_WOF_IN020(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN020>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN020]

//>> SET_[WOF_IN021]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN021(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN021,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN021]

//>> SET_[WOF_IN021]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN021(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN021,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN021]

//>> SET_[WOF_IN021]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN021(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN021>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN021]

//>> CLEAR_[WOF_IN021]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN021(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN021>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN021]

//>> GET_[WOF_IN021]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN021(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN021,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN021]

//>> GET_[WOF_IN021]
static inline bool GET_WOF_IN021(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN021>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN021]

//>> SET_[WOF_IN022]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN022(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN022,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN022]

//>> SET_[WOF_IN022]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN022(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN022,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN022]

//>> SET_[WOF_IN022]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN022(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN022>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN022]

//>> CLEAR_[WOF_IN022]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN022(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN022>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN022]

//>> GET_[WOF_IN022]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN022(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN022,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN022]

//>> GET_[WOF_IN022]
static inline bool GET_WOF_IN022(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN022>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN022]

//>> SET_[WOF_IN023]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN023(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN023,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN023]

//>> SET_[WOF_IN023]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN023(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN023,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN023]

//>> SET_[WOF_IN023]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN023(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN023>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN023]

//>> CLEAR_[WOF_IN023]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN023(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN023>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN023]

//>> GET_[WOF_IN023]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN023(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN023,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN023]

//>> GET_[WOF_IN023]
static inline bool GET_WOF_IN023(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN023>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN023]

//>> SET_[WOF_IN024]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN024(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN024,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN024]

//>> SET_[WOF_IN024]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN024(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN024,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN024]

//>> SET_[WOF_IN024]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN024(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN024>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN024]

//>> CLEAR_[WOF_IN024]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN024(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN024>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN024]

//>> GET_[WOF_IN024]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN024(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN024,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN024]

//>> GET_[WOF_IN024]
static inline bool GET_WOF_IN024(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN024>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN024]

//>> SET_[WOF_IN025]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN025(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN025,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN025]

//>> SET_[WOF_IN025]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN025(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN025,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN025]

//>> SET_[WOF_IN025]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN025(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN025>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN025]

//>> CLEAR_[WOF_IN025]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN025(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN025>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN025]

//>> GET_[WOF_IN025]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN025(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN025,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN025]

//>> GET_[WOF_IN025]
static inline bool GET_WOF_IN025(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN025>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN025]

//>> SET_[WOF_IN026]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN026(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN026,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN026]

//>> SET_[WOF_IN026]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN026(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN026,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN026]

//>> SET_[WOF_IN026]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN026(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN026>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN026]

//>> CLEAR_[WOF_IN026]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN026(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN026>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN026]

//>> GET_[WOF_IN026]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN026(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN026,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN026]

//>> GET_[WOF_IN026]
static inline bool GET_WOF_IN026(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN026>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN026]

//>> SET_[WOF_IN027]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN027(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN027,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN027]

//>> SET_[WOF_IN027]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN027(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN027,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN027]

//>> SET_[WOF_IN027]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN027(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN027>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN027]

//>> CLEAR_[WOF_IN027]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN027(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN027>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN027]

//>> GET_[WOF_IN027]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN027(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN027,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN027]

//>> GET_[WOF_IN027]
static inline bool GET_WOF_IN027(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN027>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN027]

//>> SET_[WOF_IN028]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN028(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN028,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN028]

//>> SET_[WOF_IN028]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN028(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN028,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN028]

//>> SET_[WOF_IN028]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN028(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN028>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN028]

//>> CLEAR_[WOF_IN028]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN028(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN028>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN028]

//>> GET_[WOF_IN028]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN028(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN028,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN028]

//>> GET_[WOF_IN028]
static inline bool GET_WOF_IN028(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN028>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN028]

//>> SET_[WOF_IN029]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN029(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN029,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN029]

//>> SET_[WOF_IN029]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN029(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN029,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN029]

//>> SET_[WOF_IN029]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN029(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN029>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN029]

//>> CLEAR_[WOF_IN029]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN029(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN029>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN029]

//>> GET_[WOF_IN029]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN029(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN029,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN029]

//>> GET_[WOF_IN029]
static inline bool GET_WOF_IN029(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN029>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN029]

//>> SET_[WOF_IN030]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN030(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN030,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN030]

//>> SET_[WOF_IN030]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN030(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN030,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN030]

//>> SET_[WOF_IN030]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN030(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN030>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN030]

//>> CLEAR_[WOF_IN030]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN030(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN030>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN030]

//>> GET_[WOF_IN030]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN030(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN030,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN030]

//>> GET_[WOF_IN030]
static inline bool GET_WOF_IN030(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN030>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN030]

//>> SET_[WOF_IN031]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN031(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN031,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN031]

//>> SET_[WOF_IN031]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN031(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN031,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN031]

//>> SET_[WOF_IN031]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN031(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN031>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN031]

//>> CLEAR_[WOF_IN031]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN031(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN031>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN031]

//>> GET_[WOF_IN031]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN031(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN031,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN031]

//>> GET_[WOF_IN031]
static inline bool GET_WOF_IN031(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN031>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN031]

//>> SET_[WOF_IN032]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN032(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN032,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN032]

//>> SET_[WOF_IN032]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN032(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN032,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN032]

//>> SET_[WOF_IN032]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN032(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN032>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN032]

//>> CLEAR_[WOF_IN032]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN032(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN032>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN032]

//>> GET_[WOF_IN032]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN032(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN032,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN032]

//>> GET_[WOF_IN032]
static inline bool GET_WOF_IN032(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN032>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN032]

//>> SET_[WOF_IN033]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN033(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN033,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN033]

//>> SET_[WOF_IN033]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN033(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN033,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN033]

//>> SET_[WOF_IN033]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN033(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN033>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN033]

//>> CLEAR_[WOF_IN033]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN033(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN033>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN033]

//>> GET_[WOF_IN033]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN033(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN033,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN033]

//>> GET_[WOF_IN033]
static inline bool GET_WOF_IN033(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN033>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN033]

//>> SET_[WOF_IN034]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN034(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN034,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN034]

//>> SET_[WOF_IN034]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN034(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN034,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN034]

//>> SET_[WOF_IN034]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN034(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN034>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN034]

//>> CLEAR_[WOF_IN034]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN034(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN034>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN034]

//>> GET_[WOF_IN034]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN034(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN034,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN034]

//>> GET_[WOF_IN034]
static inline bool GET_WOF_IN034(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN034>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN034]

//>> SET_[WOF_IN035]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN035(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN035,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN035]

//>> SET_[WOF_IN035]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN035(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN035,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN035]

//>> SET_[WOF_IN035]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN035(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN035>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN035]

//>> CLEAR_[WOF_IN035]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN035(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN035>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN035]

//>> GET_[WOF_IN035]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN035(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN035,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN035]

//>> GET_[WOF_IN035]
static inline bool GET_WOF_IN035(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN035>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN035]

//>> SET_[WOF_IN036]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN036(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN036,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN036]

//>> SET_[WOF_IN036]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN036(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN036,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN036]

//>> SET_[WOF_IN036]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN036(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN036>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN036]

//>> CLEAR_[WOF_IN036]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN036(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN036>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN036]

//>> GET_[WOF_IN036]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN036(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN036,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN036]

//>> GET_[WOF_IN036]
static inline bool GET_WOF_IN036(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN036>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN036]

//>> SET_[WOF_IN037]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN037(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN037,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN037]

//>> SET_[WOF_IN037]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN037(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN037,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN037]

//>> SET_[WOF_IN037]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN037(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN037>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN037]

//>> CLEAR_[WOF_IN037]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN037(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN037>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN037]

//>> GET_[WOF_IN037]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN037(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN037,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN037]

//>> GET_[WOF_IN037]
static inline bool GET_WOF_IN037(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN037>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN037]

//>> SET_[WOF_IN038]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN038(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN038,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN038]

//>> SET_[WOF_IN038]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN038(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN038,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN038]

//>> SET_[WOF_IN038]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN038(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN038>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN038]

//>> CLEAR_[WOF_IN038]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN038(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN038>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN038]

//>> GET_[WOF_IN038]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN038(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN038,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN038]

//>> GET_[WOF_IN038]
static inline bool GET_WOF_IN038(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN038>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN038]

//>> SET_[WOF_IN039]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN039(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN039,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN039]

//>> SET_[WOF_IN039]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN039(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN039,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN039]

//>> SET_[WOF_IN039]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN039(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN039>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN039]

//>> CLEAR_[WOF_IN039]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN039(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN039>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN039]

//>> GET_[WOF_IN039]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN039(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN039,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN039]

//>> GET_[WOF_IN039]
static inline bool GET_WOF_IN039(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN039>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN039]

//>> SET_[WOF_IN040]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN040(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN040,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN040]

//>> SET_[WOF_IN040]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN040(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN040,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN040]

//>> SET_[WOF_IN040]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN040(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN040>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN040]

//>> CLEAR_[WOF_IN040]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN040(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN040>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN040]

//>> GET_[WOF_IN040]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN040(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN040,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN040]

//>> GET_[WOF_IN040]
static inline bool GET_WOF_IN040(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN040>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN040]

//>> SET_[WOF_IN041]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN041(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN041,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN041]

//>> SET_[WOF_IN041]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN041(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN041,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN041]

//>> SET_[WOF_IN041]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN041(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN041>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN041]

//>> CLEAR_[WOF_IN041]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN041(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN041>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN041]

//>> GET_[WOF_IN041]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN041(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN041,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN041]

//>> GET_[WOF_IN041]
static inline bool GET_WOF_IN041(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN041>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN041]

//>> SET_[WOF_IN042]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN042(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN042,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN042]

//>> SET_[WOF_IN042]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN042(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN042,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN042]

//>> SET_[WOF_IN042]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN042(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN042>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN042]

//>> CLEAR_[WOF_IN042]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN042(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN042>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN042]

//>> GET_[WOF_IN042]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN042(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN042,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN042]

//>> GET_[WOF_IN042]
static inline bool GET_WOF_IN042(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN042>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN042]

//>> SET_[WOF_IN043]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN043(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN043,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN043]

//>> SET_[WOF_IN043]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN043(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN043,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN043]

//>> SET_[WOF_IN043]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN043(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN043>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN043]

//>> CLEAR_[WOF_IN043]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN043(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN043>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN043]

//>> GET_[WOF_IN043]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN043(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN043,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN043]

//>> GET_[WOF_IN043]
static inline bool GET_WOF_IN043(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN043>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN043]

//>> SET_[WOF_IN044]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN044(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN044,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN044]

//>> SET_[WOF_IN044]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN044(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN044,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN044]

//>> SET_[WOF_IN044]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN044(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN044>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN044]

//>> CLEAR_[WOF_IN044]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN044(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN044>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN044]

//>> GET_[WOF_IN044]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN044(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN044,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN044]

//>> GET_[WOF_IN044]
static inline bool GET_WOF_IN044(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN044>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN044]

//>> SET_[WOF_IN045]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN045(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN045,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN045]

//>> SET_[WOF_IN045]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN045(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN045,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN045]

//>> SET_[WOF_IN045]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN045(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN045>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN045]

//>> CLEAR_[WOF_IN045]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN045(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN045>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN045]

//>> GET_[WOF_IN045]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN045(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN045,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN045]

//>> GET_[WOF_IN045]
static inline bool GET_WOF_IN045(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN045>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN045]

//>> SET_[WOF_IN046]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN046(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN046,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN046]

//>> SET_[WOF_IN046]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN046(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN046,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN046]

//>> SET_[WOF_IN046]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN046(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN046>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN046]

//>> CLEAR_[WOF_IN046]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN046(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN046>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN046]

//>> GET_[WOF_IN046]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN046(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN046,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN046]

//>> GET_[WOF_IN046]
static inline bool GET_WOF_IN046(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN046>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN046]

//>> SET_[WOF_IN047]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN047(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN047,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN047]

//>> SET_[WOF_IN047]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN047(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN047,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN047]

//>> SET_[WOF_IN047]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN047(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN047>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN047]

//>> CLEAR_[WOF_IN047]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN047(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN047>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN047]

//>> GET_[WOF_IN047]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN047(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN047,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN047]

//>> GET_[WOF_IN047]
static inline bool GET_WOF_IN047(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN047>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN047]

//>> SET_[WOF_IN048]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN048(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN048,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN048]

//>> SET_[WOF_IN048]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN048(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN048,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN048]

//>> SET_[WOF_IN048]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN048(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN048>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN048]

//>> CLEAR_[WOF_IN048]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN048(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN048>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN048]

//>> GET_[WOF_IN048]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN048(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN048,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN048]

//>> GET_[WOF_IN048]
static inline bool GET_WOF_IN048(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN048>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN048]

//>> SET_[WOF_IN049]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN049(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN049,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN049]

//>> SET_[WOF_IN049]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN049(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN049,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN049]

//>> SET_[WOF_IN049]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN049(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN049>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN049]

//>> CLEAR_[WOF_IN049]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN049(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN049>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN049]

//>> GET_[WOF_IN049]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN049(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN049,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN049]

//>> GET_[WOF_IN049]
static inline bool GET_WOF_IN049(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN049>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN049]

//>> SET_[WOF_IN050]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN050(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN050,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN050]

//>> SET_[WOF_IN050]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN050(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN050,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN050]

//>> SET_[WOF_IN050]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN050(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN050>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN050]

//>> CLEAR_[WOF_IN050]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN050(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN050>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN050]

//>> GET_[WOF_IN050]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN050(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN050,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN050]

//>> GET_[WOF_IN050]
static inline bool GET_WOF_IN050(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN050>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN050]

//>> SET_[WOF_IN051]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN051(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN051,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN051]

//>> SET_[WOF_IN051]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN051(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN051,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN051]

//>> SET_[WOF_IN051]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN051(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN051>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN051]

//>> CLEAR_[WOF_IN051]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN051(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN051>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN051]

//>> GET_[WOF_IN051]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN051(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN051,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN051]

//>> GET_[WOF_IN051]
static inline bool GET_WOF_IN051(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN051>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN051]

//>> SET_[WOF_IN052]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN052(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN052,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN052]

//>> SET_[WOF_IN052]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN052(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN052,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN052]

//>> SET_[WOF_IN052]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN052(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN052>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN052]

//>> CLEAR_[WOF_IN052]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN052(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN052>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN052]

//>> GET_[WOF_IN052]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN052(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN052,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN052]

//>> GET_[WOF_IN052]
static inline bool GET_WOF_IN052(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN052>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN052]

//>> SET_[WOF_IN053]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN053(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN053,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN053]

//>> SET_[WOF_IN053]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN053(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN053,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN053]

//>> SET_[WOF_IN053]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN053(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN053>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN053]

//>> CLEAR_[WOF_IN053]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN053(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN053>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN053]

//>> GET_[WOF_IN053]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN053(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN053,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN053]

//>> GET_[WOF_IN053]
static inline bool GET_WOF_IN053(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN053>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN053]

//>> PREP_[ASSIST_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_ASSIST_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ASSIST_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[ASSIST_INTERRUPT_REG]

//>> GET_[ASSIST_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_ASSIST_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ASSIST_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, ASSIST_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG]

//>> PUT_[ASSIST_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_ASSIST_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, ASSIST_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[ASSIST_INTERRUPT_REG]


//>> SET_[ASSIST_INTERRUPT_REG_ATTN]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_ATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_ATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_ATTN]

//>> SET_[ASSIST_INTERRUPT_REG_ATTN]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_ATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_ATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_ATTN]

//>> SET_[ASSIST_INTERRUPT_REG_ATTN]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_ATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.setBit<ASSIST_INTERRUPT_REG_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_ATTN]

//>> CLEAR_[ASSIST_INTERRUPT_REG_ATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_ASSIST_INTERRUPT_REG_ATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.clearBit<ASSIST_INTERRUPT_REG_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ASSIST_INTERRUPT_REG_ATTN]

//>> GET_[ASSIST_INTERRUPT_REG_ATTN]
static inline fapi2::buffer<uint64_t>& GET_ASSIST_INTERRUPT_REG_ATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.extractToRight<ASSIST_INTERRUPT_REG_ATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_ATTN]

//>> GET_[ASSIST_INTERRUPT_REG_ATTN]
static inline bool GET_ASSIST_INTERRUPT_REG_ATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.getBit<ASSIST_INTERRUPT_REG_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_ATTN]

//>> SET_[ASSIST_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_RECOV]

//>> SET_[ASSIST_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_RECOV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_RECOV]

//>> SET_[ASSIST_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.setBit<ASSIST_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_RECOV]

//>> CLEAR_[ASSIST_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& CLEAR_ASSIST_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.clearBit<ASSIST_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ASSIST_INTERRUPT_REG_RECOV]

//>> GET_[ASSIST_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& GET_ASSIST_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.extractToRight<ASSIST_INTERRUPT_REG_RECOV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_RECOV]

//>> GET_[ASSIST_INTERRUPT_REG_RECOV]
static inline bool GET_ASSIST_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.getBit<ASSIST_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_RECOV]

//>> SET_[ASSIST_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_XSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_XSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.setBit<ASSIST_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_XSTOP]

//>> CLEAR_[ASSIST_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_ASSIST_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.clearBit<ASSIST_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ASSIST_INTERRUPT_REG_XSTOP]

//>> GET_[ASSIST_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_ASSIST_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.extractToRight<ASSIST_INTERRUPT_REG_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_XSTOP]

//>> GET_[ASSIST_INTERRUPT_REG_XSTOP]
static inline bool GET_ASSIST_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.getBit<ASSIST_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_XSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_LXSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.setBit<ASSIST_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> CLEAR_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_ASSIST_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.clearBit<ASSIST_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> GET_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& GET_ASSIST_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.extractToRight<ASSIST_INTERRUPT_REG_LXSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> GET_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline bool GET_ASSIST_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.getBit<ASSIST_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_TYPE4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_TYPE4]

//>> SET_[ASSIST_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_TYPE4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_TYPE4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_TYPE4]

//>> SET_[ASSIST_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.setBit<ASSIST_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_TYPE4]

//>> CLEAR_[ASSIST_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& CLEAR_ASSIST_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.clearBit<ASSIST_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ASSIST_INTERRUPT_REG_TYPE4]

//>> GET_[ASSIST_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& GET_ASSIST_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.extractToRight<ASSIST_INTERRUPT_REG_TYPE4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_TYPE4]

//>> GET_[ASSIST_INTERRUPT_REG_TYPE4]
static inline bool GET_ASSIST_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.getBit<ASSIST_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_TYPE4]

//>> PREP_[EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EDRAM_STATUS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EDRAM_STATUS]

//>> GET_[EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EDRAM_STATUS;
#endif
    return fapi2::getScom(i_target, EDRAM_STATUS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EDRAM_STATUS]

//>> PUT_[EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EDRAM_STATUS));
#endif
    return fapi2::putScom(i_target, EDRAM_STATUS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EDRAM_STATUS]


//>> SET_[EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& SET_EDRAM_STATUS_EDRAM_STAT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EDRAM_STATUS));
#endif
    return o_data.insertFromRight<EDRAM_STATUS_EDRAM_STAT,
           EDRAM_STATUS_EDRAM_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EDRAM_STATUS_EDRAM_STAT]

//>> SET_[EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& SET_EDRAM_STATUS_EDRAM_STAT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EDRAM_STATUS));
#endif
    return o_data.insertFromRight<EDRAM_STATUS_EDRAM_STAT,
           EDRAM_STATUS_EDRAM_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EDRAM_STATUS_EDRAM_STAT]

//>> GET_[EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& GET_EDRAM_STATUS_EDRAM_STAT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EDRAM_STATUS));
#endif
    return i_data.extractToRight<EDRAM_STATUS_EDRAM_STAT,
           EDRAM_STATUS_EDRAM_STAT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EDRAM_STATUS_EDRAM_STAT]

//>> PREP_[EPS_DBG_TRACE_REG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_REG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_REG_0]

//>> GET_[EPS_DBG_TRACE_REG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_REG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_0;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_REG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0]

//>> PUT_[EPS_DBG_TRACE_REG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_REG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_REG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_REG_0]


//>> SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline bool GET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline bool GET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> SET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_DBG_ARM_SEL,
           EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_DBG_ARM_SEL,
           EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_DBG_ARM_SEL,
           EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]

//>> PREP_[EPS_PSC_PSCOM_ERROR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_PSC_PSCOM_ERROR_MASK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_PSCOM_ERROR_MASK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_PSC_PSCOM_ERROR_MASK]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_PSC_PSCOM_ERROR_MASK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_PSCOM_ERROR_MASK;
#endif
    return fapi2::getScom(i_target, EPS_PSC_PSCOM_ERROR_MASK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK]

//>> PUT_[EPS_PSC_PSCOM_ERROR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_PSC_PSCOM_ERROR_MASK(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return fapi2::putScom(i_target, EPS_PSC_PSCOM_ERROR_MASK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_PSC_PSCOM_ERROR_MASK]


//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> PREP_[EPS_PSC_WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_PSC_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_WRITE_PROTECT_RINGS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_PSC_WRITE_PROTECT_RINGS_REG]

//>> GET_[EPS_PSC_WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_PSC_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_WRITE_PROTECT_RINGS_REG;
#endif
    return fapi2::getScom(i_target, EPS_PSC_WRITE_PROTECT_RINGS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_RINGS_REG]

//>> PUT_[EPS_PSC_WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_PSC_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return fapi2::putScom(i_target, EPS_PSC_WRITE_PROTECT_RINGS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_PSC_WRITE_PROTECT_RINGS_REG]


//>> SET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> SET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> GET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return i_data.extractToRight<EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> PREP_[SCAN_CAPTUREDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCAN_CAPTUREDR_LONG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_CAPTUREDR_LONG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCAN_CAPTUREDR_LONG]

//>> GET_[SCAN_CAPTUREDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCAN_CAPTUREDR_LONG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_CAPTUREDR_LONG;
#endif
    return fapi2::getScom(i_target, SCAN_CAPTUREDR_LONG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCAN_CAPTUREDR_LONG]

//>> PUT_[SCAN_CAPTUREDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCAN_CAPTUREDR_LONG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR_LONG));
#endif
    return fapi2::putScom(i_target, SCAN_CAPTUREDR_LONG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCAN_CAPTUREDR_LONG]


//>> SET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR_LONG));
#endif
    return o_data.insertFromRight<SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG,
           SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]

//>> SET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR_LONG));
#endif
    return o_data.insertFromRight<SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG,
           SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]

//>> GET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& GET_SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR_LONG));
#endif
    return i_data.extractToRight<SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG,
           SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]

//>> PREP_[TRA1_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_CONFIG_0]

//>> GET_[TRA1_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_0;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_0]

//>> PUT_[TRA1_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_0));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_CONFIG_0]


//>> SET_[TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_0));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[XSTOP3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_XSTOP3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[XSTOP3]

//>> GET_[XSTOP3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_XSTOP3(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP3;
#endif
    return fapi2::getScom(i_target, XSTOP3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[XSTOP3]

//>> PUT_[XSTOP3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_XSTOP3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return fapi2::putScom(i_target, XSTOP3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[XSTOP3]


//>> SET_[XSTOP3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_ENABLE]

//>> SET_[XSTOP3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_ENABLE]

//>> SET_[XSTOP3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_ENABLE]

//>> CLEAR_[XSTOP3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_ENABLE]

//>> GET_[XSTOP3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_ENABLE]

//>> GET_[XSTOP3_ENABLE]
static inline bool GET_XSTOP3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_ENABLE]

//>> SET_[XSTOP3_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_SNOPA]

//>> SET_[XSTOP3_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_SNOPA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_SNOPA]

//>> SET_[XSTOP3_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_SNOPA]

//>> CLEAR_[XSTOP3_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_WAIT_SNOPA]

//>> GET_[XSTOP3_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_WAIT_SNOPA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_WAIT_SNOPA]

//>> GET_[XSTOP3_WAIT_SNOPA]
static inline bool GET_XSTOP3_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_WAIT_SNOPA]

//>> SET_[XSTOP3_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_TRIGGER_OPCG_GO]

//>> SET_[XSTOP3_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_TRIGGER_OPCG_GO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_TRIGGER_OPCG_GO]

//>> SET_[XSTOP3_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_TRIGGER_OPCG_GO]

//>> CLEAR_[XSTOP3_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_TRIGGER_OPCG_GO]

//>> GET_[XSTOP3_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_TRIGGER_OPCG_GO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_TRIGGER_OPCG_GO]

//>> GET_[XSTOP3_TRIGGER_OPCG_GO]
static inline bool GET_XSTOP3_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_TRIGGER_OPCG_GO]

//>> SET_[XSTOP3_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_ALWAYS]

//>> SET_[XSTOP3_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_ALWAYS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_ALWAYS]

//>> SET_[XSTOP3_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_ALWAYS]

//>> CLEAR_[XSTOP3_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_WAIT_ALWAYS]

//>> GET_[XSTOP3_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_WAIT_ALWAYS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_WAIT_ALWAYS]

//>> GET_[XSTOP3_WAIT_ALWAYS]
static inline bool GET_XSTOP3_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_WAIT_ALWAYS]

//>> SET_[XSTOP3_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_PERV]

//>> SET_[XSTOP3_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_PERV]

//>> SET_[XSTOP3_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_PERV]

//>> CLEAR_[XSTOP3_REGION_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_PERV]

//>> GET_[XSTOP3_REGION_PERV]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_PERV]

//>> GET_[XSTOP3_REGION_PERV]
static inline bool GET_XSTOP3_REGION_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_PERV]

//>> SET_[XSTOP3_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT1]

//>> SET_[XSTOP3_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT1]

//>> SET_[XSTOP3_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT1]

//>> CLEAR_[XSTOP3_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT1]

//>> GET_[XSTOP3_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT1]

//>> GET_[XSTOP3_REGION_UNIT1]
static inline bool GET_XSTOP3_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT1]

//>> SET_[XSTOP3_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT2]

//>> SET_[XSTOP3_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT2]

//>> SET_[XSTOP3_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT2]

//>> CLEAR_[XSTOP3_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT2]

//>> GET_[XSTOP3_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT2]

//>> GET_[XSTOP3_REGION_UNIT2]
static inline bool GET_XSTOP3_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT2]

//>> SET_[XSTOP3_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT3]

//>> SET_[XSTOP3_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT3]

//>> SET_[XSTOP3_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT3]

//>> CLEAR_[XSTOP3_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT3]

//>> GET_[XSTOP3_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT3]

//>> GET_[XSTOP3_REGION_UNIT3]
static inline bool GET_XSTOP3_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT3]

//>> SET_[XSTOP3_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT4]

//>> SET_[XSTOP3_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT4]

//>> SET_[XSTOP3_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT4]

//>> CLEAR_[XSTOP3_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT4]

//>> GET_[XSTOP3_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT4]

//>> GET_[XSTOP3_REGION_UNIT4]
static inline bool GET_XSTOP3_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT4]

//>> SET_[XSTOP3_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT5]

//>> SET_[XSTOP3_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT5]

//>> SET_[XSTOP3_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT5]

//>> CLEAR_[XSTOP3_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT5]

//>> GET_[XSTOP3_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT5]

//>> GET_[XSTOP3_REGION_UNIT5]
static inline bool GET_XSTOP3_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT5]

//>> SET_[XSTOP3_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT6]

//>> SET_[XSTOP3_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT6]

//>> SET_[XSTOP3_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT6]

//>> CLEAR_[XSTOP3_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT6]

//>> GET_[XSTOP3_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT6]

//>> GET_[XSTOP3_REGION_UNIT6]
static inline bool GET_XSTOP3_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT6]

//>> SET_[XSTOP3_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT7]

//>> SET_[XSTOP3_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT7]

//>> SET_[XSTOP3_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT7]

//>> CLEAR_[XSTOP3_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT7]

//>> GET_[XSTOP3_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT7]

//>> GET_[XSTOP3_REGION_UNIT7]
static inline bool GET_XSTOP3_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT7]

//>> SET_[XSTOP3_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT8]

//>> SET_[XSTOP3_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT8]

//>> SET_[XSTOP3_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT8]

//>> CLEAR_[XSTOP3_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT8]

//>> GET_[XSTOP3_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT8]

//>> GET_[XSTOP3_REGION_UNIT8]
static inline bool GET_XSTOP3_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT8]

//>> SET_[XSTOP3_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT9]

//>> SET_[XSTOP3_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT9]

//>> SET_[XSTOP3_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT9]

//>> CLEAR_[XSTOP3_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT9]

//>> GET_[XSTOP3_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT9]

//>> GET_[XSTOP3_REGION_UNIT9]
static inline bool GET_XSTOP3_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT9]

//>> SET_[XSTOP3_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT10]

//>> SET_[XSTOP3_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT10]

//>> SET_[XSTOP3_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT10]

//>> CLEAR_[XSTOP3_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT10]

//>> GET_[XSTOP3_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT10]

//>> GET_[XSTOP3_REGION_UNIT10]
static inline bool GET_XSTOP3_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT10]

//>> SET_[XSTOP3_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT11]

//>> SET_[XSTOP3_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT11]

//>> SET_[XSTOP3_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT11]

//>> CLEAR_[XSTOP3_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT11]

//>> GET_[XSTOP3_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT11]

//>> GET_[XSTOP3_REGION_UNIT11]
static inline bool GET_XSTOP3_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT11]

//>> SET_[XSTOP3_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT12]

//>> SET_[XSTOP3_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT12]

//>> SET_[XSTOP3_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT12]

//>> CLEAR_[XSTOP3_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT12]

//>> GET_[XSTOP3_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT12]

//>> GET_[XSTOP3_REGION_UNIT12]
static inline bool GET_XSTOP3_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT12]

//>> SET_[XSTOP3_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT13]

//>> SET_[XSTOP3_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT13]

//>> SET_[XSTOP3_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT13]

//>> CLEAR_[XSTOP3_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT13]

//>> GET_[XSTOP3_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT13]

//>> GET_[XSTOP3_REGION_UNIT13]
static inline bool GET_XSTOP3_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT13]

//>> SET_[XSTOP3_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT14]

//>> SET_[XSTOP3_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT14]

//>> SET_[XSTOP3_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT14]

//>> CLEAR_[XSTOP3_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT14]

//>> GET_[XSTOP3_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT14]

//>> GET_[XSTOP3_REGION_UNIT14]
static inline bool GET_XSTOP3_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT14]

//>> SET_[XSTOP3_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_CYCLES,
           XSTOP3_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access XSTOP3_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_CYCLES]

//>> SET_[XSTOP3_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_CYCLES,
           XSTOP3_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access XSTOP3_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_CYCLES]

//>> GET_[XSTOP3_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_WAIT_CYCLES,
           XSTOP3_WAIT_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access XSTOP3_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_WAIT_CYCLES]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
