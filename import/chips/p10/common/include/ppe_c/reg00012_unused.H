/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00012_unused.H $     */
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

#ifndef __PPE_C_REG00012_H_UNUSED__
#define __PPE_C_REG00012_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_DHCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DHCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DHCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DHCR]

//>> GET_[CPMS_DHCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DHCR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DHCR;
#endif
    return fapi2::getScom(i_target, CPMS_DHCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DHCR]

//>> PUT_[CPMS_DHCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DHCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return fapi2::putScom(i_target, CPMS_DHCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DHCR]


//>> SET_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]

//>> SET_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]

//>> SET_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.setBit<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]

//>> CLEAR_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.clearBit<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]

//>> GET_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]

//>> GET_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]
static inline bool GET_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.getBit<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHCR_FREEZE_HISTORY_ON_LARGE]

//>> SET_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]

//>> SET_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]

//>> SET_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.setBit<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]

//>> CLEAR_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.clearBit<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]

//>> GET_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]

//>> GET_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]
static inline bool GET_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.getBit<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE]

//>> SET_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]

//>> SET_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]

//>> SET_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.setBit<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]

//>> CLEAR_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.clearBit<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]

//>> GET_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]

//>> GET_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]
static inline bool GET_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.getBit<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHCR_ADJACENT_WARN_RECORD_MODE]

//>> SET_[CPMS_DHCR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_SPARE,
           CPMS_DHCR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHCR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_SPARE]

//>> SET_[CPMS_DHCR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_SPARE,
           CPMS_DHCR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHCR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_SPARE]

//>> GET_[CPMS_DHCR_SPARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_SPARE,
           CPMS_DHCR_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHCR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHCR_SPARE]

//>> SET_[CPMS_DHCR_EVENT_HISTORY_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_EVENT_HISTORY_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_EVENT_HISTORY_SELECT,
           CPMS_DHCR_EVENT_HISTORY_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHCR_EVENT_HISTORY_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_EVENT_HISTORY_SELECT]

//>> SET_[CPMS_DHCR_EVENT_HISTORY_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_EVENT_HISTORY_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_EVENT_HISTORY_SELECT,
           CPMS_DHCR_EVENT_HISTORY_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHCR_EVENT_HISTORY_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_EVENT_HISTORY_SELECT]

//>> GET_[CPMS_DHCR_EVENT_HISTORY_SELECT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_EVENT_HISTORY_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_EVENT_HISTORY_SELECT,
           CPMS_DHCR_EVENT_HISTORY_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHCR_EVENT_HISTORY_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHCR_EVENT_HISTORY_SELECT]

//>> SET_[CPMS_DHCR_EVENT_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_EVENT_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_EVENT_COUNT,
           CPMS_DHCR_EVENT_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHCR_EVENT_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_EVENT_COUNT]

//>> SET_[CPMS_DHCR_EVENT_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_EVENT_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_EVENT_COUNT,
           CPMS_DHCR_EVENT_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHCR_EVENT_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHCR_EVENT_COUNT]

//>> GET_[CPMS_DHCR_EVENT_COUNT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_EVENT_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_EVENT_COUNT,
           CPMS_DHCR_EVENT_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHCR_EVENT_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHCR_EVENT_COUNT]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
