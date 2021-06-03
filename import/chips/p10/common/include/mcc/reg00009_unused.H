/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mcc/reg00009_unused.H $       */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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

#ifndef __MCC_REG00009_H_UNUSED__
#define __MCC_REG00009_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> PREP_[ATCL_CL_CLSCOM_MCWAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_ATCL_CL_CLSCOM_MCWAT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ATCL_CL_CLSCOM_MCWAT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[ATCL_CL_CLSCOM_MCWAT]

//>> GET_[ATCL_CL_CLSCOM_MCWAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_ATCL_CL_CLSCOM_MCWAT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ATCL_CL_CLSCOM_MCWAT;
#endif
    return fapi2::getScom(i_target, ATCL_CL_CLSCOM_MCWAT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT]

//>> PUT_[ATCL_CL_CLSCOM_MCWAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_ATCL_CL_CLSCOM_MCWAT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return fapi2::putScom(i_target, ATCL_CL_CLSCOM_MCWAT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[ATCL_CL_CLSCOM_MCWAT]


//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CMD_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL,
           ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL,
           ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL,
           ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_DISP_RETRY_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED8_9]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_RESERVED8_9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_RESERVED8_9,
           ATCL_CL_CLSCOM_MCWAT_RESERVED8_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED8_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED8_9]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED8_9]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_RESERVED8_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_RESERVED8_9,
           ATCL_CL_CLSCOM_MCWAT_RESERVED8_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED8_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED8_9]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_RESERVED8_9]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_RESERVED8_9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_RESERVED8_9,
           ATCL_CL_CLSCOM_MCWAT_RESERVED8_9_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED8_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_RESERVED8_9]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.setBit<ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]

//>> CLEAR_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]
static inline fapi2::buffer<uint64_t>& CLEAR_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.clearBit<ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]
static inline bool GET_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.getBit<ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_RESERVED11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_RESERVED11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_RESERVED11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_RESERVED11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_RESERVED11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.setBit<ATCL_CL_CLSCOM_MCWAT_RESERVED11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]

//>> CLEAR_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]
static inline fapi2::buffer<uint64_t>& CLEAR_ATCL_CL_CLSCOM_MCWAT_RESERVED11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.clearBit<ATCL_CL_CLSCOM_MCWAT_RESERVED11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_RESERVED11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_RESERVED11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]
static inline bool GET_ATCL_CL_CLSCOM_MCWAT_RESERVED11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.getBit<ATCL_CL_CLSCOM_MCWAT_RESERVED11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_RESERVED11]

//>> SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]

//>> SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]

//>> SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.setBit<P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]

//>> CLEAR_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.clearBit<P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]

//>> GET_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]
static inline fapi2::buffer<uint64_t>& GET_P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]

//>> GET_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]
static inline bool GET_P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.getBit<P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_ATCL_CL_CLSCOM_MCWAT_ENABLE_EARLY_HANG_PULSE]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_RRQ_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_WRQ_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_MERGE_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_DEALLOC_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL,
           ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_CHARB_WAT_CRESP_STALL_SEL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL,
           ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL,
           ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL,
           ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_WAT_BLOCK_WRBUF_AVAIL]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK,
           ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK,
           ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK,
           ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_CLX_DEBUG_SUM_MASK]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.setBit<ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]

//>> CLEAR_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]
static inline fapi2::buffer<uint64_t>& CLEAR_ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.clearBit<ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]
static inline bool GET_ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.getBit<ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_EN_DEBUG_OR]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED59_63]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_RESERVED59_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_RESERVED59_63,
           ATCL_CL_CLSCOM_MCWAT_RESERVED59_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED59_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED59_63]

//>> SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED59_63]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCWAT_RESERVED59_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCWAT_RESERVED59_63,
           ATCL_CL_CLSCOM_MCWAT_RESERVED59_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED59_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCWAT_RESERVED59_63]

//>> GET_[ATCL_CL_CLSCOM_MCWAT_RESERVED59_63]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCWAT_RESERVED59_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCWAT_RESERVED59_63,
           ATCL_CL_CLSCOM_MCWAT_RESERVED59_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCWAT_RESERVED59_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCWAT_RESERVED59_63]

//>> SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]
static inline fapi2::buffer<uint64_t>& SET_P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]

//>> SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]
static inline fapi2::buffer<uint64_t>& SET_P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]

//>> SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]
static inline fapi2::buffer<uint64_t>& SET_P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.setBit<P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]

//>> CLEAR_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.clearBit<P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]

//>> GET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]
static inline fapi2::buffer<uint64_t>& GET_P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]

//>> GET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]
static inline bool GET_P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.getBit<P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RRTO_NO_RETRY_OTHER_P10D20]

//>> SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63]
static inline fapi2::buffer<uint64_t>& SET_P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63,
           P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63]

//>> SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63]
static inline fapi2::buffer<uint64_t>& SET_P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return o_data.insertFromRight<P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63,
           P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63]

//>> GET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63]
static inline fapi2::buffer<uint64_t>& GET_P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCWAT));
#endif
    return i_data.extractToRight<P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63,
           P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_ATCL_CL_CLSCOM_MCWAT_RESERVED60_63]

//>> PREP_[DSTL_DSTLSTATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DSTL_DSTLSTATUS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSTLSTATUS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DSTL_DSTLSTATUS]

//>> GET_[DSTL_DSTLSTATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DSTL_DSTLSTATUS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSTLSTATUS;
#endif
    return fapi2::getScom(i_target, DSTL_DSTLSTATUS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DSTL_DSTLSTATUS]

//>> PUT_[DSTL_DSTLSTATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DSTL_DSTLSTATUS(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return fapi2::putScom(i_target, DSTL_DSTLSTATUS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DSTL_DSTLSTATUS]


//>> SET_[DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return o_data.insertFromRight<DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF,
           DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF]

//>> SET_[DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return o_data.insertFromRight<DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF,
           DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF]

//>> GET_[DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return i_data.extractToRight<DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF,
           DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF]

//>> SET_[DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return o_data.insertFromRight<DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF,
           DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF]

//>> SET_[DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return o_data.insertFromRight<DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF,
           DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF]

//>> GET_[DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return i_data.extractToRight<DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF,
           DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF]

//>> SET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return o_data.insertFromRight<DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS,
           DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS]

//>> SET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return o_data.insertFromRight<DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS,
           DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS]

//>> GET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return i_data.extractToRight<DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS,
           DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS]

//>> SET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return o_data.insertFromRight<DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS,
           DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS]

//>> SET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return o_data.insertFromRight<DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS,
           DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS]

//>> GET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLSTATUS));
#endif
    return i_data.extractToRight<DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS,
           DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS]

//>> PREP_[WDF_WDFCFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WDF_WDFCFG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_WDFCFG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WDF_WDFCFG]

//>> GET_[WDF_WDFCFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WDF_WDFCFG(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_WDFCFG;
#endif
    return fapi2::getScom(i_target, WDF_WDFCFG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WDF_WDFCFG]

//>> PUT_[WDF_WDFCFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WDF_WDFCFG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return fapi2::putScom(i_target, WDF_WDFCFG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WDF_WDFCFG]


//>> SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]

//>> SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]

//>> SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.setBit<WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]

//>> CLEAR_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.clearBit<WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]

//>> GET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]

//>> GET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]
static inline bool GET_WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.getBit<WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS]

//>> SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]

//>> SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]

//>> SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.setBit<WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]

//>> CLEAR_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.clearBit<WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]

//>> GET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]

//>> GET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]
static inline bool GET_WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.getBit<WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS]

//>> SET_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]

//>> SET_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]

//>> SET_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.setBit<WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]

//>> CLEAR_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.clearBit<WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]

//>> GET_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]

//>> GET_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]
static inline bool GET_WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.getBit<WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE]

//>> SET_[WDF_WDFCFG_WDFCFG_3_8_SPARE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_WDFCFG_3_8_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_WDFCFG_3_8_SPARE,
           WDF_WDFCFG_WDFCFG_3_8_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_WDFCFG_3_8_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_WDFCFG_3_8_SPARE]

//>> SET_[WDF_WDFCFG_WDFCFG_3_8_SPARE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_WDFCFG_3_8_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_WDFCFG_3_8_SPARE,
           WDF_WDFCFG_WDFCFG_3_8_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_WDFCFG_3_8_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_WDFCFG_3_8_SPARE]

//>> GET_[WDF_WDFCFG_WDFCFG_3_8_SPARE]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_WDFCFG_3_8_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_WDFCFG_3_8_SPARE,
           WDF_WDFCFG_WDFCFG_3_8_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_WDFCFG_3_8_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_WDFCFG_3_8_SPARE]

//>> SET_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]
static inline fapi2::buffer<uint64_t>& SET_P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]

//>> SET_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]
static inline fapi2::buffer<uint64_t>& SET_P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]

//>> SET_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]
static inline fapi2::buffer<uint64_t>& SET_P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.setBit<P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]

//>> CLEAR_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.clearBit<P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]

//>> GET_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]
static inline fapi2::buffer<uint64_t>& GET_P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]

//>> GET_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]
static inline bool GET_P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.getBit<P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY]

//>> SET_[P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE,
           P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE]

//>> SET_[P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE,
           P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE]

//>> GET_[P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE]
static inline fapi2::buffer<uint64_t>& GET_P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE,
           P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE]

//>> SET_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]

//>> SET_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]

//>> SET_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.setBit<WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]

//>> CLEAR_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.clearBit<WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]

//>> GET_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]

//>> GET_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]
static inline bool GET_WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.getBit<WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE]

//>> SET_[WDF_WDFCFG_WDFCFG_10_11_SPARE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_WDFCFG_10_11_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_WDFCFG_10_11_SPARE,
           WDF_WDFCFG_WDFCFG_10_11_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_WDFCFG_10_11_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_WDFCFG_10_11_SPARE]

//>> SET_[WDF_WDFCFG_WDFCFG_10_11_SPARE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_WDFCFG_10_11_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_WDFCFG_10_11_SPARE,
           WDF_WDFCFG_WDFCFG_10_11_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_WDFCFG_10_11_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_WDFCFG_10_11_SPARE]

//>> GET_[WDF_WDFCFG_WDFCFG_10_11_SPARE]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_WDFCFG_10_11_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_WDFCFG_10_11_SPARE,
           WDF_WDFCFG_WDFCFG_10_11_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_WDFCFG_10_11_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_WDFCFG_10_11_SPARE]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ]

//>> GET_[WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ]

//>> GET_[WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ]

//>> GET_[WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ]

//>> GET_[WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ,
           WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.setBit<WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]

//>> CLEAR_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.clearBit<WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]

//>> GET_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]

//>> GET_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]
static inline bool GET_WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.getBit<WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]

//>> SET_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.setBit<WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]

//>> CLEAR_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]
static inline fapi2::buffer<uint64_t>& CLEAR_WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.clearBit<WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]

//>> GET_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]

//>> GET_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]
static inline bool GET_WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.getBit<WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ]

//>> SET_[WDF_WDFCFG_WDFCFG_22_31_SPARE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_WDFCFG_22_31_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_WDFCFG_22_31_SPARE,
           WDF_WDFCFG_WDFCFG_22_31_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_WDFCFG_22_31_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_WDFCFG_22_31_SPARE]

//>> SET_[WDF_WDFCFG_WDFCFG_22_31_SPARE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_WDFCFG_22_31_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_WDFCFG_22_31_SPARE,
           WDF_WDFCFG_WDFCFG_22_31_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_WDFCFG_22_31_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_WDFCFG_22_31_SPARE]

//>> GET_[WDF_WDFCFG_WDFCFG_22_31_SPARE]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_WDFCFG_22_31_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_WDFCFG_22_31_SPARE,
           WDF_WDFCFG_WDFCFG_22_31_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_WDFCFG_22_31_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_WDFCFG_22_31_SPARE]

//>> SET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT,
           WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT]

//>> SET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT,
           WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT]

//>> GET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT,
           WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT]

//>> SET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE,
           WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE]

//>> SET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE]
static inline fapi2::buffer<uint64_t>& SET_WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return o_data.insertFromRight<WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE,
           WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE]

//>> GET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE]
static inline fapi2::buffer<uint64_t>& GET_WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_WDFCFG));
#endif
    return i_data.extractToRight<WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE,
           WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE]

//>> PREP_[WRITE_WRT_WDF_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WRITE_WRT_WDF_ECC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WRITE_WRT_WDF_ECC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WRITE_WRT_WDF_ECC]

//>> GET_[WRITE_WRT_WDF_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WRITE_WRT_WDF_ECC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WRITE_WRT_WDF_ECC;
#endif
    return fapi2::getScom(i_target, WRITE_WRT_WDF_ECC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WRITE_WRT_WDF_ECC]

//>> PUT_[WRITE_WRT_WDF_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WRITE_WRT_WDF_ECC(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return fapi2::putScom(i_target, WRITE_WRT_WDF_ECC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WRITE_WRT_WDF_ECC]


//>> SET_[WRITE_WRT_WDF_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_0_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_0_ERR_TYPE,
           WRITE_WRT_WDF_ECC_0_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_0_ERR_TYPE]

//>> SET_[WRITE_WRT_WDF_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_0_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_0_ERR_TYPE,
           WRITE_WRT_WDF_ECC_0_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_0_ERR_TYPE]

//>> GET_[WRITE_WRT_WDF_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_WDF_ECC_0_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_WDF_ECC_0_ERR_TYPE,
           WRITE_WRT_WDF_ECC_0_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_WDF_ECC_0_ERR_TYPE]

//>> SET_[WRITE_WRT_WDF_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_0_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_0_SYNDROME,
           WRITE_WRT_WDF_ECC_0_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_0_SYNDROME]

//>> SET_[WRITE_WRT_WDF_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_0_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_0_SYNDROME,
           WRITE_WRT_WDF_ECC_0_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_0_SYNDROME]

//>> GET_[WRITE_WRT_WDF_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_WDF_ECC_0_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_WDF_ECC_0_SYNDROME,
           WRITE_WRT_WDF_ECC_0_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_WDF_ECC_0_SYNDROME]

//>> SET_[WRITE_WRT_WDF_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_1_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_1_ERR_TYPE,
           WRITE_WRT_WDF_ECC_1_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_1_ERR_TYPE]

//>> SET_[WRITE_WRT_WDF_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_1_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_1_ERR_TYPE,
           WRITE_WRT_WDF_ECC_1_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_1_ERR_TYPE]

//>> GET_[WRITE_WRT_WDF_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_WDF_ECC_1_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_WDF_ECC_1_ERR_TYPE,
           WRITE_WRT_WDF_ECC_1_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_WDF_ECC_1_ERR_TYPE]

//>> SET_[WRITE_WRT_WDF_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_1_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_1_SYNDROME,
           WRITE_WRT_WDF_ECC_1_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_1_SYNDROME]

//>> SET_[WRITE_WRT_WDF_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_1_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_1_SYNDROME,
           WRITE_WRT_WDF_ECC_1_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_1_SYNDROME]

//>> GET_[WRITE_WRT_WDF_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_WDF_ECC_1_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_WDF_ECC_1_SYNDROME,
           WRITE_WRT_WDF_ECC_1_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_WDF_ECC_1_SYNDROME]

//>> SET_[WRITE_WRT_WDF_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_2_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_2_ERR_TYPE,
           WRITE_WRT_WDF_ECC_2_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_2_ERR_TYPE]

//>> SET_[WRITE_WRT_WDF_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_2_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_2_ERR_TYPE,
           WRITE_WRT_WDF_ECC_2_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_2_ERR_TYPE]

//>> GET_[WRITE_WRT_WDF_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_WDF_ECC_2_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_WDF_ECC_2_ERR_TYPE,
           WRITE_WRT_WDF_ECC_2_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_WDF_ECC_2_ERR_TYPE]

//>> SET_[WRITE_WRT_WDF_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_2_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_2_SYNDROME,
           WRITE_WRT_WDF_ECC_2_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_2_SYNDROME]

//>> SET_[WRITE_WRT_WDF_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_2_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_2_SYNDROME,
           WRITE_WRT_WDF_ECC_2_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_2_SYNDROME]

//>> GET_[WRITE_WRT_WDF_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_WDF_ECC_2_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_WDF_ECC_2_SYNDROME,
           WRITE_WRT_WDF_ECC_2_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_WDF_ECC_2_SYNDROME]

//>> SET_[WRITE_WRT_WDF_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_3_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_3_ERR_TYPE,
           WRITE_WRT_WDF_ECC_3_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_3_ERR_TYPE]

//>> SET_[WRITE_WRT_WDF_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_3_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_3_ERR_TYPE,
           WRITE_WRT_WDF_ECC_3_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_3_ERR_TYPE]

//>> GET_[WRITE_WRT_WDF_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_WDF_ECC_3_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_WDF_ECC_3_ERR_TYPE,
           WRITE_WRT_WDF_ECC_3_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_WDF_ECC_3_ERR_TYPE]

//>> SET_[WRITE_WRT_WDF_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_3_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_3_SYNDROME,
           WRITE_WRT_WDF_ECC_3_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_3_SYNDROME]

//>> SET_[WRITE_WRT_WDF_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_WDF_ECC_3_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_WDF_ECC_3_SYNDROME,
           WRITE_WRT_WDF_ECC_3_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_WDF_ECC_3_SYNDROME]

//>> GET_[WRITE_WRT_WDF_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_WDF_ECC_3_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_WDF_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_WDF_ECC_3_SYNDROME,
           WRITE_WRT_WDF_ECC_3_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_WDF_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_WDF_ECC_3_SYNDROME]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
