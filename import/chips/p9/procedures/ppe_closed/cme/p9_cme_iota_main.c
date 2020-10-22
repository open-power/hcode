/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/p9_cme_iota_main.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017,2020                                                    */
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
#include "iota.h"
#include "iota_trace.h"

#include "cmehw_common.h"
#include "cme_register_addresses.h"

// CME Pstate Header and Structure
#include "p9_cme.h"

CmeRecord G_cme_record = {0, 0, 0};

// CME Pstate Header and Structure
#include "p9_cme_pstate.h"
CmePstateRecord G_cme_pstate_record __attribute__((section (".dump_ptr_pstate")));

// CME Stop Header and Structure
#include "p9_cme_stop.h"
CmeStopRecord G_cme_stop_record __attribute__((section (".dump_ptr_stop"))) = {{0}, {0}, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, {0}};

#if !DISABLE_PERIODIC_CORE_QUIESCE && (NIMBUS_DD_LEVEL == 20 || NIMBUS_DD_LEVEL == 21 || CUMULUS_DD_LEVEL == 10)
CmeFitRecord G_cme_fit_record = {0, 0, 0, 0, 0xFFFFFFFF, 0};
#endif


void p9_cme_pstate_db0_comm_recv_intercme_in0_pending_counter();

uint32_t G_CME_LCL_EINR      = CME_LCL_EINR;
uint32_t G_CME_LCL_EISR      = CME_LCL_EISR;
uint32_t G_CME_LCL_EISR_CLR  = CME_LCL_EISR_CLR;
uint32_t G_CME_LCL_EISR_OR   = CME_LCL_EISR_OR;
uint32_t G_CME_LCL_EIMR_CLR  = CME_LCL_EIMR_CLR;
uint32_t G_CME_LCL_EIMR_OR   = CME_LCL_EIMR_OR;
uint32_t G_CME_LCL_EIPR_CLR  = CME_LCL_EIPR_CLR;
uint32_t G_CME_LCL_EIPR_OR   = CME_LCL_EIPR_OR;
uint32_t G_CME_LCL_EITR_OR   = CME_LCL_EITR_OR;
uint32_t G_CME_LCL_FLAGS     = CME_LCL_FLAGS;
uint32_t G_CME_LCL_FLAGS_CLR = CME_LCL_FLAGS_CLR;
uint32_t G_CME_LCL_FLAGS_OR  = CME_LCL_FLAGS_OR;
uint32_t G_CME_LCL_SRTCH0    = CME_LCL_SRTCH0;
uint32_t G_CME_LCL_SRTCH1    = CME_LCL_SRTCH1;
uint32_t G_CME_LCL_TSEL      = CME_LCL_TSEL;
uint32_t G_CME_LCL_TBR       = CME_LCL_TBR;
uint32_t G_CME_LCL_DBG       = CME_LCL_DBG;
uint32_t G_CME_LCL_LMCR      = CME_LCL_LMCR;
uint32_t G_CME_LCL_LMCR_CLR  = CME_LCL_LMCR_CLR;
uint32_t G_CME_LCL_LMCR_OR   = CME_LCL_LMCR_OR;
uint32_t G_CME_LCL_ICSR      = CME_LCL_ICSR;
uint32_t G_CME_LCL_ICRR      = CME_LCL_ICRR;
uint32_t G_CME_LCL_ICCR_CLR  = CME_LCL_ICCR_CLR;
uint32_t G_CME_LCL_ICCR_OR   = CME_LCL_ICCR_OR;
uint32_t G_CME_LCL_SISR      = CME_LCL_SISR;
uint32_t G_CME_LCL_SICR_CLR  = CME_LCL_SICR_CLR;
uint32_t G_CME_LCL_SICR_OR   = CME_LCL_SICR_OR;
uint32_t G_CME_LCL_SICR      = CME_LCL_SICR;
uint32_t G_CME_LCL_PSCRS00   = CME_LCL_PSCRS00;
uint32_t G_CME_LCL_PSCRS10   = CME_LCL_PSCRS10;
uint32_t G_CME_LCL_PSCRS20   = CME_LCL_PSCRS20;
uint32_t G_CME_LCL_PSCRS30   = CME_LCL_PSCRS30;


#if !DISABLE_CME_FIT_TIMER

void fit_handler()
{
    data64_t scom_data;
    scom_data.value = 0;

    if( in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_PFET_FIT_INJECTION) )
    {
        // Inject Core 0 as bad
        CME_PUTSCOM_NOP(CPPM_CPMMR_OR, CME_MASK_C0, BIT64(5));
        PK_PANIC(CME_PFET_EXIT_SENSE_FIT_INJECT);
    }

    CME_GETSCOM(PPM_PFSNS, CME_MASK_C0, scom_data);

    if( ( ( ( scom_data.words.upper & BIT32(0) ) == 1 ) &&
          ( ( scom_data.words.upper & BIT32(1) ) == 1 ) ) ||
        ( ( ( scom_data.words.upper & BIT32(0) ) == 0 ) &&
          ( ( scom_data.words.upper & BIT32(1) ) == 0 ) ) )
    {
        PPE_WAIT_CORE_CYCLES(512)
        CME_GETSCOM(PPM_PFSNS, CME_MASK_C0, scom_data);

        if( ( ( ( scom_data.words.upper & BIT32(0) ) == 1 ) &&
              ( ( scom_data.words.upper & BIT32(1) ) == 1 ) ) ||
            ( ( ( scom_data.words.upper & BIT32(0) ) == 0 ) &&
              ( ( scom_data.words.upper & BIT32(1) ) == 0 ) ) )
        {

            CME_PUTSCOM_NOP(CPPM_CPMMR_OR, CME_MASK_C0, BIT64(5));
            PK_PANIC(CME_BAD_PFET);
        }
    }

    CME_GETSCOM(PPM_PFSNS, CME_MASK_C1, scom_data);

    if( ( ( ( scom_data.words.upper & BIT32(0) ) == 1 ) &&
          ( ( scom_data.words.upper & BIT32(1) ) == 1 ) ) ||
        ( ( ( scom_data.words.upper & BIT32(0) ) == 0 ) &&
          ( ( scom_data.words.upper & BIT32(1) ) == 0 ) ) )
    {
        PPE_WAIT_CORE_CYCLES(512)
        CME_GETSCOM(PPM_PFSNS, CME_MASK_C1, scom_data);

        if( ( ( ( scom_data.words.upper & BIT32(0) ) == 1 ) &&
              ( ( scom_data.words.upper & BIT32(1) ) == 1 ) ) ||
            ( ( ( scom_data.words.upper & BIT32(0) ) == 0 ) &&
              ( ( scom_data.words.upper & BIT32(1) ) == 0 ) ) )
        {
            CME_PUTSCOM_NOP(CPPM_CPMMR_OR, CME_MASK_C1, BIT64(6));
            PK_PANIC(CME_BAD_PFET);
        }
    }

    CME_GETSCOM_OR(CPPM_CSAR, CME_MASK_BC, scom_data.value);

    if(BIT32(CPPM_CSAR_FIT_HCODE_ERROR_INJECT) & scom_data.words.upper)
    {
        //PKTRACE("CME FIT ERROR INJECT TRAP");
        PK_PANIC(CME_STOP_ENTRY_TRAP_INJECT);
    }


    mtspr(SPRN_TSR, TSR_FIS);
    //PK_TRACE("FIT Timer Handler");

#if !DISABLE_PERIODIC_CORE_QUIESCE && (NIMBUS_DD_LEVEL == 20 || NIMBUS_DD_LEVEL == 21 || CUMULUS_DD_LEVEL == 10)
    p9_cme_core_livelock_buster();
#endif

    //Handle DB0/Comm_Recv starvation case
    p9_cme_pstate_db0_comm_recv_intercme_in0_pending_counter();
}
#endif //fit handler

#if ENABLE_CME_DEC_TIMER
void dec_handler()
{
    mtspr(SPRN_TSR, TSR_DIS);
    PK_TRACE("DEC Timer Handler");
}
#endif


void p9_cme_hipri_ext_handler(uint32_t task_idx)
{
    //Only look at bits 0,1,2,3, and 5
    uint32_t eisr_subset = in32(G_CME_LCL_EISR) & BITS32(0, 6);
    //exclude bit 4: PGPE Heartbeat lost
    eisr_subset &= ~BIT32(4);

    PK_TRACE_ERR("CME HIGHEST PRIORITY EXCEPTION DETECTED. EISR(0:7) = %02x", eisr_subset >> 24 );

    uint32_t bitnum = cntlz32(eisr_subset);

    if(in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_PM_DEBUG_HALT_ENABLE))
    {
        switch (bitnum)
        {
            case 0:
                PK_PANIC(CME_DEBUGGER_DETECTED);

            case 1:
                PK_PANIC(CME_DEBUG_TRIGGER_DETECTED);

            case 2:
                PK_PANIC(CME_QUAD_CHECKSTOP_DETECTED);

            case 3:
                PK_PANIC(CME_PVREF_FAIL_DETECTED);

            case 5:
                PK_PANIC(CME_CORE_CHECKSTOP_DETECTED);

            default:
                break;
        }
    }

    //if debug halt is NOT enabled, clear the ones reported in the trace
    //above and return
    out32(G_CME_LCL_EISR_CLR, eisr_subset);
}

IOTA_BEGIN_TASK_TABLE
IOTA_TASK(p9_cme_hipri_ext_handler),  // bits 0-3,5
          IOTA_TASK(p9_cme_pstate_db3_handler), // bits 10,11
          IOTA_TASK(p9_cme_pgpe_hb_loss_handler), //bit 4
          IOTA_TASK(p9_cme_stop_db2_handler),   // bits 18,19
          IOTA_TASK(p9_cme_stop_spwu_handler),  // bits 14,15
          IOTA_TASK(p9_cme_stop_rgwu_handler),  // bits 16,17
          IOTA_TASK(p9_cme_stop_pcwu_handler),  // bits 12,13
          IOTA_TASK(p9_cme_stop_enter_handler), // bits 20,21
          IOTA_TASK(p9_cme_stop_db1_handler),   // bits 40,41
          IOTA_TASK(p9_cme_pstate_db0_handler), // bits 36,37
          IOTA_TASK(p9_cme_pstate_intercme_in0_irq_handler), // bit  7
          IOTA_TASK(p9_cme_pstate_pmcr_handler), // bits 34,35
          IOTA_TASK(p9_cme_pstate_intercme_msg_handler), // bit  29
          IOTA_NO_TASK  // Should never see these
          IOTA_END_TASK_TABLE;

int main()
{
    // Register Timer Handlers
#if ENABLE_CME_DEC_TIMER
    IOTA_DEC_HANDLER(dec_handler);
#endif

#if !DISABLE_CME_FIT_TIMER
    IOTA_FIT_HANDLER(fit_handler);
#endif

    // Local timebase frequency comes from an attribute.
    cmeHeader_t* cmeHeader = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);
    uint32_t trace_timebase = cmeHeader->g_cme_timebase_hz;

    if(0 == trace_timebase)
    {
        // if the attribute is not defined, use the default
        trace_timebase = PPE_TIMEBASE_HZ;
    }

    pk_trace_set_freq(trace_timebase);

    // PK_TRACE(">CME MAIN");

    // Clear SPRG0
    ppe42_app_ctx_set(0);

    G_cme_record.core_enabled = in32(G_CME_LCL_FLAGS) &
                                (BIT32(CME_FLAGS_CORE0_GOOD) | BIT32(CME_FLAGS_CORE1_GOOD));
    PK_TRACE("CME Register Partial Good Cores[%d]", G_cme_record.core_enabled);

#if defined(USE_CME_QUEUED_SCOM) || defined(USE_CME_QUEUED_SCAN)
    PK_TRACE("CME Enabling Queued Scom/Scan");
    out32(G_CME_LCL_LMCR_OR, BITS32(8, 2));
#endif

    // PK_TRACE("Set Watch Dog Timer Rate to 6 and FIT Timer Rate to 8");
    out32(G_CME_LCL_TSEL, (BITS32(1, 2) | BIT32(4)));

#if (!DISABLE_CME_FIT_TIMER || ENABLE_CME_DEC_TIMER)

    uint32_t TCR_VAL = 0;

#if !DISABLE_CME_FIT_TIMER
    // PK_TRACE("Enable FIT Timer");
    TCR_VAL |= TCR_FIE;
#endif

#if ENABLE_CME_DEC_TIMER
    // PK_TRACE("Enable DEC Timer");
    TCR_VAL |= TCR_DIE;
#endif

    mtspr(SPRN_TCR, TCR_VAL);

#endif

    // Initialize the Stop state and Pstate tasks
    p9_cme_stop_init();
    p9_cme_pstate_init();

    //sync CME pair after all inits are done and indicate to SGPE
    p9_cme_init_done();

    // start IOTA and never return!
    iota_run();

    return 0;
}
