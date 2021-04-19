/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_dfe.c $               */
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
// *!---------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2016
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
// *!---------------------------------------------------------------------------
// *! FILENAME    : eo_dfe.c
// *! TITLE       :
// *! DESCRIPTION : Run DFE H1-3
// *!
// *! OWNER NAME  : Chris Steffen       Email: cwsteffen@us.ibm.com
// *! BACKUP NAME :
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// mbs21041200 |mbs     | Renamed rx_lane_bad vector to rx_lane_fail, removed per-lane version, and added rx_lane_fail_cnt
// vbr21030800 |vbr     | HW560155: clk_adj=0 is valid and should not give an error
// mwh20012100 |mwh     | Add in code to set rx_dfe_fail if servo op has issue
// mbs20111800 |mbs     | Reversed dfe H1 adjust for dd1 dac swizzle
// bja20120100 |bja     | HW553981: In DFE clock adjust, set error if Ap is less than zero
// mbs20092800 |mbs     | Updated hysteresis for DFE
// vbr20091600 |vbr     | HW546085: Added observation mem_regs for DFE Fast measured/calculated AP
// vbr20091100 |vbr     | HW546085: Added observation mem_regs for DFE Fast coefficients
// bja20090900 |bja     | Use common is_p10_dd1() check
// mbs20080500 |mbs     | HW539048- Added dfe_quad_mode to allow dfe full training of only one quadrant
// mbs20073000 |mbs     | LAB - Updated dfe h1 check to error at -20 instead of 0
// mbs20073000 |mbs     | LAB - Updated dfrx_pr_fw_inertia_amt_coarsee clkadj to only adjust for h1 > 0
// mbs20073000 |mbs     | LAB - Updated dfe_fast H coefficient calculations for DAC swizzle bug
// mbs20073000 |mbs     | LAB - Updated dfe_full servo op call to twist servo_op patterns for DAC swizzle bug
// mbs20031000 |mbs     | HW525009 - Switch slave mode to bank B when copying results for fast DFE
// mwh20022400 |mwh     | Add in warning fir to DFT fir so both get set if DFT check triggers
// vbr20021300 |vbr     | Added Min Eye Height code
// cws20011400 |cws     | Added Debug Logs
// vbr19111500 |vbr     | Initial implementation of debug levels
// mbs19110600 |mbs     | HW468344 - Move check for servo queues empty to beginning of functions
// mbs19110600 |mbs     | HW478019 - Set fir warning when DAC limit is reached
// vbr19081300 |vbr     | Removed mult_int16 (not needed for ppe42x)
// bja19082900 |bja     | Rename rx_dfe_h1_coeff to rx_dfe_clkadj_coeff
// bja19062100 |bja     | Read K from rx_dfe_h1_coeff
// mbs19072500 |mbs     | Removed several calls to set_debug_state to reduce code size
// mbs19062700 |mbs     | HW493492 - Set DFE hysteresis values from 3/6 to 1/3 due to VDAC change
// mbs19062500 |mbs     | HW493492 - Set DFE_FULL_H1_ADJ to 1 due to VDAC change
// mbs19062000 |mbs     | HW493492 - Set DFE_FULL_H1_ADJ to 2
// mbs19061400 |mbs     | HW493492 - Restore DFE_FULL_H1_ADJ to 0
// mbs19060800 |mbs     | HW493492 - Added DFE_FULL_H1_ADJ and set to 2
// cws19053000 |cws     | Changed several function calls to static to make them non global calls
// vbr19051700 |vbr     | HW491892: Updated DAC limits
// vbr19051400 |vbr     | HW491892: Change VDAC from 9-bit SM to 8-bit twos_comp
// mbs19051700 |mbs     | HW491617 - changed K value from 16 to 20
// mbs19051600 |mbs     | HW491617 - separated servo setup for dfe_fast and dfe_full
// mwh19043000 |mwh     | add in set_fir(fir_code_dft_error);
// mbs19041001 |mbs     | Added recal flag to dfe_full function (HW486784)
// vbr19040100 |vbr     | HW483082: Step mini-pr by 1 (<4) when applying dfe clock adjust
// mbs19040201 |mbs     | HW483129 Added assignment of l_h1_vals[0]
// mbs19030500 |mbs     | Changed abort state from 711A to 701F
// vbr19012400 |vbr     | Added debug state for abort
// vbr19012200 |vbr     | Updated function calls
// cws19011300 |cws     | Added servo queue empty check and changed debug states
// mwh19011100 |mwh     | Add () because the || could could cause compare to wrong thing
// vbr18120700 |mwh     | Added rxbist for h1 and dfe max and min and done,
// vbr18111400 |vbr     | Added call to set_fir
// cws18071000 |cws     | Initial Rev
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "servo_ops.h"
#include "eo_common.h"
#include "eo_dfe.h"
#include "io_logger.h"

#include "config_ioo.h"

//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------
//#define DFE_FULL_H1_ADJ   1  // Adjust DFE H1 by this amount after full dfe (ap+an/2)

#define BUILD_DAC_ADDR(__bank__, __quad__, __latch__) (DAC_BASE_ADDR+(__bank__<<5)+(__quad__)+__latch__)
#define DAC_BASE_ADDR rx_ad_latch_dac_n000_addr // 0x01B
#define DAC_END_ADDR  rx_bd_latch_dac_w111_addr // 0x05A
#define DAC_SIZE      ((DAC_END_ADDR - DAC_BASE_ADDR)+1) // ((0x05A - 0x01B) + 1) = 64
#define DAC_WIDTH     rx_ad_latch_dac_n000_width
#define DAC_STARTBIT  rx_ad_latch_dac_n000_startbit
#define DAC_ENDBIT    rx_ad_latch_dac_n000_endbit

#define SET_DFE_DEBUG(...) SET_DFE_DEBUG_IMPL(DFE_VA_NARGS(__VA_ARGS__), __VA_ARGS__)

// These defines will return the number of arguments
#define DFE_VA_NARGS_IMPL(_1, _2, _3, _4, _5, N, ...) N
#define DFE_VA_NARGS(...) DFE_VA_NARGS_IMPL(__VA_ARGS__, 5, 4, 3, 2, 1)

// Uses the found number of arguments to call the correct pound define
#define SET_DFE_DEBUG_IMPL2(count, ...) SET_DFE_DEBUG ## count (__VA_ARGS__)
#define SET_DFE_DEBUG_IMPL(count, ...) SET_DFE_DEBUG_IMPL2(count, __VA_ARGS__)

// Defines based upon the argument count.
#define SET_DFE_DEBUG1 set_debug_state
#define SET_DFE_DEBUG2 SET_DFE_DEBUG_WITH_VALUE

// Sets the debug state and also a mem regs debug dfe address
#if IO_DEBUG_LEVEL < 3
    #define SET_DFE_DEBUG_WITH_VALUE(i_debug_state, i_value) {}
#else
    #define SET_DFE_DEBUG_WITH_VALUE(i_debug_state, i_value) { set_debug_state(i_debug_state);  mem_regs_u16[pg_addr(rx_dfe_debug_addr)] = (i_value); }
#endif


// Amp Meas Servo Op
// AAAA BBBB BCDD DEEE
// A = Mask (Does not include H0) [H3][H2][H1][H0][H-1]
// B = Pattern [H3][H2][H1][H0][H-1]
// C = Bank (A=0, B=1)
// D = Quad (N=0, E=1, S=2, W=3)
// E = Latch (L000=0 ... L111=7)

// Declare servo op arrays as static globals so they are placed in static memory thus reducing code size and complexity.

#define SERVO_OP_MASK_ALL     0xF000 // Allows H3,H2,H1,H-1 to be used as a mask
#define SERVO_OP_AP           0x0100 // Sets H0(1) H-1(0)
#define SERVO_OP_AN           0x0080 // Sets H0(0) H-1(1)
#define SERVO_OP_FILT_AX000XX 0x0000
#define SERVO_OP_FILT_AX001XX 0x0200
#define SERVO_OP_FILT_AX010XX 0x0400
#define SERVO_OP_FILT_AX011XX 0x0600
#define SERVO_OP_FILT_AX100XX 0x0800
#define SERVO_OP_FILT_AX101XX 0x0A00
#define SERVO_OP_FILT_AX110XX 0x0C00
#define SERVO_OP_FILT_AX111XX 0x0E00

typedef enum
{
    QUAD_NORTH = 0x0000,
    QUAD_EAST  = 0x0008,
    QUAD_SOUTH = 0x0010,
    QUAD_WEST  = 0x0018
} QUADRANT;

typedef enum
{
    L000       = 0,
    L001       = 1,
    L010       = 2,
    L011       = 3,
    L100       = 4,
    L101       = 5,
    L110       = 6,
    L111       = 7,
    LATCH_SIZE = 8,
    LXX1_MASK  = 1,
    LXX1_MASK_PDD1 = 4
} LATCH;

typedef enum
{
    BANK_A    = 0,
    BANK_B    = 1,
    BANK_SIZE = 2
} BANK;

typedef enum
{
    PR_A_NS_DATA = 0,
    PR_A_EW_DATA = 1,
    PR_B_NS_DATA = 2,
    PR_B_EW_DATA = 3,
    PR_DATA_SIZE = 4
} PR_DATA;

const static uint16_t SERVO_OPS[8] =
{
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX000XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX001XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX010XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX011XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX100XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX101XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX110XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX111XX
};

const static uint16_t SERVO_OPS_PDD1[8] =
{
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX111XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX011XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX101XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX001XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX110XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX010XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX100XX,
    SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX000XX
};

PK_STATIC_ASSERT(DAC_SIZE == 64);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_A, QUAD_NORTH, L000) == rx_ad_latch_dac_n000_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_A, QUAD_NORTH, L111) == rx_ad_latch_dac_n111_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_A, QUAD_EAST , L000) == rx_ad_latch_dac_e000_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_A, QUAD_EAST , L111) == rx_ad_latch_dac_e111_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_A, QUAD_SOUTH, L000) == rx_ad_latch_dac_s000_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_A, QUAD_SOUTH, L111) == rx_ad_latch_dac_s111_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_A, QUAD_WEST , L000) == rx_ad_latch_dac_w000_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_A, QUAD_WEST , L111) == rx_ad_latch_dac_w111_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_B, QUAD_NORTH, L000) == rx_bd_latch_dac_n000_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_B, QUAD_NORTH, L111) == rx_bd_latch_dac_n111_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_B, QUAD_EAST , L000) == rx_bd_latch_dac_e000_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_B, QUAD_EAST , L111) == rx_bd_latch_dac_e111_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_B, QUAD_SOUTH, L000) == rx_bd_latch_dac_s000_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_B, QUAD_SOUTH, L111) == rx_bd_latch_dac_s111_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_B, QUAD_WEST , L000) == rx_bd_latch_dac_w000_addr);
PK_STATIC_ASSERT(BUILD_DAC_ADDR(BANK_B, QUAD_WEST , L111) == rx_bd_latch_dac_w111_addr);

//------------------------------------------------------------------------------
// Function Definitions
//------------------------------------------------------------------------------

static int32_t rx_eo_dfe_check_dac_limits(t_gcr_addr* i_tgt, uint32_t* l_rc, const uint32_t i_dac_addr,
        const int32_t i_new_val)
{
    const int32_t LOWER_LIMIT = -128;
    const int32_t UPPER_LIMIT =  127;
    int32_t l_return_val = i_new_val;

    if (i_new_val < LOWER_LIMIT)
    {
        l_return_val = LOWER_LIMIT;
        set_fir(fir_code_warning);
        (*l_rc) = warning_code;
    }
    else if (i_new_val > UPPER_LIMIT)
    {
        l_return_val = UPPER_LIMIT;
        set_fir(fir_code_warning);
        (*l_rc) = warning_code;
    }

    return l_return_val;
}

/**
 * @brief Round to reduce bias
 * If the result is positive then we want to add 1 to the rounding, if the result is neg then do nothing
 * - This is due to the twos complement of the negative number. in order to reduce bias
 *
 * @param[in]  i_tgt      Reference to Bus Target
 * @param[out] o_pr_data  Read Mini PR Data Positions
 *
 * @return void
 */
static inline int32_t eo_dfe_round(const int32_t i_val)
{
    // Find the rounded value of (i_val / 2)
    return ((i_val >= 0) ? (i_val + 1) : i_val) >> 1;
}

/**
 * @brief Read hw mini pr and save
 *
 * @param[in]  i_tgt      Reference to Bus Target
 * @param[out] o_pr_data  Read Mini PR Data Positions
 *
 * @return void
 */
static inline void rx_eo_dfe_get_mini_pr(t_gcr_addr* i_tgt, uint32_t o_pr_data[PR_DATA_SIZE])
{
    o_pr_data[PR_A_NS_DATA] = get_ptr_field(i_tgt, rx_a_pr_ns_data);
    o_pr_data[PR_A_EW_DATA] = get_ptr_field(i_tgt, rx_a_pr_ew_data);
    o_pr_data[PR_B_NS_DATA] = get_ptr_field(i_tgt, rx_b_pr_ns_data);
    o_pr_data[PR_B_EW_DATA] = get_ptr_field(i_tgt, rx_b_pr_ew_data);
    return;
}

///**
// * @brief Set hw mini pr
// *
// * @param[in]  i_tgt      Reference to Bus Target
// * @param[out] i_pr_data  Read Mini PR Data Positions
// *
// * @return void
// */
//static inline void rx_eo_dfe_restore_mini_pr(t_gcr_addr *i_tgt, uint32_t i_pr_data[PR_DATA_SIZE])
//{
//    put_ptr_field(i_tgt, rx_a_pr_ns_data, i_pr_data[PR_A_NS_DATA], read_modify_write);
//    put_ptr_field(i_tgt, rx_a_pr_ew_data, i_pr_data[PR_A_EW_DATA], read_modify_write);
//    put_ptr_field(i_tgt, rx_b_pr_ns_data, i_pr_data[PR_B_NS_DATA], read_modify_write);
//    put_ptr_field(i_tgt, rx_b_pr_ew_data, i_pr_data[PR_B_EW_DATA], read_modify_write);
//    return;
//}


/**
 * @brief Calculate DFE Clock Adjust
 *
 * @param[in] i_tgt   Reference to Bus Target
 * @param[in] i_h1    Calculated H1 Value
 * @param[in] i_ap1   AP1 Servo Op Result
 * @param[in] i_ap0   AP0 Servo Op Result
 *
 * @return void
 */
static inline uint32_t  rx_eo_dfe_calc_clk_adj(t_gcr_addr* i_tgt, int32_t i_h1, int32_t i_ap1, int32_t i_ap0,
        int32_t* io_clk_adj)
{
    // Could be a constant, but moved to a mem_reg to enable error injection
    //const int32_t K             = 20; // 8,10,12,14,16 :: we have mini prs which are 1/2 step size, so use 10 * 2 = 20
    const int32_t K             = TwosCompToInt(mem_pg_field_get(rx_dfe_clkadj_coeff), rx_dfe_clkadj_coeff_width); //ppe pg
    int32_t       l_ap          = eo_dfe_round(i_ap1 + i_ap0); // Average AP1 & AP0 = AP
    int32_t       l_new_clk_adj = 0;
    uint32_t      l_rc          = pass_code;
    SET_DFE_DEBUG(0x7030);
    //SET_DFE_DEBUG(0x7030, i_h1); // Enter DFE Calc Clk Adj
    //SET_DFE_DEBUG(0x7030, i_ap1); // Enter DFE Calc Clk Adj
    //SET_DFE_DEBUG(0x7030, i_ap0); // Enter DFE Calc Clk Adj

    // Report AP
    int32_t lane = get_gcr_addr_lane(i_tgt);
    mem_pl_field_put(rx_dfe_ap, lane, l_ap);

    // Never divide by ZERO or negative
    if (l_ap <= 0)
    {
        set_fir(fir_code_warning);
        ADD_LOG(DEBUG_RX_DFE_AP_ZERO_FAIL, i_tgt, i_ap1);
        l_rc = warning_code;
    }
    else if ( i_h1 > 0 )
    {
        // Only allow the clock adjust to grow.
        // - This will prevent the DFE Values + Clk Adjust from oscillating
        l_new_clk_adj = div_uint32(K * i_h1, l_ap); // (K * i_h1) / l_ap

        //SET_DFE_DEBUG(0x7031, l_new_clk_adj); // Grow DFE Clock Adjust
        //SET_DFE_DEBUG(0x7031, *io_clk_adj); // Grow DFE Clock Adjust
        if (l_new_clk_adj > *io_clk_adj)
        {
            *io_clk_adj = l_new_clk_adj;
        }
    }


    //Rxbist check of H1 value -- can not be 0 or less
    //TODO VBR210308 - DFT should be checking H1<X like in check_hvals()
    // and not checking the ClkAdj which can legally be 0 and should never be negative unless there is a code issue
    int rx_dfe_h1_check_en_int = get_ptr(i_tgt, rx_dfe_h1_check_en_addr  , rx_dfe_h1_check_en_startbit  ,
                                         rx_dfe_h1_check_en_endbit);//ppe pl

    if (rx_dfe_h1_check_en_int)
    {
        if ( l_new_clk_adj < 0)
        {
            mem_pl_field_put(rx_dfe_h1_fail, lane, 0b1);
            set_fir(fir_code_dft_error | fir_code_warning);
            ADD_LOG(DEBUG_RX_DFE_NEG_CLK_ADJ_FAIL, i_tgt, l_new_clk_adj);
        }//ppe pl
    }

    //apply to both A and B banks at sametime
    mem_pl_field_put(rx_a_dfe_h1_done, lane, 0b1);//ppe pl
    mem_pl_field_put(rx_b_dfe_h1_done, lane, 0b1);//ppe pl

    SET_DFE_DEBUG(0x7032);
    return l_rc;
}

/**
 * @brief Applying DFE Clock Adjust as a Differential from the Previous DFE Clock Adjust. Must be a positive differential.
 *
 * @param[in]     i_tgt           Reference to Bus Target
 * @param[in/out] i_pr_data       Mini PR Data Positions
 * @param[in]     i_prev_clk_adj  Previous clock adjust
 * @param[in]     i_new_clk_adj   New clock adjust
 *
 * @return void
 */
static inline void rx_eo_dfe_set_clock_adj(t_gcr_addr* i_tgt, uint32_t i_pr_data[PR_DATA_SIZE], int32_t i_prev_clk_adj,
        int32_t i_new_clk_adj, const t_bank i_bank)
{
    SET_DFE_DEBUG(0x7040);
    //SET_DFE_DEBUG(0x7040, i_new_clk_adj);

    // Only apply new clock adjust if it has increased (never go smaller to prevent oscillations)
    if (i_new_clk_adj > i_prev_clk_adj)
    {
        // Step by 1 from old to new clock adjust
        int clk_adj_diff = i_new_clk_adj - i_prev_clk_adj;
        int i;

        for (i = 0; i < clk_adj_diff; i++)
        {
            // Only touch bank A or bank B according to the parameter (HW525009)
            if ( i_bank == bank_a )
            {
                i_pr_data[PR_A_NS_DATA]--;
                put_ptr_field(i_tgt, rx_a_pr_ns_data, i_pr_data[PR_A_NS_DATA], read_modify_write);

                i_pr_data[PR_A_EW_DATA]--;
                put_ptr_field(i_tgt, rx_a_pr_ew_data, i_pr_data[PR_A_EW_DATA], read_modify_write);
            }
            else
            {
                i_pr_data[PR_B_NS_DATA]--;
                put_ptr_field(i_tgt, rx_b_pr_ns_data, i_pr_data[PR_B_NS_DATA], read_modify_write);

                i_pr_data[PR_B_EW_DATA]--;
                put_ptr_field(i_tgt, rx_b_pr_ew_data, i_pr_data[PR_B_EW_DATA], read_modify_write);
            }
        } //for
    } //if(i_new_clk_adj > i_prev_clk_adj)

    SET_DFE_DEBUG(0x7042);
    return;
}

/**
 * @brief Read latch dacs to store latch offset values
 *
 * @param[in]  i_tgt         Reference to Bus Target
 * @param[out] o_loff_array  Previous DAC values from latch offset
 *
 * @return uint32_t. pass_code if success, else error code.
 */
static inline void rx_eo_dfe_read_loff(t_gcr_addr* i_tgt, int16_t o_loff_array[DAC_SIZE])
{
    uint32_t l_dac_addr = DAC_BASE_ADDR;
    uint32_t l_index    = 0;

    for (; l_dac_addr <= DAC_END_ADDR; ++l_dac_addr, ++l_index)
    {
        o_loff_array[l_index] = LatchDacToInt(get_ptr(i_tgt, l_dac_addr, DAC_STARTBIT, DAC_ENDBIT));
    }

    return;
}



/**
 * @brief DFE Fast Servo Measurements (4 Ops)
 *
 * @param[in]  i_tgt      Reference to Bus Target
 * @param[in]  i_loff     Previous DAC values from latch offset
 * @param[out] o_hvals    Found H1/H2/H3 Values
 *
 * @return uint32_t. pass_code if success, else error code.
 */
static uint32_t rx_eo_dfe_fast_servo(t_gcr_addr* i_tgt, int32_t i_loff[4], int32_t o_hvals[3], int32_t* io_clk_adj)
{
    const uint32_t AP01010       = 0;
    const uint32_t AP10010       = 1;
    const uint32_t AP10110       = 2;
    const uint32_t AP11010       = 3;
    uint32_t       l_rc          = pass_code;
    int32_t  l_servo_results[4];
    uint16_t l_servo_ops[4] =
    {
        SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX010XX | SERVO_OP_AP | (BANK_A << 6) | QUAD_NORTH | L010,
        SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX100XX | SERVO_OP_AP | (BANK_A << 6) | QUAD_NORTH | L100,
        SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX101XX | SERVO_OP_AP | (BANK_A << 6) | QUAD_NORTH | L101,
        SERVO_OP_MASK_ALL | SERVO_OP_FILT_AX110XX | SERVO_OP_AP | (BANK_A << 6) | QUAD_NORTH | L110
    };
    SET_DFE_DEBUG(0x7020); // Enter DFE Fast Looper

    // Run Servo Ops
    //SET_DFE_DEBUG(0x7021); // Run Servo Ops


    l_rc = run_servo_ops_and_get_results(
               i_tgt,
               c_servo_queue_amp_meas,
               4,
               l_servo_ops,
               l_servo_results);

    if (l_rc)
    {
        goto function_exit;
    }

    // Remove latch offset from the measurements
    //SET_DFE_DEBUG(0x7022); // Remove Latch Offsets from Servo Ops
    l_servo_results[AP01010] -= i_loff[AP01010];
    l_servo_results[AP10010] -= i_loff[AP10010];
    l_servo_results[AP10110] -= i_loff[AP10110];
    l_servo_results[AP11010] -= i_loff[AP11010];

    // Use the AP measurements to pull out DFE coefficients
    //SET_DFE_DEBUG(0x7023); // Calculate H1/H2/H3
    o_hvals[0] = eo_dfe_round(l_servo_results[AP10110] - l_servo_results[AP10010]);
    o_hvals[1] = eo_dfe_round(l_servo_results[AP11010] - l_servo_results[AP10010]);
    o_hvals[2] = eo_dfe_round(l_servo_results[AP11010] - l_servo_results[AP01010]);
    //SET_DFE_DEBUG(0x7023, o_hvals[0]); // Calculate H1/H2/H3
    //SET_DFE_DEBUG(0x7023, o_hvals[1]); // Calculate H1/H2/H3
    //SET_DFE_DEBUG(0x7023, o_hvals[2]); // Calculate H1/H2/H3

    //SET_DFE_DEBUG(0x7024); // Calculate DFE Clock Adjust
    l_rc = rx_eo_dfe_calc_clk_adj(i_tgt, o_hvals[0], l_servo_results[AP10110], l_servo_results[AP10010], io_clk_adj);

function_exit:
    SET_DFE_DEBUG(0x7025); // Exit DFE Fast Looper
    return l_rc;
}

/**
 * @brief Fast DFE: Apply Found H1/H2/H3 to latches
 *
 * @param[in]  i_tgt         Reference to Bus Target
 * @param[in]  i_loff_array  Previous DAC values from latch offset
 * @param[out] i_hvals       Found H1/H2/H3 Value
 *
 * @return void
 */
static void rx_eo_dfe_fast_apply(t_gcr_addr* i_tgt, uint32_t* l_rc, int16_t i_loff_array[DAC_SIZE], int32_t i_hvals[3],
                                 const t_bank i_bank)
{
    int32_t  l_result   = 0;
    int32_t  l_index    = 0;
    int32_t  l_loop_end = ((DAC_SIZE) / 2) - 1;
    int32_t  l_dac_addr = DAC_BASE_ADDR;
    int32_t  l_dfe_latch_val[8];

    if ( is_p10_dd1() )
    {
        // Workaround for DD1.0
        l_dfe_latch_val[0] = ( i_hvals[2] + i_hvals[1] + i_hvals[0]);
        l_dfe_latch_val[1] = (-i_hvals[2] + i_hvals[1] + i_hvals[0]);
        l_dfe_latch_val[2] = ( i_hvals[2] - i_hvals[1] + i_hvals[0]);
        l_dfe_latch_val[3] = (-i_hvals[2] - i_hvals[1] + i_hvals[0]);
        l_dfe_latch_val[4] = ( i_hvals[2] + i_hvals[1] - i_hvals[0]);
        l_dfe_latch_val[5] = (-i_hvals[2] + i_hvals[1] - i_hvals[0]);
        l_dfe_latch_val[6] = ( i_hvals[2] - i_hvals[1] - i_hvals[0]);
        l_dfe_latch_val[7] = (-i_hvals[2] - i_hvals[1] - i_hvals[0]);
    }
    else
    {
        l_dfe_latch_val[0] = (-i_hvals[2] - i_hvals[1] - i_hvals[0]);
        l_dfe_latch_val[1] = (-i_hvals[2] - i_hvals[1] + i_hvals[0]);
        l_dfe_latch_val[2] = (-i_hvals[2] + i_hvals[1] - i_hvals[0]);
        l_dfe_latch_val[3] = (-i_hvals[2] + i_hvals[1] + i_hvals[0]);
        l_dfe_latch_val[4] = ( i_hvals[2] - i_hvals[1] - i_hvals[0]);
        l_dfe_latch_val[5] = ( i_hvals[2] - i_hvals[1] + i_hvals[0]);
        l_dfe_latch_val[6] = ( i_hvals[2] + i_hvals[1] - i_hvals[0]);
        l_dfe_latch_val[7] = ( i_hvals[2] + i_hvals[1] + i_hvals[0]);
    }

    if ( i_bank == bank_b )
    {
        l_dac_addr = DAC_BASE_ADDR + ((DAC_SIZE) / 2); // Only write half the DACs - bank A or B
        l_index    = ((DAC_SIZE) / 2);
        l_loop_end = DAC_SIZE - 1;
    }

    // Apply the calculated DFE coefficients to each latch
    SET_DFE_DEBUG(0x7050); // Apply Found DFE Coefficients

    for (; l_index <= l_loop_end; ++l_dac_addr, ++l_index)
    {
        // Calculate Result + Add Latch Offset
        l_result = l_dfe_latch_val[(l_index & 0x7)] + (int32_t)i_loff_array[l_index];

        l_result = rx_eo_dfe_check_dac_limits(i_tgt, l_rc, l_dac_addr, l_result);

        if (*l_rc)
        {
            goto function_exit;
        }

        // Convert Int to DAC Value
        int32_t l_dac_val = IntToLatchDac(l_result);

        // Write the final dac value
        put_ptr_fast(i_tgt, l_dac_addr, DAC_ENDBIT, l_dac_val);
    }

function_exit:
    SET_DFE_DEBUG(0x7051); // Exit DFE Fast Looper
    return;
}

/**
 * @brief Check DFE Coefficients
 *
 * @param[in]  i_tgt        Reference to Bus Target
 * @param[out] i_hvals      Found H1/H2/H3
 *
 * @return uint32_t. pass_code if success, else error code.
 */
static int32_t rx_eo_dfe_check_hvals(t_gcr_addr* i_tgt, int32_t i_hvals[3])
{
    int32_t l_rc = pass_code;

    SET_DFE_DEBUG(0x7060); // Exit DFE Fast Looper

    if (i_hvals[0] < -20)
    {
        set_fir(fir_code_warning);
        ADD_LOG(DEBUG_RX_DFE_H1_LIMIT, i_tgt, i_hvals[0]);
        l_rc = warning_code;
    }
    else if (i_hvals[0] > 50)
    {
        set_fir(fir_code_warning);
        ADD_LOG(DEBUG_RX_DFE_H1_LIMIT, i_tgt, i_hvals[0]);
        l_rc = warning_code;
    }

    SET_DFE_DEBUG(0x7061); // Exit DFE Fast Looper
    return l_rc;
}


/**
 * @brief Applys hysteresis and averaging to new result
 *   - If delta is <= uncertainty, average the new & prev result
 *   - If delta is >  uncertainty, take new result
 *
 * @param[in] i_new   New result
 * @param[in] i_prev  Prev result
 *
 * @return Latest Dac Result
 *
 */
static inline int32_t rx_eo_dfe_hysteresis(const int32_t i_new, const int32_t i_prev, bool recal)
{
    const int32_t UNCERTAINTY_AVG  = 4;  // If a change is larger than this value, the result changes to the new value
    const int32_t UNCERTAINTY_HYST =
        2;  // If a change is larger than this value, the result changes to the average of the new and prev values, else it doesn't change

    int32_t result  = i_new;

    if ( recal )
    {
        int32_t delta = abs(i_new - i_prev);

        result = (delta <= UNCERTAINTY_HYST) ? i_prev :    // no change
                 (delta <= UNCERTAINTY_AVG ) ? eo_dfe_round(i_new + i_prev) :  // small change
                 i_new; // large change
    }

    return result;
}

/**
 * @brief Full DFE (32 Measurements per bank)
 *
 * @param[in] i_tgt    Reference to Bus Target
 * @param[in] i_bank   Target bank
 * @param[in] i_recal  True when this is being run in recal (determines hysteresis used)
 * @param[in] i_enable_min_eye_height True when the min eye height checking and logging are enabled
 *
 * @return uint32_t. pass_code if success, else error code.
 */
uint32_t rx_eo_dfe_full(t_gcr_addr* i_tgt, const t_bank i_bank, bool i_recal, bool i_enable_min_eye_height)
{
    // l_bank - enumerated to index and for servo ops + safe if t_bank ever changes
    const uint32_t l_bank      = (i_bank == bank_a) ? BANK_A : BANK_B;
    uint16_t l_servo_ops_full[16];                     // Servo Ops Fully Qualified
    uint16_t* l_ap_servo_ops   = &l_servo_ops_full[0]; // AP Servo Ops
    uint16_t* l_an_servo_ops   = &l_servo_ops_full[8]; // AN Servo Ops
    int32_t  l_ax_results[16];                         // AP & AN Servo Op Results
    int32_t*  l_ap_results     = &l_ax_results[0];     // AP Servo Op Results
    int32_t*  l_an_results     = &l_ax_results[8];     // AN Servo Op Results
    uint32_t l_latch           = L000;                 // Latch Looper
    uint32_t l_rc              = pass_code;              // Return Code
    uint32_t l_dac_addr        = 0;
    uint32_t l_dac_array[LATCH_SIZE];
    uint32_t l_lane            = get_gcr_addr_lane(i_tgt);
    uint32_t dfe_full_h1_adj   = mem_pg_field_get(rx_dfe_full_h1_adj);


    SET_DFE_DEBUG(0x7010); // Enter Full DFE

    uint32_t servo_op_queue_empty         = get_ptr_field(i_tgt, rx_servo_op_queue_empty);
    uint32_t servo_op_queue_results_empty = get_ptr_field(i_tgt, rx_servo_result_queue_empty);

    if (servo_op_queue_empty == 0 || servo_op_queue_results_empty == 0 )
    {
        set_fir(fir_code_warning);
        ADD_LOG(DEBUG_RX_DFE_FULL_SERVO_QUEUE_NOT_EMPTY, i_tgt, 0x0);
        l_rc = warning_code;
        goto function_exit;
    }

    //SET_DFE_DEBUG(0x7011); // Initialize Settings
    rx_eo_servo_setup(i_tgt, SERVO_SETUP_DFE_FULL);
    int rx_dfe_check_en_int = get_ptr(i_tgt, rx_dfe_check_en_addr  , rx_dfe_check_en_startbit  ,
                                      rx_dfe_check_en_endbit); //ppe pl

    // Initialize Min Eye Height tracking before quadrant loop
    int32_t  l_min_height = 127;
    uint32_t l_min_quad   = 0;
    uint32_t l_min_latch  = 0;

    // Quadrant Loop
    // rx_dfe_full_mode
    uint32_t l_quad     = QUAD_NORTH;
    uint32_t l_quad_end = QUAD_WEST;
    uint32_t l_dfe_full_mode = mem_pg_field_get(rx_dfe_full_mode);

    if ( l_dfe_full_mode == 0x1 )
    {
        uint32_t l_dfe_full_quad = mem_pl_field_get(rx_dfe_full_quad, l_lane); // x00, x01, x02, or x03
        l_quad = (l_dfe_full_quad << 3); // x00, x08, x10, or x18
        l_quad_end = l_quad; // Only run one quad

        if ( i_recal && (i_bank == bank_b) )   // Switch only on bank B after first recal
        {
            l_dfe_full_quad = (l_dfe_full_quad + 1) & 0x3; // Rotate to next quadrant on the next call to dfe_full
            mem_pl_field_put(rx_dfe_full_quad, l_lane, l_dfe_full_quad); // Store the next quad value for this lane
        }
    }

    for (; l_quad <= l_quad_end; l_quad += 8)
    {
        //SET_DFE_DEBUG(0x7012, l_quad); // Quadrant Loop
        l_dac_addr = DAC_BASE_ADDR + (l_bank << 5) + l_quad;

        // Customize Servo Ops for Specific Quadrant and Bank
        for (l_latch = L000; l_latch <= L111; ++l_latch)
        {
            if ( is_p10_dd1() )
            {
                l_ap_servo_ops[l_latch] = SERVO_OPS_PDD1[l_latch] | SERVO_OP_AP | ( l_bank << 6) | l_quad | l_latch;
                l_an_servo_ops[l_latch] = SERVO_OPS_PDD1[l_latch] | SERVO_OP_AN | ( l_bank << 6) | l_quad | l_latch;
            }
            else
            {
                l_ap_servo_ops[l_latch] = SERVO_OPS[l_latch]      | SERVO_OP_AP | ( l_bank << 6) | l_quad | l_latch;
                l_an_servo_ops[l_latch] = SERVO_OPS[l_latch]      | SERVO_OP_AN | ( l_bank << 6) | l_quad | l_latch;
            }

            l_dac_array[l_latch] = LatchDacToInt(get_ptr(i_tgt, (l_dac_addr + l_latch), DAC_STARTBIT, DAC_ENDBIT));
        }

        SET_DFE_DEBUG(0x7013); // Run Servo Ops

        l_rc = run_servo_ops_and_get_results(
                   i_tgt,
                   c_servo_queue_amp_meas,
                   16,
                   l_servo_ops_full,
                   l_ax_results);

        if (l_rc)
        {
            goto function_exit;
        }

        // Check for recal abort
        l_rc = check_rx_abort(i_tgt);

        if (l_rc)
        {
            //SET_DFE_DEBUG(0x701F); // DFE Recal Abort
            goto function_exit;
        }

        // Calculate Result
        for (l_latch = L000; l_latch <= L111; ++l_latch)
        {
            //SET_DFE_DEBUG(0x7014, l_latch); // Latch Loop

            // Calculate Results :: DAC Value = (AP???10 - AN???01) / 2
            //SET_DFE_DEBUG(0x7015, l_ap_results[l_latch]); // Calcualte DAC Value
            //SET_DFE_DEBUG(0x7015, l_an_results[l_latch]); // Calcualte DAC Value
            int32_t l_new_val = eo_dfe_round((int32_t)l_ap_results[l_latch] + (int32_t)l_an_results[l_latch]);

            // Calculate the eye height for this latch and save the relevant info if it is the new minimum eye height for this DFE run
            int32_t l_height  = (l_ap_results[l_latch] - l_an_results[l_latch]) / 2; // truncated (round-down)

            if (l_height < l_min_height)
            {
                l_min_height = l_height;
                l_min_quad   = l_quad;
                l_min_latch  = l_latch;
            }

            // HW493492: This dfe full method tends to set DFE H1 a couple steps low.  So for LXX1 latches, add DFE_FULL_H1_ADJ,
            //           and for LXX0 latches, subtract DFE_FULL_H1_ADJ
            if ( is_p10_dd1() )
            {
                // for p10 dd1 the dacs are reversed and inverted, so switch the signs and swap the mask bit
                l_new_val = (l_latch & LXX1_MASK_PDD1) ? (l_new_val - dfe_full_h1_adj) : (l_new_val + dfe_full_h1_adj);
            }
            else
            {
                l_new_val = (l_latch & LXX1_MASK     ) ? (l_new_val + dfe_full_h1_adj) : (l_new_val - dfe_full_h1_adj);
            }

            //SET_DFE_DEBUG(0x7015, l_new_val); // Calcualte DAC Value

            // Get the previous value of the hw dac
            int32_t l_prev_val = (int32_t)l_dac_array[l_latch];

            // Apply a hysteresis to account for uncertainty of servo ops
            //SET_DFE_DEBUG(0x7016, l_prev_val); // Apply Hysteresis
            l_new_val = rx_eo_dfe_hysteresis(l_new_val, l_prev_val, i_recal);
            //SET_DFE_DEBUG(0x7016, l_new_val); // Apply Hysteresis

            l_new_val = rx_eo_dfe_check_dac_limits(i_tgt, &l_rc, (l_dac_addr + l_latch), l_new_val);

            if (l_rc)
            {
                //SET_DFE_DEBUG(0x701F); // DFE Recal Abort
                goto function_exit;
            }

            if (l_new_val != l_prev_val)
            {
                // Convert to dac format
                int32_t l_dac_val = IntToLatchDac(l_new_val);
                //SET_DFE_DEBUG(0x7017, l_dac_val); // Update Latch Dac
                put_ptr_fast(i_tgt, (l_dac_addr + l_latch), DAC_ENDBIT, l_dac_val);
            }
            else
            {
                //SET_DFE_DEBUG(0x7018, 0x0); // Update Latch Dac
            }

            //
            //Rxbist code
            int lane_f = get_gcr_addr_lane(i_tgt);

            if(rx_dfe_check_en_int)
            {
                int check_dfe_max =  TwosCompToInt(mem_pg_field_get(rx_dfe_max_check), rx_dfe_max_check_width); //ppe pg
                int check_dfe_min =  TwosCompToInt(mem_pg_field_get(rx_dfe_min_check), rx_dfe_min_check_width); //ppe pg

                if ((l_new_val >  check_dfe_max) || (l_new_val < check_dfe_min))
                {
                    //begin3
                    mem_pl_field_put(rx_dfe_fail, lane_f, 0b1);//ppe pl
                    set_fir(fir_code_dft_error | fir_code_warning);
                    ADD_LOG(DEBUG_RX_DFE_DAC_LIMIT, i_tgt, l_new_val);
                }//end3
            }

            if (i_bank == bank_a)
            {
                mem_pl_field_put(rx_a_dfe_done, lane_f, 0b1);   //ppe pl
            }
            else
            {
                mem_pl_field_put(rx_b_dfe_done, lane_f, 0b1);
            }

        }//end calculate result - for(latch)

    } // for(quad)

    // Record the last eye height
    if (i_bank == bank_a)
    {
        mem_pl_field_put(rx_a_last_eye_height, l_lane, l_min_height);
    }
    else     //bank_b
    {
        mem_pl_field_put(rx_b_last_eye_height, l_lane, l_min_height);
    }

    // Check and log the min eye height as needed
    if (i_enable_min_eye_height)
    {
        SET_DFE_DEBUG(0x70AA); // Min Eye Height Checks

        // Check if new min eye height for this lane (valid not set or is < old_min_height)
        if ( !mem_pl_field_get(rx_lane_hist_min_eye_height_valid, l_lane)
             || (l_min_height < mem_pl_field_get(rx_lane_hist_min_eye_height, l_lane)) )
        {
            mem_pl_field_put(rx_lane_hist_min_eye_height,       l_lane, l_min_height);
            mem_pl_field_put(rx_lane_hist_min_eye_height_bank,  l_lane, l_bank);  //BANK_A=0, BANK_B=1
            mem_pl_field_put(rx_lane_hist_min_eye_height_latch, l_lane, l_min_latch);
            mem_pl_field_put(rx_lane_hist_min_eye_height_quad,  l_lane, (l_min_quad >> 3));
            mem_pl_bit_set(rx_lane_hist_min_eye_height_valid,   l_lane);
        }

        // Check if new min eye height for group (valid not set or is < old_min_height)
        if ( !mem_pg_field_get(rx_hist_min_eye_height_valid) || (l_min_height < mem_pg_field_get(rx_hist_min_eye_height)) )
        {
            mem_pg_field_put(rx_hist_min_eye_height, l_min_height);
            mem_pg_field_put(rx_hist_min_eye_height_lane, l_lane);
            mem_pg_bit_set(rx_hist_min_eye_height_valid);
        }

        // Bad Lane and DFT checks
        if (l_min_height < mem_pg_field_get(rx_eye_height_min_check))
        {
            mem_pl_bit_set(rx_bad_eye_opt_height, l_lane);
            set_rx_lane_fail(l_lane);
            uint32_t l_fir_code = rx_dfe_check_en_int ? (fir_code_dft_error | fir_code_warning) : fir_code_warning;
            set_fir(l_fir_code);
            ADD_LOG(DEBUG_RX_EYE_HEIGHT_FAIL, i_tgt, l_min_height);
            l_rc = warning_code;
        }
    } //if(i_enable_min_eye_height)

    //SET_DFE_DEBUG(0x7019); // Restore Settings

function_exit:
    SET_DFE_DEBUG(0x701A); // Exit Full DFE

    if (l_rc & rc_warning )
    {
        mem_pl_field_put(rx_dfe_fail, l_lane, 0b1);    //ppe pl
        set_debug_state(0x70EE);
    }

    return l_rc;
}



/**
 * @brief DFE Fast. Performs 4 servo ops, calculates the DFE H1/H2/h3
 *   coefficients, and then will apply the result to both Bank A & B.
 *
 * @param[in] i_gcr_addr   References the unit target
 *
 * @return uint32_t. pass_code if success, else error code.
 *
 */
uint32_t rx_eo_dfe_fast(t_gcr_addr* i_tgt)
{
    const uint32_t CONVERGENCE_LIMIT       = 3;
    const uint32_t MAX_ITERATIONS          = 8;       // Max Iterations
    uint32_t       l_iter                  = 0;       // Current Iteration Number
    uint32_t       l_rc                    = pass_code; // Return Code
    int16_t        l_loff_array[DAC_SIZE];
    int32_t        l_loff_servo[4];
    int32_t        l_hvals[3]              = {0, 0, 0};
    uint32_t       l_pr_data[PR_DATA_SIZE] = {0, 0, 0, 0};
    int32_t        l_h1_vals[2]            = {0, 0};
    int32_t        l_clk_adj[2]            = {0, 0};

    SET_DFE_DEBUG(0x7000); // Enter DFE Fast

    uint32_t servo_op_queue_empty         = get_ptr_field(i_tgt, rx_servo_op_queue_empty);
    uint32_t servo_op_queue_results_empty = get_ptr_field(i_tgt, rx_servo_result_queue_empty);

    if (servo_op_queue_empty == 0 || servo_op_queue_results_empty == 0 )
    {
        set_fir(fir_code_warning);
        ADD_LOG(DEBUG_RX_DFE_FAST_SERVO_QUEUE_NOT_EMPTY, i_tgt, 0x0);
        l_rc = warning_code;
        goto function_exit;
    }

    //SET_DFE_DEBUG(0x7001); // Set Initialize Settings
    rx_eo_servo_setup(i_tgt, SERVO_SETUP_DFE_FAST);

    //SET_DFE_DEBUG(0x7002); // Read Prior PR & Latch DAC Loff Data
    rx_eo_dfe_get_mini_pr(i_tgt, l_pr_data);
    rx_eo_dfe_read_loff(i_tgt, l_loff_array);
    l_loff_servo[0] = l_loff_array[((BANK_A << 5) + QUAD_NORTH + L010)];
    l_loff_servo[1] = l_loff_array[((BANK_A << 5) + QUAD_NORTH + L100)];
    l_loff_servo[2] = l_loff_array[((BANK_A << 5) + QUAD_NORTH + L101)];
    l_loff_servo[3] = l_loff_array[((BANK_A << 5) + QUAD_NORTH + L110)];


    for (l_iter = 0; l_iter < MAX_ITERATIONS; ++l_iter)
    {
        //SET_DFE_DEBUG(0x7003, l_iter); // Iteration Loop

        //SET_DFE_DEBUG(0x7004); // DFE Fast Loop
        l_h1_vals[1] = l_h1_vals[0]; // [1] is previous H1 value calculation
        l_clk_adj[1] = l_clk_adj[0];
        l_rc = rx_eo_dfe_fast_servo(i_tgt, l_loff_servo, l_hvals, &l_clk_adj[0]);

        if (l_rc)
        {
            goto function_exit;
        }

        // Report new coefficients
        int32_t l_lane = get_gcr_addr_lane(i_tgt);
        mem_pl_field_put(rx_h1_coef, l_lane, l_hvals[0]);
        mem_pl_field_put(rx_h2_coef, l_lane, l_hvals[1]);
        mem_pl_field_put(rx_h3_coef, l_lane, l_hvals[2]);

        // Check coefficients
        l_h1_vals[0] = l_hvals[0]; // [0] is current H1 value calculation
        l_rc = rx_eo_dfe_check_hvals(i_tgt, l_hvals);

        if (l_rc)
        {
            goto function_exit;
        }



        // Apply DFE coefficients to bank A
        rx_eo_dfe_fast_apply(i_tgt, &l_rc, l_loff_array, l_hvals, bank_a);

        if (l_rc)
        {
            goto function_exit;
        }

        //SET_DFE_DEBUG(0x7005); // Set DFE Clock Adjust
        rx_eo_dfe_set_clock_adj(i_tgt, l_pr_data, l_clk_adj[1], l_clk_adj[0], bank_a);

        // Put bank B into CDR Slave mode temporarily while we write its DAC registers (HW525009)
        // First disable slave mode on bank A, then enable bank B
        put_ptr_field(i_tgt, rx_pr_slave_mode_a, 0b0, read_modify_write);
        put_ptr_field(i_tgt, rx_pr_slave_mode_b, 0b1, read_modify_write);

        // Apply DFE coefficients to bank B
        rx_eo_dfe_fast_apply(i_tgt, &l_rc, l_loff_array, l_hvals, bank_b);

        if (l_rc)
        {
            goto function_exit;
        }

        //SET_DFE_DEBUG(0x7005); // Set DFE Clock Adjust
        rx_eo_dfe_set_clock_adj(i_tgt, l_pr_data, l_clk_adj[1], l_clk_adj[0], bank_b);

        // Restore CDR Slave mode on bank A (HW525009)
        // First disable slave mode on bank B, then enable bank A
        put_ptr_field(i_tgt, rx_pr_slave_mode_b, 0b0, read_modify_write);
        put_ptr_field(i_tgt, rx_pr_slave_mode_a, 0b1, read_modify_write);


        // DFE convergence criteria
        // - Skip on the first iteration as there is no previous data to compare to.
        // - Break if DFE H1 Coefs are within bounds on back to back iterations
        //SET_DFE_DEBUG(0x7006, l_h1_vals[0]); // DFE Convergence
        //SET_DFE_DEBUG(0x7006, l_h1_vals[1]); // DFE Convergence
        if (l_iter != 0 && (abs(l_h1_vals[0] - l_h1_vals[1]) <= CONVERGENCE_LIMIT))
        {
            //SET_DFE_DEBUG(0x7007); // DFE Converged
            break;
        }
    }

    if (l_iter >= MAX_ITERATIONS)
    {
        //SET_DFE_DEBUG(0x7008); // DFE Max Iterations

        mem_pl_field_put(rx_a_bad_dfe_conv, get_gcr_addr_lane(i_tgt), 1);

        set_fir(fir_code_warning);
        ADD_LOG(DEBUG_RX_DFE_NO_CONVERGANCE, i_tgt, 0x0);
        l_rc = warning_code;
    }

function_exit:
    //SET_DFE_DEBUG(0x7009); // Restore Settings
    //rx_eo_dfe_restore_mini_pr(i_tgt, l_pr_data);

    SET_DFE_DEBUG(0x700A); // Exit DFE Fast
    return l_rc;
}


uint32_t rx_eo_dfe_force(t_gcr_addr* i_tgt)
{
    uint32_t       l_rc                    = pass_code; // Return Code
    int32_t        l_hvals[3]              = {6, 2, 1};
    int16_t        l_loff_array[DAC_SIZE];

    rx_eo_dfe_read_loff(i_tgt, l_loff_array);


    // Apply DFE coefficients to bank A
    rx_eo_dfe_fast_apply(i_tgt, &l_rc, l_loff_array, l_hvals, bank_a);

    // Put bank B into CDR Slave mode temporarily while we write its DAC registers (HW525009)
    // First disable slave mode on bank A, then enable bank B
    put_ptr_field(i_tgt, rx_pr_slave_mode_a, 0b0, read_modify_write);
    put_ptr_field(i_tgt, rx_pr_slave_mode_b, 0b1, read_modify_write);

    rx_eo_dfe_fast_apply(i_tgt, &l_rc, l_loff_array, l_hvals, bank_b);

    // Restore CDR Slave mode on bank A (HW525009)
    // First disable slave mode on bank B, then enable bank A
    put_ptr_field(i_tgt, rx_pr_slave_mode_b, 0b0, read_modify_write);
    put_ptr_field(i_tgt, rx_pr_slave_mode_a, 0b1, read_modify_write);
    return l_rc;
}

