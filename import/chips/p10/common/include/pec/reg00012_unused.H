/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00012_unused.H $       */
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

#ifndef __PEC_REG00012_H_UNUSED__
#define __PEC_REG00012_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> PREP_[CTRL_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CTRL_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTRL_PROTECT_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CTRL_PROTECT_MODE_REG]

//>> GET_[CTRL_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CTRL_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTRL_PROTECT_MODE_REG;
#endif
    return fapi2::getScom(i_target, CTRL_PROTECT_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CTRL_PROTECT_MODE_REG]

//>> PUT_[CTRL_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CTRL_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return fapi2::putScom(i_target, CTRL_PROTECT_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CTRL_PROTECT_MODE_REG]


//>> SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.setBit<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> CLEAR_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.clearBit<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline bool GET_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return i_data.getBit<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.setBit<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> CLEAR_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.clearBit<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline bool GET_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return i_data.getBit<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK5;
#endif
    return fapi2::getScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]

//>> PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return fapi2::putScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]


//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> PREP_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_PSC_WRITE_PROTECT_ENABLE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_WRITE_PROTECT_ENABLE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]

//>> GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_PSC_WRITE_PROTECT_ENABLE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_WRITE_PROTECT_ENABLE_REG;
#endif
    return fapi2::getScom(i_target, EPS_PSC_WRITE_PROTECT_ENABLE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]

//>> PUT_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_PSC_WRITE_PROTECT_ENABLE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return fapi2::putScom(i_target, EPS_PSC_WRITE_PROTECT_ENABLE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]


//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.setBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> CLEAR_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.clearBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.extractToRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline bool GET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.getBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.setBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> CLEAR_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.clearBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.extractToRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline bool GET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.getBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> PREP_[HOSTATTN_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_HOSTATTN_UNMASKED(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HOSTATTN_UNMASKED;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[HOSTATTN_UNMASKED]

//>> GET_[HOSTATTN_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_HOSTATTN_UNMASKED(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HOSTATTN_UNMASKED;
#endif
    return fapi2::getScom(i_target, HOSTATTN_UNMASKED, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[HOSTATTN_UNMASKED]

//>> PUT_[HOSTATTN_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_HOSTATTN_UNMASKED(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(HOSTATTN_UNMASKED));
#endif
    return fapi2::putScom(i_target, HOSTATTN_UNMASKED, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[HOSTATTN_UNMASKED]


//>> SET_[HOSTATTN_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_UNMASKED));
#endif
    return o_data.insertFromRight<HOSTATTN_UNMASKED_IN,
           HOSTATTN_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access HOSTATTN_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_UNMASKED_IN]

//>> SET_[HOSTATTN_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_UNMASKED_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_UNMASKED));
#endif
    return o_data.insertFromRight<HOSTATTN_UNMASKED_IN,
           HOSTATTN_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access HOSTATTN_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_UNMASKED_IN]

//>> GET_[HOSTATTN_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& GET_HOSTATTN_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_UNMASKED));
#endif
    return i_data.extractToRight<HOSTATTN_UNMASKED_IN,
           HOSTATTN_UNMASKED_IN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access HOSTATTN_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HOSTATTN_UNMASKED_IN]

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
    FAPI_ERR("0:scom_pec Invalid dial access MULTICAST_GROUP_4_MULTICAST4_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_pec Invalid dial access MULTICAST_GROUP_4_MULTICAST4_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_pec Invalid dial access MULTICAST_GROUP_4_MULTICAST4_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_pec Invalid dial access PRE_COUNTER_REG_PRE_COUNTER chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_pec Invalid dial access PRE_COUNTER_REG_PRE_COUNTER chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_pec Invalid dial access PRE_COUNTER_REG_PRE_COUNTER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PRE_COUNTER_REG_PRE_COUNTER]

//>> PREP_[TOP0_IXERRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_IXERRPT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IXERRPT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_IXERRPT]

//>> GET_[TOP0_IXERRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_IXERRPT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IXERRPT;
#endif
    return fapi2::getScom(i_target, TOP0_IXERRPT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_IXERRPT]

//>> PUT_[TOP0_IXERRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_IXERRPT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return fapi2::putScom(i_target, TOP0_IXERRPT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_IXERRPT]


//>> SET_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.insertFromRight<TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.setBit<TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return o_data.clearBit<TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.extractToRight<TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXERRPT));
#endif
    return i_data.getBit<TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> PREP_[TOP0_PIPEDOUTCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_PIPEDOUTCTL0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDOUTCTL0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_PIPEDOUTCTL0]

//>> GET_[TOP0_PIPEDOUTCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_PIPEDOUTCTL0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDOUTCTL0;
#endif
    return fapi2::getScom(i_target, TOP0_PIPEDOUTCTL0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0]

//>> PUT_[TOP0_PIPEDOUTCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_PIPEDOUTCTL0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return fapi2::putScom(i_target, TOP0_PIPEDOUTCTL0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_PIPEDOUTCTL0]


//>> SET_[TOP0_PIPEDOUTCTL0_RESERVED_63_59]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_RESERVED_63_59(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_RESERVED_63_59,
           TOP0_PIPEDOUTCTL0_RESERVED_63_59_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_RESERVED_63_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_RESERVED_63_59]

//>> SET_[TOP0_PIPEDOUTCTL0_RESERVED_63_59]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_RESERVED_63_59(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_RESERVED_63_59,
           TOP0_PIPEDOUTCTL0_RESERVED_63_59_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_RESERVED_63_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_RESERVED_63_59]

//>> GET_[TOP0_PIPEDOUTCTL0_RESERVED_63_59]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_RESERVED_63_59(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_RESERVED_63_59,
           TOP0_PIPEDOUTCTL0_RESERVED_63_59_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_RESERVED_63_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_RESERVED_63_59]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline bool GET_TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline bool GET_TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline bool GET_TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline bool GET_TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline bool GET_TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline bool GET_TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline bool GET_TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline bool GET_TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> SET_[TOP0_PIPEDOUTCTL0_RESERVED_50_42]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_RESERVED_50_42(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_RESERVED_50_42,
           TOP0_PIPEDOUTCTL0_RESERVED_50_42_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_RESERVED_50_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_RESERVED_50_42]

//>> SET_[TOP0_PIPEDOUTCTL0_RESERVED_50_42]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_RESERVED_50_42(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_RESERVED_50_42,
           TOP0_PIPEDOUTCTL0_RESERVED_50_42_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_RESERVED_50_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_RESERVED_50_42]

//>> GET_[TOP0_PIPEDOUTCTL0_RESERVED_50_42]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_RESERVED_50_42(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_RESERVED_50_42,
           TOP0_PIPEDOUTCTL0_RESERVED_50_42_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_RESERVED_50_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_RESERVED_50_42]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> SET_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> CLEAR_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> GET_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline bool GET_TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> SET_[TOP0_PIPEDOUTCTL0_RESERVED_40_0]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_RESERVED_40_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_RESERVED_40_0,
           TOP0_PIPEDOUTCTL0_RESERVED_40_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_RESERVED_40_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_RESERVED_40_0]

//>> SET_[TOP0_PIPEDOUTCTL0_RESERVED_40_0]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL0_RESERVED_40_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL0_RESERVED_40_0,
           TOP0_PIPEDOUTCTL0_RESERVED_40_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_RESERVED_40_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL0_RESERVED_40_0]

//>> GET_[TOP0_PIPEDOUTCTL0_RESERVED_40_0]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL0_RESERVED_40_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL0_RESERVED_40_0,
           TOP0_PIPEDOUTCTL0_RESERVED_40_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL0_RESERVED_40_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL0_RESERVED_40_0]

//>> SET_[P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6,
           P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6]

//>> SET_[P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6,
           P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6]

//>> GET_[P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6,
           P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TOP0_PIPEDOUTCTL0_RESERVED_40_6]

//>> SET_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> SET_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> SET_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.setBit<P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> CLEAR_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> GET_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> GET_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline bool GET_P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.getBit<P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TOP0_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> SET_[P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS,
           P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]

//>> SET_[P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS,
           P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]

//>> GET_[P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS,
           P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TOP0_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]

//>> PREP_[TOP1_PIPEDINCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_PIPEDINCTL1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDINCTL1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_PIPEDINCTL1]

//>> GET_[TOP1_PIPEDINCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_PIPEDINCTL1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDINCTL1;
#endif
    return fapi2::getScom(i_target, TOP1_PIPEDINCTL1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1]

//>> PUT_[TOP1_PIPEDINCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_PIPEDINCTL1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return fapi2::putScom(i_target, TOP1_PIPEDINCTL1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_PIPEDINCTL1]


//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]

//>> CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]
static inline bool GET_TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE7_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]

//>> CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]
static inline bool GET_TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE6_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]

//>> CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]
static inline bool GET_TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE5_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]

//>> CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]
static inline bool GET_TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE4_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]

//>> CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]
static inline bool GET_TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE3_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]

//>> CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]
static inline bool GET_TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE2_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]

//>> CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]
static inline bool GET_TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE1_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]

//>> CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]

//>> GET_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]
static inline bool GET_TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_IPE_LANE0_REF_CLK_REQ_N]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]

//>> CLEAR_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]
static inline bool GET_TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY7_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]

//>> CLEAR_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]
static inline bool GET_TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY6_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]

//>> CLEAR_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]
static inline bool GET_TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY5_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]

//>> CLEAR_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]
static inline bool GET_TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY4_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]

//>> CLEAR_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]
static inline bool GET_TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY3_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]

//>> CLEAR_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]
static inline bool GET_TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY2_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]

//>> CLEAR_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]
static inline bool GET_TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY1_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]

//>> CLEAR_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]
static inline bool GET_TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_VLD]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT]

//>> SET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT]

//>> GET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT,
           TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL1_HY_PHY0_PPM_DRIFT]

//>> PREP_[TOP1_PIPEDOUTCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_PIPEDOUTCTL1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDOUTCTL1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_PIPEDOUTCTL1]

//>> GET_[TOP1_PIPEDOUTCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_PIPEDOUTCTL1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDOUTCTL1;
#endif
    return fapi2::getScom(i_target, TOP1_PIPEDOUTCTL1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1]

//>> PUT_[TOP1_PIPEDOUTCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_PIPEDOUTCTL1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return fapi2::putScom(i_target, TOP1_PIPEDOUTCTL1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_PIPEDOUTCTL1]


//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_63_31]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_63_31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_63_31,
           TOP1_PIPEDOUTCTL1_RESERVED_63_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_63_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_63_31]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_63_31]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_63_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_63_31,
           TOP1_PIPEDOUTCTL1_RESERVED_63_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_63_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_63_31]

//>> GET_[TOP1_PIPEDOUTCTL1_RESERVED_63_31]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL1_RESERVED_63_31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL1_RESERVED_63_31,
           TOP1_PIPEDOUTCTL1_RESERVED_63_31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_63_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_RESERVED_63_31]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_30]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_30]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL1_RESERVED_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_30]

//>> CLEAR_[TOP1_PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL1_RESERVED_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL1_RESERVED_30]

//>> GET_[TOP1_PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL1_RESERVED_30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_RESERVED_30]

//>> GET_[TOP1_PIPEDOUTCTL1_RESERVED_30]
static inline bool GET_TOP1_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL1_RESERVED_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_RESERVED_30]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> GET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> GET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline bool GET_TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_28]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_28(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_28]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL1_RESERVED_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_28]

//>> CLEAR_[TOP1_PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL1_RESERVED_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL1_RESERVED_28]

//>> GET_[TOP1_PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL1_RESERVED_28,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_RESERVED_28]

//>> GET_[TOP1_PIPEDOUTCTL1_RESERVED_28]
static inline bool GET_TOP1_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL1_RESERVED_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_RESERVED_28]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> GET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> GET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline bool GET_TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_26]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_26(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_26]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL1_RESERVED_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_26]

//>> CLEAR_[TOP1_PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL1_RESERVED_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL1_RESERVED_26]

//>> GET_[TOP1_PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL1_RESERVED_26,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_RESERVED_26]

//>> GET_[TOP1_PIPEDOUTCTL1_RESERVED_26]
static inline bool GET_TOP1_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL1_RESERVED_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_RESERVED_26]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> GET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> GET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline bool GET_TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_24]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_24(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_24]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL1_RESERVED_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_24]

//>> CLEAR_[TOP1_PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL1_RESERVED_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL1_RESERVED_24]

//>> GET_[TOP1_PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL1_RESERVED_24,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_RESERVED_24]

//>> GET_[TOP1_PIPEDOUTCTL1_RESERVED_24]
static inline bool GET_TOP1_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL1_RESERVED_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_RESERVED_24]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> GET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> GET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline bool GET_TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_22_0]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_22_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_22_0,
           TOP1_PIPEDOUTCTL1_RESERVED_22_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_22_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_22_0]

//>> SET_[TOP1_PIPEDOUTCTL1_RESERVED_22_0]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL1_RESERVED_22_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL1_RESERVED_22_0,
           TOP1_PIPEDOUTCTL1_RESERVED_22_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_22_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL1_RESERVED_22_0]

//>> GET_[TOP1_PIPEDOUTCTL1_RESERVED_22_0]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL1_RESERVED_22_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL1_RESERVED_22_0,
           TOP1_PIPEDOUTCTL1_RESERVED_22_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL1_RESERVED_22_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL1_RESERVED_22_0]

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
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
