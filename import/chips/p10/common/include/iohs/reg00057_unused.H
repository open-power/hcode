/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/iohs/reg00057_unused.H $      */
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

#ifndef __IOHS_REG00057_H_UNUSED__
#define __IOHS_REG00057_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace iohs
{
#endif


//>> PREP_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG]

//>> GET_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG;
#endif
    return fapi2::getScom(i_target, IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG]

//>> PUT_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG));
#endif
    return fapi2::putScom(i_target, IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG]


//>> SET_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG));
#endif
    return o_data.insertFromRight<IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK,
           IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK]

//>> SET_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG));
#endif
    return o_data.insertFromRight<IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK,
           IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK]

//>> GET_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK]
static inline fapi2::buffer<uint64_t>& GET_IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG));
#endif
    return i_data.extractToRight<IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK,
           IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_TXCTL_TX_CTL_SM_REGS_FIR_MASK_PG_TX_PG_FIR_ERRS_MASK]

//>> PREP_[MULTICAST_GROUP_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MULTICAST_GROUP_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MULTICAST_GROUP_4]

//>> GET_[MULTICAST_GROUP_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MULTICAST_GROUP_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_4;
#endif
    return fapi2::getScom(i_target, MULTICAST_GROUP_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MULTICAST_GROUP_4]

//>> PUT_[MULTICAST_GROUP_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MULTICAST_GROUP_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_4));
#endif
    return fapi2::putScom(i_target, MULTICAST_GROUP_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MULTICAST_GROUP_4]


//>> SET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_4_MULTICAST4_GROUP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_4));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_4_MULTICAST4_GROUP,
           MULTICAST_GROUP_4_MULTICAST4_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access MULTICAST_GROUP_4_MULTICAST4_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]

//>> SET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_4_MULTICAST4_GROUP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_4));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_4_MULTICAST4_GROUP,
           MULTICAST_GROUP_4_MULTICAST4_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access MULTICAST_GROUP_4_MULTICAST4_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]

//>> GET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]
static inline fapi2::buffer<uint64_t>& GET_MULTICAST_GROUP_4_MULTICAST4_GROUP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_4));
#endif
    return i_data.extractToRight<MULTICAST_GROUP_4_MULTICAST4_GROUP,
           MULTICAST_GROUP_4_MULTICAST4_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access MULTICAST_GROUP_4_MULTICAST4_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]

//>> PREP_[PRE_COUNTER_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PRE_COUNTER_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PRE_COUNTER_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PRE_COUNTER_REG]

//>> GET_[PRE_COUNTER_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PRE_COUNTER_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PRE_COUNTER_REG;
#endif
    return fapi2::getScom(i_target, PRE_COUNTER_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PRE_COUNTER_REG]

//>> PUT_[PRE_COUNTER_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PRE_COUNTER_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PRE_COUNTER_REG));
#endif
    return fapi2::putScom(i_target, PRE_COUNTER_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PRE_COUNTER_REG]


//>> SET_[PRE_COUNTER_REG_PRE_COUNTER]
static inline fapi2::buffer<uint64_t>& SET_PRE_COUNTER_REG_PRE_COUNTER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRE_COUNTER_REG));
#endif
    return o_data.insertFromRight<PRE_COUNTER_REG_PRE_COUNTER,
           PRE_COUNTER_REG_PRE_COUNTER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access PRE_COUNTER_REG_PRE_COUNTER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PRE_COUNTER_REG_PRE_COUNTER]

//>> SET_[PRE_COUNTER_REG_PRE_COUNTER]
static inline fapi2::buffer<uint64_t>& SET_PRE_COUNTER_REG_PRE_COUNTER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRE_COUNTER_REG));
#endif
    return o_data.insertFromRight<PRE_COUNTER_REG_PRE_COUNTER,
           PRE_COUNTER_REG_PRE_COUNTER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access PRE_COUNTER_REG_PRE_COUNTER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PRE_COUNTER_REG_PRE_COUNTER]

//>> GET_[PRE_COUNTER_REG_PRE_COUNTER]
static inline fapi2::buffer<uint64_t>& GET_PRE_COUNTER_REG_PRE_COUNTER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRE_COUNTER_REG));
#endif
    return i_data.extractToRight<PRE_COUNTER_REG_PRE_COUNTER,
           PRE_COUNTER_REG_PRE_COUNTER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access PRE_COUNTER_REG_PRE_COUNTER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PRE_COUNTER_REG_PRE_COUNTER]

//>> PREP_[REGS_PRX1_DLR_APCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REGS_PRX1_DLR_APCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGS_PRX1_DLR_APCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REGS_PRX1_DLR_APCR]

//>> GET_[REGS_PRX1_DLR_APCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REGS_PRX1_DLR_APCR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGS_PRX1_DLR_APCR;
#endif
    return fapi2::getScom(i_target, REGS_PRX1_DLR_APCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR]

//>> PUT_[REGS_PRX1_DLR_APCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REGS_PRX1_DLR_APCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return fapi2::putScom(i_target, REGS_PRX1_DLR_APCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REGS_PRX1_DLR_APCR]


//>> SET_[REGS_PRX1_DLR_APCR_LINK_POPULATED]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_LINK_POPULATED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_LINK_POPULATED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_POPULATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_LINK_POPULATED]

//>> SET_[REGS_PRX1_DLR_APCR_LINK_POPULATED]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_LINK_POPULATED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_LINK_POPULATED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_POPULATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_LINK_POPULATED]

//>> SET_[REGS_PRX1_DLR_APCR_LINK_POPULATED]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_LINK_POPULATED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.setBit<REGS_PRX1_DLR_APCR_LINK_POPULATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_POPULATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_LINK_POPULATED]

//>> CLEAR_[REGS_PRX1_DLR_APCR_LINK_POPULATED]
static inline fapi2::buffer<uint64_t>& CLEAR_REGS_PRX1_DLR_APCR_LINK_POPULATED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.clearBit<REGS_PRX1_DLR_APCR_LINK_POPULATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_POPULATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REGS_PRX1_DLR_APCR_LINK_POPULATED]

//>> GET_[REGS_PRX1_DLR_APCR_LINK_POPULATED]
static inline fapi2::buffer<uint64_t>& GET_REGS_PRX1_DLR_APCR_LINK_POPULATED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.extractToRight<REGS_PRX1_DLR_APCR_LINK_POPULATED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_POPULATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_LINK_POPULATED]

//>> GET_[REGS_PRX1_DLR_APCR_LINK_POPULATED]
static inline bool GET_REGS_PRX1_DLR_APCR_LINK_POPULATED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.getBit<REGS_PRX1_DLR_APCR_LINK_POPULATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_POPULATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_LINK_POPULATED]

//>> SET_[REGS_PRX1_DLR_APCR_LINK_TYPE]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_LINK_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_LINK_TYPE,
           REGS_PRX1_DLR_APCR_LINK_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_LINK_TYPE]

//>> SET_[REGS_PRX1_DLR_APCR_LINK_TYPE]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_LINK_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_LINK_TYPE,
           REGS_PRX1_DLR_APCR_LINK_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_LINK_TYPE]

//>> GET_[REGS_PRX1_DLR_APCR_LINK_TYPE]
static inline fapi2::buffer<uint64_t>& GET_REGS_PRX1_DLR_APCR_LINK_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.extractToRight<REGS_PRX1_DLR_APCR_LINK_TYPE,
           REGS_PRX1_DLR_APCR_LINK_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_LINK_TYPE]

//>> SET_[REGS_PRX1_DLR_APCR_LINK_INFO]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_LINK_INFO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_LINK_INFO,
           REGS_PRX1_DLR_APCR_LINK_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_INFO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_LINK_INFO]

//>> SET_[REGS_PRX1_DLR_APCR_LINK_INFO]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_LINK_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_LINK_INFO,
           REGS_PRX1_DLR_APCR_LINK_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_INFO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_LINK_INFO]

//>> GET_[REGS_PRX1_DLR_APCR_LINK_INFO]
static inline fapi2::buffer<uint64_t>& GET_REGS_PRX1_DLR_APCR_LINK_INFO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.extractToRight<REGS_PRX1_DLR_APCR_LINK_INFO,
           REGS_PRX1_DLR_APCR_LINK_INFO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_LINK_INFO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_LINK_INFO]

//>> SET_[REGS_PRX1_DLR_APCR_DL_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_DL_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_DL_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DL_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_DL_ENABLE]

//>> SET_[REGS_PRX1_DLR_APCR_DL_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_DL_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_DL_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DL_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_DL_ENABLE]

//>> SET_[REGS_PRX1_DLR_APCR_DL_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_DL_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.setBit<REGS_PRX1_DLR_APCR_DL_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DL_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_DL_ENABLE]

//>> CLEAR_[REGS_PRX1_DLR_APCR_DL_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_REGS_PRX1_DLR_APCR_DL_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.clearBit<REGS_PRX1_DLR_APCR_DL_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DL_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REGS_PRX1_DLR_APCR_DL_ENABLE]

//>> GET_[REGS_PRX1_DLR_APCR_DL_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_REGS_PRX1_DLR_APCR_DL_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.extractToRight<REGS_PRX1_DLR_APCR_DL_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DL_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_DL_ENABLE]

//>> GET_[REGS_PRX1_DLR_APCR_DL_ENABLE]
static inline bool GET_REGS_PRX1_DLR_APCR_DL_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.getBit<REGS_PRX1_DLR_APCR_DL_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DL_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_DL_ENABLE]

//>> SET_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_FREEZE_PROXY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_FREEZE_PROXY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_FREEZE_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]

//>> SET_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_FREEZE_PROXY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_FREEZE_PROXY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_FREEZE_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]

//>> SET_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_FREEZE_PROXY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.setBit<REGS_PRX1_DLR_APCR_FREEZE_PROXY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_FREEZE_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]

//>> CLEAR_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]
static inline fapi2::buffer<uint64_t>& CLEAR_REGS_PRX1_DLR_APCR_FREEZE_PROXY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.clearBit<REGS_PRX1_DLR_APCR_FREEZE_PROXY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_FREEZE_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]

//>> GET_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]
static inline fapi2::buffer<uint64_t>& GET_REGS_PRX1_DLR_APCR_FREEZE_PROXY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.extractToRight<REGS_PRX1_DLR_APCR_FREEZE_PROXY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_FREEZE_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]

//>> GET_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]
static inline bool GET_REGS_PRX1_DLR_APCR_FREEZE_PROXY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.getBit<REGS_PRX1_DLR_APCR_FREEZE_PROXY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_FREEZE_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_FREEZE_PROXY]

//>> SET_[REGS_PRX1_DLR_APCR_WINDOW_SELECT]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_WINDOW_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_WINDOW_SELECT,
           REGS_PRX1_DLR_APCR_WINDOW_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_WINDOW_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_WINDOW_SELECT]

//>> SET_[REGS_PRX1_DLR_APCR_WINDOW_SELECT]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_WINDOW_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_WINDOW_SELECT,
           REGS_PRX1_DLR_APCR_WINDOW_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_WINDOW_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_WINDOW_SELECT]

//>> GET_[REGS_PRX1_DLR_APCR_WINDOW_SELECT]
static inline fapi2::buffer<uint64_t>& GET_REGS_PRX1_DLR_APCR_WINDOW_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.extractToRight<REGS_PRX1_DLR_APCR_WINDOW_SELECT,
           REGS_PRX1_DLR_APCR_WINDOW_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_WINDOW_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_WINDOW_SELECT]

//>> SET_[REGS_PRX1_DLR_APCR_DIV2_WEIGHT]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_DIV2_WEIGHT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_DIV2_WEIGHT,
           REGS_PRX1_DLR_APCR_DIV2_WEIGHT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DIV2_WEIGHT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_DIV2_WEIGHT]

//>> SET_[REGS_PRX1_DLR_APCR_DIV2_WEIGHT]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_DIV2_WEIGHT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_DIV2_WEIGHT,
           REGS_PRX1_DLR_APCR_DIV2_WEIGHT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DIV2_WEIGHT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_DIV2_WEIGHT]

//>> GET_[REGS_PRX1_DLR_APCR_DIV2_WEIGHT]
static inline fapi2::buffer<uint64_t>& GET_REGS_PRX1_DLR_APCR_DIV2_WEIGHT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.extractToRight<REGS_PRX1_DLR_APCR_DIV2_WEIGHT,
           REGS_PRX1_DLR_APCR_DIV2_WEIGHT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DIV2_WEIGHT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_DIV2_WEIGHT]

//>> SET_[REGS_PRX1_DLR_APCR_DIV4_WEIGHT]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_DIV4_WEIGHT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_DIV4_WEIGHT,
           REGS_PRX1_DLR_APCR_DIV4_WEIGHT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DIV4_WEIGHT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_DIV4_WEIGHT]

//>> SET_[REGS_PRX1_DLR_APCR_DIV4_WEIGHT]
static inline fapi2::buffer<uint64_t>& SET_REGS_PRX1_DLR_APCR_DIV4_WEIGHT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return o_data.insertFromRight<REGS_PRX1_DLR_APCR_DIV4_WEIGHT,
           REGS_PRX1_DLR_APCR_DIV4_WEIGHT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DIV4_WEIGHT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PRX1_DLR_APCR_DIV4_WEIGHT]

//>> GET_[REGS_PRX1_DLR_APCR_DIV4_WEIGHT]
static inline fapi2::buffer<uint64_t>& GET_REGS_PRX1_DLR_APCR_DIV4_WEIGHT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PRX1_DLR_APCR));
#endif
    return i_data.extractToRight<REGS_PRX1_DLR_APCR_DIV4_WEIGHT,
           REGS_PRX1_DLR_APCR_DIV4_WEIGHT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access REGS_PRX1_DLR_APCR_DIV4_WEIGHT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PRX1_DLR_APCR_DIV4_WEIGHT]

//>> PREP_[XSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_XSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[XSTOP_INTERRUPT_REG]

//>> GET_[XSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_XSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, XSTOP_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[XSTOP_INTERRUPT_REG]

//>> PUT_[XSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_XSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(XSTOP_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, XSTOP_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[XSTOP_INTERRUPT_REG]


//>> SET_[XSTOP_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_XSTOP_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<XSTOP_INTERRUPT_REG_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP_INTERRUPT_REG_XSTOP]

//>> SET_[XSTOP_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_XSTOP_INTERRUPT_REG_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<XSTOP_INTERRUPT_REG_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP_INTERRUPT_REG_XSTOP]

//>> SET_[XSTOP_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_XSTOP_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP_INTERRUPT_REG));
#endif
    return o_data.setBit<XSTOP_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP_INTERRUPT_REG_XSTOP]

//>> CLEAR_[XSTOP_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP_INTERRUPT_REG));
#endif
    return o_data.clearBit<XSTOP_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP_INTERRUPT_REG_XSTOP]

//>> GET_[XSTOP_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_XSTOP_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP_INTERRUPT_REG));
#endif
    return i_data.extractToRight<XSTOP_INTERRUPT_REG_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP_INTERRUPT_REG_XSTOP]

//>> GET_[XSTOP_INTERRUPT_REG_XSTOP]
static inline bool GET_XSTOP_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP_INTERRUPT_REG));
#endif
    return i_data.getBit<XSTOP_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP_INTERRUPT_REG_XSTOP]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
