/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mc/reg00004_unused.H $        */
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

#ifndef __MC_REG00004_H_UNUSED__
#define __MC_REG00004_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> PREP_[MBA_SCOMFIR_WATMSKA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_WATMSKA1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATMSKA1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_WATMSKA1]

//>> GET_[MBA_SCOMFIR_WATMSKA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_WATMSKA1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATMSKA1;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_WATMSKA1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_WATMSKA1]

//>> PUT_[MBA_SCOMFIR_WATMSKA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_WATMSKA1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKA1));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_WATMSKA1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_WATMSKA1]


//>> SET_[MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKA1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1,
           MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1]

//>> SET_[MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKA1));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1,
           MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1]

//>> GET_[MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKA1));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1,
           MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_WATMSKA1_WAT_MASK_A1]

//>> PREP_[REGION_CCFLUSH_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REGION_CCFLUSH_STATUS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGION_CCFLUSH_STATUS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REGION_CCFLUSH_STATUS]

//>> GET_[REGION_CCFLUSH_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REGION_CCFLUSH_STATUS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGION_CCFLUSH_STATUS;
#endif
    return fapi2::getScom(i_target, REGION_CCFLUSH_STATUS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REGION_CCFLUSH_STATUS]

//>> PUT_[REGION_CCFLUSH_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REGION_CCFLUSH_STATUS(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REGION_CCFLUSH_STATUS));
#endif
    return fapi2::putScom(i_target, REGION_CCFLUSH_STATUS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REGION_CCFLUSH_STATUS]


//>> SET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]
static inline fapi2::buffer<uint64_t>& SET_REGION_CCFLUSH_STATUS_REGION_CCFLUSH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGION_CCFLUSH_STATUS));
#endif
    return o_data.insertFromRight<REGION_CCFLUSH_STATUS_REGION_CCFLUSH,
           REGION_CCFLUSH_STATUS_REGION_CCFLUSH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access REGION_CCFLUSH_STATUS_REGION_CCFLUSH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]

//>> SET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]
static inline fapi2::buffer<uint64_t>& SET_REGION_CCFLUSH_STATUS_REGION_CCFLUSH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGION_CCFLUSH_STATUS));
#endif
    return o_data.insertFromRight<REGION_CCFLUSH_STATUS_REGION_CCFLUSH,
           REGION_CCFLUSH_STATUS_REGION_CCFLUSH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access REGION_CCFLUSH_STATUS_REGION_CCFLUSH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]

//>> GET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]
static inline fapi2::buffer<uint64_t>& GET_REGION_CCFLUSH_STATUS_REGION_CCFLUSH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGION_CCFLUSH_STATUS));
#endif
    return i_data.extractToRight<REGION_CCFLUSH_STATUS_REGION_CCFLUSH,
           REGION_CCFLUSH_STATUS_REGION_CCFLUSH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access REGION_CCFLUSH_STATUS_REGION_CCFLUSH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]

//>> PREP_[EPS_THERM_WSUB_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_INJECT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_INJECT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_INJECT_REG]

//>> GET_[EPS_THERM_WSUB_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_INJECT_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_INJECT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_INJECT_REG]

//>> PUT_[EPS_THERM_WSUB_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_INJECT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_INJECT_REG]


//>> SET_[EPS_THERM_WSUB_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_INJECT_REG_TRIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_INJECT_REG_TRIP,
           EPS_THERM_WSUB_INJECT_REG_TRIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_THERM_WSUB_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_INJECT_REG_TRIP]

//>> SET_[EPS_THERM_WSUB_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_INJECT_REG_TRIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_INJECT_REG_TRIP,
           EPS_THERM_WSUB_INJECT_REG_TRIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_THERM_WSUB_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_INJECT_REG_TRIP]

//>> GET_[EPS_THERM_WSUB_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_INJECT_REG_TRIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_INJECT_REG_TRIP,
           EPS_THERM_WSUB_INJECT_REG_TRIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_THERM_WSUB_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_INJECT_REG_TRIP]

//>> SET_[EPS_THERM_WSUB_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_INJECT_REG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_INJECT_REG_MODE,
           EPS_THERM_WSUB_INJECT_REG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access EPS_THERM_WSUB_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_INJECT_REG_MODE]

//>> SET_[EPS_THERM_WSUB_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_INJECT_REG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_INJECT_REG_MODE,
           EPS_THERM_WSUB_INJECT_REG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access EPS_THERM_WSUB_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_INJECT_REG_MODE]

//>> GET_[EPS_THERM_WSUB_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_INJECT_REG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_INJECT_REG_MODE,
           EPS_THERM_WSUB_INJECT_REG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access EPS_THERM_WSUB_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_INJECT_REG_MODE]

//>> PREP_[PCB_OPCG_GO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PCB_OPCG_GO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PCB_OPCG_GO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PCB_OPCG_GO]

//>> GET_[PCB_OPCG_GO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PCB_OPCG_GO(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PCB_OPCG_GO;
#endif
    return fapi2::getScom(i_target, PCB_OPCG_GO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PCB_OPCG_GO]

//>> PUT_[PCB_OPCG_GO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PCB_OPCG_GO(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return fapi2::putScom(i_target, PCB_OPCG_GO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PCB_OPCG_GO]


//>> SET_[PCB_OPCG_GO_PCB_OPCGGO]
static inline fapi2::buffer<uint64_t>& SET_PCB_OPCG_GO_PCB_OPCGGO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return o_data.insertFromRight<PCB_OPCG_GO_PCB_OPCGGO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PCB_OPCG_GO_PCB_OPCGGO]

//>> SET_[PCB_OPCG_GO_PCB_OPCGGO]
static inline fapi2::buffer<uint64_t>& SET_PCB_OPCG_GO_PCB_OPCGGO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return o_data.insertFromRight<PCB_OPCG_GO_PCB_OPCGGO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PCB_OPCG_GO_PCB_OPCGGO]

//>> SET_[PCB_OPCG_GO_PCB_OPCGGO]
static inline fapi2::buffer<uint64_t>& SET_PCB_OPCG_GO_PCB_OPCGGO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return o_data.setBit<PCB_OPCG_GO_PCB_OPCGGO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PCB_OPCG_GO_PCB_OPCGGO]

//>> CLEAR_[PCB_OPCG_GO_PCB_OPCGGO]
static inline fapi2::buffer<uint64_t>& CLEAR_PCB_OPCG_GO_PCB_OPCGGO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return o_data.clearBit<PCB_OPCG_GO_PCB_OPCGGO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PCB_OPCG_GO_PCB_OPCGGO]

//>> GET_[PCB_OPCG_GO_PCB_OPCGGO]
static inline fapi2::buffer<uint64_t>& GET_PCB_OPCG_GO_PCB_OPCGGO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return i_data.extractToRight<PCB_OPCG_GO_PCB_OPCGGO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PCB_OPCG_GO_PCB_OPCGGO]

//>> GET_[PCB_OPCG_GO_PCB_OPCGGO]
static inline bool GET_PCB_OPCG_GO_PCB_OPCGGO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return i_data.getBit<PCB_OPCG_GO_PCB_OPCGGO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PCB_OPCG_GO_PCB_OPCGGO]

//>> PREP_[TRA1_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_CONFIG_2]

//>> GET_[TRA1_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_2]

//>> PUT_[TRA1_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_CONFIG_2]


//>> SET_[TRA1_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_2_A,
           TRA1_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access TRA1_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_2_A]

//>> SET_[TRA1_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_2_A,
           TRA1_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access TRA1_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_2_A]

//>> GET_[TRA1_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_2_A,
           TRA1_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access TRA1_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_2_A]

//>> SET_[TRA1_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_2_B,
           TRA1_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access TRA1_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_2_B]

//>> SET_[TRA1_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_2_B,
           TRA1_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access TRA1_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_2_B]

//>> GET_[TRA1_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_2_B,
           TRA1_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access TRA1_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_2_B]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
