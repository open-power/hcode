/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mc/reg00003_unused.H $        */
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

#ifndef __MC_REG00003_H_UNUSED__
#define __MC_REG00003_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_mc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_mc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_mc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_mc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_mc Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> PREP_[MBA_SCOMFIR_DBG0_SCOM1Q]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_DBG0_SCOM1Q(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_DBG0_SCOM1Q;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_DBG0_SCOM1Q]

//>> GET_[MBA_SCOMFIR_DBG0_SCOM1Q]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_DBG0_SCOM1Q(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_DBG0_SCOM1Q;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_DBG0_SCOM1Q, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_DBG0_SCOM1Q]

//>> PUT_[MBA_SCOMFIR_DBG0_SCOM1Q]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_DBG0_SCOM1Q(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_DBG0_SCOM1Q));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_DBG0_SCOM1Q, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_DBG0_SCOM1Q]


//>> SET_[MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_DBG0_SCOM1Q));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87,
           MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87]

//>> SET_[MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_DBG0_SCOM1Q));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87,
           MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87]

//>> GET_[MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_DBG0_SCOM1Q));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87,
           MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87]

//>> PREP_[MBA_SCOMFIR_WATCFG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_WATCFG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATCFG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_WATCFG1]

//>> GET_[MBA_SCOMFIR_WATCFG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_WATCFG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATCFG1;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_WATCFG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_WATCFG1]

//>> PUT_[MBA_SCOMFIR_WATCFG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_WATCFG1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATCFG1));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_WATCFG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_WATCFG1]


//>> SET_[MBA_SCOMFIR_WATCFG1_WAT_1_CFG]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATCFG1_WAT_1_CFG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATCFG1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATCFG1_WAT_1_CFG,
           MBA_SCOMFIR_WATCFG1_WAT_1_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_WATCFG1_WAT_1_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATCFG1_WAT_1_CFG]

//>> SET_[MBA_SCOMFIR_WATCFG1_WAT_1_CFG]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATCFG1_WAT_1_CFG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATCFG1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATCFG1_WAT_1_CFG,
           MBA_SCOMFIR_WATCFG1_WAT_1_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_WATCFG1_WAT_1_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATCFG1_WAT_1_CFG]

//>> GET_[MBA_SCOMFIR_WATCFG1_WAT_1_CFG]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_WATCFG1_WAT_1_CFG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATCFG1));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_WATCFG1_WAT_1_CFG,
           MBA_SCOMFIR_WATCFG1_WAT_1_CFG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_WATCFG1_WAT_1_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_WATCFG1_WAT_1_CFG]

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
    FAPI_ERR("0:scom_mc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> PREP_[SCOMFIR_MCERPT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCOMFIR_MCERPT0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCERPT0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCOMFIR_MCERPT0]

//>> GET_[SCOMFIR_MCERPT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCOMFIR_MCERPT0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCERPT0;
#endif
    return fapi2::getScom(i_target, SCOMFIR_MCERPT0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCOMFIR_MCERPT0]

//>> PUT_[SCOMFIR_MCERPT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCOMFIR_MCERPT0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return fapi2::putScom(i_target, SCOMFIR_MCERPT0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCOMFIR_MCERPT0]


//>> SET_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_AACR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_AACR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_AACR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_AACR_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_AACR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_AACR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_AACR_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_AACR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_AACR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_AACR_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_AACR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_AACR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_AACR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_AACR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_AACR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_AACR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_AACR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_AACR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_AACR_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]

//>> GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]

//>> GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]

//>> GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]

//>> GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]

//>> GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]

//>> GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]

//>> SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]

//>> GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]

//>> GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR]

//>> SET_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCTO_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCTO_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCTO_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCTO_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCTO_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCTO_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCTO_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCTO_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCTO_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCTO_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCTO_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCTO_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCTO_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCTO_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCTO_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCTO_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCTO_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCTO_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCTO_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> CLEAR_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> GET_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> GET_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline bool GET_SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> CLEAR_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> GET_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> GET_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline bool GET_SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> CLEAR_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> GET_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> GET_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline bool GET_SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> CLEAR_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> GET_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> GET_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]
static inline bool GET_SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1]

//>> SET_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.setBit<SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT0));
#endif
    return i_data.getBit<SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR]

//>> PREP_[SCOMFIR_MCWATCNTL2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCOMFIR_MCWATCNTL2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCWATCNTL2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCOMFIR_MCWATCNTL2]

//>> GET_[SCOMFIR_MCWATCNTL2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCOMFIR_MCWATCNTL2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCWATCNTL2;
#endif
    return fapi2::getScom(i_target, SCOMFIR_MCWATCNTL2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCOMFIR_MCWATCNTL2]

//>> PUT_[SCOMFIR_MCWATCNTL2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCOMFIR_MCWATCNTL2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCWATCNTL2));
#endif
    return fapi2::putScom(i_target, SCOMFIR_MCWATCNTL2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCOMFIR_MCWATCNTL2]


//>> SET_[SCOMFIR_MCWATCNTL2_RESERVED_0_49]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCWATCNTL2_RESERVED_0_49(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCWATCNTL2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCWATCNTL2_RESERVED_0_49,
           SCOMFIR_MCWATCNTL2_RESERVED_0_49_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCWATCNTL2_RESERVED_0_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCWATCNTL2_RESERVED_0_49]

//>> SET_[SCOMFIR_MCWATCNTL2_RESERVED_0_49]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCWATCNTL2_RESERVED_0_49(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCWATCNTL2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCWATCNTL2_RESERVED_0_49,
           SCOMFIR_MCWATCNTL2_RESERVED_0_49_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCWATCNTL2_RESERVED_0_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCWATCNTL2_RESERVED_0_49]

//>> GET_[SCOMFIR_MCWATCNTL2_RESERVED_0_49]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCWATCNTL2_RESERVED_0_49(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCWATCNTL2));
#endif
    return i_data.extractToRight<SCOMFIR_MCWATCNTL2_RESERVED_0_49,
           SCOMFIR_MCWATCNTL2_RESERVED_0_49_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCWATCNTL2_RESERVED_0_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCWATCNTL2_RESERVED_0_49]

//>> SET_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCWATCNTL2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]

//>> SET_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCWATCNTL2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]

//>> SET_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCWATCNTL2));
#endif
    return o_data.setBit<SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]

//>> CLEAR_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCWATCNTL2));
#endif
    return o_data.clearBit<SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]

//>> GET_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCWATCNTL2));
#endif
    return i_data.extractToRight<SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]

//>> GET_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]
static inline bool GET_SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCWATCNTL2));
#endif
    return i_data.getBit<SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE]

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
    FAPI_ERR("0:scom_mc Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_mc Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_mc Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_mc Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_mc Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_mc Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
