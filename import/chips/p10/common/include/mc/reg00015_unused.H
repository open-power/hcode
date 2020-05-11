/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mc/reg00015_unused.H $        */
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

#ifndef __MC_REG00015_H_UNUSED__
#define __MC_REG00015_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> PREP_[MBA_SCOMFIR_MCDBG_SCOM_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_MCDBG_SCOM_CFG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_MCDBG_SCOM_CFG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_MCDBG_SCOM_CFG]

//>> GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_MCDBG_SCOM_CFG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_MCDBG_SCOM_CFG;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_MCDBG_SCOM_CFG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG]

//>> PUT_[MBA_SCOMFIR_MCDBG_SCOM_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_MCDBG_SCOM_CFG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_MCDBG_SCOM_CFG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_MCDBG_SCOM_CFG]


//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.setBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]

//>> CLEAR_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]
static inline fapi2::buffer<uint64_t>& CLEAR_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.clearBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]

//>> GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]

//>> GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]
static inline bool GET_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return i_data.getBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM01]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.setBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]

//>> CLEAR_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.clearBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]

//>> GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]

//>> GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]
static inline bool GET_MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return i_data.getBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_01_OR_ENABLE]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.setBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]

//>> CLEAR_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]
static inline fapi2::buffer<uint64_t>& CLEAR_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.clearBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]

//>> GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]

//>> GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]
static inline bool GET_MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return i_data.getBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_ACT_SCOM23]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]

//>> SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.setBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]

//>> CLEAR_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return o_data.clearBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]

//>> GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]

//>> GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]
static inline bool GET_MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCDBG_SCOM_CFG));
#endif
    return i_data.getBit<MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCDBG_SCOM_CFG_23_OR_ENABLE]

//>> PREP_[MBA_SCOMFIR_WATCFG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_WATCFG3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATCFG3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_WATCFG3]

//>> GET_[MBA_SCOMFIR_WATCFG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_WATCFG3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATCFG3;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_WATCFG3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_WATCFG3]

//>> PUT_[MBA_SCOMFIR_WATCFG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_WATCFG3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATCFG3));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_WATCFG3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_WATCFG3]


//>> SET_[MBA_SCOMFIR_WATCFG3_WAT_3_CFG]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATCFG3_WAT_3_CFG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATCFG3));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATCFG3_WAT_3_CFG,
           MBA_SCOMFIR_WATCFG3_WAT_3_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_WATCFG3_WAT_3_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATCFG3_WAT_3_CFG]

//>> SET_[MBA_SCOMFIR_WATCFG3_WAT_3_CFG]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATCFG3_WAT_3_CFG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATCFG3));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATCFG3_WAT_3_CFG,
           MBA_SCOMFIR_WATCFG3_WAT_3_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_WATCFG3_WAT_3_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATCFG3_WAT_3_CFG]

//>> GET_[MBA_SCOMFIR_WATCFG3_WAT_3_CFG]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_WATCFG3_WAT_3_CFG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATCFG3));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_WATCFG3_WAT_3_CFG,
           MBA_SCOMFIR_WATCFG3_WAT_3_CFG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_WATCFG3_WAT_3_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_WATCFG3_WAT_3_CFG]

//>> PREP_[SCOMFIR_AADR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCOMFIR_AADR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_AADR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCOMFIR_AADR]

//>> GET_[SCOMFIR_AADR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCOMFIR_AADR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_AADR;
#endif
    return fapi2::getScom(i_target, SCOMFIR_AADR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCOMFIR_AADR]

//>> PUT_[SCOMFIR_AADR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCOMFIR_AADR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCOMFIR_AADR));
#endif
    return fapi2::putScom(i_target, SCOMFIR_AADR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCOMFIR_AADR]


//>> SET_[SCOMFIR_AADR_AADR_DATA]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_AADR_AADR_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_AADR));
#endif
    return o_data.insertFromRight<SCOMFIR_AADR_AADR_DATA,
           SCOMFIR_AADR_AADR_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_AADR_AADR_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_AADR_AADR_DATA]

//>> SET_[SCOMFIR_AADR_AADR_DATA]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_AADR_AADR_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_AADR));
#endif
    return o_data.insertFromRight<SCOMFIR_AADR_AADR_DATA,
           SCOMFIR_AADR_AADR_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_AADR_AADR_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_AADR_AADR_DATA]

//>> GET_[SCOMFIR_AADR_AADR_DATA]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_AADR_AADR_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_AADR));
#endif
    return i_data.extractToRight<SCOMFIR_AADR_AADR_DATA,
           SCOMFIR_AADR_AADR_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_AADR_AADR_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_AADR_AADR_DATA]

//>> PREP_[SCOMFIR_MCERPT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCOMFIR_MCERPT2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCERPT2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCOMFIR_MCERPT2]

//>> GET_[SCOMFIR_MCERPT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCOMFIR_MCERPT2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCERPT2;
#endif
    return fapi2::getScom(i_target, SCOMFIR_MCERPT2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCOMFIR_MCERPT2]

//>> PUT_[SCOMFIR_MCERPT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCOMFIR_MCERPT2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return fapi2::putScom(i_target, SCOMFIR_MCERPT2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCOMFIR_MCERPT2]


//>> SET_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_CAR3_SMF_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_CAR3_SMF_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_CAR3_SMF_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]

//>> SET_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_CAR3_SMF_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_CAR3_SMF_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_CAR3_SMF_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]

//>> SET_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_CAR3_SMF_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_CAR3_SMF_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_CAR3_SMF_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_CAR3_SMF_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_CAR3_SMF_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_CAR3_SMF_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]

//>> GET_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_CAR3_SMF_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_CAR3_SMF_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_CAR3_SMF_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]

//>> GET_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_CAR3_SMF_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_CAR3_SMF_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_CAR3_SMF_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_CAR3_SMF_ERROR]

//>> SET_[SCOMFIR_MCERPT2_COLL_0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_COLL_0_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_COLL_0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_COLL_0_ERROR]

//>> SET_[SCOMFIR_MCERPT2_COLL_0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_COLL_0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_COLL_0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_COLL_0_ERROR]

//>> SET_[SCOMFIR_MCERPT2_COLL_0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_COLL_0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_COLL_0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_COLL_0_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_COLL_0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_COLL_0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_COLL_0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_COLL_0_ERROR]

//>> GET_[SCOMFIR_MCERPT2_COLL_0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_COLL_0_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_COLL_0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_COLL_0_ERROR]

//>> GET_[SCOMFIR_MCERPT2_COLL_0_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_COLL_0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_COLL_0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_COLL_0_ERROR]

//>> SET_[SCOMFIR_MCERPT2_COLL_1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_COLL_1_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_COLL_1_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_COLL_1_ERROR]

//>> SET_[SCOMFIR_MCERPT2_COLL_1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_COLL_1_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_COLL_1_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_COLL_1_ERROR]

//>> SET_[SCOMFIR_MCERPT2_COLL_1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_COLL_1_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_COLL_1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_COLL_1_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_COLL_1_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_COLL_1_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_COLL_1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_COLL_1_ERROR]

//>> GET_[SCOMFIR_MCERPT2_COLL_1_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_COLL_1_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_COLL_1_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_COLL_1_ERROR]

//>> GET_[SCOMFIR_MCERPT2_COLL_1_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_COLL_1_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_COLL_1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_COLL_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_COLL_1_ERROR]

//>> SET_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_OP_HIT_0_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_OP_HIT_0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]

//>> SET_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_OP_HIT_0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_OP_HIT_0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]

//>> SET_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_OP_HIT_0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_OP_HIT_0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_OP_HIT_0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_OP_HIT_0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]

//>> GET_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_OP_HIT_0_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_OP_HIT_0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]

//>> GET_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_OP_HIT_0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_OP_HIT_0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_0_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_OP_HIT_0_ERROR]

//>> SET_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_OP_HIT_1_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_OP_HIT_1_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]

//>> SET_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_OP_HIT_1_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_OP_HIT_1_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]

//>> SET_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_OP_HIT_1_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_OP_HIT_1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_OP_HIT_1_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_OP_HIT_1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]

//>> GET_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_OP_HIT_1_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_OP_HIT_1_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]

//>> GET_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_OP_HIT_1_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_OP_HIT_1_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_OP_HIT_1_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_OP_HIT_1_ERROR]

//>> SET_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RTAG_0_ARRAY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RTAG_1_ARRAY_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGP0A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGP1A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCMODE3_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]

//>> SET_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]

//>> SET_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]

//>> CLEAR_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]

//>> GET_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]

//>> GET_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]
static inline bool GET_SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGPR0_BAD_TTYPE]

//>> SET_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]

//>> SET_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]

//>> SET_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]

//>> CLEAR_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]

//>> GET_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]

//>> GET_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]
static inline bool GET_SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGPR1_BAD_TTYPE]

//>> SET_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGPM0A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]

//>> CLEAR_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]

//>> GET_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]
static inline bool GET_SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MCFGPM1A_PARITY_ERROR]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD0_NOHIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD0_NOHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD0_NOHIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD0_NOHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD0_NOHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_POP_RCMD0_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]

//>> CLEAR_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_POP_RCMD0_NOHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_POP_RCMD0_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_POP_RCMD0_NOHIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_POP_RCMD0_NOHIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]
static inline bool GET_SCOMFIR_MCERPT2_POP_RCMD0_NOHIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_POP_RCMD0_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD0_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD1_NOHIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD1_NOHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD1_NOHIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD1_NOHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD1_NOHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_POP_RCMD1_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]

//>> CLEAR_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_POP_RCMD1_NOHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_POP_RCMD1_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_POP_RCMD1_NOHIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_POP_RCMD1_NOHIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]
static inline bool GET_SCOMFIR_MCERPT2_POP_RCMD1_NOHIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_POP_RCMD1_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD1_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD2_NOHIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD2_NOHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD2_NOHIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD2_NOHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD2_NOHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_POP_RCMD2_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]

//>> CLEAR_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_POP_RCMD2_NOHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_POP_RCMD2_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_POP_RCMD2_NOHIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_POP_RCMD2_NOHIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]
static inline bool GET_SCOMFIR_MCERPT2_POP_RCMD2_NOHIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_POP_RCMD2_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD2_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD3_NOHIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD3_NOHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD3_NOHIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD3_NOHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD3_NOHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_POP_RCMD3_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]

//>> CLEAR_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_POP_RCMD3_NOHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_POP_RCMD3_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_POP_RCMD3_NOHIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_POP_RCMD3_NOHIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]
static inline bool GET_SCOMFIR_MCERPT2_POP_RCMD3_NOHIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_POP_RCMD3_NOHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_NOHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD3_NOHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD0_BADHIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD0_BADHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD0_BADHIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD0_BADHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD0_BADHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_POP_RCMD0_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]

//>> CLEAR_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_POP_RCMD0_BADHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_POP_RCMD0_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_POP_RCMD0_BADHIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_POP_RCMD0_BADHIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]
static inline bool GET_SCOMFIR_MCERPT2_POP_RCMD0_BADHIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_POP_RCMD0_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD0_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD0_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD1_BADHIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD1_BADHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD1_BADHIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD1_BADHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD1_BADHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_POP_RCMD1_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]

//>> CLEAR_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_POP_RCMD1_BADHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_POP_RCMD1_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_POP_RCMD1_BADHIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_POP_RCMD1_BADHIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]
static inline bool GET_SCOMFIR_MCERPT2_POP_RCMD1_BADHIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_POP_RCMD1_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD1_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD1_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD2_BADHIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD2_BADHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD2_BADHIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD2_BADHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD2_BADHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_POP_RCMD2_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]

//>> CLEAR_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_POP_RCMD2_BADHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_POP_RCMD2_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_POP_RCMD2_BADHIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_POP_RCMD2_BADHIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]
static inline bool GET_SCOMFIR_MCERPT2_POP_RCMD2_BADHIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_POP_RCMD2_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD2_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD2_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD3_BADHIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD3_BADHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD3_BADHIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_POP_RCMD3_BADHIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_POP_RCMD3_BADHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_POP_RCMD3_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]

//>> CLEAR_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_POP_RCMD3_BADHIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_POP_RCMD3_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_POP_RCMD3_BADHIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_POP_RCMD3_BADHIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]

//>> GET_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]
static inline bool GET_SCOMFIR_MCERPT2_POP_RCMD3_BADHIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_POP_RCMD3_BADHIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_POP_RCMD3_BADHIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_POP_RCMD3_BADHIT]

//>> SET_[SCOMFIR_MCERPT2_MULTISYNC]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MULTISYNC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MULTISYNC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_MULTISYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MULTISYNC]

//>> SET_[SCOMFIR_MCERPT2_MULTISYNC]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MULTISYNC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_MULTISYNC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_MULTISYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MULTISYNC]

//>> SET_[SCOMFIR_MCERPT2_MULTISYNC]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_MULTISYNC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_MULTISYNC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_MULTISYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_MULTISYNC]

//>> CLEAR_[SCOMFIR_MCERPT2_MULTISYNC]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_MULTISYNC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_MULTISYNC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_MULTISYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_MULTISYNC]

//>> GET_[SCOMFIR_MCERPT2_MULTISYNC]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_MULTISYNC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_MULTISYNC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_MULTISYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MULTISYNC]

//>> GET_[SCOMFIR_MCERPT2_MULTISYNC]
static inline bool GET_SCOMFIR_MCERPT2_MULTISYNC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_MULTISYNC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_MULTISYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_MULTISYNC]

//>> SET_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]

//>> SET_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]

//>> SET_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]

//>> CLEAR_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]

//>> GET_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]

//>> GET_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]
static inline bool GET_SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_SYNC_WHILE_ACTIVE]

//>> SET_[SCOMFIR_MCERPT2_READ0_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_READ0_HOLD_OUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_READ0_HOLD_OUT,
           SCOMFIR_MCERPT2_READ0_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_READ0_HOLD_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_READ0_HOLD_OUT]

//>> SET_[SCOMFIR_MCERPT2_READ0_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_READ0_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_READ0_HOLD_OUT,
           SCOMFIR_MCERPT2_READ0_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_READ0_HOLD_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_READ0_HOLD_OUT]

//>> GET_[SCOMFIR_MCERPT2_READ0_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_READ0_HOLD_OUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_READ0_HOLD_OUT,
           SCOMFIR_MCERPT2_READ0_HOLD_OUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_READ0_HOLD_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_READ0_HOLD_OUT]

//>> SET_[SCOMFIR_MCERPT2_READ1_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_READ1_HOLD_OUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_READ1_HOLD_OUT,
           SCOMFIR_MCERPT2_READ1_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_READ1_HOLD_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_READ1_HOLD_OUT]

//>> SET_[SCOMFIR_MCERPT2_READ1_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_READ1_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_READ1_HOLD_OUT,
           SCOMFIR_MCERPT2_READ1_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_READ1_HOLD_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_READ1_HOLD_OUT]

//>> GET_[SCOMFIR_MCERPT2_READ1_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_READ1_HOLD_OUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_READ1_HOLD_OUT,
           SCOMFIR_MCERPT2_READ1_HOLD_OUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_READ1_HOLD_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_READ1_HOLD_OUT]

//>> SET_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]

//>> CLEAR_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]
static inline bool GET_SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_FP0_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]

//>> CLEAR_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]
static inline bool GET_SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_FP1_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]

//>> CLEAR_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]
static inline bool GET_SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RCMD0_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]

//>> CLEAR_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]
static inline bool GET_SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RCMD1_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]

//>> CLEAR_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]
static inline bool GET_SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RCMD2_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.insertFromRight<SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]

//>> SET_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.setBit<SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]

//>> CLEAR_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return o_data.clearBit<SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.extractToRight<SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]

//>> GET_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]
static inline bool GET_SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCERPT2));
#endif
    return i_data.getBit<SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCERPT2_RCMD3_HIT_MULTIPLE_TID]

//>> PREP_[SCOMFIR_MCFGP1E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCOMFIR_MCFGP1E(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCFGP1E;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCOMFIR_MCFGP1E]

//>> GET_[SCOMFIR_MCFGP1E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCOMFIR_MCFGP1E(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCFGP1E;
#endif
    return fapi2::getScom(i_target, SCOMFIR_MCFGP1E, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCOMFIR_MCFGP1E]

//>> PUT_[SCOMFIR_MCFGP1E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCOMFIR_MCFGP1E(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return fapi2::putScom(i_target, SCOMFIR_MCFGP1E, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCOMFIR_MCFGP1E]


//>> SET_[SCOMFIR_MCFGP1E_VALID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP1E_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP1E_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGP1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP1E_VALID]

//>> SET_[SCOMFIR_MCFGP1E_VALID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP1E_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP1E_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGP1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP1E_VALID]

//>> SET_[SCOMFIR_MCFGP1E_VALID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP1E_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.setBit<SCOMFIR_MCFGP1E_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCFGP1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP1E_VALID]

//>> CLEAR_[SCOMFIR_MCFGP1E_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCFGP1E_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.clearBit<SCOMFIR_MCFGP1E_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCFGP1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCFGP1E_VALID]

//>> GET_[SCOMFIR_MCFGP1E_VALID]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGP1E_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGP1E_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGP1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP1E_VALID]

//>> GET_[SCOMFIR_MCFGP1E_VALID]
static inline bool GET_SCOMFIR_MCFGP1E_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return i_data.getBit<SCOMFIR_MCFGP1E_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCFGP1E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP1E_VALID]

//>> SET_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]

//>> SET_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]

//>> SET_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.setBit<SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]

//>> CLEAR_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.clearBit<SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]

//>> GET_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]

//>> GET_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]
static inline bool GET_SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return i_data.getBit<SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP1E_EXTEND_TO_END_OF_RANGE]

//>> SET_[SCOMFIR_MCFGP1E_LOWER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP1E_LOWER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP1E_LOWER_ADDRESS,
           SCOMFIR_MCFGP1E_LOWER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGP1E_LOWER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP1E_LOWER_ADDRESS]

//>> SET_[SCOMFIR_MCFGP1E_LOWER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP1E_LOWER_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP1E_LOWER_ADDRESS,
           SCOMFIR_MCFGP1E_LOWER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGP1E_LOWER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP1E_LOWER_ADDRESS]

//>> GET_[SCOMFIR_MCFGP1E_LOWER_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGP1E_LOWER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGP1E_LOWER_ADDRESS,
           SCOMFIR_MCFGP1E_LOWER_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGP1E_LOWER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP1E_LOWER_ADDRESS]

//>> SET_[SCOMFIR_MCFGP1E_UPPER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP1E_UPPER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP1E_UPPER_ADDRESS,
           SCOMFIR_MCFGP1E_UPPER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGP1E_UPPER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP1E_UPPER_ADDRESS]

//>> SET_[SCOMFIR_MCFGP1E_UPPER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP1E_UPPER_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP1E_UPPER_ADDRESS,
           SCOMFIR_MCFGP1E_UPPER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGP1E_UPPER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP1E_UPPER_ADDRESS]

//>> GET_[SCOMFIR_MCFGP1E_UPPER_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGP1E_UPPER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP1E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGP1E_UPPER_ADDRESS,
           SCOMFIR_MCFGP1E_UPPER_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGP1E_UPPER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP1E_UPPER_ADDRESS]

//>> PREP_[SCOMFIR_MCLFSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCOMFIR_MCLFSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCLFSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCOMFIR_MCLFSR]

//>> GET_[SCOMFIR_MCLFSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCOMFIR_MCLFSR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCLFSR;
#endif
    return fapi2::getScom(i_target, SCOMFIR_MCLFSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCOMFIR_MCLFSR]

//>> PUT_[SCOMFIR_MCLFSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCOMFIR_MCLFSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCLFSR));
#endif
    return fapi2::putScom(i_target, SCOMFIR_MCLFSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCOMFIR_MCLFSR]


//>> SET_[SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCLFSR));
#endif
    return o_data.insertFromRight<SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT,
           SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT]

//>> SET_[SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCLFSR));
#endif
    return o_data.insertFromRight<SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT,
           SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT]

//>> GET_[SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCLFSR));
#endif
    return i_data.extractToRight<SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT,
           SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCLFSR_TRY_LPC_LFSR_SELECT]

//>> SET_[SCOMFIR_MCLFSR_SERVED_2_4]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCLFSR_SERVED_2_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCLFSR));
#endif
    return o_data.insertFromRight<SCOMFIR_MCLFSR_SERVED_2_4,
           SCOMFIR_MCLFSR_SERVED_2_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCLFSR_SERVED_2_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCLFSR_SERVED_2_4]

//>> SET_[SCOMFIR_MCLFSR_SERVED_2_4]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCLFSR_SERVED_2_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCLFSR));
#endif
    return o_data.insertFromRight<SCOMFIR_MCLFSR_SERVED_2_4,
           SCOMFIR_MCLFSR_SERVED_2_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCLFSR_SERVED_2_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCLFSR_SERVED_2_4]

//>> GET_[SCOMFIR_MCLFSR_SERVED_2_4]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCLFSR_SERVED_2_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCLFSR));
#endif
    return i_data.extractToRight<SCOMFIR_MCLFSR_SERVED_2_4,
           SCOMFIR_MCLFSR_SERVED_2_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCLFSR_SERVED_2_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCLFSR_SERVED_2_4]

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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_mc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_mc Invalid dial access MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_mc Invalid dial access MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_mc Invalid dial access MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]

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
    FAPI_ERR("0:scom_mc Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_mc Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_mc Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_mc Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_mc Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_mc Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_mc Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_mc Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_mc Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_mc Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> PREP_[TIMEOUT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TIMEOUT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TIMEOUT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TIMEOUT_REG]

//>> GET_[TIMEOUT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TIMEOUT_REG(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TIMEOUT_REG;
#endif
    return fapi2::getScom(i_target, TIMEOUT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TIMEOUT_REG]

//>> PUT_[TIMEOUT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TIMEOUT_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TIMEOUT_REG));
#endif
    return fapi2::putScom(i_target, TIMEOUT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TIMEOUT_REG]


//>> SET_[TIMEOUT_REG_INT_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_TIMEOUT_REG_INT_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TIMEOUT_REG));
#endif
    return o_data.insertFromRight<TIMEOUT_REG_INT_TIMEOUT,
           TIMEOUT_REG_INT_TIMEOUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access TIMEOUT_REG_INT_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TIMEOUT_REG_INT_TIMEOUT]

//>> SET_[TIMEOUT_REG_INT_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_TIMEOUT_REG_INT_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TIMEOUT_REG));
#endif
    return o_data.insertFromRight<TIMEOUT_REG_INT_TIMEOUT,
           TIMEOUT_REG_INT_TIMEOUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access TIMEOUT_REG_INT_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TIMEOUT_REG_INT_TIMEOUT]

//>> GET_[TIMEOUT_REG_INT_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_TIMEOUT_REG_INT_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TIMEOUT_REG));
#endif
    return i_data.extractToRight<TIMEOUT_REG_INT_TIMEOUT,
           TIMEOUT_REG_INT_TIMEOUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access TIMEOUT_REG_INT_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TIMEOUT_REG_INT_TIMEOUT]

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
    FAPI_ERR("0:scom_mc Invalid dial access TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_mc Invalid dial access TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_mc Invalid dial access TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
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
