/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_omic_d_unused.H $    */
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

#ifndef __p10_scom_omic_d_H_UNUSED__
#define __p10_scom_omic_d_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace omic
{
#endif


//>> [CTL_REGS_RX_MODE14_PG]
static const uint64_t CTL_REGS_RX_MODE14_PG = 0x8008704010012c3full;

static const uint32_t CTL_REGS_RX_MODE14_PG_RX_LOFF_LIVEDGE_MODE = 48;
//<< [CTL_REGS_RX_MODE14_PG]
// omic/reg00013.H

//>> [CTL_REGS_RX_MODE1_PG]
static const uint64_t CTL_REGS_RX_MODE1_PG = 0x8008084010012c3full;

static const uint32_t CTL_REGS_RX_MODE1_PG_CLKDIST_PDWN = 48;
static const uint32_t CTL_REGS_RX_MODE1_PG_16TO1 = 51;
//<< [CTL_REGS_RX_MODE1_PG]
// omic/reg00013.H

//>> [CTL_REGS_RX_MODE24_PG]
static const uint64_t CTL_REGS_RX_MODE24_PG = 0x8008c04010012c3full;

static const uint32_t CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC = 48;
static const uint32_t CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_INC_LEN = 4;
static const uint32_t CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC = 52;
static const uint32_t CTL_REGS_RX_MODE24_PG_1_INVALID_LOCK_THRESH_DEC_LEN = 4;
static const uint32_t CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC = 56;
static const uint32_t CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_INC_LEN = 4;
static const uint32_t CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC = 60;
static const uint32_t CTL_REGS_RX_MODE24_PG_2_INVALID_LOCK_THRESH_DEC_LEN = 4;
//<< [CTL_REGS_RX_MODE24_PG]
// omic/reg00013.H

//>> [CTL_REGS_TX_CNTL6_PG]
static const uint64_t CTL_REGS_TX_CNTL6_PG = 0x800c6c4010012c3full;

static const uint32_t CTL_REGS_TX_CNTL6_PG_TX_TDR_PULSE_WIDTH = 48;
static const uint32_t CTL_REGS_TX_CNTL6_PG_TX_TDR_PULSE_WIDTH_LEN = 9;
//<< [CTL_REGS_TX_CNTL6_PG]
// omic/reg00013.H

//>> [DATASM_REGS_RX_CNT16_PG]
static const uint64_t DATASM_REGS_RX_CNT16_PG = 0x800a004010012c3full;

static const uint32_t DATASM_REGS_RX_CNT16_PG_0 = 48;
static const uint32_t DATASM_REGS_RX_CNT16_PG_0_LEN = 6;
static const uint32_t DATASM_REGS_RX_CNT16_PG_1 = 54;
static const uint32_t DATASM_REGS_RX_CNT16_PG_1_LEN = 6;
//<< [DATASM_REGS_RX_CNT16_PG]
// omic/reg00013.H

//>> [DATASM_REGS_RX_CNT26_PG]
static const uint64_t DATASM_REGS_RX_CNT26_PG = 0x800a504010012c3full;

static const uint32_t DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23 = 56;
static const uint32_t DATASM_REGS_RX_CNT26_PG_RX_B_LANE_FAIL_16_23_LEN = 8;
//<< [DATASM_REGS_RX_CNT26_PG]
// omic/reg00013.H

//>> [DATASM_REGS_RX_CNTL5_PG]
static const uint64_t DATASM_REGS_RX_CNTL5_PG = 0x8009a84010012c3full;

static const uint32_t DATASM_REGS_RX_CNTL5_PG_RX_PSAVE_FENCE_REQ_DL_IO_0_15 = 48;
static const uint32_t DATASM_REGS_RX_CNTL5_PG_RX_PSAVE_FENCE_REQ_DL_IO_0_15_LEN = 16;
//<< [DATASM_REGS_RX_CNTL5_PG]
// omic/reg00013.H

//>> [DATASM_REGS_RX_STAT5_PG]
static const uint64_t DATASM_REGS_RX_STAT5_PG = 0x800ab04010012c3full;

static const uint32_t DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL = 48;
static const uint32_t DATASM_REGS_RX_STAT5_PG_RX_DATA_PIPE_MAIN_16_31_RO_SIGNAL_LEN = 16;
//<< [DATASM_REGS_RX_STAT5_PG]
// omic/reg00013.H

//>> [TX_CTL_SM_REGS_CTLSM_CNTL7_PG]
static const uint64_t TX_CTL_SM_REGS_CTLSM_CNTL7_PG = 0x800cf44010012c3full;

static const uint32_t TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15 = 48;
static const uint32_t TX_CTL_SM_REGS_CTLSM_CNTL7_PG_TX_PSAVE_FORCE_STS_0_15_LEN = 16;
//<< [TX_CTL_SM_REGS_CTLSM_CNTL7_PG]
// omic/reg00013.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "omic/reg00013_unused.H"
#endif
#endif
