/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_main.C $              */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
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

#include "qme.h"
#include <fapi2.H>
#include <fapi2_target.H>

extern QmeRecord G_qme_record;
uint32_t G_IsSimics = 0; // extern declared in qme.h


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
        IOTA_PANIC(QME_MAIN_FAPI2_INIT_FAILED);
    }

    //===============

    // RTC 245890: Topology ID setup until QME attribute initialization works
    {
        const fapi2::Target<fapi2::TARGET_TYPE_SYSTEM> FAPI_SYSTEM;
        fapi2::ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_Type l_topo_tbl;

        l_topo_tbl[0] = 0x00;

        for (auto i = 1; i < 32; ++i)
        {
            l_topo_tbl[i] = 0xFF;
        }

        PK_TRACE("Workaround: Set Topo Table Array Attribute" );
        FAPI_TRY(FAPI_ATTR_SET(fapi2::ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE, FAPI_SYSTEM, l_topo_tbl));
    }

    //===============

    // Deal with SMF enablement
    // RTC 24898 change to different type.
    // fapi2::ATTR_SMF_CONFIG_Type l_attr_smf_config;
    uint32_t l_attr_smf_config;

    // Start workaround RTC 24898: move to using ATTR_SMF_CONFIG directly and use the QME flag bit
    uint32_t l_smf_config;
    l_smf_config = (in32( QME_LCL_FLAGS ) & BIT32( QME_FLAGS_RUNTIME_WAKEUP_MODE ));
    // Note: polarity is UV=0, HV=1 as UV is the default
    l_attr_smf_config = l_smf_config ? 0 : 1;
    // End workaround

    // Enable secure memory facility
    // RTC 24898: uncomment the following line.  Couldn't be used as the
    // attribute is not writable.
    // fapi2::Target<fapi2::TARGET_TYPE_SYSTEM> FAPI_SYSTEM;
    // FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_SMF_CONFIG, FAPI_SYSTEM, l_attr_smf_config));

    if (l_attr_smf_config)
    {
        G_qme_record.hcode_func_enabled |= QME_SMF_SUPPORT_ENABLE;
    }

    //===============

    uint8_t runn_mode      = 0;
    uint8_t contained_type = 0;
    fapi2::Target<fapi2::TARGET_TYPE_SYSTEM>                 l_sys;
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_RUNN_MODE,          l_sys,  runn_mode ) );
    FAPI_TRY( FAPI_ATTR_GET( fapi2::ATTR_CONTAINED_IPL_TYPE, l_sys,  contained_type ) );

    if( runn_mode )
    {
        G_qme_record.hcode_func_enabled |= QME_RUNN_MODE_ENABLE;
    }

    if( contained_type != 0)
    {
        G_qme_record.hcode_func_enabled |= QME_CONTAINED_MODE_ENABLE;
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

    if(mfspr(287) != PVR_CONST)
    {
        IOTA_PANIC(QME_BAD_DD_LEVEL);
    }

    if (in32(QME_LCL_FLAGS) & BIT32(QME_FLAGS_DEBUG_TRAP_ENABLE))
    {
        PK_TRACE_INF("BREAK: Trap at QME Booted");
        asm volatile ("trap");
    }

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

    // @note If QME_FLAGS[63] is set .. execution environment is Simics
    if (in64 (QME_LCL_FLAGS) & QME_FLAGS_RUNNING_SIMICS)
    {
        PK_TRACE ("QME running on Simics");
        G_IsSimics = 1;
    }

    // Initialize the Stop state and Pstate tasks
    qme_attr_init();
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
