/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/proc/reg00057_unused.H $      */
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

#ifndef __PROC_REG00057_H_UNUSED__
#define __PROC_REG00057_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace proc
{
#endif


//>> PREP_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PSI_WRAP_TX_CH_FSM_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PSI_WRAP_TX_CH_FSM_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG]

//>> GET_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PSI_WRAP_TX_CH_FSM_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PSI_WRAP_TX_CH_FSM_REG;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PSI_WRAP_TX_CH_FSM_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG]

//>> PUT_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PSI_WRAP_TX_CH_FSM_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSI_WRAP_TX_CH_FSM_REG));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PSI_WRAP_TX_CH_FSM_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG]


//>> SET_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSI_WRAP_TX_CH_FSM_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM,
           TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM]

//>> SET_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSI_WRAP_TX_CH_FSM_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM,
           TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM]

//>> GET_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSI_WRAP_TX_CH_FSM_REG));
#endif
    return i_data.extractToRight<TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM,
           TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSI_WRAP_TX_CH_FSM_REG_TX_CH_FSM]

//>> PREP_[TP_TPBR_PSIHB_DMA_UP_ADDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PSIHB_DMA_UP_ADDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PSIHB_DMA_UP_ADDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PSIHB_DMA_UP_ADDR]

//>> GET_[TP_TPBR_PSIHB_DMA_UP_ADDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PSIHB_DMA_UP_ADDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PSIHB_DMA_UP_ADDR;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PSIHB_DMA_UP_ADDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PSIHB_DMA_UP_ADDR]

//>> PUT_[TP_TPBR_PSIHB_DMA_UP_ADDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PSIHB_DMA_UP_ADDR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_DMA_UP_ADDR));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PSIHB_DMA_UP_ADDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PSIHB_DMA_UP_ADDR]


//>> SET_[TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_DMA_UP_ADDR));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS,
           TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS]

//>> SET_[TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_DMA_UP_ADDR));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS,
           TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS]

//>> GET_[TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_DMA_UP_ADDR));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS,
           TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_DMA_UP_ADDR_BASE_UPPER_BITS]

//>> SET_[TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_DMA_UP_ADDR));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS,
           TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS]

//>> SET_[TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_DMA_UP_ADDR));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS,
           TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS]

//>> GET_[TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_DMA_UP_ADDR));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS,
           TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_DMA_UP_ADDR_ESCAPE_ADDRESS]

//>> PREP_[TP_TPBR_PSIHB_INTERRUPT_LEVEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PSIHB_INTERRUPT_LEVEL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PSIHB_INTERRUPT_LEVEL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PSIHB_INTERRUPT_LEVEL]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PSIHB_INTERRUPT_LEVEL;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PSIHB_INTERRUPT_LEVEL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL]

//>> PUT_[TP_TPBR_PSIHB_INTERRUPT_LEVEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PSIHB_INTERRUPT_LEVEL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PSIHB_INTERRUPT_LEVEL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PSIHB_INTERRUPT_LEVEL]


//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSI_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_OCC_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_FSI_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LOCAL_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SYSTEM_ATTENTION_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_TPM_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH,
           TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH,
           TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH,
           TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_LPC_OTHER_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_SBE_OR_I2C_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_DIO_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PSU_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_C_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_D_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_I2C_E_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED,
           TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED,
           TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED,
           TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_RESERVED]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]

//>> SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.setBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]

//>> CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return o_data.clearBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]

//>> GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]
static inline bool GET_TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_INTERRUPT_LEVEL));
#endif
    return i_data.getBit<TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_INTERRUPT_LEVEL_PURE_SBE_INTERRUPT_HIGH]

//>> PREP_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline bool GET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline bool GET_TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN0_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> PREP_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID,
           TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID,
           TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID,
           TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ID]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY,
           TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY,
           TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY,
           TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_ATOMIC_LOCK_REG_ACTIVITY]

//>> PREP_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3]

//>> PUT_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3]


//>> SET_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP,
           TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP,
           TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP,
           TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_MULTICAST_GROUP_3_MULTICAST3_GROUP]

//>> PREP_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_RECOV_INTERRUPT_REG_RECOV]

//>> PREP_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_PERV_THOLD_CHECK]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_MALF_PULSE_GEN]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_STOP_HANG_CNT_SYS_XSTP]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_CL_ATOMIC_LOCK]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_HEARTBEAT]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_DISABLE_FORCE_TO_ZERO]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_DISABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_PM_MUX_DISABLE]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_REG_PARITY_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCB_IF_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_HEARTBEAT_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PCBSL_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS,
           TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS,
           TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS,
           TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_MASK_PLL_ERRS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_QME_PAR_DIS]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]
static inline bool GET_TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_SLAVE_CONFIG_REG_FORCE_0_QME]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_XSTOP_INTERRUPT_REG_XSTOP]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OHTMCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OHTMCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OHTMCR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OHTMCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OHTMCR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OHTMCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
