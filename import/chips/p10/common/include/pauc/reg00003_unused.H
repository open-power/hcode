/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pauc/reg00003_unused.H $      */
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

#ifndef __PAUC_REG00003_H_UNUSED__
#define __PAUC_REG00003_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> PREP_[DL_PPE_WRAP_ARB_CSDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_ARB_CSDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_ARB_CSDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_ARB_CSDR]

//>> GET_[DL_PPE_WRAP_ARB_CSDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_ARB_CSDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_ARB_CSDR;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_ARB_CSDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSDR]

//>> PUT_[DL_PPE_WRAP_ARB_CSDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_ARB_CSDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSDR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_ARB_CSDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_ARB_CSDR]


//>> SET_[DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSDR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA,
           DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA]

//>> SET_[DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSDR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA,
           DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA]

//>> GET_[DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSDR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA,
           DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSDR_CSDR_SRAM_DATA]

//>> PREP_[DL_PPE_WRAP_XIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_XIDBGINF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIDBGINF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_XIDBGINF]

//>> GET_[DL_PPE_WRAP_XIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_XIDBGINF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIDBGINF;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_XIDBGINF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGINF]

//>> PUT_[DL_PPE_WRAP_XIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_XIDBGINF(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGINF));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_XIDBGINF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_XIDBGINF]


//>> SET_[DL_PPE_WRAP_XIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGINF_SRR0,
           DL_PPE_WRAP_XIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGINF_SRR0]

//>> SET_[DL_PPE_WRAP_XIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGINF_SRR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGINF_SRR0,
           DL_PPE_WRAP_XIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGINF_SRR0]

//>> GET_[DL_PPE_WRAP_XIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGINF));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGINF_SRR0,
           DL_PPE_WRAP_XIDBGINF_SRR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGINF_SRR0]

//>> SET_[DL_PPE_WRAP_XIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGINF_LR,
           DL_PPE_WRAP_XIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGINF_LR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGINF_LR]

//>> SET_[DL_PPE_WRAP_XIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGINF_LR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGINF));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGINF_LR,
           DL_PPE_WRAP_XIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGINF_LR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGINF_LR]

//>> GET_[DL_PPE_WRAP_XIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGINF));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGINF_LR,
           DL_PPE_WRAP_XIDBGINF_LR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGINF_LR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGINF_LR]

//>> PREP_[PB_CFG_CNPM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_CFG_CNPM_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_CNPM_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_CFG_CNPM_REG]

//>> GET_[PB_CFG_CNPM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_CFG_CNPM_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_CNPM_REG;
#endif
    return fapi2::getScom(i_target, PB_CFG_CNPM_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_CFG_CNPM_REG]

//>> PUT_[PB_CFG_CNPM_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_CFG_CNPM_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return fapi2::putScom(i_target, PB_CFG_CNPM_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_CFG_CNPM_REG]


//>> SET_[PB_CFG_CNPM_REG_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_EN]

//>> SET_[PB_CFG_CNPM_REG_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_EN]

//>> SET_[PB_CFG_CNPM_REG_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.setBit<PB_CFG_CNPM_REG_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_EN]

//>> CLEAR_[PB_CFG_CNPM_REG_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_CNPM_REG_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.clearBit<PB_CFG_CNPM_REG_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_CNPM_REG_EN]

//>> GET_[PB_CFG_CNPM_REG_EN]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_EN]

//>> GET_[PB_CFG_CNPM_REG_EN]
static inline bool GET_PB_CFG_CNPM_REG_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.getBit<PB_CFG_CNPM_REG_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_EN]

//>> SET_[PB_CFG_CNPM_REG_RESET_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_RESET_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_RESET_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_RESET_MODE]

//>> SET_[PB_CFG_CNPM_REG_RESET_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_RESET_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_RESET_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_RESET_MODE]

//>> SET_[PB_CFG_CNPM_REG_RESET_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_RESET_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.setBit<PB_CFG_CNPM_REG_RESET_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_CNPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_RESET_MODE]

//>> CLEAR_[PB_CFG_CNPM_REG_RESET_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_CNPM_REG_RESET_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.clearBit<PB_CFG_CNPM_REG_RESET_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_CNPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_CNPM_REG_RESET_MODE]

//>> GET_[PB_CFG_CNPM_REG_RESET_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_RESET_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_RESET_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_RESET_MODE]

//>> GET_[PB_CFG_CNPM_REG_RESET_MODE]
static inline bool GET_PB_CFG_CNPM_REG_RESET_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.getBit<PB_CFG_CNPM_REG_RESET_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_CNPM_REG_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_RESET_MODE]

//>> SET_[PB_CFG_CNPM_REG_COUNTER_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_COUNTER_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_COUNTER_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_COUNTER_MODE]

//>> SET_[PB_CFG_CNPM_REG_COUNTER_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_COUNTER_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_COUNTER_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_COUNTER_MODE]

//>> SET_[PB_CFG_CNPM_REG_COUNTER_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_COUNTER_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.setBit<PB_CFG_CNPM_REG_COUNTER_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_CNPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_COUNTER_MODE]

//>> CLEAR_[PB_CFG_CNPM_REG_COUNTER_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_CNPM_REG_COUNTER_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.clearBit<PB_CFG_CNPM_REG_COUNTER_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_CNPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_CNPM_REG_COUNTER_MODE]

//>> GET_[PB_CFG_CNPM_REG_COUNTER_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_COUNTER_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_COUNTER_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_COUNTER_MODE]

//>> GET_[PB_CFG_CNPM_REG_COUNTER_MODE]
static inline bool GET_PB_CFG_CNPM_REG_COUNTER_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.getBit<PB_CFG_CNPM_REG_COUNTER_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_CNPM_REG_COUNTER_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_COUNTER_MODE]

//>> SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]

//>> SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]

//>> SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.setBit<PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]

//>> CLEAR_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.clearBit<PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]

//>> GET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]

//>> GET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]
static inline bool GET_PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.getBit<PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_DIS]

//>> SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]

//>> SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]

//>> SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.setBit<PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]

//>> CLEAR_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.clearBit<PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]

//>> GET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]

//>> GET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]
static inline bool GET_PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.getBit<PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_GLOBAL_PMISC_MODE]

//>> SET_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_EXTERNAL_FREEZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_EXTERNAL_FREEZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]

//>> SET_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_EXTERNAL_FREEZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_EXTERNAL_FREEZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]

//>> SET_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_EXTERNAL_FREEZE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.setBit<PB_CFG_CNPM_REG_EXTERNAL_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]

//>> CLEAR_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_CNPM_REG_EXTERNAL_FREEZE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.clearBit<PB_CFG_CNPM_REG_EXTERNAL_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]

//>> GET_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_EXTERNAL_FREEZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_EXTERNAL_FREEZE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]

//>> GET_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]
static inline bool GET_PB_CFG_CNPM_REG_EXTERNAL_FREEZE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.getBit<PB_CFG_CNPM_REG_EXTERNAL_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_CNPM_REG_EXTERNAL_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_EXTERNAL_FREEZE]

//>> SET_[PB_CFG_CNPM_REG_0_1_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_0_1_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_0_1_OP,
           PB_CFG_CNPM_REG_0_1_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_0_1_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_0_1_OP]

//>> SET_[PB_CFG_CNPM_REG_0_1_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_0_1_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_0_1_OP,
           PB_CFG_CNPM_REG_0_1_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_0_1_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_0_1_OP]

//>> GET_[PB_CFG_CNPM_REG_0_1_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_0_1_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_0_1_OP,
           PB_CFG_CNPM_REG_0_1_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_0_1_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_0_1_OP]

//>> SET_[PB_CFG_CNPM_REG_2_3_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_2_3_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_2_3_OP,
           PB_CFG_CNPM_REG_2_3_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_2_3_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_2_3_OP]

//>> SET_[PB_CFG_CNPM_REG_2_3_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_2_3_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_2_3_OP,
           PB_CFG_CNPM_REG_2_3_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_2_3_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_2_3_OP]

//>> GET_[PB_CFG_CNPM_REG_2_3_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_2_3_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_2_3_OP,
           PB_CFG_CNPM_REG_2_3_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_2_3_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_2_3_OP]

//>> SET_[PB_CFG_CNPM_REG_4_5_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_4_5_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_4_5_OP,
           PB_CFG_CNPM_REG_4_5_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_4_5_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_4_5_OP]

//>> SET_[PB_CFG_CNPM_REG_4_5_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_4_5_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_4_5_OP,
           PB_CFG_CNPM_REG_4_5_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_4_5_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_4_5_OP]

//>> GET_[PB_CFG_CNPM_REG_4_5_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_4_5_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_4_5_OP,
           PB_CFG_CNPM_REG_4_5_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_4_5_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_4_5_OP]

//>> SET_[PB_CFG_CNPM_REG_6_7_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_6_7_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_6_7_OP,
           PB_CFG_CNPM_REG_6_7_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_6_7_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_6_7_OP]

//>> SET_[PB_CFG_CNPM_REG_6_7_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_6_7_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_6_7_OP,
           PB_CFG_CNPM_REG_6_7_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_6_7_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_6_7_OP]

//>> GET_[PB_CFG_CNPM_REG_6_7_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_6_7_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_6_7_OP,
           PB_CFG_CNPM_REG_6_7_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_6_7_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_6_7_OP]

//>> SET_[PB_CFG_CNPM_REG_8_9_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_8_9_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_8_9_OP,
           PB_CFG_CNPM_REG_8_9_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_8_9_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_8_9_OP]

//>> SET_[PB_CFG_CNPM_REG_8_9_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_8_9_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_8_9_OP,
           PB_CFG_CNPM_REG_8_9_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_8_9_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_8_9_OP]

//>> GET_[PB_CFG_CNPM_REG_8_9_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_8_9_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_8_9_OP,
           PB_CFG_CNPM_REG_8_9_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_8_9_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_8_9_OP]

//>> SET_[PB_CFG_CNPM_REG_10_11_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_10_11_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_10_11_OP,
           PB_CFG_CNPM_REG_10_11_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_10_11_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_10_11_OP]

//>> SET_[PB_CFG_CNPM_REG_10_11_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_10_11_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_10_11_OP,
           PB_CFG_CNPM_REG_10_11_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_10_11_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_10_11_OP]

//>> GET_[PB_CFG_CNPM_REG_10_11_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_10_11_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_10_11_OP,
           PB_CFG_CNPM_REG_10_11_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_10_11_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_10_11_OP]

//>> SET_[PB_CFG_CNPM_REG_12_13_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_12_13_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_12_13_OP,
           PB_CFG_CNPM_REG_12_13_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_12_13_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_12_13_OP]

//>> SET_[PB_CFG_CNPM_REG_12_13_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_12_13_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_12_13_OP,
           PB_CFG_CNPM_REG_12_13_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_12_13_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_12_13_OP]

//>> GET_[PB_CFG_CNPM_REG_12_13_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_12_13_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_12_13_OP,
           PB_CFG_CNPM_REG_12_13_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_12_13_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_12_13_OP]

//>> SET_[PB_CFG_CNPM_REG_14_15_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_14_15_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_14_15_OP,
           PB_CFG_CNPM_REG_14_15_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_14_15_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_14_15_OP]

//>> SET_[PB_CFG_CNPM_REG_14_15_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_14_15_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_14_15_OP,
           PB_CFG_CNPM_REG_14_15_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_14_15_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_14_15_OP]

//>> GET_[PB_CFG_CNPM_REG_14_15_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_14_15_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_14_15_OP,
           PB_CFG_CNPM_REG_14_15_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_14_15_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_14_15_OP]

//>> SET_[PB_CFG_CNPM_REG_16_17_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_16_17_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_16_17_OP,
           PB_CFG_CNPM_REG_16_17_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_16_17_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_16_17_OP]

//>> SET_[PB_CFG_CNPM_REG_16_17_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_16_17_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_16_17_OP,
           PB_CFG_CNPM_REG_16_17_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_16_17_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_16_17_OP]

//>> GET_[PB_CFG_CNPM_REG_16_17_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_16_17_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_16_17_OP,
           PB_CFG_CNPM_REG_16_17_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_16_17_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_16_17_OP]

//>> SET_[PB_CFG_CNPM_REG_18_19_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_18_19_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_18_19_OP,
           PB_CFG_CNPM_REG_18_19_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_18_19_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_18_19_OP]

//>> SET_[PB_CFG_CNPM_REG_18_19_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_18_19_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_18_19_OP,
           PB_CFG_CNPM_REG_18_19_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_18_19_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_18_19_OP]

//>> GET_[PB_CFG_CNPM_REG_18_19_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_18_19_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_18_19_OP,
           PB_CFG_CNPM_REG_18_19_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_18_19_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_18_19_OP]

//>> SET_[PB_CFG_CNPM_REG_20_21_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_20_21_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_20_21_OP,
           PB_CFG_CNPM_REG_20_21_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_20_21_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_20_21_OP]

//>> SET_[PB_CFG_CNPM_REG_20_21_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_20_21_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_20_21_OP,
           PB_CFG_CNPM_REG_20_21_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_20_21_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_20_21_OP]

//>> GET_[PB_CFG_CNPM_REG_20_21_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_20_21_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_20_21_OP,
           PB_CFG_CNPM_REG_20_21_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_20_21_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_20_21_OP]

//>> SET_[PB_CFG_CNPM_REG_22_23_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_22_23_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_22_23_OP,
           PB_CFG_CNPM_REG_22_23_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_22_23_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_22_23_OP]

//>> SET_[PB_CFG_CNPM_REG_22_23_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_22_23_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_22_23_OP,
           PB_CFG_CNPM_REG_22_23_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_22_23_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_22_23_OP]

//>> GET_[PB_CFG_CNPM_REG_22_23_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_22_23_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_22_23_OP,
           PB_CFG_CNPM_REG_22_23_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_22_23_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_22_23_OP]

//>> SET_[PB_CFG_CNPM_REG_24_25_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_24_25_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_24_25_OP,
           PB_CFG_CNPM_REG_24_25_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_24_25_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_24_25_OP]

//>> SET_[PB_CFG_CNPM_REG_24_25_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_24_25_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_24_25_OP,
           PB_CFG_CNPM_REG_24_25_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_24_25_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_24_25_OP]

//>> GET_[PB_CFG_CNPM_REG_24_25_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_24_25_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_24_25_OP,
           PB_CFG_CNPM_REG_24_25_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_24_25_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_24_25_OP]

//>> SET_[PB_CFG_CNPM_REG_26_27_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_26_27_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_26_27_OP,
           PB_CFG_CNPM_REG_26_27_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_26_27_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_26_27_OP]

//>> SET_[PB_CFG_CNPM_REG_26_27_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_26_27_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_26_27_OP,
           PB_CFG_CNPM_REG_26_27_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_26_27_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_26_27_OP]

//>> GET_[PB_CFG_CNPM_REG_26_27_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_26_27_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_26_27_OP,
           PB_CFG_CNPM_REG_26_27_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_26_27_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_26_27_OP]

//>> SET_[PB_CFG_CNPM_REG_28_29_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_28_29_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_28_29_OP,
           PB_CFG_CNPM_REG_28_29_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_28_29_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_28_29_OP]

//>> SET_[PB_CFG_CNPM_REG_28_29_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_28_29_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_28_29_OP,
           PB_CFG_CNPM_REG_28_29_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_28_29_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_28_29_OP]

//>> GET_[PB_CFG_CNPM_REG_28_29_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_28_29_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_28_29_OP,
           PB_CFG_CNPM_REG_28_29_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_28_29_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_28_29_OP]

//>> SET_[PB_CFG_CNPM_REG_30_31_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_30_31_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_30_31_OP,
           PB_CFG_CNPM_REG_30_31_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_30_31_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_30_31_OP]

//>> SET_[PB_CFG_CNPM_REG_30_31_OP]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_30_31_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_30_31_OP,
           PB_CFG_CNPM_REG_30_31_OP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_30_31_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_30_31_OP]

//>> GET_[PB_CFG_CNPM_REG_30_31_OP]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_30_31_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_30_31_OP,
           PB_CFG_CNPM_REG_30_31_OP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_30_31_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_30_31_OP]

//>> SET_[PB_CFG_CNPM_REG_CASCADE_PMU0]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_CASCADE_PMU0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_CASCADE_PMU0,
           PB_CFG_CNPM_REG_CASCADE_PMU0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_CASCADE_PMU0]

//>> SET_[PB_CFG_CNPM_REG_CASCADE_PMU0]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_CASCADE_PMU0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_CASCADE_PMU0,
           PB_CFG_CNPM_REG_CASCADE_PMU0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_CASCADE_PMU0]

//>> GET_[PB_CFG_CNPM_REG_CASCADE_PMU0]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_CASCADE_PMU0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_CASCADE_PMU0,
           PB_CFG_CNPM_REG_CASCADE_PMU0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_CASCADE_PMU0]

//>> SET_[PB_CFG_CNPM_REG_CASCADE_PMU1]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_CASCADE_PMU1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_CASCADE_PMU1,
           PB_CFG_CNPM_REG_CASCADE_PMU1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_CASCADE_PMU1]

//>> SET_[PB_CFG_CNPM_REG_CASCADE_PMU1]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_CASCADE_PMU1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_CASCADE_PMU1,
           PB_CFG_CNPM_REG_CASCADE_PMU1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_CASCADE_PMU1]

//>> GET_[PB_CFG_CNPM_REG_CASCADE_PMU1]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_CASCADE_PMU1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_CASCADE_PMU1,
           PB_CFG_CNPM_REG_CASCADE_PMU1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_CASCADE_PMU1]

//>> SET_[PB_CFG_CNPM_REG_CASCADE_PMU2]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_CASCADE_PMU2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_CASCADE_PMU2,
           PB_CFG_CNPM_REG_CASCADE_PMU2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_CASCADE_PMU2]

//>> SET_[PB_CFG_CNPM_REG_CASCADE_PMU2]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_CASCADE_PMU2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_CASCADE_PMU2,
           PB_CFG_CNPM_REG_CASCADE_PMU2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_CASCADE_PMU2]

//>> GET_[PB_CFG_CNPM_REG_CASCADE_PMU2]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_CASCADE_PMU2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_CASCADE_PMU2,
           PB_CFG_CNPM_REG_CASCADE_PMU2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_CASCADE_PMU2]

//>> SET_[PB_CFG_CNPM_REG_CASCADE_PMU3]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_CASCADE_PMU3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_CASCADE_PMU3,
           PB_CFG_CNPM_REG_CASCADE_PMU3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_CASCADE_PMU3]

//>> SET_[PB_CFG_CNPM_REG_CASCADE_PMU3]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_CASCADE_PMU3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_CASCADE_PMU3,
           PB_CFG_CNPM_REG_CASCADE_PMU3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_CASCADE_PMU3]

//>> GET_[PB_CFG_CNPM_REG_CASCADE_PMU3]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_CASCADE_PMU3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_CASCADE_PMU3,
           PB_CFG_CNPM_REG_CASCADE_PMU3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_CASCADE_PMU3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_CASCADE_PMU3]

//>> SET_[PB_CFG_CNPM_REG_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_SPARE,
           PB_CFG_CNPM_REG_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_CNPM_REG_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_SPARE]

//>> SET_[PB_CFG_CNPM_REG_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_CNPM_REG_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return o_data.insertFromRight<PB_CFG_CNPM_REG_SPARE,
           PB_CFG_CNPM_REG_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_CNPM_REG_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_CNPM_REG_SPARE]

//>> GET_[PB_CFG_CNPM_REG_SPARE]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_CNPM_REG_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_CNPM_REG));
#endif
    return i_data.extractToRight<PB_CFG_CNPM_REG_SPARE,
           PB_CFG_CNPM_REG_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_CNPM_REG_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_CNPM_REG_SPARE]

//>> PREP_[PB_FM0123_ERR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_FM0123_ERR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_FM0123_ERR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_FM0123_ERR]

//>> GET_[PB_FM0123_ERR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_FM0123_ERR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_FM0123_ERR;
#endif
    return fapi2::getScom(i_target, PB_FM0123_ERR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_FM0123_ERR]

//>> PUT_[PB_FM0123_ERR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_FM0123_ERR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return fapi2::putScom(i_target, PB_FM0123_ERR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_FM0123_ERR]


//>> SET_[PB_FM0123_ERR_0_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_CONTROL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_0_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CONTROL_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_CONTROL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_0_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CONTROL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CONTROL_ERROR]

//>> CLEAR_[PB_FM0123_ERR_0_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_CONTROL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_CONTROL_ERROR]

//>> GET_[PB_FM0123_ERR_0_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_CONTROL_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_CONTROL_ERROR]

//>> GET_[PB_FM0123_ERR_0_CONTROL_ERROR]
static inline bool GET_PB_FM0123_ERR_0_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_0_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_ADDR_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_0_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_ADDR_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_0_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_ADDR_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_ADDR_PERR]

//>> CLEAR_[PB_FM0123_ERR_0_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_ADDR_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_ADDR_PERR]

//>> GET_[PB_FM0123_ERR_0_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_ADDR_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_ADDR_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_ADDR_PERR]

//>> GET_[PB_FM0123_ERR_0_ADDR_PERR]
static inline bool GET_PB_FM0123_ERR_0_ADDR_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_0_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_CC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC0_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_CC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC0_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_0_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_CC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_CC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_CC0_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_CC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_CC0_CREDITERR]
static inline bool GET_PB_FM0123_ERR_0_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_CC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC1_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_CC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC1_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_0_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_CC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_CC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_CC1_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_CC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_CC1_CREDITERR]
static inline bool GET_PB_FM0123_ERR_0_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_CC2_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC2_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_CC2_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC2_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC2_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_0_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_CC2_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_CC2_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_CC2_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_CC2_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_CC2_CREDITERR]
static inline bool GET_PB_FM0123_ERR_0_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_CC3_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC3_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_CC3_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_CC3_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_CC3_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_0_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_CC3_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_CC3_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_CC3_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_CC3_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_CC3_CREDITERR]
static inline bool GET_PB_FM0123_ERR_0_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_DAT_HI_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_0_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_DAT_HI_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_DAT_HI_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_0_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_DAT_HI_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_DAT_HI_PERR]

//>> CLEAR_[PB_FM0123_ERR_0_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_DAT_HI_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_DAT_HI_PERR]

//>> GET_[PB_FM0123_ERR_0_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_DAT_HI_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_DAT_HI_PERR]

//>> GET_[PB_FM0123_ERR_0_DAT_HI_PERR]
static inline bool GET_PB_FM0123_ERR_0_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_0_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_DAT_LO_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_0_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_DAT_LO_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_DAT_LO_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_0_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_DAT_LO_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_DAT_LO_PERR]

//>> CLEAR_[PB_FM0123_ERR_0_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_DAT_LO_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_DAT_LO_PERR]

//>> GET_[PB_FM0123_ERR_0_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_DAT_LO_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_DAT_LO_PERR]

//>> GET_[PB_FM0123_ERR_0_DAT_LO_PERR]
static inline bool GET_PB_FM0123_ERR_0_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_0_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_FRAME_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_FRAME_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_FRAME_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_FRAME_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_FRAME_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_0_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_FRAME_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_FRAME_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_FRAME_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_FRAME_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_FRAME_CREDITERR]
static inline bool GET_PB_FM0123_ERR_0_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_INTERNAL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_0_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_INTERNAL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_INTERNAL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_0_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_INTERNAL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_INTERNAL_ERR]

//>> CLEAR_[PB_FM0123_ERR_0_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_INTERNAL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_INTERNAL_ERR]

//>> GET_[PB_FM0123_ERR_0_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_INTERNAL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_INTERNAL_ERR]

//>> GET_[PB_FM0123_ERR_0_INTERNAL_ERR]
static inline bool GET_PB_FM0123_ERR_0_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_0_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_PRSP_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_0_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_PRSP_PTYERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_PRSP_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_0_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_PRSP_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_PRSP_PTYERR]

//>> CLEAR_[PB_FM0123_ERR_0_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_PRSP_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_PRSP_PTYERR]

//>> GET_[PB_FM0123_ERR_0_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_PRSP_PTYERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_PRSP_PTYERR]

//>> GET_[PB_FM0123_ERR_0_PRSP_PTYERR]
static inline bool GET_PB_FM0123_ERR_0_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_TTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_TTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_TTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_TTAG_PERR]

//>> CLEAR_[PB_FM0123_ERR_0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_TTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_TTAG_PERR]

//>> GET_[PB_FM0123_ERR_0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_TTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_TTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_TTAG_PERR]

//>> GET_[PB_FM0123_ERR_0_TTAG_PERR]
static inline bool GET_PB_FM0123_ERR_0_TTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_0_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_VC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_VC0_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_VC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_VC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_VC0_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_0_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_VC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_VC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_VC0_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_VC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_VC0_CREDITERR]
static inline bool GET_PB_FM0123_ERR_0_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_VC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_VC1_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_VC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_VC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_VC1_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_0_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_VC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_VC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_VC1_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_VC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_0_VC1_CREDITERR]
static inline bool GET_PB_FM0123_ERR_0_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_0_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_RTAG_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_0_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_RTAG_PTYERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_RTAG_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_0_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_RTAG_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_RTAG_PTYERR]

//>> CLEAR_[PB_FM0123_ERR_0_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_RTAG_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_RTAG_PTYERR]

//>> GET_[PB_FM0123_ERR_0_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_RTAG_PTYERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_RTAG_PTYERR]

//>> GET_[PB_FM0123_ERR_0_RTAG_PTYERR]
static inline bool GET_PB_FM0123_ERR_0_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_0_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_RTAG_MISC_PTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_0_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_RTAG_MISC_PTY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_0_RTAG_MISC_PTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_0_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_0_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_0_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_0_RTAG_MISC_PTY]

//>> CLEAR_[PB_FM0123_ERR_0_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_0_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_0_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_0_RTAG_MISC_PTY]

//>> GET_[PB_FM0123_ERR_0_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_0_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_0_RTAG_MISC_PTY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_RTAG_MISC_PTY]

//>> GET_[PB_FM0123_ERR_0_RTAG_MISC_PTY]
static inline bool GET_PB_FM0123_ERR_0_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_0_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_0_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_0_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_1_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_CONTROL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_1_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CONTROL_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_CONTROL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_1_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CONTROL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CONTROL_ERROR]

//>> CLEAR_[PB_FM0123_ERR_1_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_CONTROL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_CONTROL_ERROR]

//>> GET_[PB_FM0123_ERR_1_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_CONTROL_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_CONTROL_ERROR]

//>> GET_[PB_FM0123_ERR_1_CONTROL_ERROR]
static inline bool GET_PB_FM0123_ERR_1_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_1_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_ADDR_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_1_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_ADDR_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_1_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_ADDR_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_ADDR_PERR]

//>> CLEAR_[PB_FM0123_ERR_1_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_ADDR_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_ADDR_PERR]

//>> GET_[PB_FM0123_ERR_1_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_ADDR_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_ADDR_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_ADDR_PERR]

//>> GET_[PB_FM0123_ERR_1_ADDR_PERR]
static inline bool GET_PB_FM0123_ERR_1_ADDR_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_1_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_CC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC0_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_CC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC0_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_1_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_CC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_CC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_CC0_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_CC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_CC0_CREDITERR]
static inline bool GET_PB_FM0123_ERR_1_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_CC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC1_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_CC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC1_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_1_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_CC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_CC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_CC1_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_CC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_CC1_CREDITERR]
static inline bool GET_PB_FM0123_ERR_1_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_CC2_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC2_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_CC2_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC2_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC2_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_1_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_CC2_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_CC2_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_CC2_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_CC2_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_CC2_CREDITERR]
static inline bool GET_PB_FM0123_ERR_1_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_CC3_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC3_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_CC3_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_CC3_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_CC3_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_1_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_CC3_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_CC3_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_CC3_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_CC3_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_CC3_CREDITERR]
static inline bool GET_PB_FM0123_ERR_1_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_DAT_HI_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_1_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_DAT_HI_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_DAT_HI_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_1_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_DAT_HI_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_DAT_HI_PERR]

//>> CLEAR_[PB_FM0123_ERR_1_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_DAT_HI_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_DAT_HI_PERR]

//>> GET_[PB_FM0123_ERR_1_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_DAT_HI_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_DAT_HI_PERR]

//>> GET_[PB_FM0123_ERR_1_DAT_HI_PERR]
static inline bool GET_PB_FM0123_ERR_1_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_1_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_DAT_LO_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_1_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_DAT_LO_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_DAT_LO_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_1_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_DAT_LO_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_DAT_LO_PERR]

//>> CLEAR_[PB_FM0123_ERR_1_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_DAT_LO_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_DAT_LO_PERR]

//>> GET_[PB_FM0123_ERR_1_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_DAT_LO_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_DAT_LO_PERR]

//>> GET_[PB_FM0123_ERR_1_DAT_LO_PERR]
static inline bool GET_PB_FM0123_ERR_1_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_1_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_FRAME_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_FRAME_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_FRAME_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_FRAME_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_FRAME_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_1_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_FRAME_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_FRAME_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_FRAME_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_FRAME_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_FRAME_CREDITERR]
static inline bool GET_PB_FM0123_ERR_1_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_INTERNAL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_1_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_INTERNAL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_INTERNAL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_1_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_INTERNAL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_INTERNAL_ERR]

//>> CLEAR_[PB_FM0123_ERR_1_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_INTERNAL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_INTERNAL_ERR]

//>> GET_[PB_FM0123_ERR_1_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_INTERNAL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_INTERNAL_ERR]

//>> GET_[PB_FM0123_ERR_1_INTERNAL_ERR]
static inline bool GET_PB_FM0123_ERR_1_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_1_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_PRSP_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_1_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_PRSP_PTYERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_PRSP_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_1_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_PRSP_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_PRSP_PTYERR]

//>> CLEAR_[PB_FM0123_ERR_1_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_PRSP_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_PRSP_PTYERR]

//>> GET_[PB_FM0123_ERR_1_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_PRSP_PTYERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_PRSP_PTYERR]

//>> GET_[PB_FM0123_ERR_1_PRSP_PTYERR]
static inline bool GET_PB_FM0123_ERR_1_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_TTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_TTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_TTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_TTAG_PERR]

//>> CLEAR_[PB_FM0123_ERR_1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_TTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_TTAG_PERR]

//>> GET_[PB_FM0123_ERR_1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_TTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_TTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_TTAG_PERR]

//>> GET_[PB_FM0123_ERR_1_TTAG_PERR]
static inline bool GET_PB_FM0123_ERR_1_TTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_1_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_VC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_VC0_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_VC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_VC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_VC0_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_1_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_VC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_VC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_VC0_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_VC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_VC0_CREDITERR]
static inline bool GET_PB_FM0123_ERR_1_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_VC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_VC1_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_VC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_VC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_VC1_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_1_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_VC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_VC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_VC1_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_VC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_1_VC1_CREDITERR]
static inline bool GET_PB_FM0123_ERR_1_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_1_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_RTAG_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_1_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_RTAG_PTYERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_RTAG_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_1_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_RTAG_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_RTAG_PTYERR]

//>> CLEAR_[PB_FM0123_ERR_1_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_RTAG_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_RTAG_PTYERR]

//>> GET_[PB_FM0123_ERR_1_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_RTAG_PTYERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_RTAG_PTYERR]

//>> GET_[PB_FM0123_ERR_1_RTAG_PTYERR]
static inline bool GET_PB_FM0123_ERR_1_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_1_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_RTAG_MISC_PTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_1_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_RTAG_MISC_PTY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_1_RTAG_MISC_PTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_1_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_1_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_1_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_1_RTAG_MISC_PTY]

//>> CLEAR_[PB_FM0123_ERR_1_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_1_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_1_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_1_RTAG_MISC_PTY]

//>> GET_[PB_FM0123_ERR_1_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_1_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_1_RTAG_MISC_PTY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_RTAG_MISC_PTY]

//>> GET_[PB_FM0123_ERR_1_RTAG_MISC_PTY]
static inline bool GET_PB_FM0123_ERR_1_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_1_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_1_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_1_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_2_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_CONTROL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_2_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CONTROL_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_CONTROL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_2_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CONTROL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CONTROL_ERROR]

//>> CLEAR_[PB_FM0123_ERR_2_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_CONTROL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_CONTROL_ERROR]

//>> GET_[PB_FM0123_ERR_2_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_CONTROL_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_CONTROL_ERROR]

//>> GET_[PB_FM0123_ERR_2_CONTROL_ERROR]
static inline bool GET_PB_FM0123_ERR_2_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_2_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_ADDR_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_2_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_ADDR_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_2_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_ADDR_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_ADDR_PERR]

//>> CLEAR_[PB_FM0123_ERR_2_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_ADDR_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_ADDR_PERR]

//>> GET_[PB_FM0123_ERR_2_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_ADDR_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_ADDR_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_ADDR_PERR]

//>> GET_[PB_FM0123_ERR_2_ADDR_PERR]
static inline bool GET_PB_FM0123_ERR_2_ADDR_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_2_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_CC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC0_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_CC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC0_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_2_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_CC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_CC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_CC0_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_CC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_CC0_CREDITERR]
static inline bool GET_PB_FM0123_ERR_2_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_CC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC1_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_CC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC1_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_2_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_CC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_CC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_CC1_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_CC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_CC1_CREDITERR]
static inline bool GET_PB_FM0123_ERR_2_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_CC2_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC2_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_CC2_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC2_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC2_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_2_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_CC2_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_CC2_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_CC2_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_CC2_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_CC2_CREDITERR]
static inline bool GET_PB_FM0123_ERR_2_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_CC3_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC3_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_CC3_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_CC3_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_CC3_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_2_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_CC3_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_CC3_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_CC3_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_CC3_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_CC3_CREDITERR]
static inline bool GET_PB_FM0123_ERR_2_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_DAT_HI_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_2_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_DAT_HI_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_DAT_HI_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_2_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_DAT_HI_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_DAT_HI_PERR]

//>> CLEAR_[PB_FM0123_ERR_2_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_DAT_HI_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_DAT_HI_PERR]

//>> GET_[PB_FM0123_ERR_2_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_DAT_HI_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_DAT_HI_PERR]

//>> GET_[PB_FM0123_ERR_2_DAT_HI_PERR]
static inline bool GET_PB_FM0123_ERR_2_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_2_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_DAT_LO_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_2_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_DAT_LO_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_DAT_LO_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_2_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_DAT_LO_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_DAT_LO_PERR]

//>> CLEAR_[PB_FM0123_ERR_2_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_DAT_LO_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_DAT_LO_PERR]

//>> GET_[PB_FM0123_ERR_2_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_DAT_LO_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_DAT_LO_PERR]

//>> GET_[PB_FM0123_ERR_2_DAT_LO_PERR]
static inline bool GET_PB_FM0123_ERR_2_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_2_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_FRAME_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_FRAME_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_FRAME_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_FRAME_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_FRAME_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_2_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_FRAME_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_FRAME_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_FRAME_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_FRAME_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_FRAME_CREDITERR]
static inline bool GET_PB_FM0123_ERR_2_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_INTERNAL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_2_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_INTERNAL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_INTERNAL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_2_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_INTERNAL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_INTERNAL_ERR]

//>> CLEAR_[PB_FM0123_ERR_2_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_INTERNAL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_INTERNAL_ERR]

//>> GET_[PB_FM0123_ERR_2_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_INTERNAL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_INTERNAL_ERR]

//>> GET_[PB_FM0123_ERR_2_INTERNAL_ERR]
static inline bool GET_PB_FM0123_ERR_2_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_2_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_PRSP_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_2_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_PRSP_PTYERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_PRSP_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_2_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_PRSP_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_PRSP_PTYERR]

//>> CLEAR_[PB_FM0123_ERR_2_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_PRSP_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_PRSP_PTYERR]

//>> GET_[PB_FM0123_ERR_2_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_PRSP_PTYERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_PRSP_PTYERR]

//>> GET_[PB_FM0123_ERR_2_PRSP_PTYERR]
static inline bool GET_PB_FM0123_ERR_2_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_2_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_TTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_2_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_TTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_2_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_TTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_TTAG_PERR]

//>> CLEAR_[PB_FM0123_ERR_2_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_TTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_TTAG_PERR]

//>> GET_[PB_FM0123_ERR_2_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_TTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_TTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_TTAG_PERR]

//>> GET_[PB_FM0123_ERR_2_TTAG_PERR]
static inline bool GET_PB_FM0123_ERR_2_TTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_2_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_VC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_VC0_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_VC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_VC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_VC0_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_2_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_VC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_VC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_VC0_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_VC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_VC0_CREDITERR]
static inline bool GET_PB_FM0123_ERR_2_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_VC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_VC1_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_VC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_VC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_VC1_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_2_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_VC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_VC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_VC1_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_VC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_2_VC1_CREDITERR]
static inline bool GET_PB_FM0123_ERR_2_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_2_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_RTAG_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_2_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_RTAG_PTYERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_RTAG_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_2_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_RTAG_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_RTAG_PTYERR]

//>> CLEAR_[PB_FM0123_ERR_2_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_RTAG_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_RTAG_PTYERR]

//>> GET_[PB_FM0123_ERR_2_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_RTAG_PTYERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_RTAG_PTYERR]

//>> GET_[PB_FM0123_ERR_2_RTAG_PTYERR]
static inline bool GET_PB_FM0123_ERR_2_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_2_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_RTAG_MISC_PTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_2_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_RTAG_MISC_PTY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_2_RTAG_MISC_PTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_2_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_2_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_2_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_2_RTAG_MISC_PTY]

//>> CLEAR_[PB_FM0123_ERR_2_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_2_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_2_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_2_RTAG_MISC_PTY]

//>> GET_[PB_FM0123_ERR_2_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_2_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_2_RTAG_MISC_PTY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_RTAG_MISC_PTY]

//>> GET_[PB_FM0123_ERR_2_RTAG_MISC_PTY]
static inline bool GET_PB_FM0123_ERR_2_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_2_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_2_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_2_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_3_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_CONTROL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_3_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CONTROL_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_CONTROL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_3_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CONTROL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CONTROL_ERROR]

//>> CLEAR_[PB_FM0123_ERR_3_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_CONTROL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_CONTROL_ERROR]

//>> GET_[PB_FM0123_ERR_3_CONTROL_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_CONTROL_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_CONTROL_ERROR]

//>> GET_[PB_FM0123_ERR_3_CONTROL_ERROR]
static inline bool GET_PB_FM0123_ERR_3_CONTROL_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_CONTROL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_CONTROL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_CONTROL_ERROR]

//>> SET_[PB_FM0123_ERR_3_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_ADDR_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_3_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_ADDR_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_3_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_ADDR_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_ADDR_PERR]

//>> CLEAR_[PB_FM0123_ERR_3_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_ADDR_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_ADDR_PERR]

//>> GET_[PB_FM0123_ERR_3_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_ADDR_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_ADDR_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_ADDR_PERR]

//>> GET_[PB_FM0123_ERR_3_ADDR_PERR]
static inline bool GET_PB_FM0123_ERR_3_ADDR_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_ADDR_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_ADDR_PERR]

//>> SET_[PB_FM0123_ERR_3_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_CC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC0_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_CC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC0_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_3_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_CC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_CC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_CC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_CC0_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_CC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_CC0_CREDITERR]
static inline bool GET_PB_FM0123_ERR_3_CC0_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_CC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_CC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_CC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC1_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_CC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC1_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_3_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_CC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_CC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_CC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_CC1_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_CC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_CC1_CREDITERR]
static inline bool GET_PB_FM0123_ERR_3_CC1_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_CC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_CC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_CC2_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC2_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_CC2_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC2_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC2_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_3_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_CC2_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_CC2_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_CC2_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_CC2_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_CC2_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_CC2_CREDITERR]
static inline bool GET_PB_FM0123_ERR_3_CC2_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_CC2_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC2_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_CC2_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_CC3_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC3_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_CC3_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_CC3_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_CC3_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_3_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_CC3_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_CC3_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_CC3_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_CC3_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_CC3_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_CC3_CREDITERR]
static inline bool GET_PB_FM0123_ERR_3_CC3_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_CC3_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_CC3_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_CC3_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_DAT_HI_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_3_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_DAT_HI_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_DAT_HI_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_3_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_DAT_HI_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_DAT_HI_PERR]

//>> CLEAR_[PB_FM0123_ERR_3_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_DAT_HI_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_DAT_HI_PERR]

//>> GET_[PB_FM0123_ERR_3_DAT_HI_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_DAT_HI_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_DAT_HI_PERR]

//>> GET_[PB_FM0123_ERR_3_DAT_HI_PERR]
static inline bool GET_PB_FM0123_ERR_3_DAT_HI_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_DAT_HI_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_HI_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_DAT_HI_PERR]

//>> SET_[PB_FM0123_ERR_3_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_DAT_LO_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_3_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_DAT_LO_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_DAT_LO_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_3_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_DAT_LO_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_DAT_LO_PERR]

//>> CLEAR_[PB_FM0123_ERR_3_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_DAT_LO_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_DAT_LO_PERR]

//>> GET_[PB_FM0123_ERR_3_DAT_LO_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_DAT_LO_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_DAT_LO_PERR]

//>> GET_[PB_FM0123_ERR_3_DAT_LO_PERR]
static inline bool GET_PB_FM0123_ERR_3_DAT_LO_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_DAT_LO_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_DAT_LO_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_DAT_LO_PERR]

//>> SET_[PB_FM0123_ERR_3_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_FRAME_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_FRAME_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_FRAME_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_FRAME_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_FRAME_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_3_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_FRAME_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_FRAME_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_FRAME_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_FRAME_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_FRAME_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_FRAME_CREDITERR]
static inline bool GET_PB_FM0123_ERR_3_FRAME_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_FRAME_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_FRAME_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_FRAME_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_INTERNAL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_3_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_INTERNAL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_INTERNAL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_3_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_INTERNAL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_INTERNAL_ERR]

//>> CLEAR_[PB_FM0123_ERR_3_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_INTERNAL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_INTERNAL_ERR]

//>> GET_[PB_FM0123_ERR_3_INTERNAL_ERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_INTERNAL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_INTERNAL_ERR]

//>> GET_[PB_FM0123_ERR_3_INTERNAL_ERR]
static inline bool GET_PB_FM0123_ERR_3_INTERNAL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_INTERNAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_INTERNAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_INTERNAL_ERR]

//>> SET_[PB_FM0123_ERR_3_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_PRSP_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_3_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_PRSP_PTYERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_PRSP_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_3_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_PRSP_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_PRSP_PTYERR]

//>> CLEAR_[PB_FM0123_ERR_3_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_PRSP_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_PRSP_PTYERR]

//>> GET_[PB_FM0123_ERR_3_PRSP_PTYERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_PRSP_PTYERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_PRSP_PTYERR]

//>> GET_[PB_FM0123_ERR_3_PRSP_PTYERR]
static inline bool GET_PB_FM0123_ERR_3_PRSP_PTYERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_PRSP_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_PRSP_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_PRSP_PTYERR]

//>> SET_[PB_FM0123_ERR_3_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_TTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_3_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_TTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_3_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_TTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_TTAG_PERR]

//>> CLEAR_[PB_FM0123_ERR_3_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_TTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_TTAG_PERR]

//>> GET_[PB_FM0123_ERR_3_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_TTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_TTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_TTAG_PERR]

//>> GET_[PB_FM0123_ERR_3_TTAG_PERR]
static inline bool GET_PB_FM0123_ERR_3_TTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_TTAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_TTAG_PERR]

//>> SET_[PB_FM0123_ERR_3_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_VC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_VC0_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_VC0_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_VC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_VC0_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_3_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_VC0_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_VC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_VC0_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_VC0_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_VC0_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_VC0_CREDITERR]
static inline bool GET_PB_FM0123_ERR_3_VC0_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_VC0_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC0_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_VC0_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_VC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_VC1_CREDITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_VC1_CREDITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_VC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_VC1_CREDITERR]

//>> CLEAR_[PB_FM0123_ERR_3_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_VC1_CREDITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_VC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_VC1_CREDITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_VC1_CREDITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_VC1_CREDITERR]

//>> GET_[PB_FM0123_ERR_3_VC1_CREDITERR]
static inline bool GET_PB_FM0123_ERR_3_VC1_CREDITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_VC1_CREDITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_VC1_CREDITERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_VC1_CREDITERR]

//>> SET_[PB_FM0123_ERR_3_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_RTAG_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_3_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_RTAG_PTYERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_RTAG_PTYERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_3_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_RTAG_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_RTAG_PTYERR]

//>> CLEAR_[PB_FM0123_ERR_3_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_RTAG_PTYERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_RTAG_PTYERR]

//>> GET_[PB_FM0123_ERR_3_RTAG_PTYERR]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_RTAG_PTYERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_RTAG_PTYERR]

//>> GET_[PB_FM0123_ERR_3_RTAG_PTYERR]
static inline bool GET_PB_FM0123_ERR_3_RTAG_PTYERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_RTAG_PTYERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_PTYERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_RTAG_PTYERR]

//>> SET_[PB_FM0123_ERR_3_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_RTAG_MISC_PTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_3_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_RTAG_MISC_PTY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.insertFromRight<PB_FM0123_ERR_3_RTAG_MISC_PTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_RTAG_MISC_PTY]

//>> SET_[PB_FM0123_ERR_3_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& SET_PB_FM0123_ERR_3_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.setBit<PB_FM0123_ERR_3_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FM0123_ERR_3_RTAG_MISC_PTY]

//>> CLEAR_[PB_FM0123_ERR_3_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FM0123_ERR_3_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return o_data.clearBit<PB_FM0123_ERR_3_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FM0123_ERR_3_RTAG_MISC_PTY]

//>> GET_[PB_FM0123_ERR_3_RTAG_MISC_PTY]
static inline fapi2::buffer<uint64_t>& GET_PB_FM0123_ERR_3_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.extractToRight<PB_FM0123_ERR_3_RTAG_MISC_PTY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_RTAG_MISC_PTY]

//>> GET_[PB_FM0123_ERR_3_RTAG_MISC_PTY]
static inline bool GET_PB_FM0123_ERR_3_RTAG_MISC_PTY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FM0123_ERR));
#endif
    return i_data.getBit<PB_FM0123_ERR_3_RTAG_MISC_PTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FM0123_ERR_3_RTAG_MISC_PTY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FM0123_ERR_3_RTAG_MISC_PTY]

//>> PREP_[PB_MAILBOX_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_DATA_REG]

//>> GET_[PB_MAILBOX_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_DATA_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_DATA_REG]

//>> PUT_[PB_MAILBOX_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_DATA_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_DATA_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_DATA_REG]


//>> PREP_[PB_PMU0_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PMU0_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU0_CNPM_COUNTER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PMU0_CNPM_COUNTER]

//>> GET_[PB_PMU0_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PMU0_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU0_CNPM_COUNTER;
#endif
    return fapi2::getScom(i_target, PB_PMU0_CNPM_COUNTER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PMU0_CNPM_COUNTER]

//>> PUT_[PB_PMU0_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PMU0_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return fapi2::putScom(i_target, PB_PMU0_CNPM_COUNTER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PMU0_CNPM_COUNTER]


//>> SET_[PB_PMU0_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU0_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU0_CNPM_COUNTER_0,
           PB_PMU0_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU0_CNPM_COUNTER_0]

//>> SET_[PB_PMU0_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU0_CNPM_COUNTER_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU0_CNPM_COUNTER_0,
           PB_PMU0_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU0_CNPM_COUNTER_0]

//>> GET_[PB_PMU0_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU0_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU0_CNPM_COUNTER_0,
           PB_PMU0_CNPM_COUNTER_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU0_CNPM_COUNTER_0]

//>> SET_[PB_PMU0_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU0_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU0_CNPM_COUNTER_1,
           PB_PMU0_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU0_CNPM_COUNTER_1]

//>> SET_[PB_PMU0_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU0_CNPM_COUNTER_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU0_CNPM_COUNTER_1,
           PB_PMU0_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU0_CNPM_COUNTER_1]

//>> GET_[PB_PMU0_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU0_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU0_CNPM_COUNTER_1,
           PB_PMU0_CNPM_COUNTER_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU0_CNPM_COUNTER_1]

//>> SET_[PB_PMU0_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU0_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU0_CNPM_COUNTER_2,
           PB_PMU0_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU0_CNPM_COUNTER_2]

//>> SET_[PB_PMU0_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU0_CNPM_COUNTER_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU0_CNPM_COUNTER_2,
           PB_PMU0_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU0_CNPM_COUNTER_2]

//>> GET_[PB_PMU0_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU0_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU0_CNPM_COUNTER_2,
           PB_PMU0_CNPM_COUNTER_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU0_CNPM_COUNTER_2]

//>> SET_[PB_PMU0_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU0_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU0_CNPM_COUNTER_3,
           PB_PMU0_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU0_CNPM_COUNTER_3]

//>> SET_[PB_PMU0_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU0_CNPM_COUNTER_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU0_CNPM_COUNTER_3,
           PB_PMU0_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU0_CNPM_COUNTER_3]

//>> GET_[PB_PMU0_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU0_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU0_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU0_CNPM_COUNTER_3,
           PB_PMU0_CNPM_COUNTER_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU0_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU0_CNPM_COUNTER_3]

//>> PREP_[PB_TL_LINK_DATA_01_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_TL_LINK_DATA_01_CFG_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_DATA_01_CFG_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_TL_LINK_DATA_01_CFG_REG]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_TL_LINK_DATA_01_CFG_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_DATA_01_CFG_REG;
#endif
    return fapi2::getScom(i_target, PB_TL_LINK_DATA_01_CFG_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG]

//>> PUT_[PB_TL_LINK_DATA_01_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_TL_LINK_DATA_01_CFG_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return fapi2::putScom(i_target, PB_TL_LINK_DATA_01_CFG_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_TL_LINK_DATA_01_CFG_REG]


//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.setBit<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]

//>> CLEAR_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]
static inline bool GET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.getBit<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_0]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC0_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.setBit<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]

//>> CLEAR_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]
static inline bool GET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.getBit<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_1]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DOB_VC1_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_HI_BACKOFF_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_LO_BACKOFF_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT,
           PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_VC_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.setBit<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]

//>> CLEAR_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]
static inline bool GET_PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.getBit<PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_LINK01_DIB_RTAG_DATA_ASY_LIMIT]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2,
           PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2]

//>> SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2,
           PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2]

//>> GET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_DATA_01_CFG_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2,
           PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_DATA_01_CFG_REG_DIBDOB01_SP_2]

//>> PREP_[PHY_PPE_WRAP_MIB_XISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_MIB_XISGB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_MIB_XISGB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_MIB_XISGB]

//>> GET_[PHY_PPE_WRAP_MIB_XISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_MIB_XISGB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_MIB_XISGB;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_MIB_XISGB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_MIB_XISGB]

//>> PUT_[PHY_PPE_WRAP_MIB_XISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_MIB_XISGB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_MIB_XISGB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_MIB_XISGB]


//>> SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS,
           PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS]

//>> SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS,
           PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS]

//>> GET_[PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS,
           PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_MIB_XISGB_SGB_STORE_ADDRESS]

//>> SET_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.setBit<PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]
static inline bool GET_PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return i_data.getBit<PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_MIB_XISGB_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID,
           PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID]

//>> SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID,
           PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID]

//>> GET_[PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID,
           PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_MIB_XISGB_SGB_BYTE_VALID]

//>> SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]

//>> SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]

//>> SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.setBit<PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]

//>> CLEAR_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]

//>> GET_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]

//>> GET_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]
static inline bool GET_PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_MIB_XISGB));
#endif
    return i_data.getBit<PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_MIB_XISGB_SGB_FLUSH_PENDING]

//>> PREP_[PHY_PPE_WRAP_SCOM_WORK_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_SCOM_WORK_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOM_WORK_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_SCOM_WORK_REG1]

//>> GET_[PHY_PPE_WRAP_SCOM_WORK_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_SCOM_WORK_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOM_WORK_REG1;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_SCOM_WORK_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_WORK_REG1]

//>> PUT_[PHY_PPE_WRAP_SCOM_WORK_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_SCOM_WORK_REG1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_SCOM_WORK_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_SCOM_WORK_REG1]


//>> SET_[PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1,
           PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]

//>> SET_[PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1,
           PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]

//>> GET_[PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1,
           PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]

//>> PREP_[TXIRLM_REGS_SPARE_MODE_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_SPARE_MODE_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_SPARE_MODE_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_SPARE_MODE_PB]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_SPARE_MODE_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_SPARE_MODE_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_SPARE_MODE_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB]

//>> PUT_[TXIRLM_REGS_SPARE_MODE_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_SPARE_MODE_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_SPARE_MODE_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_SPARE_MODE_PB]


//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_0]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_0]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_0]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_0]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_0]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_SPARE_MODE_PB_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_0]

//>> CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_SPARE_MODE_PB_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_SPARE_MODE_PB_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_0]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_0]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_SPARE_MODE_PB_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_SPARE_MODE_PB_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_0]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_0]
static inline bool GET_TXIRLM_REGS_SPARE_MODE_PB_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_SPARE_MODE_PB_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_0]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_1]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_1]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_1]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_1]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_1]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_SPARE_MODE_PB_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_1]

//>> CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_SPARE_MODE_PB_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_SPARE_MODE_PB_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_1]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_1]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_SPARE_MODE_PB_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_SPARE_MODE_PB_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_1]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_1]
static inline bool GET_TXIRLM_REGS_SPARE_MODE_PB_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_SPARE_MODE_PB_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_1]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_2]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_2]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_2]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_2]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_2]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_SPARE_MODE_PB_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_2]

//>> CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_SPARE_MODE_PB_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_SPARE_MODE_PB_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_2]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_2]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_SPARE_MODE_PB_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_SPARE_MODE_PB_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_2]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_2]
static inline bool GET_TXIRLM_REGS_SPARE_MODE_PB_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_SPARE_MODE_PB_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_2]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_3]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_3]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_3]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_3]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_3]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_SPARE_MODE_PB_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_3]

//>> CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_SPARE_MODE_PB_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_SPARE_MODE_PB_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_3]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_3]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_SPARE_MODE_PB_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_SPARE_MODE_PB_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_3]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_3]
static inline bool GET_TXIRLM_REGS_SPARE_MODE_PB_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_SPARE_MODE_PB_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_3]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_4]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_4]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_4]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_4]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_4]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_SPARE_MODE_PB_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_4]

//>> CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_SPARE_MODE_PB_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_SPARE_MODE_PB_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_4]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_4]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_SPARE_MODE_PB_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_SPARE_MODE_PB_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_4]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_4]
static inline bool GET_TXIRLM_REGS_SPARE_MODE_PB_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_SPARE_MODE_PB_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_4]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_5]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_5]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_5]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_5]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_5]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_SPARE_MODE_PB_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_5]

//>> CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_SPARE_MODE_PB_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_SPARE_MODE_PB_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_5]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_5]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_SPARE_MODE_PB_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_SPARE_MODE_PB_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_5]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_5]
static inline bool GET_TXIRLM_REGS_SPARE_MODE_PB_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_SPARE_MODE_PB_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_5]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_6]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_6]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_6]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_6]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_6]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_SPARE_MODE_PB_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_6]

//>> CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_SPARE_MODE_PB_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_SPARE_MODE_PB_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_6]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_6]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_SPARE_MODE_PB_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_SPARE_MODE_PB_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_6]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_6]
static inline bool GET_TXIRLM_REGS_SPARE_MODE_PB_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_SPARE_MODE_PB_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_6]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_7]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_7]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_7]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_SPARE_MODE_PB_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_7]

//>> SET_[TXIRLM_REGS_SPARE_MODE_PB_7]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_SPARE_MODE_PB_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_SPARE_MODE_PB_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_SPARE_MODE_PB_7]

//>> CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_SPARE_MODE_PB_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_SPARE_MODE_PB_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_SPARE_MODE_PB_7]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_7]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_SPARE_MODE_PB_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_SPARE_MODE_PB_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_7]

//>> GET_[TXIRLM_REGS_SPARE_MODE_PB_7]
static inline bool GET_TXIRLM_REGS_SPARE_MODE_PB_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_SPARE_MODE_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_SPARE_MODE_PB_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_SPARE_MODE_PB_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_SPARE_MODE_PB_7]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_SWO7_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO7_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_SWO7_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO7_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO7_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_SWO7_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO7_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO7_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO7_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31,
           TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO7_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31,
           TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO7_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31,
           TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO7_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_16_31]


//>> PREP_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_ANY_LOCAL_ERR_MASK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_ANY_LOCAL_ERR_MASK]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_ANY_LOCAL_ERR_MASK;
#endif
    return fapi2::getScom(i_target, EPS_FIR_ANY_LOCAL_ERR_MASK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK]

//>> PUT_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return fapi2::putScom(i_target, EPS_FIR_ANY_LOCAL_ERR_MASK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_ANY_LOCAL_ERR_MASK]


//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA1]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA1;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA1]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA1));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA1]


//>> PREP_[LOCAL_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_LOCAL_XSTOP(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LOCAL_XSTOP;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[LOCAL_XSTOP]

//>> GET_[LOCAL_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_LOCAL_XSTOP(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LOCAL_XSTOP;
#endif
    return fapi2::getScom(i_target, LOCAL_XSTOP, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[LOCAL_XSTOP]

//>> PUT_[LOCAL_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_LOCAL_XSTOP(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return fapi2::putScom(i_target, LOCAL_XSTOP, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[LOCAL_XSTOP]


//>> SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> CLEAR_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_ANY_LOCAL_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline bool GET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> SET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED1L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED1L]

//>> SET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED1L(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED1L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED1L]

//>> SET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_RESERVED1L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED1L]

//>> CLEAR_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_RESERVED1L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_RESERVED1L]

//>> GET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_RESERVED1L,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED1L]

//>> GET_[LOCAL_XSTOP_RESERVED1L]
static inline bool GET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_RESERVED1L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED1L]

//>> SET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED2L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED2L]

//>> SET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED2L(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED2L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED2L]

//>> SET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_RESERVED2L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED2L]

//>> CLEAR_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_RESERVED2L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_RESERVED2L]

//>> GET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_RESERVED2L,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED2L]

//>> GET_[LOCAL_XSTOP_RESERVED2L]
static inline bool GET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_RESERVED2L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED2L]

//>> SET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED3L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED3L]

//>> SET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED3L(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED3L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED3L]

//>> SET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_RESERVED3L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED3L]

//>> CLEAR_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_RESERVED3L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_RESERVED3L]

//>> GET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_RESERVED3L,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED3L]

//>> GET_[LOCAL_XSTOP_RESERVED3L]
static inline bool GET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_RESERVED3L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED3L]

//>> SET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_PERV]

//>> SET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_PERV]

//>> SET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_PERV]

//>> CLEAR_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_PERV]

//>> GET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_PERV]

//>> GET_[LOCAL_XSTOP_PERV]
static inline bool GET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_PERV]

//>> SET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN05]

//>> SET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN05]

//>> SET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN05]

//>> CLEAR_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN05]

//>> GET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN05]

//>> GET_[LOCAL_XSTOP_IN05]
static inline bool GET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN05]

//>> SET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN06]

//>> SET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN06]

//>> SET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN06]

//>> CLEAR_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN06]

//>> GET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN06]

//>> GET_[LOCAL_XSTOP_IN06]
static inline bool GET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN06]

//>> SET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN07]

//>> SET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN07]

//>> SET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN07]

//>> CLEAR_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN07]

//>> GET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN07]

//>> GET_[LOCAL_XSTOP_IN07]
static inline bool GET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN07]

//>> SET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN08]

//>> SET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN08]

//>> SET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN08]

//>> CLEAR_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN08]

//>> GET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN08]

//>> GET_[LOCAL_XSTOP_IN08]
static inline bool GET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN08]

//>> SET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN09]

//>> SET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN09]

//>> SET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN09]

//>> CLEAR_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN09]

//>> GET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN09]

//>> GET_[LOCAL_XSTOP_IN09]
static inline bool GET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN09]

//>> SET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN10]

//>> SET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN10]

//>> SET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN10]

//>> CLEAR_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN10]

//>> GET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN10]

//>> GET_[LOCAL_XSTOP_IN10]
static inline bool GET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN10]

//>> SET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN11]

//>> SET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN11]

//>> SET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN11]

//>> CLEAR_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN11]

//>> GET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN11]

//>> GET_[LOCAL_XSTOP_IN11]
static inline bool GET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN11]

//>> SET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN12]

//>> SET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN12]

//>> SET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN12]

//>> CLEAR_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN12]

//>> GET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN12]

//>> GET_[LOCAL_XSTOP_IN12]
static inline bool GET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN12]

//>> SET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN13]

//>> SET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN13]

//>> SET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN13]

//>> CLEAR_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN13]

//>> GET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN13]

//>> GET_[LOCAL_XSTOP_IN13]
static inline bool GET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN13]

//>> SET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN14]

//>> SET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN14]

//>> SET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN14]

//>> CLEAR_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN14]

//>> GET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN14]

//>> GET_[LOCAL_XSTOP_IN14]
static inline bool GET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN14]

//>> SET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN15]

//>> SET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN15]

//>> SET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN15]

//>> CLEAR_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN15]

//>> GET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN15]

//>> GET_[LOCAL_XSTOP_IN15]
static inline bool GET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN15]

//>> PREP_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LXSTOP_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[LXSTOP_INTERRUPT_REG]

//>> GET_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LXSTOP_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, LXSTOP_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG]

//>> PUT_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, LXSTOP_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[LXSTOP_INTERRUPT_REG]


//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.setBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> CLEAR_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.clearBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> GET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& GET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return i_data.extractToRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> GET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline bool GET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return i_data.getBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> PREP_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHASE_COUNTER_RESET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHASE_COUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHASE_COUNTER_RESET;
#endif
    return fapi2::getScom(i_target, PHASE_COUNTER_RESET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHASE_COUNTER_RESET]

//>> PUT_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return fapi2::putScom(i_target, PHASE_COUNTER_RESET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHASE_COUNTER_RESET]


//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.insertFromRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.insertFromRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.setBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> CLEAR_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.clearBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& GET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return i_data.extractToRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline bool GET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return i_data.getBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> PREP_[TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_3]

//>> GET_[TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_3]

//>> PUT_[TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_3]


//>> SET_[TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_C,
           TRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_C]

//>> SET_[TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_C,
           TRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_C]

//>> GET_[TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_3_C,
           TRA0_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_3_C]

//>> SET_[TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_D,
           TRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_D]

//>> SET_[TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_D,
           TRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_D]

//>> GET_[TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_3_D,
           TRA0_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_3_D]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
