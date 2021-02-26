/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_main.C $              */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2021                                                    */
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
#include <fapi2.H>
#include <fapi2_target.H>

extern QmeRecord G_qme_record;
uint32_t G_IsSimics = 0; // extern declared in qme.h
hcode_error_table_t G_qmeElogTable; // QME local Error Log Table

uint64_t pow2(uint32_t num)
{
    uint32_t i; /* Variable used in loop counter */
    uint64_t result = 1;

    for (i = 0; i < num; ++i)
    {
        result *= 2;
    }

    return result;
}

void
qme_attr_init()
{
    uint32_t pir = 0;
    asm volatile ( "mfspr %0, %1 \n\t" : "=r" (pir) : "i" (SPRN_PIR));
    G_qme_record.quad_id = pir & 0xF;
    fapi2::ReturnCode fapiRc = fapi2::plat_TargetsInit(G_qme_record.quad_id);

    if( fapiRc != fapi2::FAPI2_RC_SUCCESS )
    {
        PK_TRACE_ERR("ERROR: FAPI2 Init Failed. HALT QME!");
        QME_PANIC_HANDLER(QME_MAIN_FAPI2_INIT_FAILED);
    }

    //===============

    uint8_t runn_mode      = 0;
    uint8_t contained_type = 0;
    fapi2::Target<fapi2::TARGET_TYPE_SYSTEM>                 l_sys;
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_RUNN_MODE,          l_sys,  runn_mode ) );
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_CONTAINED_IPL_TYPE, l_sys,  contained_type ) );

    if( runn_mode )
    {
        PK_TRACE_INF("RUNN Mode is engaged %x", runn_mode);
        G_qme_record.hcode_func_enabled |= QME_RUNN_MODE_ENABLE;
    }

    if( contained_type != 0)
    {
        PK_TRACE_INF("Contained Mode is engaged %x", contained_type);
        G_qme_record.hcode_func_enabled |= QME_CONTAINED_MODE_ENABLE;
    }

    //===============
    /*
        uint8_t pair_mode = 0;

        FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_FUSED_CORE_PAIRED_MODE_ENABLED, l_sys, pair_mode ) );

        if( ( pair_mode || (G_qme_record.chip_dd_level == 10) ) &&
            ( in32_sh(QME_LCL_QMCR) & BIT64SH(47) ) )
        {
            out32(QME_LCL_QMCR_OR, BIT32(10));
        }
    */

    //===============

    // Time to delay before powering off the MMA due to the lack of MMA instructions.
    // Time = 1ms * 2**ATTR_SYSTEM_MMA_POWEROFF_DELAY_POWEROF2_MS.
    // Values of  0x00 - 0x1B to yield times from 1ms to 24 hours -:
    //     0x00 - 1ms
    //     ...
    //     0x0A - 1 second (default, 2^10)
    //     ...
    //     0x1B - 1 day (2^27)
    //     0x1C - 0xFD - Reserved (maps as 0x1C)
    //     0xFE - every QME FIT timer interrupt (~250us)
    //     0xFF - no power off of MMA (QME Hcode still runs; different behavior

    // Assuming QME Timebase is at 32ns duration (when Nest is at 2GHz)
    //   Ticks * Dec_Val = ( Delay**2 )*1K*1K / 32ns
    // For simplicity, always use 100us as the frequency of
    //   Dec check MMA instruction running and increment ticks if not
#define MMA_ACTIVE_CHECK_OCCUR_NS 1000000
    G_qme_record.mma_pwoff_dec_val = MMA_ACTIVE_CHECK_OCCUR_NS / 32;

    uint8_t  mma_pon_dis  = 0;
    uint8_t  mma_poff_dis = 0;
    uint8_t  mma_powerof2 = 0;
    uint64_t mma_delay_ns = 0;

    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_SYSTEM_MMA_POWEROFF_DELAY_POWEROF2_MS, l_sys, mma_powerof2 ) );
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_SYSTEM_MMA_POWEROFF_DISABLE,           l_sys, mma_poff_dis ) );
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_SYSTEM_MMA_POWERON_DISABLE,            l_sys, mma_pon_dis ) );

    // STICK DD1 to STATIC model until all commits are there, and code tested in DD2.
    mma_pon_dis  = 0;
    mma_poff_dis = 1;

    if( mma_pon_dis )
    {
        PK_TRACE_INF("MMA POWERON DISABLED %x", mma_pon_dis);
        G_qme_record.mma_modes_enabled = MMA_POFF_ALWAYS;
    }
    else if( mma_poff_dis || mma_powerof2 == 0xFF)
    {
        PK_TRACE_INF("MMA POWEROFF DISABLED %x with mma_powerof2 %x", mma_poff_dis, mma_powerof2);
        G_qme_record.mma_modes_enabled = MMA_POFF_STATIC;
    }
    else
    {
        // disable hwp to poweron MMA, EISR[mma_active] will take over
        mma_pon_dis = 1;
        FAPI_TRY( FAPI_ATTR_SET( fapi2::ATTR_SYSTEM_MMA_POWERON_DISABLE, l_sys, mma_pon_dis ) );

        G_qme_record.mma_modes_enabled = MMA_POFF_DYNAMIC;

        if( mma_powerof2 == 0xFE )
        {
            mma_delay_ns = 250000;
        }
        // around down to 1 day if more than 1 day
        else if( mma_powerof2 > 0x1B )
        {
            mma_delay_ns = pow2(0x1B) * 1000000;
        }
        else
        {
            mma_delay_ns = pow2(mma_powerof2) * 1000000;
        }

        PK_TRACE_INF("MMA Dynmatic Engagement with mma_powerof2 %x mma_delay_ns %x",
                     mma_powerof2, mma_delay_ns);
        G_qme_record.mma_pwoff_dec_ticks = mma_delay_ns / MMA_ACTIVE_CHECK_OCCUR_NS;

        // Leave TCR.DS=0 for DEC to tick every ppe cycle for easy math
        // PPE runs on 500MHz, thus 2ns per ppe cycle
        // For EPM uses 100K simcycle timeout, given 1ns = 8 simcycle
        // 6250ns dec countdown thus 250 for spr DEC and 25 dec ticks

        if( in32_sh( QME_LCL_FLAGS ) & BIT64SH( QME_FLAGS_RUNNING_EPM ) )
        {
            G_qme_record.mma_pwoff_dec_ticks = 25;
            G_qme_record.mma_pwoff_dec_val   = 250;
        }
        else
        {
            G_qme_record.mma_pwoff_dec_ticks = 5;
            G_qme_record.mma_pwoff_dec_val = MMA_ACTIVE_CHECK_OCCUR_NS / 32;
        }

        mtspr(SPRN_DEC, G_qme_record.mma_pwoff_dec_val);
    }
}



int
main()
{
#if (POWER10_DD_LEVEL != 0)
#define PVR_CONST (0x421A0000 | (((POWER10_DD_LEVEL ) / 10) << 8) | (POWER10_DD_LEVEL % 10))
#else
#define PVR_CONST 0
#endif

    if (in32(QME_LCL_FLAGS) & BIT32(QME_FLAGS_DEBUG_TRAP_ENABLE))
    {
        PK_TRACE_INF("BREAK: Trap at QME Booted");
        asm volatile ("trap");
    }

    // @note If QME_FLAGS[63] is set .. execution environment is Simics
    if( in32_sh(QME_LCL_FLAGS) & BIT64SH(QME_FLAGS_RUNNING_SIMICS) )
    {
        PK_TRACE ("QME running on Simics");
        G_IsSimics = 1;

        // Disable, as window conditions cause bad path and timeouts in Simics
        G_qme_record.hcode_func_enabled &= ~QME_SELF_SAVE_ENABLE;
    }
    else
    {
        // @TODO - Temp workaround as Simics has a P9 value of PVR
        if(mfspr(287) != PVR_CONST)
        {
            QME_PANIC_HANDLER(QME_BAD_DD_LEVEL);
        }
    }

    // Initialize QME Eror Logging Table & framework
    initErrLogging ((uint8_t) ERRL_SOURCE_QME, &G_qmeElogTable);
    QmeHeader_t* pQmeImgHdr = (QmeHeader_t*)(QME_SRAM_HEADER_ADDR);
    pQmeImgHdr->g_qme_elog_addr = (uint32_t)&G_qmeElogTable;

    PK_TRACE("Main: Configure Trace Timebase");
    uint32_t trace_timebase = PPE_TIMEBASE_HZ;
    pk_trace_set_freq(trace_timebase);

    PK_TRACE("Main: Clear SPRG0");
    ppe42_app_ctx_set(0);

#if defined(USE_QME_QUEUED_SCOM) || defined(USE_QME_QUEUED_SCAN)
    PK_TRACE("Main: QME Enabling Queued Scom/Scan");
    out32(QME_LCL_QMCR_OR, BITS32(12, 2));
#endif

    // Need to do this regardless the timer enablement for scrub engine to work
    uint32_t TCR_VAL = 0;
    PK_TRACE("Main: Set Watch Dog Timer Rate to 6 and FIT Timer Rate to 8");
    out32(QME_LCL_TSEL, (BITS32(1, 2) | BIT32(4)));

    // Initialize FAPI and attributes
    qme_attr_init();

    // Initialize the Stop state and Pstate tasks
    qme_init();

#if (ENABLE_FIT_TIMER || ENABLE_DEC_TIMER)

#if ENABLE_FIT_TIMER
    PK_TRACE("Main: Register and Enable FIT Timer");
    IOTA_FIT_HANDLER(qme_fit_handler);
    TCR_VAL |= TCR_FIE;
#endif

#if ENABLE_DEC_TIMER
    PK_TRACE("Main: Register and Enable DEC Timer");
    IOTA_DEC_HANDLER(qme_dec_handler);
    TCR_VAL |= TCR_DIE;
#endif

    mtspr(SPRN_TCR, TCR_VAL);

#endif

    // start IOTA and never return!
    iota_run();

    return 0;
}
