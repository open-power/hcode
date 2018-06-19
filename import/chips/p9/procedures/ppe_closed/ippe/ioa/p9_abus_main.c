/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/ippe/ioa/p9_abus_main.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
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
///
/// @file p9_a_main.c
/// @brief Abus Image
///-----------------------------------------------------------------------------
/// *HWP HWP Owner        : Chris Steffen <cwsteffen@us.ibm.com>
/// *HWP HWP Backup Owner : Gary Peterson <garyp@us.ibm.com>
/// *HWP FW Owner         : Jamie Knight <rjknight@us.ibm.com>
/// *HWP Team             : IO
/// *HWP Level            : 3
/// *HWP Consumed by      : FSP:HB
///-----------------------------------------------------------------------------
///
/// @verbatim
/// Handles HW446279
///
/// @endverbatim
///----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//  Includes
//-----------------------------------------------------------------------------
#include "pk.h"
#include "io_lib.h"
#include "p9_a_common.h"

#define INITIAL_TIMEBASE   0
#define HANG_PULSE_FREQ_HZ 31250000 // ioo
#define KERNEL_STACK_SIZE  512

uint8_t G_kernel_stack[KERNEL_STACK_SIZE];

enum Bank
{
    BankA = 0x00,
    BankB = 0x01
};

void wait_ns(uint32_t i_ns);
void powerDownBank(t_gcr_addr* gcr_addr, uint32_t iBankPowerDown);
void disableBank(t_gcr_addr* gcr_addr, uint32_t iBankPowerDown);

// The main function is called by the boot code
int main(int argc, char** argv)
{
    // initializes kernel data (stack, threads, timebase, timers, etc.)
    pk_initialize(
        (PkAddress)G_kernel_stack,
        KERNEL_STACK_SIZE,
        0,                           // initial_timebase
        HANG_PULSE_FREQ_HZ);         // timebase_frequency_hz

    // Form gcr_addr structure
    t_gcr_addr gcr_addr;
    set_gcr_addr(&gcr_addr, 0, 0, 0); // RX lane 0

    // Initialize Work Regs
    localPut(WORK1_REG, 0x0000000000000000);
    localPut(WORK2_REG, 0x1234567800000000);

    // Initialize GCR Address
    set_gcr_addr_lane  (&gcr_addr, 0x0     );
    set_gcr_addr_reg_id(&gcr_addr, rx_group);

    uint32_t currentRecalAbort = 0x0;
    uint32_t count             = 0x0;
    uint32_t state             = 0x0;
    uint64_t work1Data         = 0x0;
    uint64_t work2Data         = 0x0;
    uint32_t workDoneCnt       = 0x0;

    while(1)
    {
        // state 0x00 :: Idle, have not seen a recal abort (Or have not seen a recal abort in a while)
        // state 0x01 :: Recal Abort is high for the first time.
        //   At this point if we see a second recal abort then we will enter the workaround

        // Poll for Issue
        currentRecalAbort = get_ptr_field(&gcr_addr, rx_recal_abort_active); // DL

        // Enter here if we see the recal abort going high for the first time:
        if ((currentRecalAbort == 1) && (state == 0x00))
        {
            state = 0x01;
            wait_ns(2000); // Wait for 2us
            count = 0x0;
        }
        // If recal abort has been asserted twice within the time limit, enter the workaround:
        else if ((currentRecalAbort == 1) && (state == 0x01))
        {
            // Stop auto recal
            put_ptr_field(&gcr_addr, rx_rc_enable_auto_recal, 0x0, read_modify_write);

            // Wait for servo ops to finish.
            while(get_ptr_field(&gcr_addr, rx_servo_done) == 0x0);

            uint32_t bankPowerDown = BankA;
            uint32_t loopCount = 0;
            uint32_t bankARecalAbortCnt = 0;
            uint32_t bankBRecalAbortCnt = 0;
            bool badBankFound = false;
            localPut(WORK2_REG, 0xDEADFFFF00000000);

            // Workaround Loop:
            // - We will switch back and forth powering down lanes 0-10 or 13-23 until
            //     we see 2 recal aborts while having a specific bank powered down.
            // - Once we see 2 recal aborts having a specific bank powered down,
            //     we know that the other lane has the 'bad' lane/lanes.
            do
            {
                powerDownBank(&gcr_addr, bankPowerDown);
                wait_ns(2000000); // Wait for 2ms

                for(count = 0; count < 10000; ++count) // Write(530.67ns), RMW(1101ns), Read(1132ns)
                {
                    currentRecalAbort = get_ptr_field(&gcr_addr, rx_recal_abort_active); // DL

                    if(currentRecalAbort)
                    {
                        if(bankPowerDown == BankA)
                        {
                            bankBRecalAbortCnt += 1;
                        }
                        else
                        {
                            bankARecalAbortCnt += 1;
                        }
                    }

                    if((bankARecalAbortCnt > 1) || (bankBRecalAbortCnt > 1))
                    {
                        badBankFound = true;
                        break;
                    }
                }

                ++loopCount;
                bankPowerDown = (bankPowerDown == BankA) ? BankB : BankA;
            }
            while(!badBankFound);

            // Power down the bank with the bad lane/lanes
            powerDownBank(&gcr_addr, bankPowerDown);

            // Disable the bad bank so we don't run recal on those lanes
            disableBank(&gcr_addr, bankPowerDown);

            // Enable auto recal
            put_ptr_field(&gcr_addr, rx_rc_enable_auto_recal, 0x1, read_modify_write);

            if(workDoneCnt != 0xF)
            {
                workDoneCnt += 0x1;
            }

            work1Data = (work1Data & 0x0FFFFFFF00000000) | (((uint64_t)workDoneCnt       << 60) & 0xF000000000000000);
            work1Data = (work1Data & 0xFFFF000000000000) | (((uint64_t)(mfspr(SPRN_DEC)) << 32) & 0x0000FFFF00000000);
            work2Data = (((uint64_t)loopCount << 32) & 0xFFFFFFFF00000000);
            localPut(WORK1_REG, work1Data);
            localPut(WORK2_REG, work2Data);

            wait_ns(200000); // Wait for 200us

            currentRecalAbort = 0x0;
            count             = 0x0;
            state             = 0x0;
        }
        else if((count > 26500) && (state == 0x01) ) // 30ms
        {
            currentRecalAbort = 0x0;
            state             = 0x0;
            count             = 0x0;

            work1Data = (work1Data & 0xFFF0FFFF00000000) | (0x0001000000000000);
            localPut(WORK1_REG, work1Data);
        }
        else if(state == 0x01)
        {
            ++count;
        }
    }

    return 0;
}


/**
 * @brief Wait for a certain amount of time.  The user has to be aware that
 *   we can't use a value greater than the decrementer size.
 * @param[in]  i_ns  Time to wait in ns
 * @return void
 **/
void wait_ns(uint32_t i_ns)
{
    // Timebase clock is at 31.25Mhz
    // 1/31.25Mhz = 32ns
    const uint32_t stopValue = 0xFFFFFFFF - (i_ns / 32);

    // Clear all of ther decrementor interrupts
    mtspr(SPRN_TSR, TSR_DIS);

    // Use external timebase clock
    mtspr(SPRN_TCR, TCR_DS);

    // Write max value to the decrememntor so we don't underflow
    mtspr(SPRN_DEC, 0xFFFFFFFF);

    // Stay in while loop until decrementer ticks are met
    while(mfspr(SPRN_DEC) > stopValue);

    return;
}

void powerDownBank(t_gcr_addr* gcr_addr, uint32_t iBankPowerDown)
{
    const uint32_t START_LANE = (iBankPowerDown == BankB) ? 0  : 13;
    const uint32_t END_LANE   = (iBankPowerDown == BankB) ? 11 : 24;

    // Power Down All Lanes
    set_gcr_addr_lane(gcr_addr, 0x1F);
    put_ptr_field(gcr_addr, rx_lane_ana_pdwn, 0x01, fast_write);
    set_gcr_addr_lane(gcr_addr, 0x00);

    uint32_t lane = 0x0;

    // Power Up Specifc Lanes
    for(lane = START_LANE; lane < END_LANE; ++lane)
    {
        set_gcr_addr_lane(gcr_addr, lane);
        put_ptr(gcr_addr, rx_dac_cntl1_eo_pl_addr, rx_dac_cntl1_eo_pl_startbit, rx_dac_cntl1_eo_pl_endbit, 0x0000, fast_write);
    }

    set_gcr_addr_lane(gcr_addr, 0);
    return;
}

void disableBank(t_gcr_addr* gcr_addr, uint32_t iBankPowerDown)
{
    const uint32_t START_LANE = (iBankPowerDown == BankA) ? 0  : 13;
    const uint32_t END_LANE   = (iBankPowerDown == BankA) ? 11 : 24;

    uint32_t lane = 0x0;

    // Disable certain lanes to ensure we don't run recal on these lanes
    for(lane = START_LANE; lane < END_LANE; ++lane)
    {
        set_gcr_addr_lane(gcr_addr, lane);
        put_ptr_field(gcr_addr, rx_lane_disabled, 0x01, fast_write);
    }

    set_gcr_addr_lane(gcr_addr, 0);
    return;
}
