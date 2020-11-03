/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00015_unused.H $       */
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

#ifndef __PEC_REG00015_H_UNUSED__
#define __PEC_REG00015_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK2;
#endif
    return fapi2::getScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]

//>> PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return fapi2::putScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]


//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> PREP_[MULTICAST_GROUP_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MULTICAST_GROUP_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MULTICAST_GROUP_3]

//>> GET_[MULTICAST_GROUP_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MULTICAST_GROUP_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_3;
#endif
    return fapi2::getScom(i_target, MULTICAST_GROUP_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MULTICAST_GROUP_3]

//>> PUT_[MULTICAST_GROUP_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MULTICAST_GROUP_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_3));
#endif
    return fapi2::putScom(i_target, MULTICAST_GROUP_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MULTICAST_GROUP_3]


//>> SET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_3_MULTICAST3_GROUP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_3));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_3_MULTICAST3_GROUP,
           MULTICAST_GROUP_3_MULTICAST3_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]

//>> SET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_3_MULTICAST3_GROUP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_3));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_3_MULTICAST3_GROUP,
           MULTICAST_GROUP_3_MULTICAST3_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]

//>> GET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]
static inline fapi2::buffer<uint64_t>& GET_MULTICAST_GROUP_3_MULTICAST3_GROUP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_3));
#endif
    return i_data.extractToRight<MULTICAST_GROUP_3_MULTICAST3_GROUP,
           MULTICAST_GROUP_3_MULTICAST3_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]

//>> PREP_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG]


//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_MODE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]
static inline bool GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_DISABLE_SCOPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]

//>> CLEAR_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]
static inline bool GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_RESERVED_03]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MIN_CYCLES]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_GROUP_MAX_CYCLES]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MIN_CYCLES]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_SYSTEM_MAX_CYCLES]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_CLEAN_RANGES]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK]

//>> SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK]

//>> GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK,
           PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_WRITE_PACING_REG_PE_WRITE_PACING_NUM_OF_HPCACK]

//>> PREP_[PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PROTECT_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PROTECT_MODE_REG]

//>> GET_[PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PROTECT_MODE_REG;
#endif
    return fapi2::getScom(i_target, PROTECT_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PROTECT_MODE_REG]

//>> PUT_[PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return fapi2::putScom(i_target, PROTECT_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PROTECT_MODE_REG]


//>> SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_READ_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.setBit<PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> CLEAR_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.clearBit<PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline bool GET_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return i_data.getBit<PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.setBit<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> CLEAR_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.clearBit<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline bool GET_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return i_data.getBit<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> PREP_[TOP0_PIPEDINCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_PIPEDINCTL0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDINCTL0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_PIPEDINCTL0]

//>> GET_[TOP0_PIPEDINCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_PIPEDINCTL0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDINCTL0;
#endif
    return fapi2::getScom(i_target, TOP0_PIPEDINCTL0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0]

//>> PUT_[TOP0_PIPEDINCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_PIPEDINCTL0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return fapi2::putScom(i_target, TOP0_PIPEDINCTL0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_PIPEDINCTL0]


//>> SET_[TOP0_PIPEDINCTL0_RESERVED_63_17]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_RESERVED_63_17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_RESERVED_63_17,
           TOP0_PIPEDINCTL0_RESERVED_63_17_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_RESERVED_63_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_RESERVED_63_17]

//>> SET_[TOP0_PIPEDINCTL0_RESERVED_63_17]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_RESERVED_63_17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_RESERVED_63_17,
           TOP0_PIPEDINCTL0_RESERVED_63_17_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_RESERVED_63_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_RESERVED_63_17]

//>> GET_[TOP0_PIPEDINCTL0_RESERVED_63_17]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_RESERVED_63_17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_RESERVED_63_17,
           TOP0_PIPEDINCTL0_RESERVED_63_17_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_RESERVED_63_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_RESERVED_63_17]

//>> SET_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY_RTUNE_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY_RTUNE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY_RTUNE_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY_RTUNE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY_RTUNE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL0_PHY_RTUNE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> CLEAR_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL0_PHY_RTUNE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL0_PHY_RTUNE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> GET_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_PHY_RTUNE_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_PHY_RTUNE_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> GET_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline bool GET_TOP0_PIPEDINCTL0_PHY_RTUNE_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL0_PHY_RTUNE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_RESERVED_15_12]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_RESERVED_15_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_RESERVED_15_12,
           TOP0_PIPEDINCTL0_RESERVED_15_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_RESERVED_15_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_RESERVED_15_12]

//>> SET_[TOP0_PIPEDINCTL0_RESERVED_15_12]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_RESERVED_15_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_RESERVED_15_12,
           TOP0_PIPEDINCTL0_RESERVED_15_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_RESERVED_15_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_RESERVED_15_12]

//>> GET_[TOP0_PIPEDINCTL0_RESERVED_15_12]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_RESERVED_15_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_RESERVED_15_12,
           TOP0_PIPEDINCTL0_RESERVED_15_12_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_RESERVED_15_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_RESERVED_15_12]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> CLEAR_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> GET_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> GET_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline bool GET_TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> CLEAR_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> GET_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> GET_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline bool GET_TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> CLEAR_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> GET_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> GET_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline bool GET_TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> CLEAR_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> GET_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> GET_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline bool GET_TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_RESERVED_7_4]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_RESERVED_7_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_RESERVED_7_4,
           TOP0_PIPEDINCTL0_RESERVED_7_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_RESERVED_7_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_RESERVED_7_4]

//>> SET_[TOP0_PIPEDINCTL0_RESERVED_7_4]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_RESERVED_7_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_RESERVED_7_4,
           TOP0_PIPEDINCTL0_RESERVED_7_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_RESERVED_7_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_RESERVED_7_4]

//>> GET_[TOP0_PIPEDINCTL0_RESERVED_7_4]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_RESERVED_7_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_RESERVED_7_4,
           TOP0_PIPEDINCTL0_RESERVED_7_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_RESERVED_7_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_RESERVED_7_4]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> CLEAR_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> GET_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> GET_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline bool GET_TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> CLEAR_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> GET_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> GET_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline bool GET_TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> CLEAR_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> GET_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> GET_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline bool GET_TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> SET_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> CLEAR_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> GET_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> GET_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline bool GET_TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> PREP_[TOP1_IXERRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_IXERRPT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IXERRPT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_IXERRPT]

//>> GET_[TOP1_IXERRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_IXERRPT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IXERRPT;
#endif
    return fapi2::getScom(i_target, TOP1_IXERRPT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_IXERRPT]

//>> PUT_[TOP1_IXERRPT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_IXERRPT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return fapi2::putScom(i_target, TOP1_IXERRPT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_IXERRPT]


//>> SET_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_RAM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_RAM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_SCOM_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_SCOM_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_0_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_SCRUB_ECC_CE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.insertFromRight<TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> SET_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.setBit<TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> CLEAR_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return o_data.clearBit<TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.extractToRight<TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> GET_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]
static inline bool GET_TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXERRPT));
#endif
    return i_data.getBit<TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXERRPT_1_SCRUB_ECC_UE_ERRRPT_HOLD]

//>> PREP_[TRA0_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_1]

//>> GET_[TRA0_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_1]

//>> PUT_[TRA0_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_1]


//>> SET_[TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[VITAL_SCAN_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_VITAL_SCAN_OUT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VITAL_SCAN_OUT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[VITAL_SCAN_OUT]

//>> GET_[VITAL_SCAN_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_VITAL_SCAN_OUT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VITAL_SCAN_OUT;
#endif
    return fapi2::getScom(i_target, VITAL_SCAN_OUT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[VITAL_SCAN_OUT]

//>> PUT_[VITAL_SCAN_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_VITAL_SCAN_OUT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(VITAL_SCAN_OUT));
#endif
    return fapi2::putScom(i_target, VITAL_SCAN_OUT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[VITAL_SCAN_OUT]


//>> PREP_[XSTOP_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_XSTOP_UNMASKED(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP_UNMASKED;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[XSTOP_UNMASKED]

//>> GET_[XSTOP_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_XSTOP_UNMASKED(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP_UNMASKED;
#endif
    return fapi2::getScom(i_target, XSTOP_UNMASKED, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[XSTOP_UNMASKED]

//>> PUT_[XSTOP_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_XSTOP_UNMASKED(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(XSTOP_UNMASKED));
#endif
    return fapi2::putScom(i_target, XSTOP_UNMASKED, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[XSTOP_UNMASKED]


//>> SET_[XSTOP_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_XSTOP_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP_UNMASKED));
#endif
    return o_data.insertFromRight<XSTOP_UNMASKED_IN,
           XSTOP_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP_UNMASKED_IN]

//>> SET_[XSTOP_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_XSTOP_UNMASKED_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP_UNMASKED));
#endif
    return o_data.insertFromRight<XSTOP_UNMASKED_IN,
           XSTOP_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP_UNMASKED_IN]

//>> GET_[XSTOP_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& GET_XSTOP_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP_UNMASKED));
#endif
    return i_data.extractToRight<XSTOP_UNMASKED_IN,
           XSTOP_UNMASKED_IN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP_UNMASKED_IN]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
