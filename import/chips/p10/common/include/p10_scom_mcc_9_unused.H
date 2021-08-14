/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mcc_9_unused.H $     */
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

#ifndef __PPE_HCODE__
    #include "proc_scomt.H"
#endif

#ifndef __p10_scom_mcc_9_H_UNUSED__
#define __p10_scom_mcc_9_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> [DSTL_DSTLSTATUS]
static const uint64_t DSTL_DSTLSTATUS = 0x0c010d10ull;

static const uint32_t DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF = 0;
static const uint32_t DSTL_DSTLSTATUS_SUBCH_A_FAIL_WOF_LEN = 10;
static const uint32_t DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF = 10;
static const uint32_t DSTL_DSTLSTATUS_SUBCH_B_FAIL_WOF_LEN = 10;
static const uint32_t DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS = 20;
static const uint32_t DSTL_DSTLSTATUS_DL_LANE_WIDTH_A_STATUS_LEN = 2;
static const uint32_t DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS = 22;
static const uint32_t DSTL_DSTLSTATUS_DL_LANE_WIDTH_B_STATUS_LEN = 2;
//<< [DSTL_DSTLSTATUS]
// mcc/reg00009.H

//>> [WDF_WDFCFG]
static const uint64_t WDF_WDFCFG = 0x0c010f40ull;

static const uint32_t WDF_WDFCFG_CFG_WRITE_MODE_ECC_CHK_DIS = 0;
static const uint32_t WDF_WDFCFG_CFG_WRITE_MODE_ECC_COR_DIS = 1;
static const uint32_t WDF_WDFCFG_CFG_WDF_SERIAL_SEQ_MODE = 2;
static const uint32_t WDF_WDFCFG_WDFCFG_3_8_SPARE = 3;
static const uint32_t WDF_WDFCFG_WDFCFG_3_8_SPARE_LEN = 6;
static const uint32_t P10_20_WDF_WDFCFG_CFG_P10DD2_HCADCY = 3; // p10:20,
static const uint32_t P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE = 4; // p10:20,
static const uint32_t P10_20_WDF_WDFCFG_WDFCFG_4_8_SPARE_LEN = 5;
static const uint32_t WDF_WDFCFG_CFG_OVERRUN_FORCE_SUE_ENABLE = 9;
static const uint32_t WDF_WDFCFG_WDFCFG_10_11_SPARE = 10;
static const uint32_t WDF_WDFCFG_WDFCFG_10_11_SPARE_LEN = 2;
static const uint32_t WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ = 12;
static const uint32_t WDF_WDFCFG_RESERVED_DSTL_DW0_ERR_INJ_LEN = 2;
static const uint32_t WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ = 14;
static const uint32_t WDF_WDFCFG_RESERVED_DSTL_DW1_ERR_INJ_LEN = 2;
static const uint32_t WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ = 16;
static const uint32_t WDF_WDFCFG_RESERVED_DSTL_DW2_ERR_INJ_LEN = 2;
static const uint32_t WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ = 18;
static const uint32_t WDF_WDFCFG_RESERVED_DSTL_DW3_ERR_INJ_LEN = 2;
static const uint32_t WDF_WDFCFG_RESERVED_DSTL_ONE_SHOT_INJ = 20;
static const uint32_t WDF_WDFCFG_RESERVED_DSTL_PERSISTANT_INJ = 21;
static const uint32_t WDF_WDFCFG_WDFCFG_22_31_SPARE = 22;
static const uint32_t WDF_WDFCFG_WDFCFG_22_31_SPARE_LEN = 10;
static const uint32_t WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT = 32;
static const uint32_t WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_SELECT_LEN = 4;
static const uint32_t WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE = 36;
static const uint32_t WDF_WDFCFG_ECC_WDF_HCA_TIMEBASE_LEN = 28;
//<< [WDF_WDFCFG]
// mcc/reg00009.H

//>> [WRITE_WRT_WDF_ECC]
static const uint64_t WRITE_WRT_WDF_ECC = 0x0c010f49ull;

static const uint32_t WRITE_WRT_WDF_ECC_0_ERR_TYPE = 0;
static const uint32_t WRITE_WRT_WDF_ECC_0_ERR_TYPE_LEN = 3;
static const uint32_t WRITE_WRT_WDF_ECC_0_SYNDROME = 8;
static const uint32_t WRITE_WRT_WDF_ECC_0_SYNDROME_LEN = 8;
static const uint32_t WRITE_WRT_WDF_ECC_1_ERR_TYPE = 16;
static const uint32_t WRITE_WRT_WDF_ECC_1_ERR_TYPE_LEN = 3;
static const uint32_t WRITE_WRT_WDF_ECC_1_SYNDROME = 24;
static const uint32_t WRITE_WRT_WDF_ECC_1_SYNDROME_LEN = 8;
static const uint32_t WRITE_WRT_WDF_ECC_2_ERR_TYPE = 32;
static const uint32_t WRITE_WRT_WDF_ECC_2_ERR_TYPE_LEN = 3;
static const uint32_t WRITE_WRT_WDF_ECC_2_SYNDROME = 40;
static const uint32_t WRITE_WRT_WDF_ECC_2_SYNDROME_LEN = 8;
static const uint32_t WRITE_WRT_WDF_ECC_3_ERR_TYPE = 48;
static const uint32_t WRITE_WRT_WDF_ECC_3_ERR_TYPE_LEN = 3;
static const uint32_t WRITE_WRT_WDF_ECC_3_SYNDROME = 56;
static const uint32_t WRITE_WRT_WDF_ECC_3_SYNDROME_LEN = 8;
//<< [WRITE_WRT_WDF_ECC]
// mcc/reg00009.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mcc/reg00009_unused.H"
#endif
#endif
