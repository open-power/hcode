/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pauc/reg00011_unused.H $      */
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

#ifndef __PAUC_REG00011_H_UNUSED__
#define __PAUC_REG00011_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> PREP_[DL_PPE_WRAP_XIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_XIRAMGA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIRAMGA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_XIRAMGA]

//>> GET_[DL_PPE_WRAP_XIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_XIRAMGA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIRAMGA;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_XIRAMGA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMGA]

//>> PUT_[DL_PPE_WRAP_XIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_XIRAMGA(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_XIRAMGA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_XIRAMGA]


//>> SET_[DL_PPE_WRAP_XIRAMGA_GA_IR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMGA_GA_IR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMGA_GA_IR,
           DL_PPE_WRAP_XIRAMGA_GA_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMGA_GA_IR]

//>> SET_[DL_PPE_WRAP_XIRAMGA_GA_IR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMGA_GA_IR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMGA_GA_IR,
           DL_PPE_WRAP_XIRAMGA_GA_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMGA_GA_IR]

//>> GET_[DL_PPE_WRAP_XIRAMGA_GA_IR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMGA_GA_IR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMGA_GA_IR,
           DL_PPE_WRAP_XIRAMGA_GA_IR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMGA_GA_IR]

//>> SET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMGA_RA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMGA_RA_SPRG0,
           DL_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_RA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]

//>> SET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMGA_RA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMGA_RA_SPRG0,
           DL_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_RA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]

//>> GET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMGA_RA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMGA_RA_SPRG0,
           DL_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_RA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]

//>> PREP_[DL_SCOM_MAC_FIR_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_SCOM_MAC_FIR_REG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_SCOM_MAC_FIR_REG_RW]

//>> GET_[DL_SCOM_MAC_FIR_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_SCOM_MAC_FIR_REG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_RW;
#endif
    return fapi2::getScom(i_target, DL_SCOM_MAC_FIR_REG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_RW]

//>> PUT_[DL_SCOM_MAC_FIR_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_SCOM_MAC_FIR_REG_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_SCOM_MAC_FIR_REG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_SCOM_MAC_FIR_REG_RW]

//>> PREP_[DL_SCOM_MAC_FIR_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_SCOM_MAC_FIR_REG_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_SCOM_MAC_FIR_REG_WO_AND]

//>> GET_[DL_SCOM_MAC_FIR_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_SCOM_MAC_FIR_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_WO_AND;
#endif
    return fapi2::getScom(i_target, DL_SCOM_MAC_FIR_REG_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_WO_AND]

//>> PUT_[DL_SCOM_MAC_FIR_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_SCOM_MAC_FIR_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_SCOM_MAC_FIR_REG_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_SCOM_MAC_FIR_REG_WO_AND]

//>> PREP_[DL_SCOM_MAC_FIR_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_SCOM_MAC_FIR_REG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_SCOM_MAC_FIR_REG_WO_OR]

//>> GET_[DL_SCOM_MAC_FIR_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_SCOM_MAC_FIR_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_WO_OR;
#endif
    return fapi2::getScom(i_target, DL_SCOM_MAC_FIR_REG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_WO_OR]

//>> PUT_[DL_SCOM_MAC_FIR_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_SCOM_MAC_FIR_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_SCOM_MAC_FIR_REG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_SCOM_MAC_FIR_REG_WO_OR]


//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_HALTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_HALTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_HALTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_HALTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_HALTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_HALTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_HALTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> PREP_[PB_MAILBOX_00_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_00_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_00_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_00_REG]

//>> GET_[PB_MAILBOX_00_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_00_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_00_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_00_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_00_REG]

//>> PUT_[PB_MAILBOX_00_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_00_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_00_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_00_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_00_REG]


//>> PREP_[PB_MAILBOX_01_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_01_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_01_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_01_REG]

//>> GET_[PB_MAILBOX_01_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_01_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_01_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_01_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_01_REG]

//>> PUT_[PB_MAILBOX_01_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_01_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_01_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_01_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_01_REG]


//>> PREP_[PHY_PPE_WRAP_XIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_XIDBGINF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIDBGINF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_XIDBGINF]

//>> GET_[PHY_PPE_WRAP_XIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_XIDBGINF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIDBGINF;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_XIDBGINF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGINF]

//>> PUT_[PHY_PPE_WRAP_XIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_XIDBGINF(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_XIDBGINF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_XIDBGINF]


//>> SET_[PHY_PPE_WRAP_XIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGINF_SRR0,
           PHY_PPE_WRAP_XIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGINF_SRR0]

//>> SET_[PHY_PPE_WRAP_XIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGINF_SRR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGINF_SRR0,
           PHY_PPE_WRAP_XIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGINF_SRR0]

//>> GET_[PHY_PPE_WRAP_XIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGINF_SRR0,
           PHY_PPE_WRAP_XIDBGINF_SRR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGINF_SRR0]

//>> SET_[PHY_PPE_WRAP_XIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGINF_LR,
           PHY_PPE_WRAP_XIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_LR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGINF_LR]

//>> SET_[PHY_PPE_WRAP_XIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGINF_LR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGINF_LR,
           PHY_PPE_WRAP_XIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_LR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGINF_LR]

//>> GET_[PHY_PPE_WRAP_XIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGINF_LR,
           PHY_PPE_WRAP_XIDBGINF_LR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_LR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGINF_LR]

//>> PREP_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_MODE_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_MODE_REG_2]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_MODE_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_MODE_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2]

//>> PUT_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_MODE_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_MODE_REG_2]


//>> SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> PREP_[TRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_CONFIG_1]

//>> GET_[TRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_1;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_1]

//>> PUT_[TRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_1));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_CONFIG_1]


//>> SET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_1));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[DL_PPE_WRAP_XIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_XIRAMGA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_XIRAMGA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_XIRAMGA]

//>> GET_[DL_PPE_WRAP_XIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_XIRAMGA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_XIRAMGA;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_XIRAMGA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMGA]

//>> PUT_[DL_PPE_WRAP_XIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_XIRAMGA(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_XIRAMGA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_XIRAMGA]


//>> SET_[DL_PPE_WRAP_XIRAMGA_GA_IR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMGA_GA_IR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMGA_GA_IR,
           DL_PPE_WRAP_XIRAMGA_GA_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMGA_GA_IR]

//>> SET_[DL_PPE_WRAP_XIRAMGA_GA_IR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMGA_GA_IR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMGA_GA_IR,
           DL_PPE_WRAP_XIRAMGA_GA_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMGA_GA_IR]

//>> GET_[DL_PPE_WRAP_XIRAMGA_GA_IR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMGA_GA_IR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMGA_GA_IR,
           DL_PPE_WRAP_XIRAMGA_GA_IR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMGA_GA_IR]

//>> SET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMGA_RA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMGA_RA_SPRG0,
           DL_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_RA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]

//>> SET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMGA_RA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMGA_RA_SPRG0,
           DL_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_RA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]

//>> GET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMGA_RA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMGA));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMGA_RA_SPRG0,
           DL_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMGA_RA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMGA_RA_SPRG0]

//>> PREP_[DL_SCOM_MAC_FIR_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_SCOM_MAC_FIR_REG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_SCOM_MAC_FIR_REG_RW]

//>> GET_[DL_SCOM_MAC_FIR_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_SCOM_MAC_FIR_REG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_RW;
#endif
    return fapi2::getScom(i_target, DL_SCOM_MAC_FIR_REG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_RW]

//>> PUT_[DL_SCOM_MAC_FIR_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_SCOM_MAC_FIR_REG_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_SCOM_MAC_FIR_REG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_SCOM_MAC_FIR_REG_RW]

//>> PREP_[DL_SCOM_MAC_FIR_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_SCOM_MAC_FIR_REG_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_SCOM_MAC_FIR_REG_WO_AND]

//>> GET_[DL_SCOM_MAC_FIR_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_SCOM_MAC_FIR_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_WO_AND;
#endif
    return fapi2::getScom(i_target, DL_SCOM_MAC_FIR_REG_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_WO_AND]

//>> PUT_[DL_SCOM_MAC_FIR_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_SCOM_MAC_FIR_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_SCOM_MAC_FIR_REG_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_SCOM_MAC_FIR_REG_WO_AND]

//>> PREP_[DL_SCOM_MAC_FIR_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_SCOM_MAC_FIR_REG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_SCOM_MAC_FIR_REG_WO_OR]

//>> GET_[DL_SCOM_MAC_FIR_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_SCOM_MAC_FIR_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_SCOM_MAC_FIR_REG_WO_OR;
#endif
    return fapi2::getScom(i_target, DL_SCOM_MAC_FIR_REG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_WO_OR]

//>> PUT_[DL_SCOM_MAC_FIR_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_SCOM_MAC_FIR_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_SCOM_MAC_FIR_REG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_SCOM_MAC_FIR_REG_WO_OR]


//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_INT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_EXT_HWERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALT_DEBUG]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_HALTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_HALTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_HALTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_HALTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_HALTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_HALTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_HALTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_HALTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_HALTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_HALTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_HALTED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_WATCHDOG_TIMEOUT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_MISSED_SCRUB_TICK]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_ABORT]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_FATAL_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_WARNING]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_DFT_ERROR]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_RECAL_NOT_RUN]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_THREAD_LOCKED]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_6]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_REG_PPE_CODE_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]
static inline bool GET_DL_SCOM_MAC_FIR_REG_PPE_CODE_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_REG_RW, DL_SCOM_MAC_FIR_REG_WO_AND, DL_SCOM_MAC_FIR_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_REG_PPE_CODE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_REG_PPE_CODE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_REG_PPE_CODE_7]

//>> PREP_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_MODE_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_MODE_REG_2]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_MODE_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_MODE_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2]

//>> PUT_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_MODE_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_MODE_REG_2]


//>> SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> PREP_[PB_MAILBOX_00_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_00_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_00_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_00_REG]

//>> GET_[PB_MAILBOX_00_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_00_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_00_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_00_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_00_REG]

//>> PUT_[PB_MAILBOX_00_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_00_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_00_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_00_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_00_REG]


//>> PREP_[PB_MAILBOX_01_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_01_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_01_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_01_REG]

//>> GET_[PB_MAILBOX_01_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_01_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_01_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_01_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_01_REG]

//>> PUT_[PB_MAILBOX_01_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_01_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_01_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_01_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_01_REG]


//>> PREP_[PHY_PPE_WRAP_XIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_XIDBGINF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIDBGINF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_XIDBGINF]

//>> GET_[PHY_PPE_WRAP_XIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_XIDBGINF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIDBGINF;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_XIDBGINF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGINF]

//>> PUT_[PHY_PPE_WRAP_XIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_XIDBGINF(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_XIDBGINF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_XIDBGINF]


//>> SET_[PHY_PPE_WRAP_XIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGINF_SRR0,
           PHY_PPE_WRAP_XIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGINF_SRR0]

//>> SET_[PHY_PPE_WRAP_XIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGINF_SRR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGINF_SRR0,
           PHY_PPE_WRAP_XIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGINF_SRR0]

//>> GET_[PHY_PPE_WRAP_XIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGINF_SRR0,
           PHY_PPE_WRAP_XIDBGINF_SRR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGINF_SRR0]

//>> SET_[PHY_PPE_WRAP_XIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGINF_LR,
           PHY_PPE_WRAP_XIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_LR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGINF_LR]

//>> SET_[PHY_PPE_WRAP_XIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGINF_LR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGINF_LR,
           PHY_PPE_WRAP_XIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_LR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGINF_LR]

//>> GET_[PHY_PPE_WRAP_XIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGINF));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGINF_LR,
           PHY_PPE_WRAP_XIDBGINF_LR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGINF_LR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGINF_LR]

//>> PREP_[TRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_CONFIG_1]

//>> GET_[TRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_1;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_1]

//>> PUT_[TRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_1));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_CONFIG_1]


//>> SET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_1));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
