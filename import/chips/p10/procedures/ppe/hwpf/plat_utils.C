/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/plat_utils.C $           */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2011,2020                                                    */
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
/**
 *  @file plat_utils.C
 *  @brief Implements fapi2 common utilities
 */

#include <stdint.h>
//F2//#include <utils.H>
//F2//#include <plat_trace.H>
#include <return_code.H>
//F2//#include <error_info.H>
//F2//#include <assert.h>

namespace fapi2
{

//PLAT NOTE//
//dont know what these logError routines for,
//but we dont need them on this ppe platform

//F2/////
//F2///// @brief Log an error.
//F2/////
//F2//void logError(
//F2//    fapi2::ReturnCode& io_rc,
//F2//    fapi2::errlSeverity_t i_sev,
//F2//    bool i_unitTestError)
//F2//{
//F2//    // To keep the compiler from complaing about i_sevbeing unused.
//F2//    static_cast<void>(i_sev);
//F2//    static_cast<void>(i_unitTestError);
//F2//
//F2//    FAPI_DBG("logging 0x%lx.", uint64_t(io_rc));
//F2//
//F2//    // Iterate over the vectors and output what is in them.
//F2//    const ErrorInfo* ei = io_rc.getErrorInfo();
//F2//
//F2//    FAPI_DBG("ffdcs: %lu", ei->iv_ffdcs.size());
//F2//
//F2//    for( auto i = ei->iv_ffdcs.begin(); i != ei->iv_ffdcs.end(); ++i )
//F2//    {
//F2//        uint32_t sz;
//F2//        (*i)->getData(sz);
//F2//        FAPI_DBG("\tid: 0x%x size %d", (*i)->getFfdcId(), sz);
//F2//    }
//F2//
//F2//    FAPI_DBG("hwCallouts: %lu", ei->iv_hwCallouts.size());
//F2//
//F2//    for( auto i = ei->iv_hwCallouts.begin(); i != ei->iv_hwCallouts.end();
//F2//         ++i )
//F2//    {
//F2//        FAPI_DBG("\thw: %d pri %d target: 0x%lx",
//F2//                 (*i)->iv_hw, (*i)->iv_calloutPriority,
//F2//                 (*i)->iv_refTarget.get());
//F2//    }
//F2//
//F2//    FAPI_DBG("procedureCallouts: %lu", ei->iv_procedureCallouts.size());
//F2//
//F2//    for( auto i = ei->iv_procedureCallouts.begin();
//F2//         i != ei->iv_procedureCallouts.end(); ++i )
//F2//    {
//F2//        FAPI_DBG("\tprocedure: %d pri %d",
//F2//                 (*i)->iv_procedure, (*i)->iv_calloutPriority);
//F2//    }
//F2//
//F2//    FAPI_DBG("busCallouts: %lu", ei->iv_busCallouts.size());
//F2//
//F2//    for( auto i = ei->iv_busCallouts.begin(); i != ei->iv_busCallouts.end();
//F2//         ++i )
//F2//    {
//F2//        FAPI_DBG("\tbus: t1: 0x%lx t2: 0x%lx pri: %d",
//F2//                 (*i)->iv_target1.get(), (*i)->iv_target2.get(),
//F2//                 (*i)->iv_calloutPriority);
//F2//    }
//F2//
//F2//
//F2//    FAPI_DBG("cdgs: %lu", ei->iv_CDGs.size());
//F2//
//F2//    for( auto i = ei->iv_CDGs.begin(); i != ei->iv_CDGs.end(); ++i )
//F2//    {
//F2//        FAPI_DBG("\ttarget: 0x%lx co: %d dc: %d gard: %d pri: %d",
//F2//                 (*i)->iv_target.get(),
//F2//                 (*i)->iv_callout,
//F2//                 (*i)->iv_deconfigure,
//F2//                 (*i)->iv_gard,
//F2//                 (*i)->iv_calloutPriority);
//F2//
//F2//    }
//F2//
//F2//    FAPI_DBG("childrenCDGs: %lu", ei->iv_childrenCDGs.size());
//F2//
//F2//    for( auto i = ei->iv_childrenCDGs.begin();
//F2//         i != ei->iv_childrenCDGs.end(); ++i )
//F2//    {
//F2//        FAPI_DBG("\tchildren: parent 0x%lx co: %d dc: %d gard: %d pri: %d",
//F2//                 (*i)->iv_parent.get(),
//F2//                 (*i)->iv_callout,
//F2//                 (*i)->iv_deconfigure,
//F2//                 (*i)->iv_gard,
//F2//                 (*i)->iv_calloutPriority);
//F2//    }
//F2//
//F2//    FAPI_DBG("traces: %lu", ei->iv_traces.size());
//F2//
//F2//    for( auto i = ei->iv_traces.begin(); i != ei->iv_traces.end(); ++i )
//F2//    {
//F2//        FAPI_DBG("\ttraces: 0x%x", (*i)->iv_eiTraceId);
//F2//    }
//F2//
//F2//    // Release the ffdc information now that we're done with it.
//F2//    io_rc.forgetData();
//F2//
//F2//}
//F2//
//F2//// will do the same as log error here in fapi2 plat implementation
//F2//void createPlatLog(
//F2//    fapi2::ReturnCode& io_rc,
//F2//    fapi2::errlSeverity_t i_sev)
//F2//{
//F2//    FAPI_DBG("Called createError()" );
//F2//    logError(io_rc, i_sev, false);
//F2//}
//F2//
//F2/////
//F2///// @brief Associate an error to PRD PLID.
//F2/////
//F2//void log_related_error(
//F2//    const Target<TARGET_TYPE_ALL>& i_target,
//F2//    fapi2::ReturnCode& io_rc,
//F2//    const fapi2::errlSeverity_t i_sev,
//F2//    const bool i_unitTestError )
//F2//{
//F2//    FAPI_DBG("Called log_related_error()" );
//F2//    // Just commit the log in default implementation
//F2//    logError( io_rc, i_sev, i_unitTestError );
//F2//} // end log_related_error

///
/// @brief Delay this thread.
///
ReturnCode delay(uint64_t i_nanoSeconds, uint64_t i_simCycles, bool i_fixed = false)
{
    // void statements to keep the compiler from complaining
    // about unused variables.
    static_cast<void>(i_nanoSeconds);
    static_cast<void>(i_simCycles);

//TODO REMOVE LINE BELOW DAVID PK TO IOTA
//Currently this function is doing NOP
//Need to study and implement how QME timebase converts to delay with iota instead of pk
#define __FAPI_DELAY_SIM__

#ifndef __FAPI_DELAY_SIM__

#define PK_NANOSECONDS_SBE(n) ((PkInterval)((PK_BASE_FREQ_HZ * (PkInterval)(n)) / (1024*1024*1024)))

    PkMachineContext  ctx;
    PkTimebase  stamp_time        = 0;
    PkTimebase  target_time       = 0;
    PkTimebase  current_time_high = 0;
    PkTimebase  current_time_low  = 0;

    // Only execute if nanoSeconds is non-zero (eg a real wait)
    if (i_nanoSeconds)
    {
        // @todo For SBE applications, the time accuracy can be traded off
        // for space with the PK_NANOSECONDS_SBE implemenation as the compiler
        // use shift operations for the unit normalizing division.

        // The critical section enter/exit set is done to ensure the timebase
        // operations are non-interrupible.

        pk_critical_section_enter(&ctx);
        //
        // The "accurate" version is the next line.
        // target_time = pk_timebase_get() + PK_INTERVAL_SCALE(PK_NANOSECONDS(i_nanoSeconds));

        stamp_time  = pk_timebase_get();
        target_time = stamp_time + PK_INTERVAL_SCALE(PK_NANOSECONDS_SBE(i_nanoSeconds));

        do
        {
            current_time_low = pk_timebase_get();

            // Lower 32-bit HW timebase wraps if the old sample is bigger than new one
            // If this occurs, increment the local upper 32-bit timebase bits
            // This assumes the timebase is sampled faster than it can rollover
            if (stamp_time >= current_time_low)
            {
                current_time_high += 0x100000000ull;
            }

            // remember the current time to compare against for the next loop
            stamp_time = current_time_low;
        }

        // form a new 64-bit number to compare against using the high and low halves
        while (target_time > (current_time_low | current_time_high));

        pk_critical_section_exit(&ctx);
    }

#else

    // Execute a tight loop that simply counts down the i_simCycles
    // value.

    // @todo This can might be optimized with a fused compare branch loop
    //    Note, though, that subwibnz instruction is optimized for word
    //      operations.   i_simCycles are uint64_t values so the upper
    //      word values needs to be accounted for.
    //
    //  Need to determine if this optimization is worth the effort.

#ifndef __FAPI_DELAY_PPE_SIM_CYCLES__
#define __FAPI_DELAY_PPE_SIM_CYCLES__ 8
#endif

    static const uint8_t NUM_OVERHEAD_INSTRS = 15;
    static const uint8_t NUM_LOOP_INSTRS = 4;
    static const uint64_t MIN_DELAY_CYCLES =
        ((NUM_OVERHEAD_INSTRS + NUM_LOOP_INSTRS) * __FAPI_DELAY_PPE_SIM_CYCLES__);

    uint64_t l_adjusted_simcycles;

    if (i_simCycles < MIN_DELAY_CYCLES)
    {
        l_adjusted_simcycles = MIN_DELAY_CYCLES;
    }
    else
    {
        l_adjusted_simcycles = i_simCycles;
    }

    uint64_t delay_loop_count =
        ((l_adjusted_simcycles - (NUM_OVERHEAD_INSTRS * __FAPI_DELAY_PPE_SIM_CYCLES__)) /
         (NUM_LOOP_INSTRS * __FAPI_DELAY_PPE_SIM_CYCLES__));


    for (auto i = delay_loop_count; i > 0; --i)
    {
        asm("");
    }

#endif

    // replace with platform specific implementation
    return FAPI2_RC_SUCCESS;
}

///
/// @brief Assert a condition, and halt
///
/// @param[in] a boolean representing the assertion
///
//F2//void Assert(bool i_expression)
//F2//{
//F2//    assert(i_expression);
//F2//}

} // namespace fapi2


//PLAT EXTRA//

/// Byte-reverse a 16-bit integer if on a little-endian machine

uint16_t
revle16(uint16_t i_x)
{
    uint16_t rx;

#ifndef _BIG_ENDIAN
    uint8_t* pix = (uint8_t*)(&i_x);
    uint8_t* prx = (uint8_t*)(&rx);

    prx[0] = pix[1];
    prx[1] = pix[0];
#else
    rx = i_x;
#endif

    return rx;
}

/// Byte-reverse a 32-bit integer if on a little-endian machine

uint32_t
revle32(uint32_t i_x)
{
    uint32_t rx;

#ifndef _BIG_ENDIAN
    uint8_t* pix = (uint8_t*)(&i_x);
    uint8_t* prx = (uint8_t*)(&rx);

    prx[0] = pix[3];
    prx[1] = pix[2];
    prx[2] = pix[1];
    prx[3] = pix[0];
#else
    rx = i_x;
#endif

    return rx;
}


/// Byte-reverse a 64-bit integer if on a little-endian machine

uint64_t
revle64(const uint64_t i_x)
{
    uint64_t rx;

#ifndef _BIG_ENDIAN
    uint8_t* pix = (uint8_t*)(&i_x);
    uint8_t* prx = (uint8_t*)(&rx);

    prx[0] = pix[7];
    prx[1] = pix[6];
    prx[2] = pix[5];
    prx[3] = pix[4];
    prx[4] = pix[3];
    prx[5] = pix[2];
    prx[6] = pix[1];
    prx[7] = pix[0];
#else
    rx = i_x;
#endif

    return rx;
}

//PLAT END//
