/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_5_unused.H $       */
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

#ifndef __p10_scom_c_5_H_UNUSED__
#define __p10_scom_c_5_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [ADDR_TRAP_REG]
static const uint64_t ADDR_TRAP_REG = 0x20010003ull;

static const uint32_t ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR = 0;
static const uint32_t ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR_LEN = 16;
static const uint32_t ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR = 16;
static const uint32_t ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT = 17;
static const uint32_t ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR = 18;
static const uint32_t ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR_LEN = 13;
static const uint32_t ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY = 31;
static const uint32_t ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR = 32;
static const uint32_t ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION = 33;
static const uint32_t ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER = 34;
static const uint32_t ADDR_TRAP_REG_LAST_MASTERID = 35;
static const uint32_t ADDR_TRAP_REG_LAST_MASTERID_LEN = 4;
//<< [ADDR_TRAP_REG]
// c/reg00005.H

//>> [EC_LS_LSU_HOLD_OUT_REG8]
static const uint64_t EC_LS_LSU_HOLD_OUT_REG8 = 0x200206c8ull;

static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_0_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT = 0;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_0_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT = 1;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT = 2;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT = 3;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT = 4;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT = 5;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_1_FIN_LD_STFWD_AND_BLOCK_DVAL_ERR_HOLD_OUT = 6;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_1_FLS_LD_FINAL_PASS_AND_NO_FINISH_ERR_HOLD_OUT = 7;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_REJECT_AND_FINISH_ON_SAME_OP_ERR_HOLD_OUT = 8;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_SLEEP_ERR_HOLD_OUT = 9;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_DVAL_AND_WAKEUP_ERR_HOLD_OUT = 10;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG8_1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT = 11;
//<< [EC_LS_LSU_HOLD_OUT_REG8]
// c/reg00005.H

//>> [EC_PC_PMU_SPRCOR_CORE_FUSES]
static const uint64_t EC_PC_PMU_SPRCOR_CORE_FUSES = 0x2002040eull;

static const uint32_t EC_PC_PMU_SPRCOR_CORE_FUSES_EXT_MEMORY_DIS = 0;
static const uint32_t EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL = 1;
static const uint32_t EC_PC_PMU_SPRCOR_CORE_FUSES_FLOP_CONTROL_LEN = 2;
static const uint32_t EC_PC_PMU_SPRCOR_CORE_FUSES_VMX_CRYPTO_DIS = 3;
//<< [EC_PC_PMU_SPRCOR_CORE_FUSES]
// c/reg00005.H

//>> [EC_PC_SPURR_FREQ_REF]
static const uint64_t EC_PC_SPURR_FREQ_REF = 0x200204a1ull;

static const uint32_t EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE = 0;
static const uint32_t EC_PC_SPURR_FREQ_REF_FREQUENCY_REFERENCE_LEN = 8;
//<< [EC_PC_SPURR_FREQ_REF]
// c/reg00005.H

//>> [EC_PC_TOD_SYNC001]
static const uint64_t EC_PC_TOD_SYNC001 = 0x200204a3ull;

static const uint32_t EC_PC_TOD_SYNC001_TOD = 0;
static const uint32_t EC_PC_TOD_SYNC001_TOD_LEN = 54;
static const uint32_t EC_PC_TOD_SYNC001_CHIP_TOD_STATUS = 60;
static const uint32_t EC_PC_TOD_SYNC001_CHIP_TOD_STATUS_LEN = 4;
//<< [EC_PC_TOD_SYNC001]
// c/reg00005.H

//>> [EC_PC_TOD_SYNC110]
static const uint64_t EC_PC_TOD_SYNC110 = 0x200204a3ull;

static const uint32_t EC_PC_TOD_SYNC110_TOD = 0;
static const uint32_t EC_PC_TOD_SYNC110_TOD_LEN = 49;
static const uint32_t EC_PC_TOD_SYNC110_CHIP_TOD_STATUS = 60;
static const uint32_t EC_PC_TOD_SYNC110_CHIP_TOD_STATUS_LEN = 4;
//<< [EC_PC_TOD_SYNC110]
// c/reg00005.H

//>> [EC_PC_TRACE1_TR_TR0_CONFIG_3]
static const uint64_t EC_PC_TRACE1_TR_TR0_CONFIG_3 = 0x20020a46ull;

static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_3_C = 0;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_3_D = 24;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_3_D_LEN = 24;
//<< [EC_PC_TRACE1_TR_TR0_CONFIG_3]
// c/reg00005.H

//>> [L2TRA_TR0_CONFIG_5]
static const uint64_t L2TRA_TR0_CONFIG_5 = 0x20020048ull;

static const uint32_t L2TRA_TR0_CONFIG_5_C = 0;
static const uint32_t L2TRA_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t L2TRA_TR0_CONFIG_5_D = 24;
static const uint32_t L2TRA_TR0_CONFIG_5_D_LEN = 24;
//<< [L2TRA_TR0_CONFIG_5]
// c/reg00005.H

//>> [L3_MISC_L3CERRS_ERR_INJ_REG]
static const uint64_t L3_MISC_L3CERRS_ERR_INJ_REG = 0x2001060dull;

static const uint32_t L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_CAC_ERR_INJ = 0;
static const uint32_t L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_CAC_ERR_INJ = 1;
static const uint32_t L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE = 2;
static const uint32_t L3_MISC_L3CERRS_ERR_INJ_REG_CAC_ERR_INJ_TYPE_LEN = 2;
static const uint32_t L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_DIR_ERR_INJ = 4;
static const uint32_t L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_DIR_ERR_INJ = 5;
static const uint32_t L3_MISC_L3CERRS_ERR_INJ_REG_DIR_ERR_INJ_TYPE = 6;
static const uint32_t L3_MISC_L3CERRS_ERR_INJ_REG_SINGLE_LRU_ERR_INJ = 7;
static const uint32_t L3_MISC_L3CERRS_ERR_INJ_REG_SOLID_LRU_ERR_INJ = 8;
//<< [L3_MISC_L3CERRS_ERR_INJ_REG]
// c/reg00005.H

//>> [NC_NCCHTM_NCCHTSC_HTM_TRIG]
static const uint64_t NC_NCCHTM_NCCHTSC_HTM_TRIG = 0x20010684ull;

static const uint32_t NC_NCCHTM_NCCHTSC_HTM_TRIG_START = 0;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP = 1;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_TRIG_PAUSE = 2;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_TRIG_STOP_ALT = 3;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_TRIG_RESET = 4;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_VALID = 5;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE = 6;
static const uint32_t NC_NCCHTM_NCCHTSC_HTM_TRIG_MARK_TYPE_LEN = 10;
//<< [NC_NCCHTM_NCCHTSC_HTM_TRIG]
// c/reg00005.H

//>> [NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0]
static const uint64_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0 = 0x20010652ull;

static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_VALID = 0;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID = 1;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_8_LPAR_ID_LEN = 12;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_VALID = 13;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID = 14;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_7_LPAR_ID_LEN = 12;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_VALID = 26;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID = 27;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_6_LPAR_ID_LEN = 12;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_VALID = 39;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID = 40;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0_5_LPAR_ID_LEN = 12;
//<< [NC_NCMISC_NCSCOMS_NCU_SLOW_LPAR_REG0]
// c/reg00005.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00005_unused.H"
#endif
#endif
