/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/iohs/reg00009_unused.H $      */
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

#ifndef __IOHS_REG00009_H_UNUSED__
#define __IOHS_REG00009_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace iohs
{
#endif


//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_DATA]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> CLEAR_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline bool GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]

//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]

//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]

//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]

//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]

//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]

//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]

//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]

//>> PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL]

//>> PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL]


//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline bool GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline bool GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline bool GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline bool GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline bool GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline bool GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline bool GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline bool GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL]

//>> PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL]


//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline bool GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT,
           IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]

//>> PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL]

//>> PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL]


//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]

//>> PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL]

//>> PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL]


//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]

//>> PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL]

//>> PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL]


//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]

//>> PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL]

//>> PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL]


//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]

//>> PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL]

//>> PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL]


//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]

//>> PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL]

//>> PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL]


//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]

//>> SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]

//>> GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000,
           IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_0_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]

//>> PREP_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL]

//>> PUT_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL]


//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> PREP_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL]

//>> PUT_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL]


//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL,
           IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL,
           IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL,
           IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIME_VAL]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline bool GET_IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL]

//>> PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL]


//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_DATA]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL17_PL_EDGE]

//>> PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL]

//>> PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL]


//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_DATA]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_DATA]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_NS_EDGE]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE,
           IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_CNTL2_PL_EW_EDGE]

//>> PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL]

//>> PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL]


//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]

//>> PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL]

//>> PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL]


//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]

//>> PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL]

//>> PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL]


//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]

//>> PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL]

//>> PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL]


//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]

//>> PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL]

//>> PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL]


//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]

//>> SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]

//>> GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011,
           IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_2_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]

//>> PREP_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL]

//>> PUT_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL]


//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> CLEAR_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline bool GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_CM]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL11_PL_OFF_DM]

//>> PREP_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL]

//>> PUT_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL]


//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> CLEAR_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline bool GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_POS]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> CLEAR_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline bool GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC,
           IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]

//>> PREP_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL]

//>> PUT_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL]


//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W,
           IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W,
           IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W,
           IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]

//>> PREP_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL]

//>> PUT_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL]


//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111,
           IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111,
           IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111,
           IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]

//>> PREP_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL]

//>> PUT_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL]


//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001,
           IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]

//>> SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001,
           IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]

//>> GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001,
           IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_3_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]

//>> PREP_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL]

//>> GET_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL]

//>> PUT_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL]


//>> SET_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH,
           IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]

//>> SET_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH,
           IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]

//>> GET_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH,
           IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]

//>> PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL]

//>> PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL]


//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN,
           IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN,
           IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN,
           IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_GAIN]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO,
           IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO,
           IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO,
           IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_CNTL4_PL_ZERO]

//>> PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL]

//>> PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL]


//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline bool GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline bool GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline bool GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline bool GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline bool GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline bool GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline bool GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline bool GET_IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL]

//>> PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL]


//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]

//>> PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL]

//>> PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL]


//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]

//>> PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL]

//>> PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL]


//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]

//>> PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL]

//>> PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL]


//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]

//>> PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL]

//>> PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL]


//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]

//>> PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL]

//>> PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL]


//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]

//>> PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL]

//>> PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL]


//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]

//>> SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]

//>> GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111,
           IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_4_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]

//>> PREP_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL]

//>> PUT_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL]


//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline bool GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline bool GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline bool GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline bool GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline bool GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline bool GET_IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> PREP_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL]

//>> PUT_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL]


//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT,
           IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT,
           IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT,
           IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP,
           IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP,
           IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP,
           IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_MODE4_PL_PHASE_STEP]

//>> PREP_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL]

//>> PUT_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL]


//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL,
           IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]

//>> SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL,
           IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]

//>> GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL,
           IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]

//>> PREP_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL]

//>> PUT_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL]


//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA]

//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_DATA]

//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE]

//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL18_PL_EDGE]

//>> PREP_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL]

//>> PUT_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL]


//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]

//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]

//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]

//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS,
           IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]

//>> PREP_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL]

//>> PUT_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL]


//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011,
           IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]

//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011,
           IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011,
           IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]

//>> PREP_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL]

//>> PUT_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL]


//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101,
           IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]

//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101,
           IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101,
           IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]

//>> PREP_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL]

//>> PUT_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL]


//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110,
           IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]

//>> SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110,
           IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]

//>> GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL));
#endif
    return i_data.extractToRight<IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110,
           IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_1_RD_5_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]

//>> PREP_[IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL]

//>> GET_[IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL]

//>> PUT_[IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL]


//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL,
           P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL,
           P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL,
           P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline bool GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline bool GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline bool GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline bool GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL,
           P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL,
           P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL,
           P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline bool GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline bool GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline bool GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline bool GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline bool GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]

//>> SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]

//>> CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]

//>> GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline bool GET_P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_1_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
