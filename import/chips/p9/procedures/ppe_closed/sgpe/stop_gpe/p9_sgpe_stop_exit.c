/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_exit.c $ */
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

#include "p9_sgpe_stop.h"
#include "p9_sgpe_stop_exit_marks.h"
#include "p9_hcd_sgpe_boot_cme.h"

// inline procedures only called by exit
#include "p9_hcd_cache_poweron.c"
#include "p9_hcd_cache_chiplet_reset.c"
#include "p9_hcd_cache_dpll_setup.c"
#include "p9_hcd_cache_chiplet_init.c"
#include "p9_hcd_cache_arrayinit.c"
#include "p9_hcd_cache_startclocks.c"
#include "p9_hcd_cache_l2_startclocks.c"
#include "p9_hcd_cache_scominit.c"
#include "p9_hcd_cache_scomcust.c"
#include "p9_hcd_cache_occ_runtime_scom.c"
#include "p9_hcd_cache_ras_runtime_scom.c"


extern SgpeStopRecord G_sgpe_stop_record;


#if HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX

    extern struct ring_save* G_ring_save;
    extern uint64_t   G_ring_spin[10][2];

#endif

#if !SKIP_HOMER_ACCESS
#if NDD1_FUSED_CORE_MODE_SCAN_FIX

uint32_t G_fcm_spin[4] = {0, 435, 1402, 2411};

static void
fused_core_mode_scan_fix(uint32_t qloop, int l2bit)
{
    uint32_t spin      = 0;
    uint64_t scom_data = 0;

    // bit8/9 = l2-0/1, bit49 = cfg
    PK_TRACE("FCMS: Setup scan register to select the ring");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, qloop),
                (BIT64(l2bit) | BIT64(49)));

    PK_TRACE("FCMS: checkword set");
    scom_data = 0xa5a5a5a5a5a5a5a5;
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data);

    for(spin = 1;; spin++)
    {
        PK_TRACE("FCMS: spin ring loop%d", spin);
        scom_data = (G_fcm_spin[spin] - G_fcm_spin[spin - 1]);
        scom_data = scom_data << 32;
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10039000, qloop), scom_data);

        PK_TRACE("FCMS: Poll OPCG done for ring spin");

        do
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10000100, qloop), scom_data);
        }
        while(~scom_data & BIT64(8));

        if (spin == 3)
        {
            PK_TRACE("FCMS: checkword check");
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data);

            if (scom_data != 0xa5a5a5a5a5a5a5a5)
            {
                PK_TRACE_ERR("ERROR: checkword[%x%x] failed. HALT SGPE!",
                             UPPER32(scom_data), LOWER32(scom_data));
                PK_PANIC(SGPE_STOP_EXIT_FUSE_SCAN_HEADER_ERR);
            }

            break;
        }

        PK_TRACE("FCMS: restore fused core mode bit");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data);
        RESTORE_RING_BITS(BIT64(0), scom_data, BIT64(0));
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data);
    }

    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, qloop), 0);
}

#endif
#endif


//------------------------------------------------------------------------------


static void
p9_sgpe_stop_exit_lv8(uint32_t qloop)
{
    data64_t scom_data = {0};

#if DISABLE_STOP8

    uint32_t ex = G_sgpe_stop_record.group.expg[qloop];

#else

    uint32_t ex = G_sgpe_stop_record.group.ex01[qloop];

#endif

    //--------------------------------------------------------------------------
    PK_TRACE("+++++ +++++ EX STOP EXIT [LEVEL 8-10] +++++ +++++");
    //--------------------------------------------------------------------------

    //======================================================
    MARK_TAG(SX_L2_STARTCLOCKS, ((ex << 6) | (32 >> qloop)))
    //======================================================

    PK_TRACE("Acquire cache clock controller atomic lock");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CC_ATOMIC_LOCK, qloop), BITS64(0, 5));
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CC_ATOMIC_LOCK, qloop), scom_data.value);

    if ((scom_data.words.upper & BITS32(0, 5)) != 0xC0000000)
    {
        PK_TRACE_ERR("ERROR: Failed to Obtain Cache %d Clk Ctrl Atomic Lock. Register Content: %x",
                     qloop, scom_data.words.upper);
        SGPE_STOP_QUAD_ERROR_HANDLER(qloop, SGPE_STOP_EXIT_GET_CLK_LOCK_FAILED);
        return;
    }

    // do this again here for stop8 in addition to dpll_setup
    PK_TRACE("Switch L2 glsmux select to DPLL output via EXCGCR[34,35]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_OR, qloop), BITS64(34, 2));

    PK_TRACE_INF("SX.8A: Cache[%d] EX_PG[%d] Start L2[%d] Clocks",
                 qloop, G_sgpe_stop_record.group.expg[qloop], ex);
    p9_hcd_cache_l2_startclocks(qloop, ex);

    // for l2 scom init and restore that cannot be done via stop11
    // as if that certain l2 wasnt exiting(thus lack of clock for scom)

    PK_TRACE_INF("SX.8B: Cache L2 Scominit");
    p9_hcd_cache_scominit(qloop, ex, 1);

    PK_TRACE_DBG("Cache L2 Scomcust");
    p9_hcd_cache_scomcust(qloop, ex, 1);

    // reset ex actual state if ex is exited.
    if (ex & FST_EX_IN_QUAD)
    {
        G_sgpe_stop_record.state[qloop].act_state_x0 = 0;
    }

    if (ex & SND_EX_IN_QUAD)
    {
        G_sgpe_stop_record.state[qloop].act_state_x1 = 0;
    }

    PK_TRACE("Release cache clock controller atomic lock");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CC_ATOMIC_LOCK, qloop), 0);
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CC_ATOMIC_LOCK, qloop), scom_data.value);

    if (scom_data.words.upper & BIT32(0))
    {
        PK_TRACE_ERR("ERROR: Failed to Release Cache %d Clk Ctrl Atomic Lock. Register Content: %x",
                     qloop, scom_data.words.upper);
        SGPE_STOP_QUAD_ERROR_HANDLER(qloop, SGPE_STOP_EXIT_DROP_CLK_LOCK_FAILED);
        return;
    }

    PK_TRACE("Update QSSR: drop l2_stopped");
    out32(OCB_QSSR_CLR, (ex << SHIFT32((qloop << 1) + 1)));
}



//------------------------------------------------------------------------------

static void
p9_sgpe_stop_exit_end(uint32_t qloop)
{
    uint32_t cloop  = 0;
    uint32_t cindex = 0;

    //--------------------------------------------------------------------------
    PK_TRACE("+++++ +++++ END OF STOP EXIT +++++ +++++");
    //--------------------------------------------------------------------------

    if (G_sgpe_stop_record.group.qswu[VECTOR_EXIT] & BIT32(qloop))
    {
        PK_TRACE_INF("SP.WU: Quad[%d] Assert SPWU_DONE", qloop);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_GPMMR_OR, qloop), BIT64(0));
        G_sgpe_stop_record.group.qswu[VECTOR_ACTIVE] |= BIT32(qloop);
        G_sgpe_stop_record.group.qswu[VECTOR_EXIT]   &= ~BIT32(qloop);
    }

    for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
    {
        cindex = (qloop << 2) + cloop;

        if (G_sgpe_stop_record.group.core[VECTOR_EXIT] & BIT32(cindex))
        {

#if DISABLE_STOP8

            if (G_sgpe_stop_record.group.quad[VECTOR_RCLKX] & BIT32(qloop))
            {
                G_sgpe_stop_record.group.core[VECTOR_RCLKX] |= BIT32(cindex);
            }
            else
            {
                G_sgpe_stop_record.group.core[VECTOR_RCLKX] &= ~BIT32(cindex);

#endif

                p9_sgpe_stop_exit_handoff_cme(cindex);
                G_sgpe_stop_record.group.quad[VECTOR_RCLKE]  &= ~BIT32((qloop + QUAD_IN_STOP11_OFFSET));
                G_sgpe_stop_record.group.quad[VECTOR_ACTIVE] |=  BIT32(qloop);

#if DISABLE_STOP8

            }

#endif

        }

    }

    PK_TRACE("Update QSSR: drop stop_exit_ongoing");
    out32(OCB_QSSR_CLR, BIT32(qloop + 26));
}

//-------------------------------------------------------------------------

void
p9_sgpe_stop_exit_handoff_cme(uint32_t cindex)
{
    PK_TRACE("SGPE Handing off to CME");

    // reset clevel to 0 if core is going to wake up
    G_sgpe_stop_record.level[(cindex >> 2)][(cindex % 4)] = 0;

#if NIMBUS_DD_LEVEL != 10

    // write protection, do not do this for dd1
    GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_OR, cindex), BIT64(0));

#endif

    // if waken up by pc, send doorbell to unmask pc
    if (G_sgpe_stop_record.group.core[VECTOR_PCWU] & BIT32(cindex))
    {
        // send DB2 with msgid 0x1 to the core request wakeup via decrementor to
        // alert CME to process via unmask PC_INTR_PENDING in addition to handoff
        PK_TRACE_INF("SX.CME: Core[%d] Waking Up by PC_Interrupt_Pending", cindex);

#if NIMBUS_DD_LEVEL != 10

        GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB2, cindex), BIT64(7));

#else

        p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB2, cindex), BIT64(7));

#endif

        G_sgpe_stop_record.group.core[VECTOR_PCWU] &= ~BIT32(cindex);
    }

    PK_TRACE_INF("SX.CME: Core[%d] Switch CorePPM Wakeup Back to CME via CPMMR[13]", cindex);

#if NIMBUS_DD_LEVEL != 10

    GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_CLR, cindex), BIT64(13));

#else

    p9_dd1_cppm_unicast_wr(
        GPE_SCOM_ADDR_CORE(CPPM_CPMMR,     cindex),
        GPE_SCOM_ADDR_CORE(CPPM_CPMMR_CLR, cindex),
        BIT64(13), CLR_OP);

#endif

    // clear possible phantom interrupts after handoff to cme
    // there shouldnt be any valid entry or exit to process
    out32(OCB_OPITNPRA_CLR(2), BIT32(cindex));
    out32(OCB_OPITNPRA_CLR(3), BIT32(cindex));

    // From IPC prospective, core is active when handoff to cme
    // and if core from quad is active, the quad is active
    G_sgpe_stop_record.group.core[VECTOR_EXIT]   &= ~BIT32(cindex);
    G_sgpe_stop_record.group.core[VECTOR_ACTIVE] |=  BIT32(cindex);
}

//------------------------------------------------------------------------------

void
p9_sgpe_stop_exit()
{
    uint32_t      qloop           = 0;
    uint32_t      cloop           = 0;
    uint32_t      cindex          = 0;
    uint32_t      cexit           = 0;
    uint32_t      qspwu           = 0;
    uint32_t      ex_mask         = 0;
    uint32_t      ec_mask         = 0;
    uint32_t      ex_index        = 0;
    uint32_t      ec_index        = 0;
    data64_t      scom_data       = {0};
    uint32_t      flg2_data       = 0;
#if !STOP_PRIME
    ocb_ccsr_t    ccsr            = {0};
    uint32_t      cme_flags       = 0;
#if HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX
    uint32_t      spin            = 0;
#endif
#endif
#if NIMBUS_DD_LEVEL != 10
    uint32_t      fused_core_mode = 0;
#endif
#if !SKIP_IPC
    uint32_t      ipc_exit_quad   = 0;
#endif
    sgpeHeader_t* pSgpeImgHdr = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);

    //===============================
    MARK_TAG(BEGINSCOPE_STOP_EXIT, 0)
    //===============================

    //--------------------------------------------------------------------------
    PK_TRACE_INF("+++++ +++++ BEGIN OF STOP EXIT +++++ +++++");
    //--------------------------------------------------------------------------

    G_sgpe_stop_record.group.quad[VECTOR_EXIT] = 0;
    G_sgpe_stop_record.group.ex01[0]           = 0;
    G_sgpe_stop_record.group.ex01[1]           = 0;
    G_sgpe_stop_record.group.ex01[2]           = 0;
    G_sgpe_stop_record.group.ex01[3]           = 0;
    G_sgpe_stop_record.group.ex01[4]           = 0;
    G_sgpe_stop_record.group.ex01[5]           = 0;

    flg2_data = in32(OCB_OCCFLG2);

    if( flg2_data & SGPE_HCODE_ERR_INJ_BIT )
    {
        PK_TRACE_ERR("SGPE STOP EXIT ERROR INJECT TRAP");
        PK_PANIC(SGPE_STOP_EXIT_TRAP_INJECT);
    }

    for(cexit = G_sgpe_stop_record.group.core[VECTOR_EXIT],
        qspwu = G_sgpe_stop_record.group.qswu[VECTOR_EXIT],
        qloop = 0;
        (cexit > 0 || qspwu > 0) && (qloop < MAX_QUADS);
        cexit = cexit << 4, qspwu = qspwu << 1, qloop++)
    {
        if (!((cexit & BITS32(0, 4)) || (qspwu & BIT32(0))))
        {
            continue;
        }

        if ((((cexit & BITS32(0, 2)) || (qspwu & BIT32(0))) &&
             (G_sgpe_stop_record.state[qloop].act_state_x0 >= STOP_LEVEL_8)))
        {
            G_sgpe_stop_record.group.ex01[qloop] |= FST_EX_IN_QUAD;
        }

        if ((((cexit & BITS32(2, 2)) || (qspwu & BIT32(0))) &&
             (G_sgpe_stop_record.state[qloop].act_state_x1 >= STOP_LEVEL_8)))
        {
            G_sgpe_stop_record.group.ex01[qloop] |= SND_EX_IN_QUAD;
        }

        G_sgpe_stop_record.group.ex01[qloop] &=
            G_sgpe_stop_record.group.expg[qloop];

        if (G_sgpe_stop_record.state[qloop].act_state_q >= STOP_LEVEL_11)
        {
            G_sgpe_stop_record.group.quad[VECTOR_EXIT] |= BIT32(qloop);
        }

        PK_TRACE("Update QSSR: stop_exit_ongoing");
        out32(OCB_QSSR_OR, BIT32(qloop + 26));

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            if(!(cexit & BIT32(cloop)))
            {
                continue;
            }

            cindex = (qloop << 2) + cloop;

            PK_TRACE("Update STOP history on core[%d]: in transition of exit", cindex);
            scom_data.words.lower = 0;
            scom_data.words.upper = SSH_EXIT_IN_SESSION;
            GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, cindex, 0, scom_data.value);
        }
    }

    PK_TRACE_DBG("Exit Vectors: Q0_EX[%x] Q1_EX[%x] Q2_EX[%x] QSPWU[%x]",
                 G_sgpe_stop_record.group.ex01[0],
                 G_sgpe_stop_record.group.ex01[1],
                 G_sgpe_stop_record.group.ex01[2],
                 G_sgpe_stop_record.group.qswu[VECTOR_EXIT]);

    PK_TRACE_DBG("Exit Vectors: Q3_EX[%x] Q4_EX[%x] Q5_EX[%x] QENTRY[%x]",
                 G_sgpe_stop_record.group.ex01[3],
                 G_sgpe_stop_record.group.ex01[4],
                 G_sgpe_stop_record.group.ex01[5],
                 G_sgpe_stop_record.group.quad[VECTOR_EXIT]);



#if !SKIP_IPC

    // Upon the exit from STOP 11
    //   the SGPE must enable the DPLL at some frequency to boot the cache and the cores.
    //   The frequency is established by the PGPE based on the enablement of Pstates and WOF.
    // If Pstates are disabled, the SGPE will do nothing
    //   since the frequency is already in QPPM_DPLL_FREQ (either the IPL boot value or
    //   that established by other external means e.g. characterization setups) will be used.
    // If Pstates are enabled, SGPE sends Update Active Quads IPC
    //   with Update Type set to Exit to PGPE and waits for the response IPC.
    //   PGPE, as part of its processing this IPC,
    //   will write the QPPM_DPLL_FREQ register before responding.

    if ((in32(OCB_OCCS2) & BIT32(PGPE_ACTIVE)) &&
        G_sgpe_stop_record.wof.update_pgpe != IPC_SGPE_PGPE_UPDATE_PGPE_HALTED &&
        G_sgpe_stop_record.group.quad[VECTOR_EXIT])
    {
        ipc_exit_quad = 1;

        p9_sgpe_ipc_pgpe_update_active_quads(UPDATE_ACTIVE_QUADS_TYPE_EXIT,
                                             UPDATE_ACTIVE_QUADS_ENTRY_TYPE_DONE);

        /// the poll for ack is located before dpll setup
    }

#endif



    // ex stop exit loop(express processing)
    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        // Skip stop11
        if (G_sgpe_stop_record.group.quad[VECTOR_EXIT] & BIT32(qloop))
        {
            continue;
        }

        if (G_sgpe_stop_record.group.ex01[qloop])
        {
            p9_sgpe_stop_exit_lv8(qloop);

            if (G_sgpe_stop_record.group.quad[VECTOR_ERROR] & BIT32(qloop))
            {
                continue;
            }
        }

        if (G_sgpe_stop_record.group.quad[VECTOR_CONFIG] & BIT32(qloop))
        {
            p9_sgpe_stop_exit_end(qloop);
        }
    }



    // quad stop exit loop
    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        // Skip non-stop11
        if (!(G_sgpe_stop_record.group.quad[VECTOR_EXIT] & BIT32(qloop)))
        {
            continue;
        }

        //--------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ QUAD STOP EXIT [LEVEL 11-15] +++++ +++++");
        //--------------------------------------------------------------------------

        PK_TRACE("Acquire cache PCB slave atomic lock");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_ATOMIC_LOCK, qloop), BITS64(0, 5));
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_ATOMIC_LOCK, qloop), scom_data.value);

        if ((scom_data.words.upper & BITS32(0, 5)) != 0xC0000000)
        {
            PK_TRACE_ERR("ERROR: Failed to Obtain Cache %d PCB Slave Atomic Lock. Register Content: %x",
                         qloop, scom_data.words.upper);
            SGPE_STOP_QUAD_ERROR_HANDLER(qloop, SGPE_STOP_EXIT_GET_SLV_LOCK_FAILED);
            continue;
        }

        PK_TRACE("Update STOP history on quad[%d]: in transition of exit",
                 qloop);
        scom_data.words.lower = 0;
        scom_data.words.upper = SSH_EXIT_IN_SESSION;
        GPE_PUTSCOM_VAR(PPM_SSHSRC, QUAD_ADDR_BASE, qloop, 0, scom_data.value);

        PK_TRACE("Gate the PCBMux request so scanning doesn't cause random requests");

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            cindex = (qloop << 2) + cloop;

            // only loop over configured cores
            if (!(G_sgpe_stop_record.group.core[VECTOR_CONFIG] & BIT32(cindex)))
            {
                continue;
            }

            GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_SLAVE_CONFIG, cindex), scom_data.value);
            scom_data.words.upper |= BITS32(6, 2);
            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(C_SLAVE_CONFIG, cindex), scom_data.value);
        }

        //=================================
        MARK_TAG(SX_POWERON, (32 >> qloop))
        //=================================

        // NOTE: it is required to serialize power on quad PFETs to prevent droop
        PK_TRACE_INF("SX.11A: Cache[%d] EX_PG[%d] Poweron",
                     qloop, G_sgpe_stop_record.group.expg[qloop]);
        p9_hcd_cache_poweron(qloop);

        //=========================
        MARK_TRAP(SX_CHIPLET_RESET)
        //=========================

        PK_TRACE_INF("SX.11B: Cache Chiplet Reset");
        p9_hcd_cache_chiplet_reset(qloop);

#if !SKIP_INITF

        PK_TRACE_DBG("Cache Chiplet L3 DCC Setup");
        p9_hcd_cache_chiplet_l3_dcc_setup(qloop);

#endif


#if !STOP_PRIME
#if !SKIP_INITF

        PK_TRACE_INF("SX.11C: Cache Gptr/Time Initf");
        p9_hcd_cache_gptr_time_initf(qloop);

#endif

        //====================================
        MARK_TAG(SX_DPLL_SETUP, (32 >> qloop))
        //====================================

#if !SKIP_INITF

        PK_TRACE_DBG("Cache Dpll Initf");
        p9_hcd_cache_dpll_initf(qloop);

#endif


#if !SKIP_IPC

        if (ipc_exit_quad)
        {
            ipc_exit_quad = 0;
            p9_sgpe_ipc_pgpe_update_active_quads_poll_ack(UPDATE_ACTIVE_QUADS_TYPE_EXIT);
        }

#endif

        PK_TRACE_INF("SX.11D: Cache Dpll Setup");
        p9_hcd_cache_dpll_setup(qloop);

        if (G_sgpe_stop_record.group.quad[VECTOR_ERROR] & BIT32(qloop))
        {
            continue;
        }

#if !SKIP_INITF

        PK_TRACE_DBG("Cache DCC Skewadjust Setup");
        p9_hcd_cache_dcc_skewadjust_setup(qloop);

#endif

        //=======================================
        MARK_TAG(SX_CHIPLET_INITS, (32 >> qloop))
        //=======================================

        PK_TRACE_DBG("Cache Chiplet Init");
        p9_hcd_cache_chiplet_init(qloop);

#if !SKIP_INITF

        PK_TRACE_INF("SX.11E: Cache Repair Initf");
        p9_hcd_cache_repair_initf(qloop);

#endif

        //====================================
        MARK_TAG(SX_ARRAY_INIT, (32 >> qloop))
        //====================================

#if !SKIP_ARRAYINIT

        PK_TRACE_INF("SX.11F: Cache Arrayinit");
        p9_hcd_cache_arrayinit(qloop);

#endif

#if NIMBUS_DD_LEVEL == 10

        // EPM only:
        // EPM doesnt have real homer images and pba setup to access homer
        // EPM needs to figure out a fused core mode hack to replace these
#if !SKIP_HOMER_ACCESS

        // Reading fused core mode flag in cpmr header
        // To access memory, need to set MSB of homer address

        cpmrHeader_t* pCpmrHdrAddr = (cpmrHeader_t*)(HOMER_CPMR_HEADER_ADDR);

        if (pCpmrHdrAddr->fusedModeStatus == 0xBB)
        {
            PK_TRACE_INF("WARNING: FUSED_CORE_MODE Flag is Set in CPMR Header");

            for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
            {
                if (cexit & BIT32(cloop))
                {
                    cindex = (qloop << 2) + cloop;
                    PK_TRACE_DBG("Check: Assert Core[%d] FUSED_CORE_MODE via CPMMR[9]", cindex);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_OR, cindex), BIT64(9));
                }
            }

#if NDD1_FUSED_CORE_MODE_SCAN_FIX

            PK_TRACE_DBG("FCMS: Engage with Fused Mode Scan Workaround");

            if (G_sgpe_stop_record.group.expg[qloop] & FST_EX_IN_QUAD)
            {
                fused_core_mode_scan_fix(qloop, 8);
            }

            if (G_sgpe_stop_record.group.expg[qloop] & SND_EX_IN_QUAD)
            {
                fused_core_mode_scan_fix(qloop, 9);
            }

#endif

        }

#endif
#endif

#if HW386311_NDD1_PBIE_RW_PTR_STOP11_FIX

        PK_TRACE_DBG("PBRW: Engage with PBIE Read/Write Pointer Scan Workaround");

        // bit4,5,11 = perv/eqpb/pbieq, bit59 = inex
        PK_TRACE("PBRW: Setup scan register to select the ring");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, qloop), BITS64(4, 2) | BIT64(11) | BIT64(59));

        PK_TRACE("PBRW: checkword set");
        scom_data.value = 0xa5a5a5a5a5a5a5a5;
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data.value);

        for(spin = 1;; spin++)
        {
            PK_TRACE("PBRW: spin ring loop%d", spin);
            scom_data.value = (G_ring_spin[spin][0] - G_ring_spin[spin - 1][0]) << 32;
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10039000, qloop), scom_data.value);

            PK_TRACE("PBRW: Poll OPCG done for ring spin");

            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10000100, qloop), scom_data.value);
            }
            while(!(scom_data.words.upper & BIT32(8)));

            if (spin == 9)
            {
                PK_TRACE("PBRW: checkword check");
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data.value);

                if (scom_data.value != 0xa5a5a5a5a5a5a5a5)
                {
                    PK_TRACE_ERR("ERROR: Checkword[%x%x] Failed. HALT SGPE!",
                                 scom_data.words.upper, scom_data.words.lower);
                    PK_PANIC(SGPE_STOP_EXIT_PBRW_SCAN_HEADER_ERR);
                }

                break;
            }

            PK_TRACE("PBRW: restore pbie read ptr");
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data.value);
            PK_TRACE("PBRW: mask: %8x %8x",
                     UPPER32(G_ring_spin[spin][1]),
                     LOWER32(G_ring_spin[spin][1]));
            PK_TRACE("PBRW: ring: %8x %8x",
                     scom_data.words.upper,
                     scom_data.words.lower);
            PK_TRACE("PBRW: save: %8x %8x",
                     UPPER32(G_ring_save->element[qloop][spin - 1]),
                     LOWER32(G_ring_save->element[qloop][spin - 1]));
            RESTORE_RING_BITS(G_ring_spin[spin][1], scom_data.value,
                              G_ring_save->element[qloop][spin - 1]);
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data.value);
            PK_TRACE("PBRW: mask: %8x %8x",
                     UPPER32(G_ring_spin[spin][1]),
                     LOWER32(G_ring_spin[spin][1]));
            PK_TRACE("PBRW: ring: %8x %8x",
                     scom_data.words.upper,
                     scom_data.words.lower);
            PK_TRACE("PBRW: save: %8x %8x",
                     UPPER32(G_ring_save->element[qloop][spin - 1]),
                     LOWER32(G_ring_save->element[qloop][spin - 1]));

        }

        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, qloop), 0);
#endif

        //=====================
        MARK_TRAP(SX_FUNC_INIT)
        //=====================

#if !SKIP_INITF

        PK_TRACE_INF("SX.11G: Cache Func Scan");
        p9_hcd_cache_initf(qloop);

#endif
#endif

        //===========================================
        MARK_TAG(SX_CACHE_STARTCLOCKS, (32 >> qloop))
        //===========================================

        PK_TRACE_INF("SX.11H: Cache Startclocks");
        p9_hcd_cache_startclocks(qloop);

        if (G_sgpe_stop_record.group.quad[VECTOR_ERROR] & BIT32(qloop))
        {
            continue;
        }

        p9_sgpe_stop_exit_lv8(qloop);

        if (G_sgpe_stop_record.group.quad[VECTOR_ERROR] & BIT32(qloop))
        {
            continue;
        }

        //--------------------------------------------------------------------------
        PK_TRACE("+++++ +++++ QUAD STOP EXIT CONTINUE +++++ +++++");
        //--------------------------------------------------------------------------

        for (ec_index = 0; ec_index < CORES_PER_QUAD; ec_index += 2)
        {

            ec_mask = ((cexit & BITS32(ec_index, 2)) >> SHIFT32((ec_index + 1)));

            if(!ec_mask)
            {
                continue;
            }

            PK_TRACE("Assert core[%d]-L2/CC quiesces via SICR[6/7,8/9]", ec_mask);
            GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_OR, qloop, (ec_index >> 1)),
                        ((uint64_t)ec_mask << SHIFT64(7) |
                         (uint64_t)ec_mask << SHIFT64(9)));

            PK_TRACE("Poll for interface quiesced via CME[%d] SISR[30,31]", ec_index);

            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SISR, qloop, (ec_index >> 1)),
                            scom_data.value);
            }
            while(((scom_data.words.upper) & ec_mask) != ec_mask);
        }

#if !STOP_PRIME

        //====================================
        MARK_TAG(SX_SCOM_INITS, (32 >> qloop))
        //====================================

        PK_TRACE_INF("SX.11I: Cache Scom Init");
        p9_hcd_cache_scominit(qloop, G_sgpe_stop_record.group.expg[qloop], 0);

        PK_TRACE_DBG("Cache Scom Cust");
        p9_hcd_cache_scomcust(qloop, G_sgpe_stop_record.group.expg[qloop], 0);

        if (G_sgpe_stop_record.group.quad[VECTOR_ERROR] & BIT32(qloop))
        {
            continue;
        }

        //=======================================
        MARK_TAG(SX_RUNTIME_INITS, (32 >> qloop))
        //=======================================

        PK_TRACE_DBG("Cache RAS Runtime Scom");
        p9_hcd_cache_ras_runtime_scom(qloop);

        PK_TRACE_DBG("Cache OCC Runtime Scom");
        p9_hcd_cache_occ_runtime_scom(qloop);

        //=========================
        MARK_TRAP(SX_ENABLE_ANALOG)
        //=========================

        if(pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_VDM_ENABLE_BIT_POS)
        {
            // Note: 100us must elapse after starting full-speed cache
            // clock gird and 10us after setting power-on (to VDM) before
            // clearing the VDM disable in CME
            PK_TRACE("Clear QPPM VDMCFGR");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_VDMCFGR, qloop), 0);

            PK_TRACE("Write QPPM VDMCR to set Disable and set Poweron");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_VDMCR, qloop), BITS64(0, 2));

            PK_TRACE("Set Jump Protect Enable");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_CTRL_OR, qloop), BIT64(1));

            // If VDM function is configured to be turned on,
            // then CME will enable VDM at CME boot regardless if pstate is enabled,
            // which needs DPLL control access as early as booting time,
            // so done here before the boot
            // otherwise, when pstate is enabled, PGPE will take care of this bit.
            scom_data.words.upper = BIT32(26);
        }
        else
        {
            scom_data.words.upper = 0;
        }

        // set 20, 22, 24 during Stop11 Exit after setting up the DPLL
        // (PGPE is in charge of bit26: DPLL_ENABLE)
        scom_data.words.lower = 0;
        scom_data.words.upper |= BIT32(20) | BIT32(22) | BIT32(24);

        // set 21, 23, 25 if EX0 is bad (not partial good)
        // (select CME QM for PGPE)
        if ((~G_sgpe_stop_record.group.expg[qloop]) & FST_EX_IN_QUAD)
        {
            scom_data.words.upper |= BIT32(21) | BIT32(23) | BIT32(25) | BIT32(27);
        }

        PK_TRACE("Assert inter-ppm settings via QPMMR[20,22,24,EX0PB:21,23,25,27]");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_OR, qloop), scom_data.value);

        //==================================
        MARK_TAG(SX_CME_BOOT, (32 >> qloop))
        //==================================

        // Setting up cme_flags
        do
        {
            ccsr.value = in32(OCB_CCSR);
        }
        while (ccsr.fields.change_in_progress);

        for (ex_mask = 2; ex_mask; ex_mask--)
        {
            if (G_sgpe_stop_record.group.expg[qloop] & ex_mask)
            {
                cme_flags       = 0;
                ex_index        = ex_mask & 1;
                ec_index        = ((qloop << 2) + (ex_index << 1));

                if (G_sgpe_stop_record.group.expg[qloop] & (~ex_mask))
                {
                    cme_flags |= BIT32(CME_FLAGS_SIBLING_FUNCTIONAL);
                }

                if (ex_index == 1)
                {
                    cme_flags |= BIT32(CME_FLAGS_EX_ID);

                    if (!(cme_flags & BIT32(CME_FLAGS_SIBLING_FUNCTIONAL)))
                    {
                        cme_flags |= BIT32(CME_FLAGS_QMGR_MASTER);


                    }
                }
                else
                {
                    cme_flags |= BIT32(CME_FLAGS_QMGR_MASTER);
                }

                if ((in32(OCB_OCCS2) & BIT32(PGPE_ACTIVE)) && (in32(OCB_OCCS2) & BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE)))
                {
                    cme_flags |= BIT32(CME_FLAGS_WAIT_ON_PSTATE_START);
                }

#if NIMBUS_DD_LEVEL != 10

                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SISR, qloop, ex_index),
                            scom_data.value);

                fused_core_mode = 0;

                if (scom_data.words.upper & BIT32(9))
                {
                    fused_core_mode = 1;
                }

#endif

                for (cloop = 0; cloop < CORES_PER_EX; cloop++)
                {
                    if (ccsr.value & BIT32((ec_index + cloop)))
                    {
                        cme_flags |= (BIT32(CME_FLAGS_CORE0_GOOD) >> cloop);
                        GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_NET_CTRL0,
                                                       (ec_index + cloop)), scom_data.value);

                        if (!(scom_data.words.upper & BIT32(18)))
                        {
                            cme_flags |= (BIT32(CME_FLAGS_STOP_ENTRY_FIRST_C0) >> cloop);
                        }

#if NIMBUS_DD_LEVEL != 10

                        if (fused_core_mode)
                        {
                            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_OR,
                                                           (ec_index + cloop)), BIT64(9));
                        }

#endif

                    }
                }

                p9_sgpe_stop_cme_scominit(qloop, ex_index, cme_flags);
            }
        }

        PK_TRACE("Release cache PCB slave atomic lock");
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_ATOMIC_LOCK, qloop), 0);
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_ATOMIC_LOCK, qloop), scom_data.value);

        if (scom_data.words.upper & BIT32(0))
        {
            PK_TRACE_ERR("ERROR: Failed to Release Cache %d PCB Slave Atomic Lock. Register Content: %x",
                         qloop, scom_data.words.upper);
            SGPE_STOP_QUAD_ERROR_HANDLER(qloop, SGPE_STOP_EXIT_DROP_SLV_LOCK_FAILED);
            continue;
        }

        if (in32(OCB_OCCS2) & BIT32(CME_DEBUG_TRAP_ENABLE))
        {
            PK_TRACE_INF("BREAK: Trap Before CME Boot");
            asm volatile ("trap");
        }

#if !SKIP_CME_BOOT_STOP11

        uint16_t cmeBootList =
            (G_sgpe_stop_record.group.expg[qloop] << SHIFT16(((qloop << 1) + 1)));
        PK_TRACE_INF("SX.CME: Booting Cme[%x]", cmeBootList);
        boot_cme( cmeBootList );
        //Clear Quad GPMMR RESET_STATE_INDICATOR bit to indicate CME has booted
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_GPMMR_CLR, qloop), BIT64(15));
#endif

#endif

        PK_TRACE("Update STOP history on quad[%d]: \
                 STOP exit completed, cache ready", qloop);
        scom_data.words.lower = 0;
        scom_data.words.upper = SSH_EXIT_COMPLETE;
        GPE_PUTSCOM_VAR(PPM_SSHSRC, QUAD_ADDR_BASE, qloop, 0, scom_data.value);

        PK_TRACE("Update QSSR: drop quad_stopped");
        out32(OCB_QSSR_CLR, BIT32(qloop + 14));

        G_sgpe_stop_record.state[qloop].act_state_q = 0;
        p9_sgpe_stop_exit_end(qloop);
    }

    //===========================
    MARK_TRAP(ENDSCOPE_STOP_EXIT)
    //===========================

    return;
}
