/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/omic/reg00013_unused.H $      */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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

#ifndef __OMIC_REG00013_H_UNUSED__
#define __OMIC_REG00013_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace omic
{
#endif


//>> PREP_[CTL_REGS_RX_MODE14_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CTL_REGS_RX_MODE14_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTL_REGS_RX_MODE14_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CTL_REGS_RX_MODE14_PG]

//>> GET_[CTL_REGS_RX_MODE14_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CTL_REGS_RX_MODE14_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTL_REGS_RX_MODE14_PG;
#endif
    return fapi2::getScom(i_target, CTL_REGS_RX_MODE14_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CTL_REGS_RX_MODE14_PG]

//>> PUT_[CTL_REGS_RX_MODE14_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CTL_REGS_RX_MODE14_PG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE14_PG));
#endif
    return fapi2::putScom(i_target, CTL_REGS_RX_MODE14_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CTL_REGS_RX_MODE14_PG]


//>> SET_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE14_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]

//>> SET_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE14_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]

//>> SET_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE14_PG));
#endif
    return o_data.setBit<CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]

//>> CLEAR_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE14_PG));
#endif
    return o_data.clearBit<CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]

//>> GET_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE14_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]

//>> GET_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]
static inline bool GET_CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE14_PG));
#endif
    return i_data.getBit<CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE]

//>> PREP_[CTL_REGS_RX_MODE1_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CTL_REGS_RX_MODE1_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTL_REGS_RX_MODE1_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CTL_REGS_RX_MODE1_PG]

//>> GET_[CTL_REGS_RX_MODE1_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CTL_REGS_RX_MODE1_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTL_REGS_RX_MODE1_PG;
#endif
    return fapi2::getScom(i_target, CTL_REGS_RX_MODE1_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CTL_REGS_RX_MODE1_PG]

//>> PUT_[CTL_REGS_RX_MODE1_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CTL_REGS_RX_MODE1_PG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return fapi2::putScom(i_target, CTL_REGS_RX_MODE1_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CTL_REGS_RX_MODE1_PG]


//>> SET_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]

//>> SET_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]

//>> SET_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return o_data.setBit<CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]

//>> CLEAR_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]
static inline fapi2::buffer<uint64_t>& CLEAR_CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return o_data.clearBit<CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]

//>> GET_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]

//>> GET_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]
static inline bool GET_CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return i_data.getBit<CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN]

//>> SET_[CTL_REGS_RX_MODE1_PG_16TO1]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE1_PG_16TO1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE1_PG_16TO1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_16TO1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE1_PG_16TO1]

//>> SET_[CTL_REGS_RX_MODE1_PG_16TO1]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE1_PG_16TO1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE1_PG_16TO1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_16TO1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE1_PG_16TO1]

//>> SET_[CTL_REGS_RX_MODE1_PG_16TO1]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE1_PG_16TO1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return o_data.setBit<CTL_REGS_RX_MODE1_PG_16TO1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_16TO1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE1_PG_16TO1]

//>> CLEAR_[CTL_REGS_RX_MODE1_PG_16TO1]
static inline fapi2::buffer<uint64_t>& CLEAR_CTL_REGS_RX_MODE1_PG_16TO1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return o_data.clearBit<CTL_REGS_RX_MODE1_PG_16TO1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_16TO1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CTL_REGS_RX_MODE1_PG_16TO1]

//>> GET_[CTL_REGS_RX_MODE1_PG_16TO1]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE1_PG_16TO1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE1_PG_16TO1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_16TO1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE1_PG_16TO1]

//>> GET_[CTL_REGS_RX_MODE1_PG_16TO1]
static inline bool GET_CTL_REGS_RX_MODE1_PG_16TO1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE1_PG));
#endif
    return i_data.getBit<CTL_REGS_RX_MODE1_PG_16TO1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access CTL_REGS_RX_MODE1_PG_16TO1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE1_PG_16TO1]

//>> PREP_[CTL_REGS_RX_MODE24_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CTL_REGS_RX_MODE24_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTL_REGS_RX_MODE24_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CTL_REGS_RX_MODE24_PG]

//>> GET_[CTL_REGS_RX_MODE24_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CTL_REGS_RX_MODE24_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTL_REGS_RX_MODE24_PG;
#endif
    return fapi2::getScom(i_target, CTL_REGS_RX_MODE24_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CTL_REGS_RX_MODE24_PG]

//>> PUT_[CTL_REGS_RX_MODE24_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CTL_REGS_RX_MODE24_PG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return fapi2::putScom(i_target, CTL_REGS_RX_MODE24_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CTL_REGS_RX_MODE24_PG]


//>> SET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC,
           CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC]

//>> SET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC,
           CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC]

//>> GET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC,
           CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC]

//>> SET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC,
           CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC]

//>> SET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC,
           CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC]

//>> GET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC,
           CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC]

//>> SET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC,
           CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC]

//>> SET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC,
           CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC]

//>> GET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC,
           CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC]

//>> SET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC,
           CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC]

//>> SET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC,
           CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC]

//>> GET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE24_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC,
           CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC]

//>> PREP_[DATASM_REGS_RX_CNT16_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DATASM_REGS_RX_CNT16_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_CNT16_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DATASM_REGS_RX_CNT16_PG]

//>> GET_[DATASM_REGS_RX_CNT16_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DATASM_REGS_RX_CNT16_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_CNT16_PG;
#endif
    return fapi2::getScom(i_target, DATASM_REGS_RX_CNT16_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DATASM_REGS_RX_CNT16_PG]

//>> PUT_[DATASM_REGS_RX_CNT16_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DATASM_REGS_RX_CNT16_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT16_PG));
#endif
    return fapi2::putScom(i_target, DATASM_REGS_RX_CNT16_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DATASM_REGS_RX_CNT16_PG]


//>> SET_[DATASM_REGS_RX_CNT16_PG_0]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT16_PG_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT16_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT16_PG_0,
           DATASM_REGS_RX_CNT16_PG_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access DATASM_REGS_RX_CNT16_PG_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT16_PG_0]

//>> SET_[DATASM_REGS_RX_CNT16_PG_0]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT16_PG_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT16_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT16_PG_0,
           DATASM_REGS_RX_CNT16_PG_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access DATASM_REGS_RX_CNT16_PG_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT16_PG_0]

//>> GET_[DATASM_REGS_RX_CNT16_PG_0]
static inline fapi2::buffer<uint64_t>& GET_DATASM_REGS_RX_CNT16_PG_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT16_PG));
#endif
    return i_data.extractToRight<DATASM_REGS_RX_CNT16_PG_0,
           DATASM_REGS_RX_CNT16_PG_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access DATASM_REGS_RX_CNT16_PG_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DATASM_REGS_RX_CNT16_PG_0]

//>> SET_[DATASM_REGS_RX_CNT16_PG_1]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT16_PG_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT16_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT16_PG_1,
           DATASM_REGS_RX_CNT16_PG_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access DATASM_REGS_RX_CNT16_PG_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT16_PG_1]

//>> SET_[DATASM_REGS_RX_CNT16_PG_1]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT16_PG_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT16_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT16_PG_1,
           DATASM_REGS_RX_CNT16_PG_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access DATASM_REGS_RX_CNT16_PG_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT16_PG_1]

//>> GET_[DATASM_REGS_RX_CNT16_PG_1]
static inline fapi2::buffer<uint64_t>& GET_DATASM_REGS_RX_CNT16_PG_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT16_PG));
#endif
    return i_data.extractToRight<DATASM_REGS_RX_CNT16_PG_1,
           DATASM_REGS_RX_CNT16_PG_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access DATASM_REGS_RX_CNT16_PG_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DATASM_REGS_RX_CNT16_PG_1]

//>> PREP_[DATASM_REGS_RX_CNT26_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DATASM_REGS_RX_CNT26_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_CNT26_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DATASM_REGS_RX_CNT26_PG]

//>> GET_[DATASM_REGS_RX_CNT26_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DATASM_REGS_RX_CNT26_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_CNT26_PG;
#endif
    return fapi2::getScom(i_target, DATASM_REGS_RX_CNT26_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DATASM_REGS_RX_CNT26_PG]

//>> PUT_[DATASM_REGS_RX_CNT26_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DATASM_REGS_RX_CNT26_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT26_PG));
#endif
    return fapi2::putScom(i_target, DATASM_REGS_RX_CNT26_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DATASM_REGS_RX_CNT26_PG]


//>> SET_[DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT26_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23,
           DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23]

//>> SET_[DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT26_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23,
           DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23]

//>> GET_[DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23]
static inline fapi2::buffer<uint64_t>& GET_DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT26_PG));
#endif
    return i_data.extractToRight<DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23,
           DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23]

//>> PREP_[DATASM_REGS_RX_STAT5_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DATASM_REGS_RX_STAT5_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_STAT5_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DATASM_REGS_RX_STAT5_PG]

//>> GET_[DATASM_REGS_RX_STAT5_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DATASM_REGS_RX_STAT5_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_STAT5_PG;
#endif
    return fapi2::getScom(i_target, DATASM_REGS_RX_STAT5_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DATASM_REGS_RX_STAT5_PG]

//>> PUT_[DATASM_REGS_RX_STAT5_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DATASM_REGS_RX_STAT5_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_STAT5_PG));
#endif
    return fapi2::putScom(i_target, DATASM_REGS_RX_STAT5_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DATASM_REGS_RX_STAT5_PG]


//>> SET_[DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_STAT5_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL,
           DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL]

//>> SET_[DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_STAT5_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL,
           DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL]

//>> GET_[DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_STAT5_PG));
#endif
    return i_data.extractToRight<DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL,
           DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL]

//>> PREP_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TX_CTL_SM_REGS_CTLSM_CNTL7_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TX_CTL_SM_REGS_CTLSM_CNTL7_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG]

//>> GET_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TX_CTL_SM_REGS_CTLSM_CNTL7_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TX_CTL_SM_REGS_CTLSM_CNTL7_PG;
#endif
    return fapi2::getScom(i_target, TX_CTL_SM_REGS_CTLSM_CNTL7_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG]

//>> PUT_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TX_CTL_SM_REGS_CTLSM_CNTL7_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_CNTL7_PG));
#endif
    return fapi2::putScom(i_target, TX_CTL_SM_REGS_CTLSM_CNTL7_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG]


//>> SET_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_CNTL7_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15,
           TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15]

//>> SET_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_CNTL7_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15,
           TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15]

//>> GET_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_CNTL7_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15,
           TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
