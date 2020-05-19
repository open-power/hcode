/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mc_5_unused.H $      */
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

#ifndef __p10_scom_mc_5_H_UNUSED__
#define __p10_scom_mc_5_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> [MBA_SCOMFIR_WATCFG0]
static const uint64_t MBA_SCOMFIR_WATCFG0 = 0x0c010f88ull;

static const uint32_t MBA_SCOMFIR_WATCFG0_WAT_0_CFG = 0;
static const uint32_t MBA_SCOMFIR_WATCFG0_WAT_0_CFG_LEN = 60;
//<< [MBA_SCOMFIR_WATCFG0]
// mc/reg00005.H

//>> [SCOMFIR_MCERPT1]
static const uint64_t SCOMFIR_MCERPT1 = 0x0c010c1full;

static const uint32_t SCOMFIR_MCERPT1_VG_SPECDIS0_HOLD_OUT = 0;
static const uint32_t SCOMFIR_MCERPT1_VG_SPECDIS0_HOLD_OUT_LEN = 3;
static const uint32_t SCOMFIR_MCERPT1_VG_SPECDIS1_HOLD_OUT = 3;
static const uint32_t SCOMFIR_MCERPT1_VG_SPECDIS1_HOLD_OUT_LEN = 3;
static const uint32_t SCOMFIR_MCERPT1_IB_PE_HOLD_OUT = 6;
static const uint32_t SCOMFIR_MCERPT1_HP_PE_HOLD_OUT = 7;
static const uint32_t SCOMFIR_MCERPT1_CHARB0_SCOM_PE_HOLD_OUT = 8;
static const uint32_t SCOMFIR_MCERPT1_DISP0_SCOM_STATE_PE_HOLD_OUT = 9;
static const uint32_t SCOMFIR_MCERPT1_SBOX0_SCOM_CL_PE_HOLD_OUT = 10;
static const uint32_t SCOMFIR_MCERPT1_SBOX0_SCOM_CLAO_PE_HOLD_OUT = 11;
static const uint32_t SCOMFIR_MCERPT1_SBOX0_SCOM_INT_PE_HOLD_OUT = 12;
static const uint32_t SCOMFIR_MCERPT1_CHARB1_SCOM_PE_HOLD_OUT = 13;
static const uint32_t SCOMFIR_MCERPT1_DISP1_SCOM_STATE_PE_HOLD_OUT = 14;
static const uint32_t SCOMFIR_MCERPT1_SBOX1_SCOM_CL_PE_HOLD_OUT = 15;
static const uint32_t SCOMFIR_MCERPT1_SBOX1_SCOM_CLAO_PE_HOLD_OUT = 16;
static const uint32_t SCOMFIR_MCERPT1_SBOX1_SCOM_INT_PE_HOLD_OUT = 17;
static const uint32_t SCOMFIR_MCERPT1_CHARBF0_SCOM_PE_HOLD_OUT = 18;
static const uint32_t SCOMFIR_MCERPT1_CHARBF1_SCOM_PE_HOLD_OUT = 19;
static const uint32_t SCOMFIR_MCERPT1_ASHIFT0_SCOM_PE_HOLD_OUT = 20;
static const uint32_t SCOMFIR_MCERPT1_ASHIFT1_SCOM_PE_HOLD_OUT = 21;
static const uint32_t SCOMFIR_MCERPT1_WDF0_OVERRUN0_HOLD_OUT = 23;
static const uint32_t SCOMFIR_MCERPT1_WDF0_OVERRUN1_HOLD_OUT = 24;
static const uint32_t SCOMFIR_MCERPT1_WDF1_OVERRUN0_HOLD_OUT = 33;
static const uint32_t SCOMFIR_MCERPT1_WDF1_OVERRUN1_HOLD_OUT = 34;
static const uint32_t SCOMFIR_MCERPT1_WDF0_OVERRUN_TAG_Q = 44;
static const uint32_t SCOMFIR_MCERPT1_WDF0_OVERRUN_TAG_Q_LEN = 7;
static const uint32_t SCOMFIR_MCERPT1_WDF1_OVERRUN_TAG_Q = 51;
static const uint32_t SCOMFIR_MCERPT1_WDF1_OVERRUN_TAG_Q_LEN = 7;
static const uint32_t SCOMFIR_MCERPT1_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR3 = 60;
static const uint32_t SCOMFIR_MCERPT1_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR3 = 61;
static const uint32_t SCOMFIR_MCERPT1_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR3 = 62;
static const uint32_t SCOMFIR_MCERPT1_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR3 = 63;
//<< [SCOMFIR_MCERPT1]
// mc/reg00005.H

//>> [EPS_FIR_CLKSTOP_ON_XSTOP_MASK1]
static const uint64_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1 = 0x0c040081ull;

static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_XSTOP_ERR = 0;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_RECOV_ERR = 1;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_SPATTN_ERR = 2;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_LXSTOP_ERR = 3;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_HOSTATTN_ERR = 4;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_SYS_XSTOP_ERR = 5;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_SYS_XSTOP_STAGED_ERR = 6;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_DBG_TRIG_ERR = 7;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP01 = 12;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP02 = 13;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP03 = 14;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP04 = 15;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP05 = 16;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP06 = 17;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP07 = 18;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP08 = 19;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP09 = 20;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP10 = 21;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP11 = 22;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP12 = 23;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP13 = 24;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP14 = 25;
static const uint32_t EPS_FIR_CLKSTOP_ON_XSTOP_MASK1_UNIT_TC_FIR_LOCAL_XSTOP15 = 26;
//<< [EPS_FIR_CLKSTOP_ON_XSTOP_MASK1]
// mc/reg00005.H

//>> [EPS_THERM_WSUB_SKITTER_DATA0]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA0 = 0x0c050019ull;
//<< [EPS_THERM_WSUB_SKITTER_DATA0]
// mc/reg00005.H

//>> [EPS_THERM_WSUB_SKITTER_MODE_REG]
static const uint64_t EPS_THERM_WSUB_SKITTER_MODE_REG = 0x0c050010ull;

static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE = 0;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS = 1;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL = 4;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN = 2;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL = 6;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN = 2;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS = 8;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN = 2;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER = 44;
static const uint32_t EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT = 45;
//<< [EPS_THERM_WSUB_SKITTER_MODE_REG]
// mc/reg00005.H

//>> [TRA0_TR0_CONFIG_2]
static const uint64_t TRA0_TR0_CONFIG_2 = 0x0c010405ull;

static const uint32_t TRA0_TR0_CONFIG_2_A = 0;
static const uint32_t TRA0_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_2_B = 24;
static const uint32_t TRA0_TR0_CONFIG_2_B_LEN = 24;
//<< [TRA0_TR0_CONFIG_2]
// mc/reg00005.H

//>> [TRA1_TR0_TRACE_HI_DATA_REG]
static const uint64_t TRA1_TR0_TRACE_HI_DATA_REG = 0x0c010480ull;

static const uint32_t TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [TRA1_TR0_TRACE_HI_DATA_REG]
// mc/reg00005.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mc/reg00005_unused.H"
#endif
#endif
