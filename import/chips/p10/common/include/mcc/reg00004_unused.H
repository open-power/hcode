/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mcc/reg00004_unused.H $       */
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

#ifndef __MCC_REG00004_H_UNUSED__
#define __MCC_REG00004_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> PREP_[ATCL_CL_CLSCOM_MCPERF4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_ATCL_CL_CLSCOM_MCPERF4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ATCL_CL_CLSCOM_MCPERF4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[ATCL_CL_CLSCOM_MCPERF4]

//>> GET_[ATCL_CL_CLSCOM_MCPERF4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_ATCL_CL_CLSCOM_MCPERF4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ATCL_CL_CLSCOM_MCPERF4;
#endif
    return fapi2::getScom(i_target, ATCL_CL_CLSCOM_MCPERF4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCPERF4]

//>> PUT_[ATCL_CL_CLSCOM_MCPERF4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_ATCL_CL_CLSCOM_MCPERF4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return fapi2::putScom(i_target, ATCL_CL_CLSCOM_MCPERF4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[ATCL_CL_CLSCOM_MCPERF4]


//>> SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.setBit<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]

//>> CLEAR_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]
static inline fapi2::buffer<uint64_t>& CLEAR_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.clearBit<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]

//>> GET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]

//>> GET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]
static inline bool GET_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return i_data.getBit<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_READ_RETRY]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.setBit<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]

//>> CLEAR_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]
static inline fapi2::buffer<uint64_t>& CLEAR_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.clearBit<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]

//>> GET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]

//>> GET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]
static inline bool GET_ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return i_data.getBit<ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCPERF4_EN_PSAVE_WRITE_RETRY]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ]

//>> GET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_READ]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE]

//>> GET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_CL_WRITE]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF]

//>> GET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_WRBUF]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF]

//>> GET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF,
           ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCPERF4_PSAVE_NUM_RMWBUF]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31,
           ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31]

//>> SET_[ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31]
static inline fapi2::buffer<uint64_t>& SET_ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return o_data.insertFromRight<ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31,
           ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31]

//>> GET_[ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31]
static inline fapi2::buffer<uint64_t>& GET_ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATCL_CL_CLSCOM_MCPERF4));
#endif
    return i_data.extractToRight<ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31,
           ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATCL_CL_CLSCOM_MCPERF4_RESERVED26_31]

//>> PREP_[CRYPTO_ENCRYPT_CRYPTOKEY2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CRYPTO_ENCRYPT_CRYPTOKEY2A(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CRYPTO_ENCRYPT_CRYPTOKEY2A;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CRYPTO_ENCRYPT_CRYPTOKEY2A]

//>> GET_[CRYPTO_ENCRYPT_CRYPTOKEY2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CRYPTO_ENCRYPT_CRYPTOKEY2A(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CRYPTO_ENCRYPT_CRYPTOKEY2A;
#endif
    return fapi2::getScom(i_target, CRYPTO_ENCRYPT_CRYPTOKEY2A, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CRYPTO_ENCRYPT_CRYPTOKEY2A]

//>> PUT_[CRYPTO_ENCRYPT_CRYPTOKEY2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CRYPTO_ENCRYPT_CRYPTOKEY2A(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CRYPTO_ENCRYPT_CRYPTOKEY2A));
#endif
    return fapi2::putScom(i_target, CRYPTO_ENCRYPT_CRYPTOKEY2A, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CRYPTO_ENCRYPT_CRYPTOKEY2A]


//>> SET_[CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A]
static inline fapi2::buffer<uint64_t>& SET_CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_ENCRYPT_CRYPTOKEY2A));
#endif
    return o_data.insertFromRight<CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A,
           CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A]

//>> SET_[CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A]
static inline fapi2::buffer<uint64_t>& SET_CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_ENCRYPT_CRYPTOKEY2A));
#endif
    return o_data.insertFromRight<CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A,
           CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A]

//>> GET_[CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A]
static inline fapi2::buffer<uint64_t>& GET_CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CRYPTO_ENCRYPT_CRYPTOKEY2A));
#endif
    return i_data.extractToRight<CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A,
           CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CRYPTO_ENCRYPT_CRYPTOKEY2A_KEY2A]

//>> PREP_[USTL_USTLFIRACT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLFIRACT2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFIRACT2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLFIRACT2]

//>> GET_[USTL_USTLFIRACT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLFIRACT2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLFIRACT2;
#endif
    return fapi2::getScom(i_target, USTL_USTLFIRACT2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLFIRACT2]

//>> PUT_[USTL_USTLFIRACT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLFIRACT2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRACT2));
#endif
    return fapi2::putScom(i_target, USTL_USTLFIRACT2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLFIRACT2]


//>> SET_[USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRACT2));
#endif
    return o_data.insertFromRight<USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2,
           USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2]

//>> SET_[USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRACT2));
#endif
    return o_data.insertFromRight<USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2,
           USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2]

//>> GET_[USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLFIRACT2));
#endif
    return i_data.extractToRight<USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2,
           USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLFIRACT2_USTLFIRACT2_ACTION_2]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
