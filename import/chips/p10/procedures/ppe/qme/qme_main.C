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
extern uint64_t g_eimr_override;

uint32_t G_IsSimics = 0; // extern declared in qme.h
hcode_error_table_t G_qmeElogTable; // QME local Error Log Table

void
qme_attr_init()
{
    fapi2::Target<fapi2::TARGET_TYPE_SYSTEM> l_sys;

    uint32_t pir = 0;
    asm volatile ( "mfspr %0, %1 \n\t" : "=r" (pir) : "i" (SPRN_PIR));
    G_qme_record.quad_id = pir & 0xF;
    fapi2::ReturnCode fapiRc = fapi2::plat_TargetsInit(G_qme_record.quad_id);

    if( fapiRc != fapi2::FAPI2_RC_SUCCESS )
    {
        PK_TRACE_ERR("ERROR: FAPI2 Init Failed. HALT QME!");
        QME_ERROR_HANDLER(QME_MAIN_FAPI2_INIT_FAILED, 0, pir, 0);
    }

    //===============
#ifdef USE_RUNN
    uint8_t runn_mode      = 0;
    uint8_t contained_type = 0;
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

#endif
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

    uint8_t  mma_pon_dis  = 0;
    uint8_t  mma_poff_dis = 0;
    uint8_t  mma_powerof2 = 0;
    uint64_t mma_delay_ms = 0;

    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_SYSTEM_MMA_POWEROFF_DELAY_POWEROF2_MS, l_sys, mma_powerof2 ) );
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_SYSTEM_MMA_POWEROFF_DISABLE,           l_sys, mma_poff_dis ) );
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_SYSTEM_MMA_POWERON_DISABLE,            l_sys, mma_pon_dis ) );

    if( mma_pon_dis )
    {
        PK_TRACE_INF("MMA POWERON DISABLED %x", mma_pon_dis);
        G_qme_record.mma_modes_enabled = MMA_POFF_ALWAYS;
        G_qme_record.c_mma_available = 0xF;
        g_eimr_override |= BITS64(28, 4);
    }
    else if( mma_poff_dis || mma_powerof2 == 0xFF)
    {
        PK_TRACE_INF("MMA POWEROFF DISABLED %x with mma_powerof2 %x", mma_poff_dis, mma_powerof2);
        G_qme_record.mma_modes_enabled = MMA_POFF_STATIC;
        G_qme_record.c_mma_available = 0xF;
        g_eimr_override |= BITS64(28, 4);
    }
    else
    {
        // disable hwp to poweron MMA, EISR[mma_active] will take over
        mma_pon_dis = 1;
        FAPI_TRY( FAPI_ATTR_SET( fapi2::ATTR_SYSTEM_MMA_POWERON_DISABLE, l_sys, mma_pon_dis ) );

        G_qme_record.mma_modes_enabled = MMA_POFF_DYNAMIC;

        // 250us
        if( mma_powerof2 == 0xFE )
        {
            G_qme_record.mma_pwoff_dec_val   = 25000;//50us per 2ns/500Mhz
            G_qme_record.mma_pwoff_dec_ticks = 5;
        }
        // round down to 1 day if more than 1 day
        // max pow2(0x1B);
        else if( mma_powerof2 > 0x1B )
        {
            G_qme_record.mma_pwoff_dec_val   = 500000000;//1s per 2ns/500Mhz
            G_qme_record.mma_pwoff_dec_ticks = 86400;    //24x60x60
        }
        // Leave TCR.DS=0 for DEC to tick every ppe cycle for easy math
        // Given QME cycle is at 2ns duration since it runs on 500Mhz when Nest is at 2Ghz
        //   Ticks * Dec_Val = ( Delay**2 )*1K*1K / 2ns
        // Dec checks MMA instruction running and increment ticks if not
        //   For simplicity, always use 128us for Dev Value
        //   as that gives 8 Dec ticks for minimal 1ms delay
        else
        {
            mma_delay_ms = (1 << mma_powerof2);       //default pow2(0x0A)=1024
            G_qme_record.mma_pwoff_dec_val   = 64000; //128us per 2ns/500Mhz
            //therefore 8 times/ticks to meet minimal 1ms or 1024us.
            //instead of division which uses extra math library(increase image size)
            //approximate shift left by 3 for 8 times of X ms
            G_qme_record.mma_pwoff_dec_ticks = mma_delay_ms << 3;
        }

        PK_TRACE_INF("MMA Dynmatic Engagement with mma_powerof2 %x mma_delay_ms %x, dec_val %x, dev_ticks %x",
                     mma_powerof2, mma_delay_ms, G_qme_record.mma_pwoff_dec_val, G_qme_record.mma_pwoff_dec_ticks);

#ifdef EPM_TUNING

        if( in32_sh( QME_LCL_FLAGS ) & BIT64SH( QME_FLAGS_RUNNING_EPM ) )
        {
            // For EPM uses 100K simcycle timeout, given 1ns = 8 simcycle
            // 6250ns dec countdown thus 250 for spr DEC and 25 dec ticks
            G_qme_record.mma_pwoff_dec_ticks = 25;
            G_qme_record.mma_pwoff_dec_val   = 250;
        }

#endif

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
        uint32_t pvr = mfspr(SPRN_PVR);

        if( pvr != PVR_CONST)
        {
            QME_ERROR_HANDLER(QME_BAD_DD_LEVEL, 0, pvr, 0);
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

#if ENABLE_MACHINE_CHECK_HANDLER
    IOTA_MC_HANDLER(qme_machine_check_handler);
#endif

#if (ENABLE_FIT_TIMER || ENABLE_DEC_TIMER)

#if ENABLE_FIT_TIMER
    PK_TRACE("Main: Register and Enable FIT Timer");
    IOTA_FIT_HANDLER(qme_fit_handler);
    TCR_VAL |= TCR_FIE;
#endif

#if ENABLE_DEC_TIMER

    if( G_qme_record.mma_modes_enabled == MMA_POFF_DYNAMIC )
    {
        PK_TRACE("Main: Register and Enable DEC Timer");
        IOTA_DEC_HANDLER(qme_dec_handler);
        TCR_VAL |= TCR_DIE;
    }

#endif

    mtspr(SPRN_TCR, TCR_VAL);

#endif

    // start IOTA and never return!
    iota_run();

    return 0;
}
