/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00010_unused.H $       */
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

#ifndef __PEC_REG00010_H_UNUSED__
#define __PEC_REG00010_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> PREP_[CC_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CC_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CC_PROTECT_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CC_PROTECT_MODE_REG]

//>> GET_[CC_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CC_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CC_PROTECT_MODE_REG;
#endif
    return fapi2::getScom(i_target, CC_PROTECT_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CC_PROTECT_MODE_REG]

//>> PUT_[CC_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CC_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return fapi2::putScom(i_target, CC_PROTECT_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CC_PROTECT_MODE_REG]


//>> SET_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return o_data.setBit<CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> CLEAR_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return o_data.clearBit<CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline bool GET_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return i_data.getBit<CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return o_data.setBit<CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> CLEAR_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return o_data.clearBit<CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline bool GET_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_PROTECT_MODE_REG));
#endif
    return i_data.getBit<CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> PREP_[EPS_DBG_INST1_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_INST1_COND_REG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST1_COND_REG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_INST1_COND_REG_1]

//>> GET_[EPS_DBG_INST1_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_INST1_COND_REG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST1_COND_REG_1;
#endif
    return fapi2::getScom(i_target, EPS_DBG_INST1_COND_REG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1]

//>> PUT_[EPS_DBG_INST1_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_INST1_COND_REG_1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return fapi2::putScom(i_target, EPS_DBG_INST1_COND_REG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_INST1_COND_REG_1]


//>> SET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_COND1_SEL_A,
           EPS_DBG_INST1_COND_REG_1_COND1_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]

//>> SET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_COND1_SEL_A,
           EPS_DBG_INST1_COND_REG_1_COND1_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]

//>> GET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_COND1_SEL_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_COND1_SEL_A,
           EPS_DBG_INST1_COND_REG_1_COND1_SEL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_A]

//>> SET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_COND1_SEL_B,
           EPS_DBG_INST1_COND_REG_1_COND1_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]

//>> SET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_COND1_SEL_B,
           EPS_DBG_INST1_COND_REG_1_COND1_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]

//>> GET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_COND1_SEL_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_COND1_SEL_B,
           EPS_DBG_INST1_COND_REG_1_COND1_SEL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_COND1_SEL_B]

//>> SET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_COND2_SEL_A,
           EPS_DBG_INST1_COND_REG_1_COND2_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]

//>> SET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_COND2_SEL_A,
           EPS_DBG_INST1_COND_REG_1_COND2_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]

//>> GET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_COND2_SEL_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_COND2_SEL_A,
           EPS_DBG_INST1_COND_REG_1_COND2_SEL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_A]

//>> SET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_COND2_SEL_B,
           EPS_DBG_INST1_COND_REG_1_COND2_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]

//>> SET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_COND2_SEL_B,
           EPS_DBG_INST1_COND_REG_1_COND2_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]

//>> GET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_COND2_SEL_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_COND2_SEL_B,
           EPS_DBG_INST1_COND_REG_1_COND2_SEL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_COND2_SEL_B]

//>> SET_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> GET_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> GET_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_C1_INAROW_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> GET_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> GET_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_C2_INAROW_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> GET_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> GET_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> GET_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> GET_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_EXACT_TO_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> GET_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> GET_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> GET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> GET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> GET_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> GET_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_SLOW_TO_MODE]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> CLEAR_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> GET_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> GET_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline bool GET_EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT,
           EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]

//>> SET_[EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT,
           EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]

//>> GET_[EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT,
           EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_C1_COUNT_LT]

//>> SET_[EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT,
           EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]

//>> SET_[EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT,
           EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]

//>> GET_[EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT,
           EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_C2_COUNT_LT]

//>> SET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT,
           EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]

//>> SET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT,
           EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]

//>> GET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT,
           EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_1_RESET_C3_SELECT]

//>> PREP_[EPS_DBG_INST2_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_INST2_COND_REG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST2_COND_REG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_INST2_COND_REG_1]

//>> GET_[EPS_DBG_INST2_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_INST2_COND_REG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST2_COND_REG_1;
#endif
    return fapi2::getScom(i_target, EPS_DBG_INST2_COND_REG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1]

//>> PUT_[EPS_DBG_INST2_COND_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_INST2_COND_REG_1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return fapi2::putScom(i_target, EPS_DBG_INST2_COND_REG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_INST2_COND_REG_1]


//>> SET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_COND1_SEL_A,
           EPS_DBG_INST2_COND_REG_1_COND1_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]

//>> SET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_COND1_SEL_A,
           EPS_DBG_INST2_COND_REG_1_COND1_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]

//>> GET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_COND1_SEL_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_COND1_SEL_A,
           EPS_DBG_INST2_COND_REG_1_COND1_SEL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND1_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_A]

//>> SET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_COND1_SEL_B,
           EPS_DBG_INST2_COND_REG_1_COND1_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]

//>> SET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_COND1_SEL_B,
           EPS_DBG_INST2_COND_REG_1_COND1_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]

//>> GET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_COND1_SEL_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_COND1_SEL_B,
           EPS_DBG_INST2_COND_REG_1_COND1_SEL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND1_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_COND1_SEL_B]

//>> SET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_COND2_SEL_A,
           EPS_DBG_INST2_COND_REG_1_COND2_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]

//>> SET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_COND2_SEL_A,
           EPS_DBG_INST2_COND_REG_1_COND2_SEL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]

//>> GET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_COND2_SEL_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_COND2_SEL_A,
           EPS_DBG_INST2_COND_REG_1_COND2_SEL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND2_SEL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_A]

//>> SET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_COND2_SEL_B,
           EPS_DBG_INST2_COND_REG_1_COND2_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]

//>> SET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_COND2_SEL_B,
           EPS_DBG_INST2_COND_REG_1_COND2_SEL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]

//>> GET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_COND2_SEL_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_COND2_SEL_B,
           EPS_DBG_INST2_COND_REG_1_COND2_SEL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND2_SEL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_COND2_SEL_B]

//>> SET_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> GET_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> GET_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_C1_INAROW_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> GET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> GET_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> GET_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_C2_INAROW_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_AND_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_NOT_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> GET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_EDGE_TRIGGER_MODE2]

//>> SET_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> GET_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> GET_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_COND3_ENABLE_RESET]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> GET_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> GET_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_EXACT_TO_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> GET_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> GET_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_RESET_C2TIMER_ON_C1]

//>> SET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> GET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> GET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_ON_C0]

//>> SET_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> GET_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> GET_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_SLOW_TO_MODE]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.setBit<EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> CLEAR_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> GET_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> GET_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]
static inline bool GET_EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.getBit<EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_EXACT_RESET_C3_ON_TO]

//>> SET_[EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT,
           EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]

//>> SET_[EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT,
           EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]

//>> GET_[EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT,
           EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_C1_COUNT_LT]

//>> SET_[EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT,
           EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]

//>> SET_[EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT,
           EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]

//>> GET_[EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT,
           EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_C2_COUNT_LT]

//>> SET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT,
           EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]

//>> SET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT,
           EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]

//>> GET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT,
           EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_1_RESET_C3_SELECT]

//>> PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK4;
#endif
    return fapi2::getScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4]

//>> PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return fapi2::putScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4]


//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK4));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK4_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> PREP_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG]

//>> GET_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG;
#endif
    return fapi2::getScom(i_target, EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG]

//>> PUT_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG));
#endif
    return fapi2::putScom(i_target, EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG]


//>> SET_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK,
           EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]

//>> SET_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK,
           EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]

//>> GET_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG));
#endif
    return i_data.extractToRight<EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK,
           EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_ATOMIC_LOCK_MASK_LATCH_REG_ATOMIC_LOCK_MASK]

//>> PREP_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG]

//>> GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG]


//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]

//>> CLEAR_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]

//>> GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]

//>> GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]
static inline bool GET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_EN]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]

//>> CLEAR_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]

//>> GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]

//>> GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]
static inline bool GET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_INBOUND_OVERRIDE_EN]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]

//>> CLEAR_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]

//>> GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]

//>> GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]
static inline bool GET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_OUTBOUND_OVERRIDE_EN]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG,
           PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG,
           PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG]

//>> GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG,
           PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_CHECKOUT_BASE_RTAG]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1,
           PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1,
           PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1]

//>> GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1,
           PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_RESERVED_NMMU1]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG,
           PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG]

//>> SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG,
           PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG]

//>> GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG,
           PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NMMU_RTAG_OVERRIDE_REG_PE_NMMU_RESPONSE_BASE_RTAG]

//>> PREP_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_NRDSTKOVR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG]

//>> GET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_NRDSTKOVR_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_NRDSTKOVR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_NRDSTKOVR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG]


//>> SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0]

//>> SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0]

//>> GET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK0]

//>> SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1]

//>> SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1]

//>> GET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_STK1]

//>> SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]
static inline bool GET_PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NRDSTKOVR_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NRDSTKOVR_REG_ENABLE]

//>> PREP_[TOP0_PIPEDOUTCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_PIPEDOUTCTL1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDOUTCTL1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_PIPEDOUTCTL1]

//>> GET_[TOP0_PIPEDOUTCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_PIPEDOUTCTL1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDOUTCTL1;
#endif
    return fapi2::getScom(i_target, TOP0_PIPEDOUTCTL1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1]

//>> PUT_[TOP0_PIPEDOUTCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_PIPEDOUTCTL1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return fapi2::putScom(i_target, TOP0_PIPEDOUTCTL1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_PIPEDOUTCTL1]


//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_63_31]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_63_31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_63_31,
           TOP0_PIPEDOUTCTL1_RESERVED_63_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_63_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_63_31]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_63_31]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_63_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_63_31,
           TOP0_PIPEDOUTCTL1_RESERVED_63_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_63_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_63_31]

//>> GET_[TOP0_PIPEDOUTCTL1_RESERVED_63_31]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL1_RESERVED_63_31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL1_RESERVED_63_31,
           TOP0_PIPEDOUTCTL1_RESERVED_63_31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_63_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_RESERVED_63_31]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_30]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_30]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL1_RESERVED_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_30]

//>> CLEAR_[TOP0_PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL1_RESERVED_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL1_RESERVED_30]

//>> GET_[TOP0_PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL1_RESERVED_30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_RESERVED_30]

//>> GET_[TOP0_PIPEDOUTCTL1_RESERVED_30]
static inline bool GET_TOP0_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL1_RESERVED_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_RESERVED_30]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> GET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> GET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline bool GET_TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_28]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_28(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_28]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL1_RESERVED_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_28]

//>> CLEAR_[TOP0_PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL1_RESERVED_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL1_RESERVED_28]

//>> GET_[TOP0_PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL1_RESERVED_28,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_RESERVED_28]

//>> GET_[TOP0_PIPEDOUTCTL1_RESERVED_28]
static inline bool GET_TOP0_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL1_RESERVED_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_RESERVED_28]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> GET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> GET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline bool GET_TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_26]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_26(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_26]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL1_RESERVED_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_26]

//>> CLEAR_[TOP0_PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL1_RESERVED_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL1_RESERVED_26]

//>> GET_[TOP0_PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL1_RESERVED_26,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_RESERVED_26]

//>> GET_[TOP0_PIPEDOUTCTL1_RESERVED_26]
static inline bool GET_TOP0_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL1_RESERVED_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_RESERVED_26]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> GET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> GET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline bool GET_TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_24]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_24(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_24]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL1_RESERVED_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_24]

//>> CLEAR_[TOP0_PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL1_RESERVED_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL1_RESERVED_24]

//>> GET_[TOP0_PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL1_RESERVED_24,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_RESERVED_24]

//>> GET_[TOP0_PIPEDOUTCTL1_RESERVED_24]
static inline bool GET_TOP0_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL1_RESERVED_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_RESERVED_24]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.setBit<TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> CLEAR_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.clearBit<TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> GET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> GET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline bool GET_TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.getBit<TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_22_0]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_22_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_22_0,
           TOP0_PIPEDOUTCTL1_RESERVED_22_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_22_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_22_0]

//>> SET_[TOP0_PIPEDOUTCTL1_RESERVED_22_0]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL1_RESERVED_22_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL1_RESERVED_22_0,
           TOP0_PIPEDOUTCTL1_RESERVED_22_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_22_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL1_RESERVED_22_0]

//>> GET_[TOP0_PIPEDOUTCTL1_RESERVED_22_0]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL1_RESERVED_22_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL1_RESERVED_22_0,
           TOP0_PIPEDOUTCTL1_RESERVED_22_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL1_RESERVED_22_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL1_RESERVED_22_0]

//>> PREP_[TOP1_PIPEDINCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_PIPEDINCTL0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDINCTL0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_PIPEDINCTL0]

//>> GET_[TOP1_PIPEDINCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_PIPEDINCTL0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDINCTL0;
#endif
    return fapi2::getScom(i_target, TOP1_PIPEDINCTL0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0]

//>> PUT_[TOP1_PIPEDINCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_PIPEDINCTL0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return fapi2::putScom(i_target, TOP1_PIPEDINCTL0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_PIPEDINCTL0]


//>> SET_[TOP1_PIPEDINCTL0_RESERVED_63_17]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_RESERVED_63_17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_RESERVED_63_17,
           TOP1_PIPEDINCTL0_RESERVED_63_17_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_RESERVED_63_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_RESERVED_63_17]

//>> SET_[TOP1_PIPEDINCTL0_RESERVED_63_17]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_RESERVED_63_17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_RESERVED_63_17,
           TOP1_PIPEDINCTL0_RESERVED_63_17_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_RESERVED_63_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_RESERVED_63_17]

//>> GET_[TOP1_PIPEDINCTL0_RESERVED_63_17]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_RESERVED_63_17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_RESERVED_63_17,
           TOP1_PIPEDINCTL0_RESERVED_63_17_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_RESERVED_63_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_RESERVED_63_17]

//>> SET_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY_RTUNE_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY_RTUNE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY_RTUNE_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY_RTUNE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY_RTUNE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL0_PHY_RTUNE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> CLEAR_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL0_PHY_RTUNE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL0_PHY_RTUNE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> GET_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_PHY_RTUNE_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_PHY_RTUNE_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> GET_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]
static inline bool GET_TOP1_PIPEDINCTL0_PHY_RTUNE_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL0_PHY_RTUNE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY_RTUNE_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY_RTUNE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_RESERVED_15_12]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_RESERVED_15_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_RESERVED_15_12,
           TOP1_PIPEDINCTL0_RESERVED_15_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_RESERVED_15_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_RESERVED_15_12]

//>> SET_[TOP1_PIPEDINCTL0_RESERVED_15_12]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_RESERVED_15_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_RESERVED_15_12,
           TOP1_PIPEDINCTL0_RESERVED_15_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_RESERVED_15_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_RESERVED_15_12]

//>> GET_[TOP1_PIPEDINCTL0_RESERVED_15_12]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_RESERVED_15_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_RESERVED_15_12,
           TOP1_PIPEDINCTL0_RESERVED_15_12_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_RESERVED_15_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_RESERVED_15_12]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> CLEAR_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> GET_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> GET_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]
static inline bool GET_TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY1_REFB_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> CLEAR_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> GET_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> GET_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]
static inline bool GET_TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY1_REFA_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> CLEAR_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> GET_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> GET_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]
static inline bool GET_TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY1_MPLLB_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> CLEAR_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> GET_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> GET_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]
static inline bool GET_TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY1_MPLLA_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_RESERVED_7_4]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_RESERVED_7_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_RESERVED_7_4,
           TOP1_PIPEDINCTL0_RESERVED_7_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_RESERVED_7_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_RESERVED_7_4]

//>> SET_[TOP1_PIPEDINCTL0_RESERVED_7_4]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_RESERVED_7_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_RESERVED_7_4,
           TOP1_PIPEDINCTL0_RESERVED_7_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_RESERVED_7_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_RESERVED_7_4]

//>> GET_[TOP1_PIPEDINCTL0_RESERVED_7_4]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_RESERVED_7_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_RESERVED_7_4,
           TOP1_PIPEDINCTL0_RESERVED_7_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_RESERVED_7_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_RESERVED_7_4]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> CLEAR_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> GET_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> GET_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]
static inline bool GET_TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY0_REFB_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> CLEAR_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> GET_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> GET_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]
static inline bool GET_TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY0_REFA_CLKDET_RESULT]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> CLEAR_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> GET_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> GET_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]
static inline bool GET_TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY0_MPLLB_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> SET_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> CLEAR_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> GET_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> GET_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]
static inline bool GET_TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL0_PHY0_MPLLA_FORCE_ACK]

//>> PREP_[TOP1_PIPEDOUTCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_PIPEDOUTCTL0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDOUTCTL0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_PIPEDOUTCTL0]

//>> GET_[TOP1_PIPEDOUTCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_PIPEDOUTCTL0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDOUTCTL0;
#endif
    return fapi2::getScom(i_target, TOP1_PIPEDOUTCTL0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0]

//>> PUT_[TOP1_PIPEDOUTCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_PIPEDOUTCTL0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return fapi2::putScom(i_target, TOP1_PIPEDOUTCTL0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_PIPEDOUTCTL0]


//>> SET_[TOP1_PIPEDOUTCTL0_RESERVED_63_59]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RESERVED_63_59(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_RESERVED_63_59,
           TOP1_PIPEDOUTCTL0_RESERVED_63_59_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_63_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RESERVED_63_59]

//>> SET_[TOP1_PIPEDOUTCTL0_RESERVED_63_59]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RESERVED_63_59(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_RESERVED_63_59,
           TOP1_PIPEDOUTCTL0_RESERVED_63_59_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_63_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RESERVED_63_59]

//>> GET_[TOP1_PIPEDOUTCTL0_RESERVED_63_59]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_RESERVED_63_59(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_RESERVED_63_59,
           TOP1_PIPEDOUTCTL0_RESERVED_63_59_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_63_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_RESERVED_63_59]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline bool GET_TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline bool GET_TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline bool GET_TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline bool GET_TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline bool GET_TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline bool GET_TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline bool GET_TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> CLEAR_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline bool GET_TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> SET_[TOP1_PIPEDOUTCTL0_RESERVED_50_42]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RESERVED_50_42(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_RESERVED_50_42,
           TOP1_PIPEDOUTCTL0_RESERVED_50_42_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_50_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RESERVED_50_42]

//>> SET_[TOP1_PIPEDOUTCTL0_RESERVED_50_42]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RESERVED_50_42(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_RESERVED_50_42,
           TOP1_PIPEDOUTCTL0_RESERVED_50_42_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_50_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RESERVED_50_42]

//>> GET_[TOP1_PIPEDOUTCTL0_RESERVED_50_42]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_RESERVED_50_42(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_RESERVED_50_42,
           TOP1_PIPEDOUTCTL0_RESERVED_50_42_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_50_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_RESERVED_50_42]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> SET_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> CLEAR_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> GET_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline bool GET_TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> SET_[TOP1_PIPEDOUTCTL0_RESERVED_40_0]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RESERVED_40_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_RESERVED_40_0,
           TOP1_PIPEDOUTCTL0_RESERVED_40_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_40_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RESERVED_40_0]

//>> SET_[TOP1_PIPEDOUTCTL0_RESERVED_40_0]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RESERVED_40_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_RESERVED_40_0,
           TOP1_PIPEDOUTCTL0_RESERVED_40_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_40_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RESERVED_40_0]

//>> GET_[TOP1_PIPEDOUTCTL0_RESERVED_40_0]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_RESERVED_40_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_RESERVED_40_0,
           TOP1_PIPEDOUTCTL0_RESERVED_40_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_40_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_RESERVED_40_0]

//>> SET_[TOP1_PIPEDOUTCTL0_RESERVED_40_6]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RESERVED_40_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_RESERVED_40_6,
           TOP1_PIPEDOUTCTL0_RESERVED_40_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_40_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RESERVED_40_6]

//>> SET_[TOP1_PIPEDOUTCTL0_RESERVED_40_6]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RESERVED_40_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_RESERVED_40_6,
           TOP1_PIPEDOUTCTL0_RESERVED_40_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_40_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RESERVED_40_6]

//>> GET_[TOP1_PIPEDOUTCTL0_RESERVED_40_6]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_RESERVED_40_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_RESERVED_40_6,
           TOP1_PIPEDOUTCTL0_RESERVED_40_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RESERVED_40_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_RESERVED_40_6]

//>> SET_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> SET_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> SET_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.setBit<TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> CLEAR_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.clearBit<TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> GET_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> GET_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]
static inline bool GET_TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.getBit<TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_RATIO_ALIGN_CS]

//>> SET_[TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS,
           TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]

//>> SET_[TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS,
           TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]

//>> GET_[TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS,
           TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL0_PRESET_VALUE_FROM_SPARE_LATS]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
