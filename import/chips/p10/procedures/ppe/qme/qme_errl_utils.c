/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_errl_utils.c $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2021                                                         */
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
#include "qme.h"
#include "qme_errl_utils.h"

extern QmeRecord G_qme_record;
extern uint64_t g_eimr_override;

// 1) 3 categories of errors that will create errlogs
// a) injection  | setting in pscrs per core to enable/inject
//               |   take place only when injected stop path is exercised
//               |     i.e. stop2/3/11 entry/exit and self restore
//               |   todo: more error scenario can be injected, i.e. spwu, bad scom, etc
//               |   intend to mimic hcd_assert of real error(for per-core stop path) below
//               | errlog created on spot where injection path is exercised
//               | see cleanup/recovery routine below
//               |
// b) hcd_assert | hcode detect errors as certain hw or sw state isnt met as expected
//               |   mostly per core errors(during stop path just like the injection)
//               |   there is also rare errors generic to qme and quad being checked
//               |     todo: currently did not perform errlog inside iota, i.e. stack overflow
//               |   unless protocol error otherwise nothing to assert from special wakeup itself
//               |     but still from the stop exit behind special wakeup
//               | errlog createdon spot with the very state when error is detected
//               | see cleanup/recovery routine below
//               |
// c) exception  | bad scom/local access, memory bolt-on alignement/data/instruction exception
//               |   todo: this can also be considered to be injected.
//               | errlog created at exception handler
//               | see cleanup/recovery routine below
//               |
// 2) Recovery   | Best case outcomes:
// via spwu      |   Worst case is always no special wakeup done for all cores
//               |     as something else could just gone too wrong
//               | [case A]      | EX0:run, Fault | EX1:run, health | support | inject
//               |  auto mode:   |   spwu_Done    |   spwu_Done     |  yes    |  no
//               |  manual mode: |   spwu_Done    |   spwu_Done     |  no     |  no
//               | [case B]      | EX0:run, Fault | EX1:run, Fault  |
//               |  auto mode:   |   spwu_Done    |   spwu_Done     |  yes    |  no
//               |  manual mode: |   spwu_Done    |   spwu_Done     |  no     |  no
//               |
//               | [case C]      | EX0:Stop,Fault | EX1:Stop,health |
//               |  auto mode:   |   spwu_timeout |   spwu_timeout  |  yes    |  no
//               |  manual mode: |   spwu_timeout |   spwu_Done     |  no     |  no
//               | [case D]      | EX0:Stop,Fault | EX1:Stop,Fault  |
//               |  auto mode:   |   spwu_timeout |   spwu_timeout  |  yes    |  no
//               |  manual mode: |   spwu_timeout |   spwu_timeout  |  no     |  no
//               |
//               | [case E]      | EX0:Stop,Fault | EX1:run, health |
//               |  auto mode:   |   spwu_timeout |   spwu_Done     |  yes    |  no
//               |  manual mode: |   spwu_timeout |   spwu_Done     |  no     |  no
//               | [case F]      | EX0:Stop,health| EX1:run, Fault  |
//               |  auto mode:   |   spwu_Done    |   spwu_Done     |  yes    |  no
//               |  manual mode: |   spwu_Done    |   spwu_Done     |  no     |  no
//               | [case G]      | EX0:Stop,Fault | EX1:run, Fault  |
//               |  auto mode:   |   spwu_timeout |   spwu_Done     |  yes    |  no
//               |  manual mode: |   spwu_timeout |   spwu_Done     |  no     |  no
//               |
// net-net, core not in stop can expect spwu_done
//          core not in error but in stop can expect spwu_done with manual mode only
//          otherwise spwu_timeout is inevitable
//
// 3) errlog cleanup
// a)  originally considered exit out error path, resume previous context,
//       idlely, would want to figure out which target triggers the error
//       then continue the rest of the flow with rest of targets without error
//       this is going to be very difficult with parallel multicast targeting.
//       thus not going to be the case, and all targets engaged will be considered with error;
//     therefore, if normal cores(not GA),
//       then all normal cores during this stop entry/exit will be lost.
//       best case 1 core, worst case 4 cores.
//       if fused cores, then either one big core with error(best case), or both(worst case).
//     again note here, the innecent cores are dragged down primarily due to it happened to be
//       processed with the error cores, and cost to figure out which is which is too high on code.
//       all cores will be automatically considered faulty togetehr; otherwise,
//       the recovery outcome is already discussed above if other cores did not participate the
//       current erroring process. Frankly speaking, chance to lose the entire quad is very high.
//         going through stop with fault core, ended up fault, too
//         otherwise, happened to be in stop while no manual mode support for spwu, also dead.
//         the only chance to survive is that the core is otherwise running and auto mode is enabled
// b)  halt qme
//       going to be only useful for lab debug, otherwise it triggers additional unnecessary FW error path
// c1) branch to itself with critical section
//       going to hang qme, the only reason to do this is that this wont trigger additional error as b)
// c2) branch to itself but open critical section
//       again if there are cores in stop to be saved by manual mode, this should do it.
//

void
qme_panic_handler()
{
    // Cannot special wakup stopped cores without QME
    // As default, only select cores that can be auto special woken up
    uint32_t good_cores = 0xF & (~G_qme_record.c_stop2_reached);

    PK_TRACE_DBG ("Cores not in stop: 0x%X", good_cores);

    if( !( G_qme_record.hcode_func_enabled & QME_CONTINUE_SERVICE_ON_PANIC ) )
    {
        if( G_qme_record.errl_panic > 0x1d00 &&
            G_qme_record.errl_data2 > 0 &&
            G_qme_record.errl_data2 <= 0xF )
        {
            PK_TRACE_DBG ("Good cores in user data2: 0x%X", G_qme_record.errl_data2);
            good_cores &= (~G_qme_record.errl_data2);
        }

        PK_TRACE_DBG ("Net good cores not in stop: 0x%X", good_cores);

        if (G_qme_record.fused_core_enabled)
        {
            uint32_t fuse_mask = 0xC;

            for (; fuse_mask; fuse_mask >>= 2)
            {
                uint32_t smt8_core = fuse_mask & good_cores;

                if (smt8_core && (smt8_core != fuse_mask))
                {
                    // one half of the fused core is bad, mark full smt8 bad
                    good_cores &= ~fuse_mask;
                }
            }

            PK_TRACE_DBG ("SMT8 good cores for auto spwu: 0x%X", good_cores);
        }

        //only make spwu_done to good cores (non_stop ones are the only possible ones)
        //so that FW is not confused on fault targets
        if( good_cores )
        {
            //set entry_limit before qme halt
            out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, good_cores ), BIT32(2) );

            // have to clear assert_spwu_done bit first before enable auto mode
            out32 (QME_LCL_CORE_ADDR_WR (QME_SCSR_WO_CLEAR, good_cores), BIT32(16));

            // Enable the auto special wake-up hardware function for good cores
            // Clear AUTO_SPECIAL_WAKEUP_DISABLE
            out32 (QME_LCL_CORE_ADDR_WR (QME_SCSR_WO_CLEAR, good_cores), BIT32(20));
        }

        // Set QME_QMCR_STOP_OVERRIDE_MODE and QME_QMCR_STOP_ACTIVE_MASK
        out32 (QME_LCL_QMCR_OR, BITS32 (6, 2));

        // Mask all regular and special wake-up interrupts
        out32_sh(QME_LCL_EIMR_OR, BITS64SH(32, 24));
        g_eimr_override |= BITS64(32, 24);
    }

    if( in32( QME_LCL_FLAGS ) & BIT32( QME_FLAGS_DEBUG_HALT_ENABLE ) )
    {
        PK_TRACE_DBG ("QME_FLAGS_DEBUG_HALT_ENABLE >> Halting");
        iota_halt();
    }
    else // by default the following will take place instead of halt above
    {
        // if qme halt, then errlog collection will be triggered by just that
        // otherwise signal xgpe to collection the errlog if we dont halt
        // note, we do not want to do both then errlog will be redundant
        // Send a PCB Type E interrupt to the XGPE (HW encodes 0b0000)
        uint32_t pig_data = ( PIG_TYPE_E << SHIFT32(4) );

        PK_TRACE_DBG ("Sending PIG E 0x%08X", pig_data);
        qme_send_pig_packet(pig_data);

        // not enabled by default
        if( G_qme_record.hcode_func_enabled & QME_CONTINUE_SERVICE_ON_PANIC )
        {
            wrteei(1);
        }
        else // by default disable interrupt branch to itself
        {
            wrteei(0);
        }

        PK_TRACE_DBG ("Wait in endless loop .. ");

        while(1);
    }
}

void
qme_errlog()
{
    uint32_t errStatus __attribute__((unused));
    uint16_t module_id   = 1 + ((G_qme_record.errl_panic & 300) >> 8);
    uint8_t  reason_code = (module_id << 4) | ((G_qme_record.errl_panic & 0x180) >> 3);
    uint32_t fault_cores = 0;
    uint32_t timeout = 0;
    uint32_t sprg0 = mfspr(SPRN_SPRG0);
    sprg0 &= 0xFFFF;
    sprg0 |= G_qme_record.errl_panic << 16;
    mtspr(SPRN_SPRG0, sprg0);

    do
    {
        PPE_LOG_ERR_CRITICAL ( reason_code,               // reason code
                               G_qme_record.errl_panic,   // ext reason code
                               module_id,                 // mod id
                               G_qme_record.errl_data0,   // i_userData1,
                               G_qme_record.errl_data1,   // i_userData2,
                               G_qme_record.errl_data2,   // i_userData3
                               NULL,         // no user details
                               NULL,         // no callouts
                               errStatus );  // status

        // try again after Stall QME 50ms timeout
        if (ERRL_STATUS_SUCCESS != errStatus)
        {
            if( !timeout )
            {
                PPE_WAIT_CORE_CYCLES(200000000);
            }

            timeout++;
        }
        else
        {
            break;
        }
    }
    while( timeout < 2 );

    if( timeout == 2 )
    {
        if( G_qme_record.errl_panic > 0x1d00 &&
            G_qme_record.errl_data2 > 0 &&
            G_qme_record.errl_data2 <= 0xF )
        {
            fault_cores = G_qme_record.errl_data2;
        }

        if( fault_cores )
        {
            // If this times out, QME Per-Core SCratch Register (0x200E080C)[1] is set
            out32( QME_LCL_CORE_ADDR_WR(QME_LCL_SCR_OR, fault_cores ), ( BIT32(1) ) );
        }
    }

    PK_TRACE_INF ("ELog Status: %d, Panic Code: %x, Fault Cores: 0x%08X -- Now PANICING..",
                  errStatus, G_qme_record.errl_panic, fault_cores);

    qme_panic_handler();
}

void
qme_machine_check_handler()
{
    uint32_t sprg0 = mfspr(SPRN_SPRG0);
    uint32_t srr1  = mfspr(SPRN_SRR1);
    uint32_t edr   = mfspr(SPRN_EDR);

    // Local access
    if ( ( edr >> SHIFT32(3) ) == 0xC )
    {
        G_qme_record.errl_panic = QME_MACHINE_CHECK_LOCAL_ERROR;
    }

    G_qme_record.errl_panic = QME_MACHINE_CHECK_SCOM_ERROR;
    G_qme_record.errl_data0 = sprg0;
    G_qme_record.errl_data1 = srr1;
    G_qme_record.errl_data2 = edr;

    qme_errlog();
}

void
qme_fault_inject(uint32_t pcscr_bit, uint32_t core_target)
{
    G_qme_record.errl_panic     = (0x1d00 | pcscr_bit);
    G_qme_record.errl_data2     = 0;
    uint32_t core_mask          = 0;

    if( in32( QME_LCL_FLAGS ) & BIT32( QME_FLAGS_FATAL_FAULT_ERR_INJECT ) )
    {
        for( core_mask = 8; core_mask; core_mask = core_mask >> 1 )
        {
            if( ( core_target & core_mask ) &&
                ( BIT32(pcscr_bit) &
                  in32( QME_LCL_CORE_ADDR_AND( QME_LCL_SCR, core_mask ) ) ) )
            {
                G_qme_record.errl_data2 |= core_mask;
            }
        }

        if( G_qme_record.errl_data2 )
        {
            qme_errlog();
        }
    }
}
