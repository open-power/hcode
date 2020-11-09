/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_proc/reg00001_unused.H $  */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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

#ifndef __PPE_PROC_REG00001_H_UNUSED__
#define __PPE_PROC_REG00001_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_proc
{
#endif


//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]


//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]


//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW, TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
