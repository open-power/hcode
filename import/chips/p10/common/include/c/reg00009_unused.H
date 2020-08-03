/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00009_unused.H $         */
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

#ifndef __C_REG00009_H_UNUSED__
#define __C_REG00009_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[EC_PC_COMMON_SPR_CTRL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_CTRL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_CTRL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_CTRL]

//>> GET_[EC_PC_COMMON_SPR_CTRL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_CTRL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_CTRL;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_CTRL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL]

//>> PUT_[EC_PC_COMMON_SPR_CTRL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_CTRL(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_CTRL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_CTRL]


//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]

//>> CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]
static inline bool GET_EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T0_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]

//>> CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]
static inline bool GET_EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T1_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]

//>> CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]
static inline bool GET_EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T2_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]

//>> CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]
static inline bool GET_EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T3_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]

//>> CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]
static inline bool GET_EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T4_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]

//>> CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]
static inline bool GET_EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T5_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]

//>> CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]
static inline bool GET_EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T6_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]

//>> CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]

//>> GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]
static inline bool GET_EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_CTRL_T7_RUN_Q]

//>> SET_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_RUN_LATCH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_RUN_LATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_RUN_LATCH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]

//>> SET_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_RUN_LATCH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_CTRL_RUN_LATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_RUN_LATCH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]

//>> SET_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_CTRL_RUN_LATCH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_CTRL_RUN_LATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_RUN_LATCH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]

//>> CLEAR_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_CTRL_RUN_LATCH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_CTRL_RUN_LATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_RUN_LATCH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]

//>> GET_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_CTRL_RUN_LATCH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_CTRL_RUN_LATCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_RUN_LATCH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]

//>> GET_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]
static inline bool GET_EC_PC_COMMON_SPR_CTRL_RUN_LATCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_CTRL));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_CTRL_RUN_LATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_CTRL_RUN_LATCH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_CTRL_RUN_LATCH]

//>> PREP_[EC_PC_IMA_TRACE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_IMA_TRACE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_IMA_TRACE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_IMA_TRACE]

//>> GET_[EC_PC_IMA_TRACE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_IMA_TRACE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_IMA_TRACE;
#endif
    return fapi2::getScom(i_target, EC_PC_IMA_TRACE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_IMA_TRACE]

//>> PUT_[EC_PC_IMA_TRACE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_IMA_TRACE(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return fapi2::putScom(i_target, EC_PC_IMA_TRACE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_IMA_TRACE]


//>> SET_[EC_PC_IMA_TRACE_SAMPSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_IMA_TRACE_SAMPSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return o_data.insertFromRight<EC_PC_IMA_TRACE_SAMPSEL,
           EC_PC_IMA_TRACE_SAMPSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_IMA_TRACE_SAMPSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_IMA_TRACE_SAMPSEL]

//>> SET_[EC_PC_IMA_TRACE_SAMPSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_IMA_TRACE_SAMPSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return o_data.insertFromRight<EC_PC_IMA_TRACE_SAMPSEL,
           EC_PC_IMA_TRACE_SAMPSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_IMA_TRACE_SAMPSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_IMA_TRACE_SAMPSEL]

//>> GET_[EC_PC_IMA_TRACE_SAMPSEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_IMA_TRACE_SAMPSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return i_data.extractToRight<EC_PC_IMA_TRACE_SAMPSEL,
           EC_PC_IMA_TRACE_SAMPSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_IMA_TRACE_SAMPSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_IMA_TRACE_SAMPSEL]

//>> SET_[EC_PC_IMA_TRACE_CPMC_LOAD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_IMA_TRACE_CPMC_LOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return o_data.insertFromRight<EC_PC_IMA_TRACE_CPMC_LOAD,
           EC_PC_IMA_TRACE_CPMC_LOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_IMA_TRACE_CPMC_LOAD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_IMA_TRACE_CPMC_LOAD]

//>> SET_[EC_PC_IMA_TRACE_CPMC_LOAD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_IMA_TRACE_CPMC_LOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return o_data.insertFromRight<EC_PC_IMA_TRACE_CPMC_LOAD,
           EC_PC_IMA_TRACE_CPMC_LOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_IMA_TRACE_CPMC_LOAD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_IMA_TRACE_CPMC_LOAD]

//>> GET_[EC_PC_IMA_TRACE_CPMC_LOAD]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_IMA_TRACE_CPMC_LOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return i_data.extractToRight<EC_PC_IMA_TRACE_CPMC_LOAD,
           EC_PC_IMA_TRACE_CPMC_LOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_IMA_TRACE_CPMC_LOAD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_IMA_TRACE_CPMC_LOAD]

//>> SET_[EC_PC_IMA_TRACE_CPMC1SEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_IMA_TRACE_CPMC1SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return o_data.insertFromRight<EC_PC_IMA_TRACE_CPMC1SEL,
           EC_PC_IMA_TRACE_CPMC1SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_IMA_TRACE_CPMC1SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_IMA_TRACE_CPMC1SEL]

//>> SET_[EC_PC_IMA_TRACE_CPMC1SEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_IMA_TRACE_CPMC1SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return o_data.insertFromRight<EC_PC_IMA_TRACE_CPMC1SEL,
           EC_PC_IMA_TRACE_CPMC1SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_IMA_TRACE_CPMC1SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_IMA_TRACE_CPMC1SEL]

//>> GET_[EC_PC_IMA_TRACE_CPMC1SEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_IMA_TRACE_CPMC1SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return i_data.extractToRight<EC_PC_IMA_TRACE_CPMC1SEL,
           EC_PC_IMA_TRACE_CPMC1SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_IMA_TRACE_CPMC1SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_IMA_TRACE_CPMC1SEL]

//>> SET_[EC_PC_IMA_TRACE_CPMC2SEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_IMA_TRACE_CPMC2SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return o_data.insertFromRight<EC_PC_IMA_TRACE_CPMC2SEL,
           EC_PC_IMA_TRACE_CPMC2SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_IMA_TRACE_CPMC2SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_IMA_TRACE_CPMC2SEL]

//>> SET_[EC_PC_IMA_TRACE_CPMC2SEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_IMA_TRACE_CPMC2SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return o_data.insertFromRight<EC_PC_IMA_TRACE_CPMC2SEL,
           EC_PC_IMA_TRACE_CPMC2SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_IMA_TRACE_CPMC2SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_IMA_TRACE_CPMC2SEL]

//>> GET_[EC_PC_IMA_TRACE_CPMC2SEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_IMA_TRACE_CPMC2SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return i_data.extractToRight<EC_PC_IMA_TRACE_CPMC2SEL,
           EC_PC_IMA_TRACE_CPMC2SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_IMA_TRACE_CPMC2SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_IMA_TRACE_CPMC2SEL]

//>> SET_[EC_PC_IMA_TRACE_BUFFERSIZE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_IMA_TRACE_BUFFERSIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return o_data.insertFromRight<EC_PC_IMA_TRACE_BUFFERSIZE,
           EC_PC_IMA_TRACE_BUFFERSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_IMA_TRACE_BUFFERSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_IMA_TRACE_BUFFERSIZE]

//>> SET_[EC_PC_IMA_TRACE_BUFFERSIZE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_IMA_TRACE_BUFFERSIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return o_data.insertFromRight<EC_PC_IMA_TRACE_BUFFERSIZE,
           EC_PC_IMA_TRACE_BUFFERSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_IMA_TRACE_BUFFERSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_IMA_TRACE_BUFFERSIZE]

//>> GET_[EC_PC_IMA_TRACE_BUFFERSIZE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_IMA_TRACE_BUFFERSIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_IMA_TRACE));
#endif
    return i_data.extractToRight<EC_PC_IMA_TRACE_BUFFERSIZE,
           EC_PC_IMA_TRACE_BUFFERSIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_IMA_TRACE_BUFFERSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_IMA_TRACE_BUFFERSIZE]

//>> PREP_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_THRCTL_TCTLCOM_HANG_CONTROL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_THRCTL_TCTLCOM_HANG_CONTROL;
#endif
    return fapi2::getScom(i_target, EC_PC_THRCTL_TCTLCOM_HANG_CONTROL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL]

//>> PUT_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return fapi2::putScom(i_target, EC_PC_THRCTL_TCTLCOM_HANG_CONTROL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL]


//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return i_data.extractToRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_CORE_HANG_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return i_data.extractToRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_NEST_HANG_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.setBit<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]

//>> CLEAR_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.clearBit<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return i_data.extractToRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]
static inline bool GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return i_data.getBit<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_RETURN_GOOD_ON_COMP]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return i_data.extractToRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_COMP_CNT_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return i_data.extractToRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_HANG_REC_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.setBit<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]

//>> CLEAR_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.clearBit<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return i_data.extractToRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]
static inline bool GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return i_data.getBit<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_USE_HANG_REC_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return i_data.extractToRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_ACTIVE_MASK]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT]

//>> SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return o_data.insertFromRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT]

//>> GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_THRCTL_TCTLCOM_HANG_CONTROL));
#endif
    return i_data.extractToRight<EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT,
           EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_THRCTL_TCTLCOM_HANG_CONTROL_TLBIE_STALL_LIMIT]

//>> PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE1_TR_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_1]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE1_TR_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_1]

//>> PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE1_TR_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_1]


//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[L3_MISC_L3CERRS_PHYP_PURGE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3_MISC_L3CERRS_PHYP_PURGE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_PHYP_PURGE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3_MISC_L3CERRS_PHYP_PURGE_REG]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3_MISC_L3CERRS_PHYP_PURGE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_PHYP_PURGE_REG;
#endif
    return fapi2::getScom(i_target, L3_MISC_L3CERRS_PHYP_PURGE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG]

//>> PUT_[L3_MISC_L3CERRS_PHYP_PURGE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3_MISC_L3CERRS_PHYP_PURGE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return fapi2::putScom(i_target, L3_MISC_L3CERRS_PHYP_PURGE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3_MISC_L3CERRS_PHYP_PURGE_REG]


//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]

//>> CLEAR_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]
static inline bool GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_REQ]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_TTYPE]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]

//>> CLEAR_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]
static inline bool GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_NEXT_CE]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]

//>> CLEAR_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]
static inline bool GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_LINE_DEL_ON_ALL_CE]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_1]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]

//>> CLEAR_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]
static inline bool GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_BUSY_ERR]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_RESERVED_2]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_MEMBER]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR]

//>> SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR]

//>> GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PHYP_PURGE_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR,
           L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PHYP_PURGE_REG_L3_PHYP_PURGE_DIR_ADDR]

//>> PREP_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_WR_EPSILON_CFG_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_WR_EPSILON_CFG_REG;
#endif
    return fapi2::getScom(i_target, L3_MISC_L3CERRS_WR_EPSILON_CFG_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG]

//>> PUT_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return fapi2::putScom(i_target, L3_MISC_L3CERRS_WR_EPSILON_CFG_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG]


//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER1_EPS_VAL]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER2_EPS_VAL]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]

//>> CLEAR_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]
static inline bool GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EPS_ON_LCO]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]

//>> CLEAR_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]
static inline bool GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EN_WT4CR_WR_EXTENDED_MODE]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_STEP_MODE]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE,
           L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_EPS_DIVIDER_MODE]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]

//>> SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]

//>> CLEAR_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]

//>> GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]
static inline bool GET_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_EPS_CNT_USE_L3_DIVIDER_EN]

//>> SET_[P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL,
           P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL]

//>> SET_[P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL,
           P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL]

//>> GET_[P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_WR_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL,
           P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_L3_MISC_L3CERRS_WR_EPSILON_CFG_REG_L3_WT4CR_WR_TIER0_EPS_VAL]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
