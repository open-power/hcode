/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_0_unused.H $       */
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

#ifndef __PPE_HCODE__
    #include "proc_scomt.H"
#endif

#ifndef __p10_scom_c_0_H_UNUSED__
#define __p10_scom_c_0_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2]
static const uint64_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2 = 0x20020602ull;

static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32 = 0;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33 = 1;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34 = 2;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35 = 3;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36 = 4;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37 = 5;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38 = 6;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39 = 7;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40 = 8;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41 = 9;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42 = 10;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43 = 11;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44 = 12;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45 = 13;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46 = 14;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47 = 15;
//<< [EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2]
// c/reg00000.H

//>> [EC_PC_COMMON_SPR_HMEER]
static const uint64_t EC_PC_COMMON_SPR_HMEER = 0x20020496ull;

static const uint32_t EC_PC_COMMON_SPR_HMEER_ENABLE = 0;
static const uint32_t EC_PC_COMMON_SPR_HMEER_ENABLE_LEN = 24;
//<< [EC_PC_COMMON_SPR_HMEER]
// c/reg00000.H

//>> [EC_PC_TRACE1_TR_TR0_CONFIG_5]
static const uint64_t EC_PC_TRACE1_TR_TR0_CONFIG_5 = 0x20020a48ull;

static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_5_C = 0;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_5_D = 24;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_5_D_LEN = 24;
//<< [EC_PC_TRACE1_TR_TR0_CONFIG_5]
// c/reg00000.H

//>> [L2TRA_TR0_CONFIG_3]
static const uint64_t L2TRA_TR0_CONFIG_3 = 0x20020046ull;

static const uint32_t L2TRA_TR0_CONFIG_3_C = 0;
static const uint32_t L2TRA_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t L2TRA_TR0_CONFIG_3_D = 24;
static const uint32_t L2TRA_TR0_CONFIG_3_D_LEN = 24;
//<< [L2TRA_TR0_CONFIG_3]
// c/reg00000.H

//>> [NC_NCCHTM_NCCHTSC_HTM_CSEL]
static const uint64_t NC_NCCHTM_NCCHTSC_HTM_CSEL = 0x20010687ull;
//<< [NC_NCCHTM_NCCHTSC_HTM_CSEL]
// c/reg00000.H

//>> [NC_NCMISC_NCSCOMS_NCU_MODE_REG3]
static const uint64_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3 = 0x2001064cull;

static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN = 0;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD = 1;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD_LEN = 3;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT = 4;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT_LEN = 4;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT = 8;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT_LEN = 8;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN = 16;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH = 17;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH_LEN = 3;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE = 20;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN = 21;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE = 22;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE_LEN = 10;
//<< [NC_NCMISC_NCSCOMS_NCU_MODE_REG3]
// c/reg00000.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00000_unused.H"
#endif
#endif
