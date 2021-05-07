/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_omic_f_unused.H $    */
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

#ifndef __p10_scom_omic_f_H_UNUSED__
#define __p10_scom_omic_f_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace omic
{
#endif


//>> [CTL_REGS_RX_CNTL2_PG]
static const uint64_t CTL_REGS_RX_CNTL2_PG = 0x8009084010012c3full;

static const uint32_t CTL_REGS_RX_CNTL2_PG_AMP_SERVO_RESTORE_DAC = 48;
static const uint32_t CTL_REGS_RX_CNTL2_PG_LOFF_SERVO_RESTORE_DAC = 49;
static const uint32_t CTL_REGS_RX_CNTL2_PG_SERVO_DISABLE_RESULT = 50;
static const uint32_t CTL_REGS_RX_CNTL2_PG_CAL_LANE_PG_PHY_GCRMSG = 51;
static const uint32_t CTL_REGS_RX_CNTL2_PG_CAL_LANE_PG_PHY_GCRMSG_LEN = 5;
static const uint32_t CTL_REGS_RX_CNTL2_PG_AMP_SERVO_MASK_H0 = 56;
static const uint32_t CTL_REGS_RX_CNTL2_PG_AMP_SERVO_VOTE_BIAS_INC = 57;
static const uint32_t CTL_REGS_RX_CNTL2_PG_AMP_SERVO_VOTE_BIAS_DEC = 58;
static const uint32_t CTL_REGS_RX_CNTL2_PG_SERVO_REVERSE_LATCH_DAC = 59;
//<< [CTL_REGS_RX_CNTL2_PG]
// omic/reg00015.H

//>> [CTL_REGS_RX_MODE11_PG]
static const uint64_t CTL_REGS_RX_MODE11_PG = 0x8008584010012c3full;

static const uint32_t CTL_REGS_RX_MODE11_PG_CTL_DATASM_CLKDIST_PDWN = 48;
static const uint32_t CTL_REGS_RX_MODE11_PG_AMP_START_VAL = 49;
static const uint32_t CTL_REGS_RX_MODE11_PG_AMP_START_VAL_LEN = 8;
//<< [CTL_REGS_RX_MODE11_PG]
// omic/reg00015.H

//>> [CTL_REGS_RX_MODE21_PG]
static const uint64_t CTL_REGS_RX_MODE21_PG = 0x8008a84010012c3full;

static const uint32_t CTL_REGS_RX_MODE21_PG_RX_SERVO_STATUS_ERROR_EN = 48;
static const uint32_t CTL_REGS_RX_MODE21_PG_RX_SERVO_STATUS_ERROR_EN_LEN = 4;
//<< [CTL_REGS_RX_MODE21_PG]
// omic/reg00015.H

//>> [CTL_REGS_RX_MODE4_PG]
static const uint64_t CTL_REGS_RX_MODE4_PG = 0x8008204010012c3full;

static const uint32_t CTL_REGS_RX_MODE4_PG_INC0 = 48;
static const uint32_t CTL_REGS_RX_MODE4_PG_INC0_LEN = 4;
static const uint32_t CTL_REGS_RX_MODE4_PG_DEC0 = 52;
static const uint32_t CTL_REGS_RX_MODE4_PG_DEC0_LEN = 4;
static const uint32_t CTL_REGS_RX_MODE4_PG_INC1 = 56;
static const uint32_t CTL_REGS_RX_MODE4_PG_INC1_LEN = 4;
static const uint32_t CTL_REGS_RX_MODE4_PG_DEC1 = 60;
static const uint32_t CTL_REGS_RX_MODE4_PG_DEC1_LEN = 4;
//<< [CTL_REGS_RX_MODE4_PG]
// omic/reg00015.H

//>> [CTL_REGS_RX_SPARE_MODE_PG]
static const uint64_t CTL_REGS_RX_SPARE_MODE_PG = 0x8008004010012c3full;

static const uint32_t CTL_REGS_RX_SPARE_MODE_PG_0 = 48;
static const uint32_t CTL_REGS_RX_SPARE_MODE_PG_1 = 49;
static const uint32_t CTL_REGS_RX_SPARE_MODE_PG_2 = 50;
static const uint32_t CTL_REGS_RX_SPARE_MODE_PG_3 = 51;
static const uint32_t CTL_REGS_RX_SPARE_MODE_PG_4 = 52;
//<< [CTL_REGS_RX_SPARE_MODE_PG]
// omic/reg00015.H

//>> [CTL_REGS_TX_CNTL3_PG]
static const uint64_t CTL_REGS_TX_CNTL3_PG = 0x800c544010012c3full;

static const uint32_t CTL_REGS_TX_CNTL3_PG_FINE_SEL = 48;
static const uint32_t CTL_REGS_TX_CNTL3_PG_FINE_SEL_LEN = 3;
static const uint32_t CTL_REGS_TX_CNTL3_PG_COARSE_SEL = 51;
static const uint32_t CTL_REGS_TX_CNTL3_PG_COARSE_SEL_LEN = 4;
static const uint32_t CTL_REGS_TX_CNTL3_PG_BER_SEL = 55;
static const uint32_t CTL_REGS_TX_CNTL3_PG_BER_SEL_LEN = 6;
//<< [CTL_REGS_TX_CNTL3_PG]
// omic/reg00015.H

//>> [DATASM_REGS_RX_CNT13_PG]
static const uint64_t DATASM_REGS_RX_CNT13_PG = 0x8009e84010012c3full;

static const uint32_t DATASM_REGS_RX_CNT13_PG_DISABLE_SM = 48;
static const uint32_t DATASM_REGS_RX_CNT13_PG_SYNC_MAIN_ALT = 49;
static const uint32_t DATASM_REGS_RX_CNT13_PG_CDR_LOCK_OVRD = 50;
//<< [DATASM_REGS_RX_CNT13_PG]
// omic/reg00015.H

//>> [DATASM_REGS_RX_CNT23_PG]
static const uint64_t DATASM_REGS_RX_CNT23_PG = 0x800a384010012c3full;

static const uint32_t DATASM_REGS_RX_CNT23_PG_RX_A_LANE_FAIL_0_15 = 48;
static const uint32_t DATASM_REGS_RX_CNT23_PG_RX_A_LANE_FAIL_0_15_LEN = 16;
//<< [DATASM_REGS_RX_CNT23_PG]
// omic/reg00015.H

//>> [DATASM_REGS_RX_SPARE_MODE_PG]
static const uint64_t DATASM_REGS_RX_SPARE_MODE_PG = 0x8009804010012c3full;

static const uint32_t DATASM_REGS_RX_SPARE_MODE_PG_0 = 48;
static const uint32_t DATASM_REGS_RX_SPARE_MODE_PG_1 = 49;
static const uint32_t DATASM_REGS_RX_SPARE_MODE_PG_2 = 50;
static const uint32_t DATASM_REGS_RX_SPARE_MODE_PG_3 = 51;
static const uint32_t DATASM_REGS_RX_SPARE_MODE_PG_4 = 52;
static const uint32_t DATASM_REGS_RX_SPARE_MODE_PG_5 = 53;
static const uint32_t DATASM_REGS_RX_SPARE_MODE_PG_6 = 54;
static const uint32_t DATASM_REGS_RX_SPARE_MODE_PG_7 = 55;
//<< [DATASM_REGS_RX_SPARE_MODE_PG]
// omic/reg00015.H

//>> [TX_CTL_SM_REGS_CTLSM_CNTL12_PG]
static const uint64_t TX_CTL_SM_REGS_CTLSM_CNTL12_PG = 0x800d1c4010012c3full;

static const uint32_t TX_CTL_SM_REGS_CTLSM_CNTL12_PG_SUBSET6 = 48;
static const uint32_t TX_CTL_SM_REGS_CTLSM_CNTL12_PG_SUBSET6_LEN = 6;
static const uint32_t TX_CTL_SM_REGS_CTLSM_CNTL12_PG_DISABLE_SM = 54;
static const uint32_t TX_CTL_SM_REGS_CTLSM_CNTL12_PG_TIME = 55;
static const uint32_t TX_CTL_SM_REGS_CTLSM_CNTL12_PG_TIME_LEN = 6;
static const uint32_t TX_CTL_SM_REGS_CTLSM_CNTL12_PG_TIMER_DOUBLE_MODE = 61;
//<< [TX_CTL_SM_REGS_CTLSM_CNTL12_PG]
// omic/reg00015.H

//>> [TX_CTL_SM_REGS_CTLSM_CNTL2_PG]
static const uint64_t TX_CTL_SM_REGS_CTLSM_CNTL2_PG = 0x800ccc4010012c3full;

static const uint32_t TX_CTL_SM_REGS_CTLSM_CNTL2_PG_TX_PSAVE_FENCE_REQ_DL_IO_16_23 = 48;
static const uint32_t TX_CTL_SM_REGS_CTLSM_CNTL2_PG_TX_PSAVE_FENCE_REQ_DL_IO_16_23_LEN = 8;
//<< [TX_CTL_SM_REGS_CTLSM_CNTL2_PG]
// omic/reg00015.H

//>> [TX_CTL_SM_REGS_CTLSM_STAT2_PG]
static const uint64_t TX_CTL_SM_REGS_CTLSM_STAT2_PG = 0x800d4c4010012c3full;

static const uint32_t TX_CTL_SM_REGS_CTLSM_STAT2_PG_TX_PSAVE_REQ_DL_0_15_STS_RO_SIGNAL = 48;
static const uint32_t TX_CTL_SM_REGS_CTLSM_STAT2_PG_TX_PSAVE_REQ_DL_0_15_STS_RO_SIGNAL_LEN = 16;
//<< [TX_CTL_SM_REGS_CTLSM_STAT2_PG]
// omic/reg00015.H

//>> [TX_CTL_SM_REGS_FIR_ERROR_INJECT_PG]
static const uint64_t TX_CTL_SM_REGS_FIR_ERROR_INJECT_PG = 0x800c9c4010012c3full;

static const uint32_t TX_CTL_SM_REGS_FIR_ERROR_INJECT_PG_TX_PG_FIR_ERR_INJ = 48;
static const uint32_t TX_CTL_SM_REGS_FIR_ERROR_INJECT_PG_TX_PG_FIR_ERR_INJ_LEN = 4;
//<< [TX_CTL_SM_REGS_FIR_ERROR_INJECT_PG]
// omic/reg00015.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "omic/reg00015_unused.H"
#endif
#endif
