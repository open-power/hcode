/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mc/reg00014_unused.H $        */
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

#ifndef __MC_REG00014_H_UNUSED__
#define __MC_REG00014_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> PREP_[MBA_SCOMFIR_AACR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_AACR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_AACR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_AACR]

//>> GET_[MBA_SCOMFIR_AACR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_AACR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_AACR;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_AACR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_AACR]

//>> PUT_[MBA_SCOMFIR_AACR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_AACR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_AACR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_AACR]


//>> SET_[MBA_SCOMFIR_AACR_BUFFER]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_BUFFER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_AACR_BUFFER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_AACR_BUFFER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_BUFFER]

//>> SET_[MBA_SCOMFIR_AACR_BUFFER]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_BUFFER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_AACR_BUFFER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_AACR_BUFFER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_BUFFER]

//>> SET_[MBA_SCOMFIR_AACR_BUFFER]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_BUFFER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.setBit<MBA_SCOMFIR_AACR_BUFFER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access MBA_SCOMFIR_AACR_BUFFER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_BUFFER]

//>> CLEAR_[MBA_SCOMFIR_AACR_BUFFER]
static inline fapi2::buffer<uint64_t>& CLEAR_MBA_SCOMFIR_AACR_BUFFER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.clearBit<MBA_SCOMFIR_AACR_BUFFER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access MBA_SCOMFIR_AACR_BUFFER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[MBA_SCOMFIR_AACR_BUFFER]

//>> GET_[MBA_SCOMFIR_AACR_BUFFER]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_AACR_BUFFER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_AACR_BUFFER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_AACR_BUFFER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_AACR_BUFFER]

//>> GET_[MBA_SCOMFIR_AACR_BUFFER]
static inline bool GET_MBA_SCOMFIR_AACR_BUFFER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return i_data.getBit<MBA_SCOMFIR_AACR_BUFFER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access MBA_SCOMFIR_AACR_BUFFER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_AACR_BUFFER]

//>> SET_[MBA_SCOMFIR_AACR_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_AACR_ADDRESS,
           MBA_SCOMFIR_AACR_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_AACR_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_ADDRESS]

//>> SET_[MBA_SCOMFIR_AACR_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_AACR_ADDRESS,
           MBA_SCOMFIR_AACR_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_AACR_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_ADDRESS]

//>> GET_[MBA_SCOMFIR_AACR_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_AACR_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_AACR_ADDRESS,
           MBA_SCOMFIR_AACR_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_AACR_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_AACR_ADDRESS]

//>> SET_[MBA_SCOMFIR_AACR_AUTOINC]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_AUTOINC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_AACR_AUTOINC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_AACR_AUTOINC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_AUTOINC]

//>> SET_[MBA_SCOMFIR_AACR_AUTOINC]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_AUTOINC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_AACR_AUTOINC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_AACR_AUTOINC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_AUTOINC]

//>> SET_[MBA_SCOMFIR_AACR_AUTOINC]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_AUTOINC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.setBit<MBA_SCOMFIR_AACR_AUTOINC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access MBA_SCOMFIR_AACR_AUTOINC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_AUTOINC]

//>> CLEAR_[MBA_SCOMFIR_AACR_AUTOINC]
static inline fapi2::buffer<uint64_t>& CLEAR_MBA_SCOMFIR_AACR_AUTOINC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.clearBit<MBA_SCOMFIR_AACR_AUTOINC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access MBA_SCOMFIR_AACR_AUTOINC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[MBA_SCOMFIR_AACR_AUTOINC]

//>> GET_[MBA_SCOMFIR_AACR_AUTOINC]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_AACR_AUTOINC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_AACR_AUTOINC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_AACR_AUTOINC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_AACR_AUTOINC]

//>> GET_[MBA_SCOMFIR_AACR_AUTOINC]
static inline bool GET_MBA_SCOMFIR_AACR_AUTOINC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return i_data.getBit<MBA_SCOMFIR_AACR_AUTOINC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access MBA_SCOMFIR_AACR_AUTOINC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_AACR_AUTOINC]

//>> SET_[MBA_SCOMFIR_AACR_ECCGEN]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_ECCGEN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_AACR_ECCGEN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_AACR_ECCGEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_ECCGEN]

//>> SET_[MBA_SCOMFIR_AACR_ECCGEN]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_ECCGEN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_AACR_ECCGEN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_AACR_ECCGEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_ECCGEN]

//>> SET_[MBA_SCOMFIR_AACR_ECCGEN]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_ECCGEN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.setBit<MBA_SCOMFIR_AACR_ECCGEN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access MBA_SCOMFIR_AACR_ECCGEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_ECCGEN]

//>> CLEAR_[MBA_SCOMFIR_AACR_ECCGEN]
static inline fapi2::buffer<uint64_t>& CLEAR_MBA_SCOMFIR_AACR_ECCGEN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.clearBit<MBA_SCOMFIR_AACR_ECCGEN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access MBA_SCOMFIR_AACR_ECCGEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[MBA_SCOMFIR_AACR_ECCGEN]

//>> GET_[MBA_SCOMFIR_AACR_ECCGEN]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_AACR_ECCGEN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_AACR_ECCGEN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_AACR_ECCGEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_AACR_ECCGEN]

//>> GET_[MBA_SCOMFIR_AACR_ECCGEN]
static inline bool GET_MBA_SCOMFIR_AACR_ECCGEN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return i_data.getBit<MBA_SCOMFIR_AACR_ECCGEN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access MBA_SCOMFIR_AACR_ECCGEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_AACR_ECCGEN]

//>> SET_[MBA_SCOMFIR_AACR_CHANNEL]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_CHANNEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_AACR_CHANNEL,
           MBA_SCOMFIR_AACR_CHANNEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_AACR_CHANNEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_CHANNEL]

//>> SET_[MBA_SCOMFIR_AACR_CHANNEL]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_AACR_CHANNEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_AACR_CHANNEL,
           MBA_SCOMFIR_AACR_CHANNEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_AACR_CHANNEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_AACR_CHANNEL]

//>> GET_[MBA_SCOMFIR_AACR_CHANNEL]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_AACR_CHANNEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_AACR));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_AACR_CHANNEL,
           MBA_SCOMFIR_AACR_CHANNEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_AACR_CHANNEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_AACR_CHANNEL]

//>> PREP_[MBA_SCOMFIR_MCWATDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_MCWATDATA0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_MCWATDATA0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_MCWATDATA0]

//>> GET_[MBA_SCOMFIR_MCWATDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_MCWATDATA0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_MCWATDATA0;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_MCWATDATA0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_MCWATDATA0]

//>> PUT_[MBA_SCOMFIR_MCWATDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_MCWATDATA0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCWATDATA0));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_MCWATDATA0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_MCWATDATA0]


//>> SET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCWATDATA0));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]

//>> SET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCWATDATA0));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]

//>> SET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCWATDATA0));
#endif
    return o_data.setBit<MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]

//>> CLEAR_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCWATDATA0));
#endif
    return o_data.clearBit<MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]

//>> GET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCWATDATA0));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]

//>> GET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]
static inline bool GET_MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCWATDATA0));
#endif
    return i_data.getBit<MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_OVERFLOW]

//>> SET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCWATDATA0));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT,
           MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT]

//>> SET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCWATDATA0));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT,
           MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT]

//>> GET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MCWATDATA0));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT,
           MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MCWATDATA0_DEBUG_COUNT]

//>> PREP_[MBA_SCOMFIR_MISCFIRACT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_MISCFIRACT1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_MISCFIRACT1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_MISCFIRACT1]

//>> GET_[MBA_SCOMFIR_MISCFIRACT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_MISCFIRACT1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_MISCFIRACT1;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_MISCFIRACT1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_MISCFIRACT1]

//>> PUT_[MBA_SCOMFIR_MISCFIRACT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_MISCFIRACT1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MISCFIRACT1));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_MISCFIRACT1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_MISCFIRACT1]


//>> SET_[MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MISCFIRACT1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1,
           MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1]

//>> SET_[MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MISCFIRACT1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1,
           MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1]

//>> GET_[MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_MISCFIRACT1));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1,
           MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_MISCFIRACT1_MISCFIRACT1_FIR_ACTION1]

//>> PREP_[MBA_SCOMFIR_SPARE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_SPARE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_SPARE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_SPARE]

//>> GET_[MBA_SCOMFIR_SPARE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_SPARE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_SPARE;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_SPARE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_SPARE]

//>> PUT_[MBA_SCOMFIR_SPARE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_SPARE(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_SPARE));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_SPARE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_SPARE]


//>> SET_[MBA_SCOMFIR_SPARE_SPARE]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_SPARE_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_SPARE));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_SPARE_SPARE,
           MBA_SCOMFIR_SPARE_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_SPARE_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_SPARE_SPARE]

//>> SET_[MBA_SCOMFIR_SPARE_SPARE]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_SPARE_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_SPARE));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_SPARE_SPARE,
           MBA_SCOMFIR_SPARE_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_SPARE_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_SPARE_SPARE]

//>> GET_[MBA_SCOMFIR_SPARE_SPARE]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_SPARE_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_SPARE));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_SPARE_SPARE,
           MBA_SCOMFIR_SPARE_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_SPARE_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_SPARE_SPARE]

//>> PREP_[MBA_SCOMFIR_WATPATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_WATPATA1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATPATA1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_WATPATA1]

//>> GET_[MBA_SCOMFIR_WATPATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_WATPATA1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATPATA1;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_WATPATA1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_WATPATA1]

//>> PUT_[MBA_SCOMFIR_WATPATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_WATPATA1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATPATA1));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_WATPATA1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_WATPATA1]


//>> SET_[MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATPATA1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1,
           MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1]

//>> SET_[MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATPATA1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1,
           MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1]

//>> GET_[MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATPATA1));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1,
           MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_WATPATA1_WAT_PATTERN_A1]

//>> PREP_[SCOMFIR_AAER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCOMFIR_AAER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_AAER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCOMFIR_AAER]

//>> GET_[SCOMFIR_AAER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCOMFIR_AAER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_AAER;
#endif
    return fapi2::getScom(i_target, SCOMFIR_AAER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCOMFIR_AAER]

//>> PUT_[SCOMFIR_AAER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCOMFIR_AAER(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCOMFIR_AAER));
#endif
    return fapi2::putScom(i_target, SCOMFIR_AAER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCOMFIR_AAER]


//>> SET_[SCOMFIR_AAER_AAER_TAG_ECC]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_AAER_AAER_TAG_ECC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_AAER));
#endif
    return o_data.insertFromRight<SCOMFIR_AAER_AAER_TAG_ECC,
           SCOMFIR_AAER_AAER_TAG_ECC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_AAER_AAER_TAG_ECC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_AAER_AAER_TAG_ECC]

//>> SET_[SCOMFIR_AAER_AAER_TAG_ECC]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_AAER_AAER_TAG_ECC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_AAER));
#endif
    return o_data.insertFromRight<SCOMFIR_AAER_AAER_TAG_ECC,
           SCOMFIR_AAER_AAER_TAG_ECC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_AAER_AAER_TAG_ECC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_AAER_AAER_TAG_ECC]

//>> GET_[SCOMFIR_AAER_AAER_TAG_ECC]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_AAER_AAER_TAG_ECC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_AAER));
#endif
    return i_data.extractToRight<SCOMFIR_AAER_AAER_TAG_ECC,
           SCOMFIR_AAER_AAER_TAG_ECC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_AAER_AAER_TAG_ECC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_AAER_AAER_TAG_ECC]

//>> PREP_[SCOMFIR_MCFGP0E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCOMFIR_MCFGP0E(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCFGP0E;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCOMFIR_MCFGP0E]

//>> GET_[SCOMFIR_MCFGP0E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCOMFIR_MCFGP0E(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCOMFIR_MCFGP0E;
#endif
    return fapi2::getScom(i_target, SCOMFIR_MCFGP0E, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCOMFIR_MCFGP0E]

//>> PUT_[SCOMFIR_MCFGP0E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCOMFIR_MCFGP0E(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return fapi2::putScom(i_target, SCOMFIR_MCFGP0E, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCOMFIR_MCFGP0E]


//>> SET_[SCOMFIR_MCFGP0E_VALID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP0E_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP0E_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGP0E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP0E_VALID]

//>> SET_[SCOMFIR_MCFGP0E_VALID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP0E_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP0E_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGP0E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP0E_VALID]

//>> SET_[SCOMFIR_MCFGP0E_VALID]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP0E_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.setBit<SCOMFIR_MCFGP0E_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCFGP0E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP0E_VALID]

//>> CLEAR_[SCOMFIR_MCFGP0E_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCFGP0E_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.clearBit<SCOMFIR_MCFGP0E_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCFGP0E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCFGP0E_VALID]

//>> GET_[SCOMFIR_MCFGP0E_VALID]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGP0E_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGP0E_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGP0E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP0E_VALID]

//>> GET_[SCOMFIR_MCFGP0E_VALID]
static inline bool GET_SCOMFIR_MCFGP0E_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return i_data.getBit<SCOMFIR_MCFGP0E_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCFGP0E_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP0E_VALID]

//>> SET_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]

//>> SET_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]

//>> SET_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.setBit<SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]

//>> CLEAR_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& CLEAR_SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.clearBit<SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]

//>> GET_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]

//>> GET_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]
static inline bool GET_SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return i_data.getBit<SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP0E_EXTEND_TO_END_OF_RANGE]

//>> SET_[SCOMFIR_MCFGP0E_LOWER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP0E_LOWER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP0E_LOWER_ADDRESS,
           SCOMFIR_MCFGP0E_LOWER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGP0E_LOWER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP0E_LOWER_ADDRESS]

//>> SET_[SCOMFIR_MCFGP0E_LOWER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP0E_LOWER_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP0E_LOWER_ADDRESS,
           SCOMFIR_MCFGP0E_LOWER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGP0E_LOWER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP0E_LOWER_ADDRESS]

//>> GET_[SCOMFIR_MCFGP0E_LOWER_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGP0E_LOWER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGP0E_LOWER_ADDRESS,
           SCOMFIR_MCFGP0E_LOWER_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGP0E_LOWER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP0E_LOWER_ADDRESS]

//>> SET_[SCOMFIR_MCFGP0E_UPPER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP0E_UPPER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP0E_UPPER_ADDRESS,
           SCOMFIR_MCFGP0E_UPPER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access SCOMFIR_MCFGP0E_UPPER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP0E_UPPER_ADDRESS]

//>> SET_[SCOMFIR_MCFGP0E_UPPER_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_SCOMFIR_MCFGP0E_UPPER_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return o_data.insertFromRight<SCOMFIR_MCFGP0E_UPPER_ADDRESS,
           SCOMFIR_MCFGP0E_UPPER_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access SCOMFIR_MCFGP0E_UPPER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCOMFIR_MCFGP0E_UPPER_ADDRESS]

//>> GET_[SCOMFIR_MCFGP0E_UPPER_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_SCOMFIR_MCFGP0E_UPPER_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCOMFIR_MCFGP0E));
#endif
    return i_data.extractToRight<SCOMFIR_MCFGP0E_UPPER_ADDRESS,
           SCOMFIR_MCFGP0E_UPPER_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access SCOMFIR_MCFGP0E_UPPER_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCOMFIR_MCFGP0E_UPPER_ADDRESS]

//>> PREP_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_REG_1]

//>> GET_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_1;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_REG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1]

//>> PUT_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_REG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_REG_1]


//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> PREP_[TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_CONFIG_1]

//>> GET_[TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_1]

//>> PUT_[TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_CONFIG_1]


//>> SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[XSTOP2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_XSTOP2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[XSTOP2]

//>> GET_[XSTOP2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_XSTOP2(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP2;
#endif
    return fapi2::getScom(i_target, XSTOP2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[XSTOP2]

//>> PUT_[XSTOP2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_XSTOP2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return fapi2::putScom(i_target, XSTOP2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[XSTOP2]


//>> SET_[XSTOP2_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_ENABLE]

//>> SET_[XSTOP2_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_ENABLE]

//>> SET_[XSTOP2_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_ENABLE]

//>> CLEAR_[XSTOP2_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_ENABLE]

//>> GET_[XSTOP2_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_ENABLE]

//>> GET_[XSTOP2_ENABLE]
static inline bool GET_XSTOP2_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_ENABLE]

//>> SET_[XSTOP2_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_SNOPA]

//>> SET_[XSTOP2_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_SNOPA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_SNOPA]

//>> SET_[XSTOP2_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_SNOPA]

//>> CLEAR_[XSTOP2_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_WAIT_SNOPA]

//>> GET_[XSTOP2_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_WAIT_SNOPA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_WAIT_SNOPA]

//>> GET_[XSTOP2_WAIT_SNOPA]
static inline bool GET_XSTOP2_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_WAIT_SNOPA]

//>> SET_[XSTOP2_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_TRIGGER_OPCG_GO]

//>> SET_[XSTOP2_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_TRIGGER_OPCG_GO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_TRIGGER_OPCG_GO]

//>> SET_[XSTOP2_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_TRIGGER_OPCG_GO]

//>> CLEAR_[XSTOP2_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_TRIGGER_OPCG_GO]

//>> GET_[XSTOP2_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_TRIGGER_OPCG_GO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_TRIGGER_OPCG_GO]

//>> GET_[XSTOP2_TRIGGER_OPCG_GO]
static inline bool GET_XSTOP2_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_TRIGGER_OPCG_GO]

//>> SET_[XSTOP2_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_ALWAYS]

//>> SET_[XSTOP2_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_ALWAYS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_ALWAYS]

//>> SET_[XSTOP2_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_ALWAYS]

//>> CLEAR_[XSTOP2_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_WAIT_ALWAYS]

//>> GET_[XSTOP2_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_WAIT_ALWAYS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_WAIT_ALWAYS]

//>> GET_[XSTOP2_WAIT_ALWAYS]
static inline bool GET_XSTOP2_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_WAIT_ALWAYS]

//>> SET_[XSTOP2_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_PERV]

//>> SET_[XSTOP2_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_PERV]

//>> SET_[XSTOP2_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_PERV]

//>> CLEAR_[XSTOP2_REGION_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_PERV]

//>> GET_[XSTOP2_REGION_PERV]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_PERV]

//>> GET_[XSTOP2_REGION_PERV]
static inline bool GET_XSTOP2_REGION_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_PERV]

//>> SET_[XSTOP2_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT1]

//>> SET_[XSTOP2_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT1]

//>> SET_[XSTOP2_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT1]

//>> CLEAR_[XSTOP2_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT1]

//>> GET_[XSTOP2_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT1]

//>> GET_[XSTOP2_REGION_UNIT1]
static inline bool GET_XSTOP2_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT1]

//>> SET_[XSTOP2_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT2]

//>> SET_[XSTOP2_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT2]

//>> SET_[XSTOP2_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT2]

//>> CLEAR_[XSTOP2_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT2]

//>> GET_[XSTOP2_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT2]

//>> GET_[XSTOP2_REGION_UNIT2]
static inline bool GET_XSTOP2_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT2]

//>> SET_[XSTOP2_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT3]

//>> SET_[XSTOP2_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT3]

//>> SET_[XSTOP2_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT3]

//>> CLEAR_[XSTOP2_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT3]

//>> GET_[XSTOP2_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT3]

//>> GET_[XSTOP2_REGION_UNIT3]
static inline bool GET_XSTOP2_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT3]

//>> SET_[XSTOP2_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT4]

//>> SET_[XSTOP2_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT4]

//>> SET_[XSTOP2_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT4]

//>> CLEAR_[XSTOP2_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT4]

//>> GET_[XSTOP2_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT4]

//>> GET_[XSTOP2_REGION_UNIT4]
static inline bool GET_XSTOP2_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT4]

//>> SET_[XSTOP2_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT5]

//>> SET_[XSTOP2_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT5]

//>> SET_[XSTOP2_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT5]

//>> CLEAR_[XSTOP2_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT5]

//>> GET_[XSTOP2_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT5]

//>> GET_[XSTOP2_REGION_UNIT5]
static inline bool GET_XSTOP2_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT5]

//>> SET_[XSTOP2_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT6]

//>> SET_[XSTOP2_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT6]

//>> SET_[XSTOP2_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT6]

//>> CLEAR_[XSTOP2_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT6]

//>> GET_[XSTOP2_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT6]

//>> GET_[XSTOP2_REGION_UNIT6]
static inline bool GET_XSTOP2_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT6]

//>> SET_[XSTOP2_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT7]

//>> SET_[XSTOP2_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT7]

//>> SET_[XSTOP2_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT7]

//>> CLEAR_[XSTOP2_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT7]

//>> GET_[XSTOP2_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT7]

//>> GET_[XSTOP2_REGION_UNIT7]
static inline bool GET_XSTOP2_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT7]

//>> SET_[XSTOP2_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT8]

//>> SET_[XSTOP2_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT8]

//>> SET_[XSTOP2_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT8]

//>> CLEAR_[XSTOP2_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT8]

//>> GET_[XSTOP2_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT8]

//>> GET_[XSTOP2_REGION_UNIT8]
static inline bool GET_XSTOP2_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT8]

//>> SET_[XSTOP2_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT9]

//>> SET_[XSTOP2_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT9]

//>> SET_[XSTOP2_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT9]

//>> CLEAR_[XSTOP2_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT9]

//>> GET_[XSTOP2_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT9]

//>> GET_[XSTOP2_REGION_UNIT9]
static inline bool GET_XSTOP2_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT9]

//>> SET_[XSTOP2_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT10]

//>> SET_[XSTOP2_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT10]

//>> SET_[XSTOP2_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT10]

//>> CLEAR_[XSTOP2_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT10]

//>> GET_[XSTOP2_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT10]

//>> GET_[XSTOP2_REGION_UNIT10]
static inline bool GET_XSTOP2_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT10]

//>> SET_[XSTOP2_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT11]

//>> SET_[XSTOP2_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT11]

//>> SET_[XSTOP2_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT11]

//>> CLEAR_[XSTOP2_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT11]

//>> GET_[XSTOP2_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT11]

//>> GET_[XSTOP2_REGION_UNIT11]
static inline bool GET_XSTOP2_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT11]

//>> SET_[XSTOP2_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT12]

//>> SET_[XSTOP2_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT12]

//>> SET_[XSTOP2_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT12]

//>> CLEAR_[XSTOP2_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT12]

//>> GET_[XSTOP2_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT12]

//>> GET_[XSTOP2_REGION_UNIT12]
static inline bool GET_XSTOP2_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT12]

//>> SET_[XSTOP2_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT13]

//>> SET_[XSTOP2_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT13]

//>> SET_[XSTOP2_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT13]

//>> CLEAR_[XSTOP2_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT13]

//>> GET_[XSTOP2_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT13]

//>> GET_[XSTOP2_REGION_UNIT13]
static inline bool GET_XSTOP2_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT13]

//>> SET_[XSTOP2_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT14]

//>> SET_[XSTOP2_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT14]

//>> SET_[XSTOP2_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT14]

//>> CLEAR_[XSTOP2_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT14]

//>> GET_[XSTOP2_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT14]

//>> GET_[XSTOP2_REGION_UNIT14]
static inline bool GET_XSTOP2_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT14]

//>> SET_[XSTOP2_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_CYCLES,
           XSTOP2_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access XSTOP2_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_CYCLES]

//>> SET_[XSTOP2_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_CYCLES,
           XSTOP2_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access XSTOP2_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_CYCLES]

//>> GET_[XSTOP2_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_WAIT_CYCLES,
           XSTOP2_WAIT_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access XSTOP2_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_WAIT_CYCLES]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
