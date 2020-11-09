/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/iohs/reg00018_unused.H $      */
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

#ifndef __IOHS_REG00018_H_UNUSED__
#define __IOHS_REG00018_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace iohs
{
#endif


//>> PREP_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL]

//>> GET_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL]

//>> PUT_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL]


//>> SET_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> SET_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> GET_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_0_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> PREP_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL]

//>> PUT_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL]


//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL,
           IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL,
           IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL,
           IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL,
           P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL,
           P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL,
           P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> CLEAR_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline bool GET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> CLEAR_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline bool GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> CLEAR_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline bool GET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> CLEAR_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline bool GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> CLEAR_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline bool GET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> CLEAR_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline bool GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> CLEAR_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline bool GET_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> CLEAR_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline bool GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL,
           P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL,
           P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL,
           P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL,
           P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]

//>> SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL,
           P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]

//>> GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL,
           P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_1_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]

//>> PREP_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL]

//>> PUT_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL]


//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL,
           IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL,
           IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL,
           IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]

//>> PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL]

//>> PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL]


//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN,
           IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN,
           IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN,
           IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_GAIN]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1,
           IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1,
           IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1,
           IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK1]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2,
           IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2,
           IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2,
           IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_CNTL13_PL_PEAK2]

//>> PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL]

//>> PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL]


//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL]

//>> PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL]


//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL]

//>> PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL]


//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL]

//>> PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL]


//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL]

//>> PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL]


//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL]

//>> PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL]


//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_1_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL]

//>> PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL]


//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_DATA]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL14_PL_EDGE]

//>> PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL]

//>> PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL]


//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_GAIN]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO,
           IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_CNTL3_PL_ZERO]

//>> PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL]

//>> PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL]


//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]

//>> PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL]

//>> PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL]


//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]

//>> PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL]

//>> PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL]


//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]

//>> PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL]

//>> PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL]


//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]

//>> PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL]

//>> PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL]


//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]

//>> SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]

//>> GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010,
           IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_3_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]

//>> PREP_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL]

//>> PUT_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL]


//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> PREP_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL]

//>> PUT_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL]


//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX,
           IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX,
           IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX,
           IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE,
           IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE,
           IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE,
           IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline bool GET_IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> PREP_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL]

//>> GET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL]

//>> PUT_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL]


//>> SET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010,
           IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]

//>> SET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010,
           IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]

//>> GET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010,
           IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]

//>> PREP_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL]

//>> GET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL]

//>> PUT_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL]


//>> SET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100,
           IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100]

//>> SET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100,
           IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100]

//>> GET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100,
           IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_4_RX_DAC_REGS_LOFF_B_CNTLX71_PL_RX_BD_LATCH_DAC_E100]

//>> PREP_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL]

//>> PUT_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL]


//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline bool GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline bool GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline bool GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline bool GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline bool GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline bool GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline bool GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline bool GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK,
           IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK,
           IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK,
           IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR,
           IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR,
           IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR,
           IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]

//>> PREP_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL]

//>> PUT_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL]


//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE,
           IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE,
           IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE,
           IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE,
           IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE,
           IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE,
           IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]

//>> PREP_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL]

//>> PUT_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL]


//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL,
           IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL,
           IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL,
           IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]

//>> PREP_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL]

//>> PUT_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL]


//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_DATA]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_DATA]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_NS_EDGE]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE,
           IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_CNTL5_PL_EW_EDGE]

//>> PREP_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL]

//>> PUT_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL]


//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]

//>> PREP_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL]

//>> PUT_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL]


//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]

//>> PREP_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL]

//>> PUT_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL]


//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]

//>> PREP_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL]

//>> PUT_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL]


//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]

//>> SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]

//>> GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110,
           IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_5_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]

//>> PREP_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL]

//>> PUT_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL]


//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL,
           IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL,
           IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL,
           IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO,
           IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO,
           IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO,
           IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> PREP_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL]

//>> PUT_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL]


//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline bool GET_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]

//>> SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]

//>> SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]

//>> CLEAR_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]

//>> GET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]

//>> GET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]
static inline bool GET_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKA_SAMPLAT_DATA_RO_SIGNAL]

//>> SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]

//>> SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]

//>> SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]

//>> CLEAR_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]

//>> GET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]

//>> GET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]
static inline bool GET_P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_2_RD_RX_BIT_REGS_STAT1_PL_DACTT_BANKB_SAMPLAT_DATA_RO_SIGNAL]

//>> PREP_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL]

//>> PUT_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL]


//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN,
           IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN,
           IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN,
           IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_GAIN]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1,
           IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1,
           IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1,
           IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK1]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2,
           IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2,
           IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2,
           IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_CNTL6_PL_PEAK2]

//>> PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL]

//>> PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL]


//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]

//>> PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL]

//>> PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL]


//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]

//>> PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL]

//>> PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL]


//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]

//>> PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL]

//>> PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL]


//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]

//>> PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL]

//>> PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL]


//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]

//>> PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL]

//>> PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL]


//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]

//>> PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL]

//>> PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL]


//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]

//>> SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]

//>> GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL));
#endif
    return i_data.extractToRight<IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000,
           IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_2_RD_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]

//>> PREP_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL]

//>> PUT_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL]


//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_0_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> PREP_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL]

//>> PUT_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL]


//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline bool GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline bool GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> PREP_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL]

//>> PUT_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL]


//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_14_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> PREP_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL]

//>> PUT_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL]


//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_19_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> PREP_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL]

//>> PUT_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL]


//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline bool GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline bool GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> PREP_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL]

//>> PUT_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL]


//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline bool GET_IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_22_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> PREP_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL]

//>> PUT_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL]


//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline bool GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline bool GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline bool GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline bool GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline bool GET_IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_2_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> PREP_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL]

//>> GET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL]

//>> PUT_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL]


//>> SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> GET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> GET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline bool GET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.setBit<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> CLEAR_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.clearBit<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> GET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> GET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline bool GET_IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.getBit<IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_RXCTL_DATASM_4_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> PREP_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL;
#endif
    return fapi2::getScom(i_target, IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL]

//>> PUT_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return fapi2::putScom(i_target, IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL]


//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE]
static inline fapi2::buffer<uint64_t>& GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_I_TUNE]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE]
static inline fapi2::buffer<uint64_t>& GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_Q_TUNE]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.setBit<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]

//>> CLEAR_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.clearBit<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]
static inline bool GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return i_data.getBit<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PHASE_SEL]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.setBit<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]

//>> CLEAR_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.clearBit<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]
static inline bool GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return i_data.getBit<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_MAIN_SEL]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.setBit<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]

//>> CLEAR_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return o_data.clearBit<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]
static inline bool GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL));
#endif
    return i_data.getBit<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL16_PL_PAD_SEL]

//>> PREP_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL;
#endif
    return fapi2::getScom(i_target, IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL]

//>> PUT_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL));
#endif
    return fapi2::putScom(i_target, IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL]


//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN]
static inline fapi2::buffer<uint64_t>& GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL));
#endif
    return i_data.extractToRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL26_PL_TX_NSEG_MAIN_16_24_SAFE_EN]

//>> PREP_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL;
#endif
    return fapi2::getScom(i_target, IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL]

//>> PUT_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL));
#endif
    return fapi2::putScom(i_target, IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL]


//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN]
static inline fapi2::buffer<uint64_t>& GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_EN]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL]

//>> SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL]

//>> GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL,
           IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_TX0_0_DD_1_TX_BIT_REGS_CNTL5_PL_SEL]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
