/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/proc/reg00020_unused.H $      */
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

#ifndef __PROC_REG00020_H_UNUSED__
#define __PROC_REG00020_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace proc
{
#endif


//>> PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG]

//>> PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG]


//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_OP_INDEX]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_32]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_33]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_34]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_35]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_36]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_37]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_38]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_TDR_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_39]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_RDR_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_40]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_41]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_42]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_43]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_44]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_45]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ECC_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_47]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MM_ADDR_OVERLAP]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_48]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ACCESS_VIOLATION]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_50]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_51]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_STATUS_52]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SEQUENCER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SHIFTER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG]

//>> PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG]


//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_RECEIVE_DATA_REG_Q]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_RECEIVE_DATA_REG_SPIMST3_RECEIVE_DATA_REG_Q]

//>> PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG]

//>> PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG]


//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_FULL_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_OVER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_UNDER_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_RESERVED_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_OP_INDEX]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_32]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_COUNTER_REG_PARITY_ERRS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_33]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CLOCK_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_34]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_35]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_36]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_37]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PATTERN_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_38]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_TDR_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_39]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_RDR_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_40]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_CONFIG_REG1_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_41]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_42]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ERROR_REG_PARITY_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_43]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_CORRECTABLE_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_44]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_UNCORRECTABLE_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_45]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ECC_STATUS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_47]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MM_ADDR_OVERLAP]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_48]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION,
           P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ACCESS_VIOLATION]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_50]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_PORT_MULTIPLEXER_ERR]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_51]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ADDR_OUT_OF_RANGE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_STATUS_52]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_MEM_MAPPING_OVERLAP]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_SLAVE_SEL_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SEQUENCER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SHIFTER_FSM_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_ANY_CONFIG_PARITY_ERR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_PORT_MUX_INDICATOR]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_STATUS_REG_SPI_SEC_PIB_RETRY_RSP_INFO]

//>> PREP_[VAS_VA_RG_SCF_BUFCTL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_VAS_VA_RG_SCF_BUFCTL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VAS_VA_RG_SCF_BUFCTL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[VAS_VA_RG_SCF_BUFCTL]

//>> GET_[VAS_VA_RG_SCF_BUFCTL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_VAS_VA_RG_SCF_BUFCTL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VAS_VA_RG_SCF_BUFCTL;
#endif
    return fapi2::getScom(i_target, VAS_VA_RG_SCF_BUFCTL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[VAS_VA_RG_SCF_BUFCTL]

//>> PUT_[VAS_VA_RG_SCF_BUFCTL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_VAS_VA_RG_SCF_BUFCTL(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_BUFCTL));
#endif
    return fapi2::putScom(i_target, VAS_VA_RG_SCF_BUFCTL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[VAS_VA_RG_SCF_BUFCTL]


//>> SET_[VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT]
static inline fapi2::buffer<uint64_t>& SET_VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_BUFCTL));
#endif
    return o_data.insertFromRight<VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT,
           VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT]

//>> SET_[VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT]
static inline fapi2::buffer<uint64_t>& SET_VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_BUFCTL));
#endif
    return o_data.insertFromRight<VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT,
           VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT]

//>> GET_[VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT]
static inline fapi2::buffer<uint64_t>& GET_VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_BUFCTL));
#endif
    return i_data.extractToRight<VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT,
           VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[VAS_VA_RG_SCF_BUFCTL_TOTAL_FREE_BUF_COUNT]

//>> SET_[VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT]
static inline fapi2::buffer<uint64_t>& SET_VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_BUFCTL));
#endif
    return o_data.insertFromRight<VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT,
           VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT]

//>> SET_[VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT]
static inline fapi2::buffer<uint64_t>& SET_VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_BUFCTL));
#endif
    return o_data.insertFromRight<VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT,
           VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT]

//>> GET_[VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT]
static inline fapi2::buffer<uint64_t>& GET_VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_BUFCTL));
#endif
    return i_data.extractToRight<VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT,
           VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[VAS_VA_RG_SCF_BUFCTL_CONSUMED_BUF_COUNT]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
