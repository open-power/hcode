/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mc/reg00007_unused.H $        */
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

#ifndef __MC_REG00007_H_UNUSED__
#define __MC_REG00007_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> PREP_[EPS_FIR_LOCAL_WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_LOCAL_WOF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_LOCAL_WOF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_LOCAL_WOF]

//>> GET_[EPS_FIR_LOCAL_WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_LOCAL_WOF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_LOCAL_WOF;
#endif
    return fapi2::getScom(i_target, EPS_FIR_LOCAL_WOF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF]

//>> PUT_[EPS_FIR_LOCAL_WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_LOCAL_WOF(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return fapi2::putScom(i_target, EPS_FIR_LOCAL_WOF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_LOCAL_WOF]


//>> SET_[EPS_FIR_LOCAL_WOF_00]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_00(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_00,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_00]

//>> SET_[EPS_FIR_LOCAL_WOF_00]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_00(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_00,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_00]

//>> SET_[EPS_FIR_LOCAL_WOF_00]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_00(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_00]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_00]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_00(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_00]

//>> GET_[EPS_FIR_LOCAL_WOF_00]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_00(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_00,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_00]

//>> GET_[EPS_FIR_LOCAL_WOF_00]
static inline bool GET_EPS_FIR_LOCAL_WOF_00(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_00]

//>> SET_[EPS_FIR_LOCAL_WOF_01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_01(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_01]

//>> SET_[EPS_FIR_LOCAL_WOF_01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_01(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_01]

//>> SET_[EPS_FIR_LOCAL_WOF_01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_01]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_01]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_01]

//>> GET_[EPS_FIR_LOCAL_WOF_01]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_01(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_01]

//>> GET_[EPS_FIR_LOCAL_WOF_01]
static inline bool GET_EPS_FIR_LOCAL_WOF_01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_01]

//>> SET_[EPS_FIR_LOCAL_WOF_02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_02(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_02]

//>> SET_[EPS_FIR_LOCAL_WOF_02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_02(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_02]

//>> SET_[EPS_FIR_LOCAL_WOF_02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_02]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_02]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_02]

//>> GET_[EPS_FIR_LOCAL_WOF_02]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_02(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_02]

//>> GET_[EPS_FIR_LOCAL_WOF_02]
static inline bool GET_EPS_FIR_LOCAL_WOF_02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_02]

//>> SET_[EPS_FIR_LOCAL_WOF_03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_03(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_03]

//>> SET_[EPS_FIR_LOCAL_WOF_03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_03(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_03]

//>> SET_[EPS_FIR_LOCAL_WOF_03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_03]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_03]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_03]

//>> GET_[EPS_FIR_LOCAL_WOF_03]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_03(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_03]

//>> GET_[EPS_FIR_LOCAL_WOF_03]
static inline bool GET_EPS_FIR_LOCAL_WOF_03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_03]

//>> SET_[EPS_FIR_LOCAL_WOF_04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_04(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_04]

//>> SET_[EPS_FIR_LOCAL_WOF_04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_04(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_04]

//>> SET_[EPS_FIR_LOCAL_WOF_04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_04]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_04]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_04]

//>> GET_[EPS_FIR_LOCAL_WOF_04]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_04(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_04]

//>> GET_[EPS_FIR_LOCAL_WOF_04]
static inline bool GET_EPS_FIR_LOCAL_WOF_04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_04]

//>> SET_[EPS_FIR_LOCAL_WOF_05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_05]

//>> SET_[EPS_FIR_LOCAL_WOF_05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_05]

//>> SET_[EPS_FIR_LOCAL_WOF_05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_05]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_05]

//>> GET_[EPS_FIR_LOCAL_WOF_05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_05]

//>> GET_[EPS_FIR_LOCAL_WOF_05]
static inline bool GET_EPS_FIR_LOCAL_WOF_05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_05]

//>> SET_[EPS_FIR_LOCAL_WOF_06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_06]

//>> SET_[EPS_FIR_LOCAL_WOF_06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_06]

//>> SET_[EPS_FIR_LOCAL_WOF_06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_06]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_06]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_06]

//>> GET_[EPS_FIR_LOCAL_WOF_06]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_06]

//>> GET_[EPS_FIR_LOCAL_WOF_06]
static inline bool GET_EPS_FIR_LOCAL_WOF_06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_06]

//>> SET_[EPS_FIR_LOCAL_WOF_07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_07]

//>> SET_[EPS_FIR_LOCAL_WOF_07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_07]

//>> SET_[EPS_FIR_LOCAL_WOF_07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_07]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_07]

//>> GET_[EPS_FIR_LOCAL_WOF_07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_07]

//>> GET_[EPS_FIR_LOCAL_WOF_07]
static inline bool GET_EPS_FIR_LOCAL_WOF_07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_07]

//>> SET_[EPS_FIR_LOCAL_WOF_08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_08]

//>> SET_[EPS_FIR_LOCAL_WOF_08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_08]

//>> SET_[EPS_FIR_LOCAL_WOF_08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_08]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_08]

//>> GET_[EPS_FIR_LOCAL_WOF_08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_08]

//>> GET_[EPS_FIR_LOCAL_WOF_08]
static inline bool GET_EPS_FIR_LOCAL_WOF_08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_08]

//>> SET_[EPS_FIR_LOCAL_WOF_09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_09]

//>> SET_[EPS_FIR_LOCAL_WOF_09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_09]

//>> SET_[EPS_FIR_LOCAL_WOF_09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_09]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_09]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_09]

//>> GET_[EPS_FIR_LOCAL_WOF_09]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_09]

//>> GET_[EPS_FIR_LOCAL_WOF_09]
static inline bool GET_EPS_FIR_LOCAL_WOF_09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_09]

//>> SET_[EPS_FIR_LOCAL_WOF_10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_10]

//>> SET_[EPS_FIR_LOCAL_WOF_10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_10]

//>> SET_[EPS_FIR_LOCAL_WOF_10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_10]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_10]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_10]

//>> GET_[EPS_FIR_LOCAL_WOF_10]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_10]

//>> GET_[EPS_FIR_LOCAL_WOF_10]
static inline bool GET_EPS_FIR_LOCAL_WOF_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_10]

//>> SET_[EPS_FIR_LOCAL_WOF_11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_11]

//>> SET_[EPS_FIR_LOCAL_WOF_11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_11]

//>> SET_[EPS_FIR_LOCAL_WOF_11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_11]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_11]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_11]

//>> GET_[EPS_FIR_LOCAL_WOF_11]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_11]

//>> GET_[EPS_FIR_LOCAL_WOF_11]
static inline bool GET_EPS_FIR_LOCAL_WOF_11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_11]

//>> SET_[EPS_FIR_LOCAL_WOF_12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_12]

//>> SET_[EPS_FIR_LOCAL_WOF_12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_12]

//>> SET_[EPS_FIR_LOCAL_WOF_12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_12]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_12]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_12]

//>> GET_[EPS_FIR_LOCAL_WOF_12]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_12]

//>> GET_[EPS_FIR_LOCAL_WOF_12]
static inline bool GET_EPS_FIR_LOCAL_WOF_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_12]

//>> SET_[EPS_FIR_LOCAL_WOF_13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_13]

//>> SET_[EPS_FIR_LOCAL_WOF_13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_13]

//>> SET_[EPS_FIR_LOCAL_WOF_13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_13]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_13]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_13]

//>> GET_[EPS_FIR_LOCAL_WOF_13]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_13]

//>> GET_[EPS_FIR_LOCAL_WOF_13]
static inline bool GET_EPS_FIR_LOCAL_WOF_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_13]

//>> SET_[EPS_FIR_LOCAL_WOF_14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_14]

//>> SET_[EPS_FIR_LOCAL_WOF_14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_14]

//>> SET_[EPS_FIR_LOCAL_WOF_14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_14]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_14]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_14]

//>> GET_[EPS_FIR_LOCAL_WOF_14]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_14]

//>> GET_[EPS_FIR_LOCAL_WOF_14]
static inline bool GET_EPS_FIR_LOCAL_WOF_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_14]

//>> SET_[EPS_FIR_LOCAL_WOF_15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_15]

//>> SET_[EPS_FIR_LOCAL_WOF_15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_15]

//>> SET_[EPS_FIR_LOCAL_WOF_15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_15]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_15]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_15]

//>> GET_[EPS_FIR_LOCAL_WOF_15]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_15]

//>> GET_[EPS_FIR_LOCAL_WOF_15]
static inline bool GET_EPS_FIR_LOCAL_WOF_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_15]

//>> SET_[EPS_FIR_LOCAL_WOF_16]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_16(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_16]

//>> SET_[EPS_FIR_LOCAL_WOF_16]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_16]

//>> SET_[EPS_FIR_LOCAL_WOF_16]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_16]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_16]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_16]

//>> GET_[EPS_FIR_LOCAL_WOF_16]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_16(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_16,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_16]

//>> GET_[EPS_FIR_LOCAL_WOF_16]
static inline bool GET_EPS_FIR_LOCAL_WOF_16(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_16]

//>> SET_[EPS_FIR_LOCAL_WOF_17]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_17]

//>> SET_[EPS_FIR_LOCAL_WOF_17]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_17]

//>> SET_[EPS_FIR_LOCAL_WOF_17]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_17]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_17]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_17]

//>> GET_[EPS_FIR_LOCAL_WOF_17]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_17,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_17]

//>> GET_[EPS_FIR_LOCAL_WOF_17]
static inline bool GET_EPS_FIR_LOCAL_WOF_17(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_17]

//>> SET_[EPS_FIR_LOCAL_WOF_18]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_18(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_18]

//>> SET_[EPS_FIR_LOCAL_WOF_18]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_18]

//>> SET_[EPS_FIR_LOCAL_WOF_18]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_18]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_18]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_18]

//>> GET_[EPS_FIR_LOCAL_WOF_18]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_18(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_18,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_18]

//>> GET_[EPS_FIR_LOCAL_WOF_18]
static inline bool GET_EPS_FIR_LOCAL_WOF_18(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_18]

//>> SET_[EPS_FIR_LOCAL_WOF_19]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_19(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_19]

//>> SET_[EPS_FIR_LOCAL_WOF_19]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_19]

//>> SET_[EPS_FIR_LOCAL_WOF_19]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_19]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_19]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_19]

//>> GET_[EPS_FIR_LOCAL_WOF_19]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_19(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_19]

//>> GET_[EPS_FIR_LOCAL_WOF_19]
static inline bool GET_EPS_FIR_LOCAL_WOF_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_19]

//>> SET_[EPS_FIR_LOCAL_WOF_20]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_20(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_20]

//>> SET_[EPS_FIR_LOCAL_WOF_20]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_20]

//>> SET_[EPS_FIR_LOCAL_WOF_20]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_20]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_20]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_20]

//>> GET_[EPS_FIR_LOCAL_WOF_20]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_20(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_20]

//>> GET_[EPS_FIR_LOCAL_WOF_20]
static inline bool GET_EPS_FIR_LOCAL_WOF_20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_20]

//>> SET_[EPS_FIR_LOCAL_WOF_21]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_21(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_21]

//>> SET_[EPS_FIR_LOCAL_WOF_21]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_21(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_21]

//>> SET_[EPS_FIR_LOCAL_WOF_21]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_21]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_21]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_21]

//>> GET_[EPS_FIR_LOCAL_WOF_21]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_21(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_21,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_21]

//>> GET_[EPS_FIR_LOCAL_WOF_21]
static inline bool GET_EPS_FIR_LOCAL_WOF_21(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_21]

//>> SET_[EPS_FIR_LOCAL_WOF_22]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_22(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_22]

//>> SET_[EPS_FIR_LOCAL_WOF_22]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_22(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_22]

//>> SET_[EPS_FIR_LOCAL_WOF_22]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_22]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_22]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_22]

//>> GET_[EPS_FIR_LOCAL_WOF_22]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_22(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_22,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_22]

//>> GET_[EPS_FIR_LOCAL_WOF_22]
static inline bool GET_EPS_FIR_LOCAL_WOF_22(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_22]

//>> SET_[EPS_FIR_LOCAL_WOF_23]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_23]

//>> SET_[EPS_FIR_LOCAL_WOF_23]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_23]

//>> SET_[EPS_FIR_LOCAL_WOF_23]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_23]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_23]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_23]

//>> GET_[EPS_FIR_LOCAL_WOF_23]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_23]

//>> GET_[EPS_FIR_LOCAL_WOF_23]
static inline bool GET_EPS_FIR_LOCAL_WOF_23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_23]

//>> SET_[EPS_FIR_LOCAL_WOF_24]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_24(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_24]

//>> SET_[EPS_FIR_LOCAL_WOF_24]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_24(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_24]

//>> SET_[EPS_FIR_LOCAL_WOF_24]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_24]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_24]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_24]

//>> GET_[EPS_FIR_LOCAL_WOF_24]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_24(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_24,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_24]

//>> GET_[EPS_FIR_LOCAL_WOF_24]
static inline bool GET_EPS_FIR_LOCAL_WOF_24(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_24]

//>> SET_[EPS_FIR_LOCAL_WOF_25]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_25(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_25]

//>> SET_[EPS_FIR_LOCAL_WOF_25]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_25(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_25]

//>> SET_[EPS_FIR_LOCAL_WOF_25]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_25]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_25]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_25]

//>> GET_[EPS_FIR_LOCAL_WOF_25]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_25(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_25,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_25]

//>> GET_[EPS_FIR_LOCAL_WOF_25]
static inline bool GET_EPS_FIR_LOCAL_WOF_25(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_25]

//>> SET_[EPS_FIR_LOCAL_WOF_26]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_26(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_26]

//>> SET_[EPS_FIR_LOCAL_WOF_26]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_26(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_26]

//>> SET_[EPS_FIR_LOCAL_WOF_26]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_26]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_26]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_26]

//>> GET_[EPS_FIR_LOCAL_WOF_26]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_26(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_26,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_26]

//>> GET_[EPS_FIR_LOCAL_WOF_26]
static inline bool GET_EPS_FIR_LOCAL_WOF_26(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_26]

//>> SET_[EPS_FIR_LOCAL_WOF_27]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_27(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_27]

//>> SET_[EPS_FIR_LOCAL_WOF_27]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_27(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_27]

//>> SET_[EPS_FIR_LOCAL_WOF_27]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_27]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_27]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_27]

//>> GET_[EPS_FIR_LOCAL_WOF_27]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_27(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_27,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_27]

//>> GET_[EPS_FIR_LOCAL_WOF_27]
static inline bool GET_EPS_FIR_LOCAL_WOF_27(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_27]

//>> SET_[EPS_FIR_LOCAL_WOF_28]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_28(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_28]

//>> SET_[EPS_FIR_LOCAL_WOF_28]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_28(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_28]

//>> SET_[EPS_FIR_LOCAL_WOF_28]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_28]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_28]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_28]

//>> GET_[EPS_FIR_LOCAL_WOF_28]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_28(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_28,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_28]

//>> GET_[EPS_FIR_LOCAL_WOF_28]
static inline bool GET_EPS_FIR_LOCAL_WOF_28(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_28]

//>> SET_[EPS_FIR_LOCAL_WOF_29]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_29(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_29]

//>> SET_[EPS_FIR_LOCAL_WOF_29]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_29(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_29]

//>> SET_[EPS_FIR_LOCAL_WOF_29]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_29]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_29]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_29]

//>> GET_[EPS_FIR_LOCAL_WOF_29]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_29(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_29,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_29]

//>> GET_[EPS_FIR_LOCAL_WOF_29]
static inline bool GET_EPS_FIR_LOCAL_WOF_29(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_29]

//>> SET_[EPS_FIR_LOCAL_WOF_30]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_30]

//>> SET_[EPS_FIR_LOCAL_WOF_30]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_30]

//>> SET_[EPS_FIR_LOCAL_WOF_30]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_30]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_30]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_30]

//>> GET_[EPS_FIR_LOCAL_WOF_30]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_30]

//>> GET_[EPS_FIR_LOCAL_WOF_30]
static inline bool GET_EPS_FIR_LOCAL_WOF_30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_30]

//>> SET_[EPS_FIR_LOCAL_WOF_31]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_31]

//>> SET_[EPS_FIR_LOCAL_WOF_31]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_31]

//>> SET_[EPS_FIR_LOCAL_WOF_31]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_31]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_31]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_31]

//>> GET_[EPS_FIR_LOCAL_WOF_31]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_31,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_31]

//>> GET_[EPS_FIR_LOCAL_WOF_31]
static inline bool GET_EPS_FIR_LOCAL_WOF_31(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_31]

//>> SET_[EPS_FIR_LOCAL_WOF_32]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_32(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_32]

//>> SET_[EPS_FIR_LOCAL_WOF_32]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_32(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_32]

//>> SET_[EPS_FIR_LOCAL_WOF_32]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_32]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_32]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_32]

//>> GET_[EPS_FIR_LOCAL_WOF_32]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_32(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_32,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_32]

//>> GET_[EPS_FIR_LOCAL_WOF_32]
static inline bool GET_EPS_FIR_LOCAL_WOF_32(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_32]

//>> SET_[EPS_FIR_LOCAL_WOF_33]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_33(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_33]

//>> SET_[EPS_FIR_LOCAL_WOF_33]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_33(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_33]

//>> SET_[EPS_FIR_LOCAL_WOF_33]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_33]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_33]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_33]

//>> GET_[EPS_FIR_LOCAL_WOF_33]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_33(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_33,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_33]

//>> GET_[EPS_FIR_LOCAL_WOF_33]
static inline bool GET_EPS_FIR_LOCAL_WOF_33(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_33]

//>> SET_[EPS_FIR_LOCAL_WOF_34]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_34(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_34]

//>> SET_[EPS_FIR_LOCAL_WOF_34]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_34(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_34]

//>> SET_[EPS_FIR_LOCAL_WOF_34]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_34]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_34]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_34]

//>> GET_[EPS_FIR_LOCAL_WOF_34]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_34(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_34,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_34]

//>> GET_[EPS_FIR_LOCAL_WOF_34]
static inline bool GET_EPS_FIR_LOCAL_WOF_34(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_34]

//>> SET_[EPS_FIR_LOCAL_WOF_35]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_35(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_35]

//>> SET_[EPS_FIR_LOCAL_WOF_35]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_35(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_35]

//>> SET_[EPS_FIR_LOCAL_WOF_35]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_35]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_35]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_35]

//>> GET_[EPS_FIR_LOCAL_WOF_35]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_35(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_35,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_35]

//>> GET_[EPS_FIR_LOCAL_WOF_35]
static inline bool GET_EPS_FIR_LOCAL_WOF_35(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_35]

//>> SET_[EPS_FIR_LOCAL_WOF_36]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_36(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_36]

//>> SET_[EPS_FIR_LOCAL_WOF_36]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_36(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_36]

//>> SET_[EPS_FIR_LOCAL_WOF_36]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_36]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_36]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_36]

//>> GET_[EPS_FIR_LOCAL_WOF_36]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_36(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_36,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_36]

//>> GET_[EPS_FIR_LOCAL_WOF_36]
static inline bool GET_EPS_FIR_LOCAL_WOF_36(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_36]

//>> SET_[EPS_FIR_LOCAL_WOF_37]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_37(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_37]

//>> SET_[EPS_FIR_LOCAL_WOF_37]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_37(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_37]

//>> SET_[EPS_FIR_LOCAL_WOF_37]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_37]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_37]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_37]

//>> GET_[EPS_FIR_LOCAL_WOF_37]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_37(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_37,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_37]

//>> GET_[EPS_FIR_LOCAL_WOF_37]
static inline bool GET_EPS_FIR_LOCAL_WOF_37(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_37]

//>> SET_[EPS_FIR_LOCAL_WOF_38]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_38(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_38]

//>> SET_[EPS_FIR_LOCAL_WOF_38]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_38(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_38]

//>> SET_[EPS_FIR_LOCAL_WOF_38]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_38]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_38]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_38]

//>> GET_[EPS_FIR_LOCAL_WOF_38]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_38(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_38,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_38]

//>> GET_[EPS_FIR_LOCAL_WOF_38]
static inline bool GET_EPS_FIR_LOCAL_WOF_38(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_38]

//>> SET_[EPS_FIR_LOCAL_WOF_39]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_39(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_39]

//>> SET_[EPS_FIR_LOCAL_WOF_39]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_39(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_39]

//>> SET_[EPS_FIR_LOCAL_WOF_39]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_39]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_39]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_39]

//>> GET_[EPS_FIR_LOCAL_WOF_39]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_39(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_39,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_39]

//>> GET_[EPS_FIR_LOCAL_WOF_39]
static inline bool GET_EPS_FIR_LOCAL_WOF_39(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_39]

//>> SET_[EPS_FIR_LOCAL_WOF_40]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_40(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_40]

//>> SET_[EPS_FIR_LOCAL_WOF_40]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_40(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_40]

//>> SET_[EPS_FIR_LOCAL_WOF_40]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_40]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_40]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_40]

//>> GET_[EPS_FIR_LOCAL_WOF_40]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_40(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_40,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_40]

//>> GET_[EPS_FIR_LOCAL_WOF_40]
static inline bool GET_EPS_FIR_LOCAL_WOF_40(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_40]

//>> SET_[EPS_FIR_LOCAL_WOF_41]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_41(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_41]

//>> SET_[EPS_FIR_LOCAL_WOF_41]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_41(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_41]

//>> SET_[EPS_FIR_LOCAL_WOF_41]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_41]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_41]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_41]

//>> GET_[EPS_FIR_LOCAL_WOF_41]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_41(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_41,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_41]

//>> GET_[EPS_FIR_LOCAL_WOF_41]
static inline bool GET_EPS_FIR_LOCAL_WOF_41(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_41]

//>> SET_[EPS_FIR_LOCAL_WOF_42]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_42(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_42]

//>> SET_[EPS_FIR_LOCAL_WOF_42]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_42(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_42]

//>> SET_[EPS_FIR_LOCAL_WOF_42]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_42]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_42]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_42]

//>> GET_[EPS_FIR_LOCAL_WOF_42]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_42(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_42,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_42]

//>> GET_[EPS_FIR_LOCAL_WOF_42]
static inline bool GET_EPS_FIR_LOCAL_WOF_42(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_42]

//>> SET_[EPS_FIR_LOCAL_WOF_43]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_43(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_43]

//>> SET_[EPS_FIR_LOCAL_WOF_43]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_43(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_43]

//>> SET_[EPS_FIR_LOCAL_WOF_43]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_43]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_43]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_43]

//>> GET_[EPS_FIR_LOCAL_WOF_43]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_43(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_43,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_43]

//>> GET_[EPS_FIR_LOCAL_WOF_43]
static inline bool GET_EPS_FIR_LOCAL_WOF_43(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_43]

//>> SET_[EPS_FIR_LOCAL_WOF_44]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_44(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_44]

//>> SET_[EPS_FIR_LOCAL_WOF_44]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_44(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_44]

//>> SET_[EPS_FIR_LOCAL_WOF_44]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_44]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_44]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_44]

//>> GET_[EPS_FIR_LOCAL_WOF_44]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_44(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_44,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_44]

//>> GET_[EPS_FIR_LOCAL_WOF_44]
static inline bool GET_EPS_FIR_LOCAL_WOF_44(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_44]

//>> SET_[EPS_FIR_LOCAL_WOF_45]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_45(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_45]

//>> SET_[EPS_FIR_LOCAL_WOF_45]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_45(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_45]

//>> SET_[EPS_FIR_LOCAL_WOF_45]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_45]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_45]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_45]

//>> GET_[EPS_FIR_LOCAL_WOF_45]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_45(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_45,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_45]

//>> GET_[EPS_FIR_LOCAL_WOF_45]
static inline bool GET_EPS_FIR_LOCAL_WOF_45(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_45]

//>> SET_[EPS_FIR_LOCAL_WOF_46]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_46(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_46]

//>> SET_[EPS_FIR_LOCAL_WOF_46]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_46(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_46]

//>> SET_[EPS_FIR_LOCAL_WOF_46]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_46]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_46]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_46]

//>> GET_[EPS_FIR_LOCAL_WOF_46]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_46(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_46,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_46]

//>> GET_[EPS_FIR_LOCAL_WOF_46]
static inline bool GET_EPS_FIR_LOCAL_WOF_46(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_46]

//>> SET_[EPS_FIR_LOCAL_WOF_47]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_47(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_47]

//>> SET_[EPS_FIR_LOCAL_WOF_47]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_47(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_47]

//>> SET_[EPS_FIR_LOCAL_WOF_47]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_47]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_47]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_47]

//>> GET_[EPS_FIR_LOCAL_WOF_47]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_47(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_47,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_47]

//>> GET_[EPS_FIR_LOCAL_WOF_47]
static inline bool GET_EPS_FIR_LOCAL_WOF_47(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_47]

//>> SET_[EPS_FIR_LOCAL_WOF_48]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_48(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_48]

//>> SET_[EPS_FIR_LOCAL_WOF_48]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_48(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_48]

//>> SET_[EPS_FIR_LOCAL_WOF_48]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_48]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_48]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_48]

//>> GET_[EPS_FIR_LOCAL_WOF_48]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_48(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_48,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_48]

//>> GET_[EPS_FIR_LOCAL_WOF_48]
static inline bool GET_EPS_FIR_LOCAL_WOF_48(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_48]

//>> SET_[EPS_FIR_LOCAL_WOF_49]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_49(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_49]

//>> SET_[EPS_FIR_LOCAL_WOF_49]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_49(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_49]

//>> SET_[EPS_FIR_LOCAL_WOF_49]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_49]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_49]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_49]

//>> GET_[EPS_FIR_LOCAL_WOF_49]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_49(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_49,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_49]

//>> GET_[EPS_FIR_LOCAL_WOF_49]
static inline bool GET_EPS_FIR_LOCAL_WOF_49(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_49]

//>> SET_[EPS_FIR_LOCAL_WOF_50]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_50(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_50]

//>> SET_[EPS_FIR_LOCAL_WOF_50]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_50(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_50]

//>> SET_[EPS_FIR_LOCAL_WOF_50]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_50]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_50]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_50]

//>> GET_[EPS_FIR_LOCAL_WOF_50]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_50(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_50,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_50]

//>> GET_[EPS_FIR_LOCAL_WOF_50]
static inline bool GET_EPS_FIR_LOCAL_WOF_50(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_50]

//>> SET_[EPS_FIR_LOCAL_WOF_51]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_51(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_51]

//>> SET_[EPS_FIR_LOCAL_WOF_51]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_51(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_51]

//>> SET_[EPS_FIR_LOCAL_WOF_51]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_51]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_51]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_51]

//>> GET_[EPS_FIR_LOCAL_WOF_51]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_51(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_51,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_51]

//>> GET_[EPS_FIR_LOCAL_WOF_51]
static inline bool GET_EPS_FIR_LOCAL_WOF_51(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_51]

//>> SET_[EPS_FIR_LOCAL_WOF_52]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_52(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_52]

//>> SET_[EPS_FIR_LOCAL_WOF_52]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_52(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_52]

//>> SET_[EPS_FIR_LOCAL_WOF_52]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_52]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_52]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_52]

//>> GET_[EPS_FIR_LOCAL_WOF_52]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_52(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_52,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_52]

//>> GET_[EPS_FIR_LOCAL_WOF_52]
static inline bool GET_EPS_FIR_LOCAL_WOF_52(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_52]

//>> SET_[EPS_FIR_LOCAL_WOF_53]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_53(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_53]

//>> SET_[EPS_FIR_LOCAL_WOF_53]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_53(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_53]

//>> SET_[EPS_FIR_LOCAL_WOF_53]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_53]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_53]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_53]

//>> GET_[EPS_FIR_LOCAL_WOF_53]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_53(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_53,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_53]

//>> GET_[EPS_FIR_LOCAL_WOF_53]
static inline bool GET_EPS_FIR_LOCAL_WOF_53(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_53]

//>> SET_[EPS_FIR_LOCAL_WOF_54]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_54(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_54,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_54]

//>> SET_[EPS_FIR_LOCAL_WOF_54]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_54(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_54,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_54]

//>> SET_[EPS_FIR_LOCAL_WOF_54]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_54(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_54]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_54]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_54(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_54]

//>> GET_[EPS_FIR_LOCAL_WOF_54]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_54(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_54,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_54]

//>> GET_[EPS_FIR_LOCAL_WOF_54]
static inline bool GET_EPS_FIR_LOCAL_WOF_54(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_54]

//>> SET_[EPS_FIR_LOCAL_WOF_55]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_55(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_55,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_55]

//>> SET_[EPS_FIR_LOCAL_WOF_55]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_55(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_55,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_55]

//>> SET_[EPS_FIR_LOCAL_WOF_55]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_55(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_55]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_55]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_55(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_55]

//>> GET_[EPS_FIR_LOCAL_WOF_55]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_55(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_55,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_55]

//>> GET_[EPS_FIR_LOCAL_WOF_55]
static inline bool GET_EPS_FIR_LOCAL_WOF_55(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_55]

//>> SET_[EPS_FIR_LOCAL_WOF_56]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_56(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_56,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_56]

//>> SET_[EPS_FIR_LOCAL_WOF_56]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_56(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_56,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_56]

//>> SET_[EPS_FIR_LOCAL_WOF_56]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_56(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_56]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_56]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_56(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_56]

//>> GET_[EPS_FIR_LOCAL_WOF_56]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_56(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_56,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_56]

//>> GET_[EPS_FIR_LOCAL_WOF_56]
static inline bool GET_EPS_FIR_LOCAL_WOF_56(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_56]

//>> SET_[EPS_FIR_LOCAL_WOF_57]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_57(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_57,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_57]

//>> SET_[EPS_FIR_LOCAL_WOF_57]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_57(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_57,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_57]

//>> SET_[EPS_FIR_LOCAL_WOF_57]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_57(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_57]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_57]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_57(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_57]

//>> GET_[EPS_FIR_LOCAL_WOF_57]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_57(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_57,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_57]

//>> GET_[EPS_FIR_LOCAL_WOF_57]
static inline bool GET_EPS_FIR_LOCAL_WOF_57(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_57]

//>> SET_[EPS_FIR_LOCAL_WOF_58]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_58(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_58,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_58]

//>> SET_[EPS_FIR_LOCAL_WOF_58]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_58(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_58,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_58]

//>> SET_[EPS_FIR_LOCAL_WOF_58]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_58(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_58]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_58]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_58(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_58]

//>> GET_[EPS_FIR_LOCAL_WOF_58]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_58(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_58,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_58]

//>> GET_[EPS_FIR_LOCAL_WOF_58]
static inline bool GET_EPS_FIR_LOCAL_WOF_58(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_58]

//>> SET_[EPS_FIR_LOCAL_WOF_59]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_59(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_59,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_59]

//>> SET_[EPS_FIR_LOCAL_WOF_59]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_59(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_59,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_59]

//>> SET_[EPS_FIR_LOCAL_WOF_59]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_59(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_59]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_59]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_59(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_59]

//>> GET_[EPS_FIR_LOCAL_WOF_59]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_59(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_59,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_59]

//>> GET_[EPS_FIR_LOCAL_WOF_59]
static inline bool GET_EPS_FIR_LOCAL_WOF_59(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_59]

//>> SET_[EPS_FIR_LOCAL_WOF_60]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_60(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_60,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_60]

//>> SET_[EPS_FIR_LOCAL_WOF_60]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_60(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_60,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_60]

//>> SET_[EPS_FIR_LOCAL_WOF_60]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_60(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_60]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_60]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_60(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_60]

//>> GET_[EPS_FIR_LOCAL_WOF_60]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_60(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_60,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_60]

//>> GET_[EPS_FIR_LOCAL_WOF_60]
static inline bool GET_EPS_FIR_LOCAL_WOF_60(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_60]

//>> SET_[EPS_FIR_LOCAL_WOF_61]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_61(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_61,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_61]

//>> SET_[EPS_FIR_LOCAL_WOF_61]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_61(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_61,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_61]

//>> SET_[EPS_FIR_LOCAL_WOF_61]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_61(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_61]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_61]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_61(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_61]

//>> GET_[EPS_FIR_LOCAL_WOF_61]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_61(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_61,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_61]

//>> GET_[EPS_FIR_LOCAL_WOF_61]
static inline bool GET_EPS_FIR_LOCAL_WOF_61(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_61]

//>> SET_[EPS_FIR_LOCAL_WOF_62]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_62(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_62,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_62]

//>> SET_[EPS_FIR_LOCAL_WOF_62]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_62(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_62,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_62]

//>> SET_[EPS_FIR_LOCAL_WOF_62]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_62(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_62]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_62]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_62(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_62]

//>> GET_[EPS_FIR_LOCAL_WOF_62]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_62(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_62,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_62]

//>> GET_[EPS_FIR_LOCAL_WOF_62]
static inline bool GET_EPS_FIR_LOCAL_WOF_62(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_62]

//>> SET_[EPS_FIR_LOCAL_WOF_63]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_63,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_63]

//>> SET_[EPS_FIR_LOCAL_WOF_63]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_63,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_63]

//>> SET_[EPS_FIR_LOCAL_WOF_63]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_63(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_63]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_63]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_63(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_63]

//>> GET_[EPS_FIR_LOCAL_WOF_63]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_63,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_63]

//>> GET_[EPS_FIR_LOCAL_WOF_63]
static inline bool GET_EPS_FIR_LOCAL_WOF_63(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_63]

//>> PREP_[MBA_SCOMFIR_MCEBUSEN1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_MCEBUSEN1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_MCEBUSEN1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_MCEBUSEN1]

//>> GET_[MBA_SCOMFIR_MCEBUSEN1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_MCEBUSEN1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_MCEBUSEN1;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_MCEBUSEN1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_MCEBUSEN1]

//>> PUT_[MBA_SCOMFIR_MCEBUSEN1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_MCEBUSEN1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCEBUSEN1));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_MCEBUSEN1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_MCEBUSEN1]


//>> SET_[MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCEBUSEN1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS,
           MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS]

//>> SET_[MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCEBUSEN1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS,
           MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS]

//>> GET_[MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCEBUSEN1));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS,
           MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCEBUSEN1_MCEBUSEN1_EVENT_BUS_SELECTS]

//>> PREP_[MBA_SCOMFIR_WATMSKB1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_WATMSKB1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATMSKB1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_WATMSKB1]

//>> GET_[MBA_SCOMFIR_WATMSKB1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_WATMSKB1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATMSKB1;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_WATMSKB1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_WATMSKB1]

//>> PUT_[MBA_SCOMFIR_WATMSKB1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_WATMSKB1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKB1));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_WATMSKB1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_WATMSKB1]


//>> SET_[MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKB1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1,
           MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1]

//>> SET_[MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKB1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1,
           MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1]

//>> GET_[MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKB1));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1,
           MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_WATMSKB1_WAT_MASK_B1]

//>> PREP_[SCOMFIR_MCFGPM1E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCOMFIR_MCFGPM1E(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCFGPM1E;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCOMFIR_MCFGPM1E]

//>> GET_[SCOMFIR_MCFGPM1E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCOMFIR_MCFGPM1E(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCFGPM1E;
#endif
    return fapi2::getScom(i_target, SCOMFIR_MCFGPM1E, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCOMFIR_MCFGPM1E]

//>> PUT_[SCOMFIR_MCFGPM1E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCOMFIR_MCFGPM1E(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return fapi2::putScom(i_target, SCOMFIR_MCFGPM1E, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCOMFIR_MCFGPM1E]


//>> SET_[SCOMFIR_MCFGPM1E_VALID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGPM1E_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGPM1E_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGPM1E_VALID]

//>> SET_[SCOMFIR_MCFGPM1E_VALID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGPM1E_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGPM1E_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGPM1E_VALID]

//>> SET_[SCOMFIR_MCFGPM1E_VALID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGPM1E_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.setBit<SCOMFIR_MCFGPM1E_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGPM1E_VALID]

//>> CLEAR_[SCOMFIR_MCFGPM1E_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCFGPM1E_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.clearBit<SCOMFIR_MCFGPM1E_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCFGPM1E_VALID]

//>> GET_[SCOMFIR_MCFGPM1E_VALID]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGPM1E_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGPM1E_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGPM1E_VALID]

//>> GET_[SCOMFIR_MCFGPM1E_VALID]
static inline bool GET_SCOMFIR_MCFGPM1E_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return i_data.getBit<SCOMFIR_MCFGPM1E_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGPM1E_VALID]

//>> SET_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]

//>> SET_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]

//>> SET_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.setBit<SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]

//>> CLEAR_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.clearBit<SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]

//>> GET_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]

//>> GET_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]
static inline bool GET_SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return i_data.getBit<SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGPM1E_EXTEND_TO_END_OF_RANGE]

//>> SET_[SCOMFIR_MCFGPM1E_LOWER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGPM1E_LOWER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGPM1E_LOWER_ADDRESS,
           SCOMFIR_MCFGPM1E_LOWER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_LOWER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGPM1E_LOWER_ADDRESS]

//>> SET_[SCOMFIR_MCFGPM1E_LOWER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGPM1E_LOWER_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGPM1E_LOWER_ADDRESS,
           SCOMFIR_MCFGPM1E_LOWER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_LOWER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGPM1E_LOWER_ADDRESS]

//>> GET_[SCOMFIR_MCFGPM1E_LOWER_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGPM1E_LOWER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGPM1E_LOWER_ADDRESS,
           SCOMFIR_MCFGPM1E_LOWER_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_LOWER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGPM1E_LOWER_ADDRESS]

//>> SET_[SCOMFIR_MCFGPM1E_UPPER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGPM1E_UPPER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGPM1E_UPPER_ADDRESS,
           SCOMFIR_MCFGPM1E_UPPER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_UPPER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGPM1E_UPPER_ADDRESS]

//>> SET_[SCOMFIR_MCFGPM1E_UPPER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGPM1E_UPPER_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGPM1E_UPPER_ADDRESS,
           SCOMFIR_MCFGPM1E_UPPER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_UPPER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGPM1E_UPPER_ADDRESS]

//>> GET_[SCOMFIR_MCFGPM1E_UPPER_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGPM1E_UPPER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGPM1E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGPM1E_UPPER_ADDRESS,
           SCOMFIR_MCFGPM1E_UPPER_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGPM1E_UPPER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGPM1E_UPPER_ADDRESS]

//>> PREP_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_CLKSRC_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_CLKSRC_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]

//>> GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_CLKSRC_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_CLKSRC_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]

//>> PUT_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_CLKSRC_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_CLKSRC_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]


//>> SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]

//>> SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]

//>> GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]

//>> SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]

//>> SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]

//>> GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]

//>> PREP_[HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HANG_PULSE_6_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[HANG_PULSE_6_REG]

//>> GET_[HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HANG_PULSE_6_REG;
#endif
    return fapi2::getScom(i_target, HANG_PULSE_6_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[HANG_PULSE_6_REG]

//>> PUT_[HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return fapi2::putScom(i_target, HANG_PULSE_6_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[HANG_PULSE_6_REG]


//>> SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_HANG_PULSE_REG_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_HANG_PULSE_REG_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> GET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& GET_HANG_PULSE_6_REG_HANG_PULSE_REG_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return i_data.extractToRight<HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.setBit<HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> CLEAR_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& CLEAR_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.clearBit<HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& GET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return i_data.extractToRight<HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline bool GET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return i_data.getBit<HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> PREP_[HOSTATTN_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_HOSTATTN_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HOSTATTN_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[HOSTATTN_INTERRUPT_REG]

//>> GET_[HOSTATTN_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_HOSTATTN_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HOSTATTN_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, HOSTATTN_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[HOSTATTN_INTERRUPT_REG]

//>> PUT_[HOSTATTN_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_HOSTATTN_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, HOSTATTN_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[HOSTATTN_INTERRUPT_REG]


//>> SET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<HOSTATTN_INTERRUPT_REG_TYPE4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> SET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_INTERRUPT_REG_TYPE4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<HOSTATTN_INTERRUPT_REG_TYPE4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> SET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.setBit<HOSTATTN_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> CLEAR_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& CLEAR_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.clearBit<HOSTATTN_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> GET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& GET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return i_data.extractToRight<HOSTATTN_INTERRUPT_REG_TYPE4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> GET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline bool GET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return i_data.getBit<HOSTATTN_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> PREP_[RECOV_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RECOV_UNMASKED(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RECOV_UNMASKED;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RECOV_UNMASKED]

//>> GET_[RECOV_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RECOV_UNMASKED(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RECOV_UNMASKED;
#endif
    return fapi2::getScom(i_target, RECOV_UNMASKED, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RECOV_UNMASKED]

//>> PUT_[RECOV_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RECOV_UNMASKED(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RECOV_UNMASKED));
#endif
    return fapi2::putScom(i_target, RECOV_UNMASKED, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RECOV_UNMASKED]


//>> SET_[RECOV_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_RECOV_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV_UNMASKED));
#endif
    return o_data.insertFromRight<RECOV_UNMASKED_IN,
           RECOV_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access RECOV_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_UNMASKED_IN]

//>> SET_[RECOV_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_RECOV_UNMASKED_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV_UNMASKED));
#endif
    return o_data.insertFromRight<RECOV_UNMASKED_IN,
           RECOV_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access RECOV_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_UNMASKED_IN]

//>> GET_[RECOV_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& GET_RECOV_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV_UNMASKED));
#endif
    return i_data.extractToRight<RECOV_UNMASKED_IN,
           RECOV_UNMASKED_IN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access RECOV_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_UNMASKED_IN]

//>> PREP_[SCAN_UPDATEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCAN_UPDATEDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_UPDATEDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCAN_UPDATEDR]

//>> GET_[SCAN_UPDATEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCAN_UPDATEDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_UPDATEDR;
#endif
    return fapi2::getScom(i_target, SCAN_UPDATEDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCAN_UPDATEDR]

//>> PUT_[SCAN_UPDATEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCAN_UPDATEDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR));
#endif
    return fapi2::putScom(i_target, SCAN_UPDATEDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCAN_UPDATEDR]


//>> SET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_UPDATEDR_SCAN_UPDATEDR_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR));
#endif
    return o_data.insertFromRight<SCAN_UPDATEDR_SCAN_UPDATEDR_REG,
           SCAN_UPDATEDR_SCAN_UPDATEDR_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCAN_UPDATEDR_SCAN_UPDATEDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]

//>> SET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_UPDATEDR_SCAN_UPDATEDR_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR));
#endif
    return o_data.insertFromRight<SCAN_UPDATEDR_SCAN_UPDATEDR_REG,
           SCAN_UPDATEDR_SCAN_UPDATEDR_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCAN_UPDATEDR_SCAN_UPDATEDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]

//>> GET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]
static inline fapi2::buffer<uint64_t>& GET_SCAN_UPDATEDR_SCAN_UPDATEDR_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR));
#endif
    return i_data.extractToRight<SCAN_UPDATEDR_SCAN_UPDATEDR_REG,
           SCAN_UPDATEDR_SCAN_UPDATEDR_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCAN_UPDATEDR_SCAN_UPDATEDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]

//>> PREP_[SPATTN_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SPATTN_UNMASKED(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_UNMASKED;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SPATTN_UNMASKED]

//>> GET_[SPATTN_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SPATTN_UNMASKED(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_UNMASKED;
#endif
    return fapi2::getScom(i_target, SPATTN_UNMASKED, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SPATTN_UNMASKED]

//>> PUT_[SPATTN_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SPATTN_UNMASKED(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SPATTN_UNMASKED));
#endif
    return fapi2::putScom(i_target, SPATTN_UNMASKED, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SPATTN_UNMASKED]


//>> SET_[SPATTN_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_UNMASKED));
#endif
    return o_data.insertFromRight<SPATTN_UNMASKED_IN,
           SPATTN_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SPATTN_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_UNMASKED_IN]

//>> SET_[SPATTN_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_UNMASKED_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_UNMASKED));
#endif
    return o_data.insertFromRight<SPATTN_UNMASKED_IN,
           SPATTN_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SPATTN_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_UNMASKED_IN]

//>> GET_[SPATTN_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_UNMASKED));
#endif
    return i_data.extractToRight<SPATTN_UNMASKED_IN,
           SPATTN_UNMASKED_IN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SPATTN_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_UNMASKED_IN]

//>> PREP_[TRA1_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_CONFIG_5]

//>> GET_[TRA1_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_5;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_5]

//>> PUT_[TRA1_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_5));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_CONFIG_5]


//>> SET_[TRA1_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_5_C,
           TRA1_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access TRA1_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_5_C]

//>> SET_[TRA1_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_5_C,
           TRA1_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access TRA1_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_5_C]

//>> GET_[TRA1_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_5_C,
           TRA1_TR0_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access TRA1_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_5_C]

//>> SET_[TRA1_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_5_D,
           TRA1_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access TRA1_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_5_D]

//>> SET_[TRA1_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_5_D,
           TRA1_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access TRA1_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_5_D]

//>> GET_[TRA1_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_5_D,
           TRA1_TR0_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access TRA1_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_5_D]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
