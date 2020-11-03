/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/iohs/reg00048_unused.H $      */
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

#ifndef __IOHS_REG00048_H_UNUSED__
#define __IOHS_REG00048_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace iohs
{
#endif


//>> PREP_[AXON_EPS_DBG_INST1_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_DBG_INST1_COND_REG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_DBG_INST1_COND_REG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_DBG_INST1_COND_REG_1]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_DBG_INST1_COND_REG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_DBG_INST1_COND_REG_1;
#endif
    return fapi2::getScom(i_target, AXON_EPS_DBG_INST1_COND_REG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1]

//>> PUT_[AXON_EPS_DBG_INST1_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_DBG_INST1_COND_REG_1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return fapi2::putScom(i_target, AXON_EPS_DBG_INST1_COND_REG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_DBG_INST1_COND_REG_1]


//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A,
           AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A,
           AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A,
           AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B,
           AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B,
           AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B,
           AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A,
           AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A,
           AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A,
           AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B,
           AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B,
           AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B,
           AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline bool GET_AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT,
           AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT,
           AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT,
           AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT,
           AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT,
           AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT,
           AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT,
           AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]

//>> SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT,
           AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT,
           AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]

//>> PREP_[AXON_EPS_DBG_INST2_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_DBG_INST2_COND_REG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_DBG_INST2_COND_REG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_DBG_INST2_COND_REG_1]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_DBG_INST2_COND_REG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_DBG_INST2_COND_REG_1;
#endif
    return fapi2::getScom(i_target, AXON_EPS_DBG_INST2_COND_REG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1]

//>> PUT_[AXON_EPS_DBG_INST2_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_DBG_INST2_COND_REG_1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return fapi2::putScom(i_target, AXON_EPS_DBG_INST2_COND_REG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_DBG_INST2_COND_REG_1]


//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A,
           AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A,
           AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A,
           AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B,
           AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B,
           AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B,
           AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A,
           AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A,
           AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A,
           AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B,
           AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B,
           AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B,
           AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline bool GET_AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT,
           AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT,
           AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT,
           AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT,
           AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT,
           AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT,
           AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT,
           AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]

//>> SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT,
           AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT,
           AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]

//>> PREP_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG]

//>> GET_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG;
#endif
    return fapi2::getScom(i_target, AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG]

//>> PUT_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return fapi2::putScom(i_target, AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG]


//>> SET_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> SET_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> GET_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> PREP_[AXON_EPS_THERM_WSUB_DTS_RESULT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_THERM_WSUB_DTS_RESULT1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_DTS_RESULT1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_THERM_WSUB_DTS_RESULT1]

//>> GET_[AXON_EPS_THERM_WSUB_DTS_RESULT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_THERM_WSUB_DTS_RESULT1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_DTS_RESULT1;
#endif
    return fapi2::getScom(i_target, AXON_EPS_THERM_WSUB_DTS_RESULT1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_DTS_RESULT1]

//>> PUT_[AXON_EPS_THERM_WSUB_DTS_RESULT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_THERM_WSUB_DTS_RESULT1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_RESULT1));
#endif
    return fapi2::putScom(i_target, AXON_EPS_THERM_WSUB_DTS_RESULT1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_THERM_WSUB_DTS_RESULT1]


//>> SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_RESULT1));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT,
           AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_RESULT1));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT,
           AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT]

//>> GET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_RESULT1));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT,
           AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_4_RESULT]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_RESULT1));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT,
           AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_RESULT1));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT,
           AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT]

//>> GET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_RESULT1));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT,
           AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_5_RESULT]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_RESULT1));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT,
           AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_RESULT1));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT,
           AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT]

//>> GET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_RESULT1));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT,
           AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_DTS_RESULT1_6_RESULT]

//>> PREP_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_DTS_TRC_RESULT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT]

//>> GET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_DTS_TRC_RESULT;
#endif
    return fapi2::getScom(i_target, AXON_EPS_THERM_WSUB_DTS_TRC_RESULT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT]

//>> PUT_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return fapi2::putScom(i_target, AXON_EPS_THERM_WSUB_DTS_TRC_RESULT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT]


//>> SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> GET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> CLEAR_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> GET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> GET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline bool GET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> GET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> PREP_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_THERM_WSUB_ERR_STATUS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_ERR_STATUS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_ERR_STATUS_REG;
#endif
    return fapi2::getScom(i_target, AXON_EPS_THERM_WSUB_ERR_STATUS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG]

//>> PUT_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_THERM_WSUB_ERR_STATUS_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return fapi2::putScom(i_target, AXON_EPS_THERM_WSUB_ERR_STATUS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG]


//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SERIAL_SHIFTCNT_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THERM_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_FORCEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SCAN_INIT_VERSION_REG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_VOLT_MODEREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SKITTER_CLKSRCREG_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_STATE_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_THRES_THERM_OVERFLOW_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_PARITY_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFTER_VALID_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_TIMEOUT_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_F_SKITTER_ERR_HOLD]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_PCB_ERR_HOLD_OUT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_COUNT_STATE_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_RUN_STATE_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_DTS_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SHIFT_VOLT_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_STATE_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT,
           AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_STATE_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_SAMPLE_DTS_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_MEASURE_VOLT_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_READ_CPM_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_WRITE_CPM_LT]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]

//>> SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]

//>> CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]

//>> GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]
static inline bool GET_AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_ERR_STATUS_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_ERR_STATUS_REG_UNUSED]

//>> PREP_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_SKITTER_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_SKITTER_MODE_REG;
#endif
    return fapi2::getScom(i_target, AXON_EPS_THERM_WSUB_SKITTER_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG]

//>> PUT_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return fapi2::putScom(i_target, AXON_EPS_THERM_WSUB_SKITTER_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG]


//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> CLEAR_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline bool GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> CLEAR_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline bool GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> CLEAR_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline bool GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> CLEAR_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline bool GET_AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> PREP_[AXON_SCAN64CONTSCAN]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_SCAN64CONTSCAN(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_SCAN64CONTSCAN;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_SCAN64CONTSCAN]

//>> GET_[AXON_SCAN64CONTSCAN]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_SCAN64CONTSCAN(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_SCAN64CONTSCAN;
#endif
    return fapi2::getScom(i_target, AXON_SCAN64CONTSCAN, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_SCAN64CONTSCAN]

//>> PUT_[AXON_SCAN64CONTSCAN]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_SCAN64CONTSCAN(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_SCAN64CONTSCAN));
#endif
    return fapi2::putScom(i_target, AXON_SCAN64CONTSCAN, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_SCAN64CONTSCAN]


//>> SET_[AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN64CONTSCAN));
#endif
    return o_data.insertFromRight<AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG,
           AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG]

//>> SET_[AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN64CONTSCAN));
#endif
    return o_data.insertFromRight<AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG,
           AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG]

//>> GET_[AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN64CONTSCAN));
#endif
    return i_data.extractToRight<AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG,
           AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN64CONTSCAN_SCAN64CONTSCAN_REG]

//>> PREP_[AXON_SCAN_REGION_TYPE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_SCAN_REGION_TYPE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_SCAN_REGION_TYPE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_SCAN_REGION_TYPE]

//>> GET_[AXON_SCAN_REGION_TYPE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_SCAN_REGION_TYPE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_SCAN_REGION_TYPE;
#endif
    return fapi2::getScom(i_target, AXON_SCAN_REGION_TYPE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE]

//>> PUT_[AXON_SCAN_REGION_TYPE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_SCAN_REGION_TYPE(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return fapi2::putScom(i_target, AXON_SCAN_REGION_TYPE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_SCAN_REGION_TYPE]


//>> SET_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]

//>> SET_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]

//>> SET_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]

//>> GET_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]

//>> GET_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]
static inline bool GET_AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SYSTEM_FAST_INIT]

//>> SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]

//>> SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]

//>> SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]

//>> GET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]

//>> GET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]
static inline bool GET_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN]

//>> SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]

//>> SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]

//>> SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]

//>> GET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]

//>> GET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]
static inline bool GET_AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_PARALLEL_SCAN_AND_NOTOR]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_VITL]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_PERV]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT1]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT2]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT3]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT4]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT5]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT6]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT7]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT8]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT9]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT10]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT11]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT12]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT13]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_REGION_UNIT14]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FUNC]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CFG]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CCFG_GPTR]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REGF]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_LBIST]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_ABIST]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_REPR]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_TIME]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_BNDY]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_FARR]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_CMSK]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.insertFromRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]

//>> SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.setBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]

//>> CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return o_data.clearBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.extractToRight<AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]

//>> GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]
static inline bool GET_AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_REGION_TYPE));
#endif
    return i_data.getBit<AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_REGION_TYPE_SCAN_TYPE_INEX]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_DATA]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL17_PL_EDGE]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX34_PL_RX_AD_LATCH_DAC_N111]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX44_PL_RX_AD_LATCH_DAC_S001]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX54_PL_RX_AD_LATCH_DAC_W011]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX68_PL_RX_BD_LATCH_DAC_E001]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX78_PL_RX_BD_LATCH_DAC_S011]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX83_PL_RX_BD_LATCH_DAC_W000]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_DATA]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_DATA]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_DATA]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_NS_EDGE]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL5_PL_EW_EDGE]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX26_PL_RX_BE_LATCH_DAC_W]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX66_PL_RX_BD_LATCH_DAC_N111]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX76_PL_RX_BD_LATCH_DAC_S001]

//>> PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIME_VAL]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline bool GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline bool GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline bool GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline bool GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline bool GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline bool GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline bool GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline bool GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX21_PL_RX_AE_LATCH_DAC_S]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX31_PL_RX_AD_LATCH_DAC_N100]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX41_PL_RX_AD_LATCH_DAC_E110]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX51_PL_RX_AD_LATCH_DAC_W000]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX86_PL_RX_BD_LATCH_DAC_W011]

//>> PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE4_PL_PHASE_STEP]

//>> PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL,
           IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL,
           IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL,
           IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL3_PL_ZERO]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX62_PL_RX_BD_LATCH_DAC_N011]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX72_PL_RX_BD_LATCH_DAC_E101]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX89_PL_RX_BD_LATCH_DAC_W110]

//>> PREP_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH,
           IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]

//>> SET_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH,
           IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]

//>> GET_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH,
           IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK1]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL6_PL_PEAK2]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX35_PL_RX_AD_LATCH_DAC_E000]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX45_PL_RX_AD_LATCH_DAC_S010]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX55_PL_RX_AD_LATCH_DAC_W100]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX59_PL_RX_BD_LATCH_DAC_N000]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX69_PL_RX_BD_LATCH_DAC_E010]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX79_PL_RX_BD_LATCH_DAC_S100]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX82_PL_RX_BD_LATCH_DAC_S111]

//>> PREP_[IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL]

//>> GET_[IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL]

//>> PUT_[IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL]


//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL,
           P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL,
           P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL,
           P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKA_SEL]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]
static inline bool GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]
static inline bool GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]
static inline bool GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]
static inline bool GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKA_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL,
           P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL,
           P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL,
           P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_DAC_BANKB_SEL]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]
static inline bool GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATAPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]
static inline bool GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGEPN_SWAP_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]
static inline bool GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_DATA_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]
static inline bool GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_EDGE_PULLDN_BANKB_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]
static inline bool GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_TEST_CIRCUIT_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]

//>> SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]

//>> GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]
static inline bool GET_P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_RX_BIT_REGS_CNTL7_PL_REGRW_MUX_ENB]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
