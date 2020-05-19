/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00005_unused.H $         */
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

#ifndef __C_REG00005_H_UNUSED__
#define __C_REG00005_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[ADDR_TRAP_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_ADDR_TRAP_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ADDR_TRAP_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[ADDR_TRAP_REG]

//>> GET_[ADDR_TRAP_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_ADDR_TRAP_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ADDR_TRAP_REG;
#endif
    return fapi2::getScom(i_target, ADDR_TRAP_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[ADDR_TRAP_REG]

//>> PUT_[ADDR_TRAP_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_ADDR_TRAP_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return fapi2::putScom(i_target, ADDR_TRAP_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[ADDR_TRAP_REG]


//>> SET_[ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR,
           ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR]

//>> SET_[ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR,
           ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR]

//>> GET_[ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR]
static inline fapi2::buffer<uint64_t>& GET_ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.extractToRight<ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR,
           ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR]

//>> SET_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]

//>> SET_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]

//>> SET_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.setBit<ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]

//>> CLEAR_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.clearBit<ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]

//>> GET_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]
static inline fapi2::buffer<uint64_t>& GET_ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.extractToRight<ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]

//>> GET_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]
static inline bool GET_ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.getBit<ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR]

//>> SET_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]

//>> SET_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]

//>> SET_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.setBit<ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]

//>> CLEAR_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.clearBit<ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]

//>> GET_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]
static inline fapi2::buffer<uint64_t>& GET_ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.extractToRight<ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]

//>> GET_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]
static inline bool GET_ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.getBit<ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT]

//>> SET_[ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR,
           ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR]

//>> SET_[ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR,
           ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR]

//>> GET_[ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR]
static inline fapi2::buffer<uint64_t>& GET_ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.extractToRight<ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR,
           ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.setBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]

//>> CLEAR_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]
static inline fapi2::buffer<uint64_t>& CLEAR_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.clearBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]

//>> GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]
static inline fapi2::buffer<uint64_t>& GET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.extractToRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]

//>> GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]
static inline bool GET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.getBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.setBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]

//>> CLEAR_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.clearBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]

//>> GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.extractToRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]

//>> GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]
static inline bool GET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.getBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.setBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]

//>> CLEAR_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& CLEAR_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.clearBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]

//>> GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& GET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.extractToRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]

//>> GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]
static inline bool GET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.getBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]

//>> SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.setBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]

//>> CLEAR_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& CLEAR_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.clearBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]

//>> GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& GET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.extractToRight<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]

//>> GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]
static inline bool GET_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.getBit<ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER]

//>> SET_[ADDR_TRAP_REG_LAST_MASTERID]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_LAST_MASTERID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_LAST_MASTERID,
           ADDR_TRAP_REG_LAST_MASTERID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access ADDR_TRAP_REG_LAST_MASTERID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_LAST_MASTERID]

//>> SET_[ADDR_TRAP_REG_LAST_MASTERID]
static inline fapi2::buffer<uint64_t>& SET_ADDR_TRAP_REG_LAST_MASTERID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return o_data.insertFromRight<ADDR_TRAP_REG_LAST_MASTERID,
           ADDR_TRAP_REG_LAST_MASTERID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access ADDR_TRAP_REG_LAST_MASTERID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ADDR_TRAP_REG_LAST_MASTERID]

//>> GET_[ADDR_TRAP_REG_LAST_MASTERID]
static inline fapi2::buffer<uint64_t>& GET_ADDR_TRAP_REG_LAST_MASTERID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ADDR_TRAP_REG));
#endif
    return i_data.extractToRight<ADDR_TRAP_REG_LAST_MASTERID,
           ADDR_TRAP_REG_LAST_MASTERID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access ADDR_TRAP_REG_LAST_MASTERID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ADDR_TRAP_REG_LAST_MASTERID]

//>> PREP_[EC_LS_LSU_HOLD_OUT_REG8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG8(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG8;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG8]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG8(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG8;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG8, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG8(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG8, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG8]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG8));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT]

//>> PREP_[EC_PC_PMU_SPRCOR_CORE_FUSES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_PMU_SPRCOR_CORE_FUSES(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_CORE_FUSES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_PMU_SPRCOR_CORE_FUSES]

//>> GET_[EC_PC_PMU_SPRCOR_CORE_FUSES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_PMU_SPRCOR_CORE_FUSES(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_CORE_FUSES;
#endif
    return fapi2::getScom(i_target, EC_PC_PMU_SPRCOR_CORE_FUSES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_CORE_FUSES]

//>> PUT_[EC_PC_PMU_SPRCOR_CORE_FUSES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_PMU_SPRCOR_CORE_FUSES(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return fapi2::putScom(i_target, EC_PC_PMU_SPRCOR_CORE_FUSES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_PMU_SPRCOR_CORE_FUSES]


//>> SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]

//>> SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]

//>> SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]

//>> CLEAR_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]

//>> GET_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]

//>> GET_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]
static inline bool GET_EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS]

//>> SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL,
           EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL]

//>> SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL,
           EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL]

//>> GET_[EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL,
           EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL]

//>> SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]

//>> SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]

//>> SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]

//>> CLEAR_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]

//>> GET_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]

//>> GET_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]
static inline bool GET_EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_CORE_FUSES));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS]

//>> PREP_[EC_PC_SPURR_FREQ_REF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_SPURR_FREQ_REF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SPURR_FREQ_REF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_SPURR_FREQ_REF]

//>> GET_[EC_PC_SPURR_FREQ_REF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_SPURR_FREQ_REF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SPURR_FREQ_REF;
#endif
    return fapi2::getScom(i_target, EC_PC_SPURR_FREQ_REF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_SPURR_FREQ_REF]

//>> PUT_[EC_PC_SPURR_FREQ_REF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_SPURR_FREQ_REF(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_REF));
#endif
    return fapi2::putScom(i_target, EC_PC_SPURR_FREQ_REF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_SPURR_FREQ_REF]


//>> SET_[EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_REF));
#endif
    return o_data.insertFromRight<EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE,
           EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE]

//>> SET_[EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_REF));
#endif
    return o_data.insertFromRight<EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE,
           EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE]

//>> GET_[EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_REF));
#endif
    return i_data.extractToRight<EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE,
           EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE]

//>> PREP_[EC_PC_TOD_SYNC001]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TOD_SYNC001(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC001;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TOD_SYNC001]

//>> GET_[EC_PC_TOD_SYNC001]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TOD_SYNC001(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC001;
#endif
    return fapi2::getScom(i_target, EC_PC_TOD_SYNC001, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TOD_SYNC001]

//>> PUT_[EC_PC_TOD_SYNC001]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TOD_SYNC001(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC001));
#endif
    return fapi2::putScom(i_target, EC_PC_TOD_SYNC001, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TOD_SYNC001]


//>> SET_[EC_PC_TOD_SYNC001_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC001_TOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC001));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC001_TOD,
           EC_PC_TOD_SYNC001_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC001_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC001_TOD]

//>> SET_[EC_PC_TOD_SYNC001_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC001_TOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC001));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC001_TOD,
           EC_PC_TOD_SYNC001_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC001_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC001_TOD]

//>> GET_[EC_PC_TOD_SYNC001_TOD]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC001_TOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC001));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC001_TOD,
           EC_PC_TOD_SYNC001_TOD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC001_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC001_TOD]

//>> SET_[EC_PC_TOD_SYNC001_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC001_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC001));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC001_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC001_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC001_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC001_CHIP_TOD_STATUS]

//>> SET_[EC_PC_TOD_SYNC001_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC001_CHIP_TOD_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC001));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC001_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC001_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC001_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC001_CHIP_TOD_STATUS]

//>> GET_[EC_PC_TOD_SYNC001_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC001_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC001));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC001_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC001_CHIP_TOD_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC001_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC001_CHIP_TOD_STATUS]

//>> PREP_[EC_PC_TOD_SYNC110]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TOD_SYNC110(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC110;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TOD_SYNC110]

//>> GET_[EC_PC_TOD_SYNC110]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TOD_SYNC110(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC110;
#endif
    return fapi2::getScom(i_target, EC_PC_TOD_SYNC110, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TOD_SYNC110]

//>> PUT_[EC_PC_TOD_SYNC110]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TOD_SYNC110(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC110));
#endif
    return fapi2::putScom(i_target, EC_PC_TOD_SYNC110, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TOD_SYNC110]


//>> SET_[EC_PC_TOD_SYNC110_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC110_TOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC110));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC110_TOD,
           EC_PC_TOD_SYNC110_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC110_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC110_TOD]

//>> SET_[EC_PC_TOD_SYNC110_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC110_TOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC110));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC110_TOD,
           EC_PC_TOD_SYNC110_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC110_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC110_TOD]

//>> GET_[EC_PC_TOD_SYNC110_TOD]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC110_TOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC110));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC110_TOD,
           EC_PC_TOD_SYNC110_TOD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC110_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC110_TOD]

//>> SET_[EC_PC_TOD_SYNC110_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC110_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC110));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC110_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC110_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC110_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC110_CHIP_TOD_STATUS]

//>> SET_[EC_PC_TOD_SYNC110_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC110_CHIP_TOD_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC110));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC110_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC110_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC110_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC110_CHIP_TOD_STATUS]

//>> GET_[EC_PC_TOD_SYNC110_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC110_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC110));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC110_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC110_CHIP_TOD_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC110_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC110_CHIP_TOD_STATUS]

//>> PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE1_TR_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_3]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE1_TR_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_3]

//>> PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE1_TR_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_3]


//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_3_C,
           EC_PC_TRACE1_TR_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_C]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_3_C,
           EC_PC_TRACE1_TR_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_C]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_3_C,
           EC_PC_TRACE1_TR_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_C]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_3_D,
           EC_PC_TRACE1_TR_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_D]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_3_D,
           EC_PC_TRACE1_TR_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_D]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_3_D,
           EC_PC_TRACE1_TR_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_3_D]

//>> PREP_[L2TRA_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR0_CONFIG_5]

//>> GET_[L2TRA_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_5;
#endif
    return fapi2::getScom(i_target, L2TRA_TR0_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_5]

//>> PUT_[L2TRA_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_5));
#endif
    return fapi2::putScom(i_target, L2TRA_TR0_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR0_CONFIG_5]


//>> SET_[L2TRA_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_5_C,
           L2TRA_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_5_C]

//>> SET_[L2TRA_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_5_C,
           L2TRA_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_5_C]

//>> GET_[L2TRA_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_5_C,
           L2TRA_TR0_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_5_C]

//>> SET_[L2TRA_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_5_D,
           L2TRA_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_5_D]

//>> SET_[L2TRA_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_5_D,
           L2TRA_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_5_D]

//>> GET_[L2TRA_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_5_D,
           L2TRA_TR0_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_5_D]

//>> PREP_[L3_MISC_L3CERRS_ERR_INJ_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3_MISC_L3CERRS_ERR_INJ_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_ERR_INJ_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3_MISC_L3CERRS_ERR_INJ_REG]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3_MISC_L3CERRS_ERR_INJ_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_ERR_INJ_REG;
#endif
    return fapi2::getScom(i_target, L3_MISC_L3CERRS_ERR_INJ_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG]

//>> PUT_[L3_MISC_L3CERRS_ERR_INJ_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3_MISC_L3CERRS_ERR_INJ_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return fapi2::putScom(i_target, L3_MISC_L3CERRS_ERR_INJ_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3_MISC_L3CERRS_ERR_INJ_REG]


//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]
static inline bool GET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]
static inline bool GET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE,
           L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE,
           L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE,
           L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]
static inline bool GET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]
static inline bool GET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]
static inline bool GET_L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]
static inline bool GET_L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]

//>> SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]

//>> CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]

//>> GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]
static inline bool GET_L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_ERR_INJ_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ]

//>> PREP_[NC_NCCHTM_NCCHTSC_HTM_TRIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCCHTM_NCCHTSC_HTM_TRIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_HTM_TRIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCCHTM_NCCHTSC_HTM_TRIG]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCCHTM_NCCHTSC_HTM_TRIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_HTM_TRIG;
#endif
    return fapi2::getScom(i_target, NC_NCCHTM_NCCHTSC_HTM_TRIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG]

//>> PUT_[NC_NCCHTM_NCCHTSC_HTM_TRIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCCHTM_NCCHTSC_HTM_TRIG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return fapi2::putScom(i_target, NC_NCCHTM_NCCHTSC_HTM_TRIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCCHTM_NCCHTSC_HTM_TRIG]


//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_START(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_START(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_START(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_TRIG_START(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_START(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_START,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_START(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_START]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE,
           NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE,
           NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_TRIG));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE,
           NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE]

//>> PREP_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0]

//>> PUT_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0]


//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID,
           NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
