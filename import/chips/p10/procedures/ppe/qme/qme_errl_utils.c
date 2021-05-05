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

void
qme_errlog()
{
    uint32_t errStatus __attribute__((unused));
    uint16_t module_id   = 1 + ((G_qme_record.errl_panic & 300) >> 8);
    uint8_t  reason_code = (module_id << 4) | ((G_qme_record.errl_panic & 0x180) >> 3);
    uint32_t fault_cores = 0;
    uint32_t timeout = 0;
    uint32_t other_cores = 0xF;

    if( G_qme_record.errl_panic > 0x1d00 &&
        G_qme_record.errl_data2 > 0 &&
        G_qme_record.errl_data2 <= 0xF )
    {
        fault_cores = G_qme_record.errl_data2;
        other_cores &= (~fault_cores);
    }

#if 0
    // Disable - halt QME in phase 1
    // @TODO: error will cause PIGE->Malf on XPGE & then a PM Reset, async
    // How would QME guarantee it will process a special wakeup on sibling cores?

    if( other_cores )
    {
        PK_TRACE ("qme_errlog: spl wkup other cores 0x%08x", other_cores);

        //@TODO: HYP will do this when it gets the Malf Alert? Closing windows?
        //put the other cores into special wake-up;
        out32( QME_LCL_CORE_ADDR_WR( QME_SPWU_OTR, other_cores ), BIT32(0) );

        //enables the auto special wake-up hardware function for the other cores;
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, other_cores ), BIT32(20) );

        //enables the auto STOP hardware function for the other cores;
        out32( QME_LCL_QMCR_OR, BITS32(6, 2) );

        //masks all regular and special wake-up interrupts;
        out32_sh(QME_LCL_EIMR_OR, BITS64SH(32, 24));
        g_eimr_override |= BITS64(32, 24);
    }

#endif

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
        if( fault_cores )
        {
            // If this times out, QME Per-Core SCratch Register (0x200E080C)[1] is set
            out32( QME_LCL_CORE_ADDR_WR(QME_LCL_SCR_OR, fault_cores ), ( BIT32(1) ) );
        }
    }

#if 0
    // Halt QME as part of drop 1
    // Send a PCB Type E interrupt to the XGPE (HW encodes 0b0000)
    uint32_t pig_data    = 0;

    pig_data |= ( PIG_TYPE_E << SHIFT32(4) ) |
                ( G_qme_record.quad_id << SHIFT32(19) );

    qme_send_pig_packet(pig_data);
#else
    // Halt QME  until above is handled
    PK_TRACE_INF ("ELog Status: %d, Fault Cores: 0x%08X -- Now HALTING..",
                  errStatus, fault_cores);

    QME_PANIC_HANDLER (QME_DEBUGGER_TRIGGER_DETECTED);
#endif
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
