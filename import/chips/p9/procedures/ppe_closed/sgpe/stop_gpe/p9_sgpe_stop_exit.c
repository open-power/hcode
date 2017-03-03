/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_exit.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
#include "p9_dd1_doorbell_wr.h"

extern SgpeStopRecord                       G_sgpe_stop_record;

#if !SKIP_IPC

    extern ipc_async_cmd_t                  G_sgpe_ipccmd_to_pgpe;
    extern ipcmsg_s2p_suspend_pstate_t      G_sgpe_ipcmsg_suspend_pstate;
    extern ipcmsg_s2p_update_active_cores_t G_sgpe_ipcmsg_update_cores;
    extern ipcmsg_s2p_update_active_quads_t G_sgpe_ipcmsg_update_quads;

#endif

#if HW386311_DD1_PBIE_RW_PTR_STOP11_FIX

    extern uint64_t G_ring_save[MAX_QUADS][8];
    extern uint64_t G_ring_spin[10][2];

#endif

#if FUSED_CORE_MODE_SCAN_FIX

uint32_t G_fcm_spin[4] = {0, 435, 1402, 2411};

void
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
                PK_TRACE_INF("ERROR: checkword[%x%x] failed. HALT SGPE!",
                             UPPER32(scom_data), LOWER32(scom_data));
                pk_halt();
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

int
p9_sgpe_stop_exit()
{
    uint32_t     m_l2            = 0;
    uint32_t     m_pg            = 0;
    uint32_t     cloop           = 0;
    uint32_t     qloop           = 0;
    uint32_t     cexit           = 0;
    uint32_t     qspwu           = 0;
    uint32_t     ex_mask         = 0;
    uint32_t     ec_mask         = 0;
    uint32_t     ex_index        = 0;
    uint32_t     ec_index        = 0;
    data64_t     scom_data       = {0};
#if !STOP_PRIME
    ocb_ccsr_t   ccsr            = {0};
    uint32_t     cme_flags       = 0;
#if HW386311_DD1_PBIE_RW_PTR_STOP11_FIX
    uint32_t     spin            = 0;
#endif
#endif
#if NIMBUS_DD_LEVEL != 1
    uint32_t     fused_core_mode = 0;
#endif
#if !SKIP_IPC
    uint32_t     rc              = 0;
#endif

    //===============================
    MARK_TAG(BEGINSCOPE_STOP_EXIT, 0)
    //===============================

    PK_TRACE_DBG("Core Exit Vectors:    X[%x] X0[%x] X1[%x] Q[%x]",
                 G_sgpe_stop_record.group.ex_b[VECTOR_EXIT],
                 G_sgpe_stop_record.group.ex_l[VECTOR_EXIT],
                 G_sgpe_stop_record.group.ex_r[VECTOR_EXIT],
                 G_sgpe_stop_record.group.quad[VECTOR_EXIT]);

#if !SKIP_IPC

    // If any core exits, including waking up from stop5 to stop15
    //   sends Update Active Cores IPC to the PGPE
    //   with Update Type being Exit and the ActiveCores field
    //   indicating the resultant cores that will be powered and clocking
    //   after the response is received.
    // PGPE will perform the necessary adjustments to the Pstates to allow the cores to exit.
    // Upon a good response from the PGPE,
    //   the SGPE will communicate to the CMEs for the requested cores to proceed
    //   with powering them on and completing the exit process.
    // Upon a bad response from the PGPE,
    //   the SGPE will halt as this is an unrecoverable error condition.
    //   [Exits cannot be allowed as the machine may then be in an unsafe frequency/voltage
    //    combination that could violate the current or thermal parameters
    //    which could lead to system checkstop]

    if((G_sgpe_stop_record.wof.update_pgpe & SGPE_IPC_UPDATE_CORE_ENABLED) &&
       G_sgpe_stop_record.group.core[VECTOR_EXIT])
    {
        PK_TRACE_INF("SXIPC: Update PGPE with Active Cores");
        G_sgpe_ipcmsg_update_cores.fields.update_type = SGPE_IPC_UPDATE_TYPE_EXIT;
        G_sgpe_ipcmsg_update_cores.fields.return_code = SGPE_IPC_RETURN_CODE_NULL;
        G_sgpe_ipcmsg_update_cores.fields.active_cores =
            (G_sgpe_stop_record.group.core[VECTOR_EXIT] >> SHIFT32(5));

        G_sgpe_ipccmd_to_pgpe.cmd_data = &G_sgpe_ipcmsg_update_cores;
        ipc_init_msg(&G_sgpe_ipccmd_to_pgpe.cmd,
                     IPC_MSGID_SGPE_PGPE_UPDATE_ACTIVE_CORES,
                     0, 0);

        rc = ipc_send_cmd(&G_sgpe_ipccmd_to_pgpe.cmd);

        if(rc)
        {
            PK_TRACE_INF("ERROR: Exit Updates PGPE with Active Cores Failed. HALT SGPE!");
            pk_halt();
        }

        /// @todo RTC166577
        /// move the poll below to before switch exit to cme when sgpe supports multicast
        PK_TRACE_INF("SXIPC: Poll PGPE Update Active Cores Ack");

        while (G_sgpe_ipcmsg_update_cores.fields.return_code == SGPE_IPC_RETURN_CODE_NULL);

        if (G_sgpe_ipcmsg_update_cores.fields.return_code != SGPE_IPC_RETURN_CODE_ACK)
        {
            PK_TRACE_INF("ERROR: Exit Updates PGPE with Active Cores Bad RC. HALT SGPE!");
            pk_halt();
        }

        G_sgpe_stop_record.group.core[VECTOR_ACTIVE] |=
            G_sgpe_stop_record.group.core[VECTOR_EXIT];
    }

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

    if((G_sgpe_stop_record.wof.update_pgpe & SGPE_IPC_UPDATE_QUAD_ENABLED) &&
       (in32(OCB_OCCS2) & BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE)) &&
       G_sgpe_stop_record.group.quad[VECTOR_EXIT])   // exit from STOP11
    {
        PK_TRACE_INF("SXIPC: Update PGPE with Active Quads(stop11 and pstate enabled)");
        G_sgpe_ipcmsg_update_quads.fields.update_type = SGPE_IPC_UPDATE_TYPE_EXIT;
        G_sgpe_ipcmsg_update_quads.fields.return_code = SGPE_IPC_RETURN_CODE_NULL;
        G_sgpe_ipcmsg_update_quads.fields.requested_quads =
            (G_sgpe_stop_record.group.quad[VECTOR_EXIT] >> SHIFT32(5));

        G_sgpe_ipccmd_to_pgpe.cmd_data = &G_sgpe_ipcmsg_update_quads;
        ipc_init_msg(&G_sgpe_ipccmd_to_pgpe.cmd,
                     IPC_MSGID_SGPE_PGPE_UPDATE_ACTIVE_QUADS,
                     0, 0);

        rc = ipc_send_cmd(&G_sgpe_ipccmd_to_pgpe.cmd);

        if(rc)
        {
            PK_TRACE_INF("ERROR: Exit Updates PGPE with Active Quads Failed. HALT SGPE!");
            pk_halt();
        }

        /// @todo RTC166577
        /// move the poll below to before dpll setup when sgpe supports multicast
        PK_TRACE_INF("SXIPC: Poll PGPE Update Active Quads Ack");

        while (G_sgpe_ipcmsg_update_quads.fields.return_code == SGPE_IPC_RETURN_CODE_NULL);

        if (G_sgpe_ipcmsg_update_quads.fields.return_code != SGPE_IPC_RETURN_CODE_ACK)
        {
            PK_TRACE_INF("ERROR: Exit Updates PGPE with Active Quads Bad RC. HALT SGPE!");
            pk_halt();
        }

        G_sgpe_stop_record.group.quad[VECTOR_ACTIVE] |=
            G_sgpe_stop_record.group.quad[VECTOR_EXIT];
    }

#endif



    for(cexit = G_sgpe_stop_record.group.core[VECTOR_EXIT],
        qspwu = G_sgpe_stop_record.group.qswu[VECTOR_EXIT],
        qloop = 0, m_l2 = 0, m_pg = 0;
        (cexit > 0 || qspwu > 0) && (qloop < MAX_QUADS);
        cexit = cexit << 4, qspwu = qspwu << 1, qloop++, m_l2 = 0, m_pg = 0)
    {

        if (!((cexit & BITS32(0, 4)) || (qspwu & BIT32(0))))
        {
            continue;
        }

        //--------------------------------------------------------------------------
        PK_TRACE_INF("+++++ +++++ BEGIN OF STOP EXIT +++++ +++++");
        //--------------------------------------------------------------------------

        if (G_sgpe_stop_record.group.ex_l[VECTOR_CONFIG] & BIT32(qloop))
        {
            m_pg |= FST_EX_IN_QUAD;
        }

        if (G_sgpe_stop_record.group.ex_r[VECTOR_CONFIG] & BIT32(qloop))
        {
            m_pg |= SND_EX_IN_QUAD;
        }

        if ((((cexit & BITS32(0, 2)) || (qspwu & BIT32(0))) &&
             (G_sgpe_stop_record.state[qloop].act_state_x0 >= STOP_LEVEL_8)))
        {
            m_l2 |= FST_EX_IN_QUAD;
        }

        if ((((cexit & BITS32(2, 2)) || (qspwu & BIT32(0))) &&
             (G_sgpe_stop_record.state[qloop].act_state_x1 >= STOP_LEVEL_8)))
        {
            m_l2 |= SND_EX_IN_QUAD;
        }

        m_l2 = m_l2 & m_pg;

        PK_TRACE("Update QSSR: stop_exit_ongoing");
        out32(OCB_QSSR_OR, BIT32(qloop + 26));

        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            if(!(cexit & BIT32(cloop)))
            {
                continue;
            }

            PK_TRACE("Update STOP history on core[%d]: in transition of exit",
                     ((qloop << 2) + cloop));
            scom_data.words.lower = 0;
            scom_data.words.upper = SSH_EXIT_IN_SESSION;
            GPE_PUTSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, ((qloop << 2) + cloop), 0,
                            scom_data.value);
        }



        if(m_l2 && G_sgpe_stop_record.state[qloop].act_state_q >= STOP_LEVEL_11)
        {

            //--------------------------------------------------------------------------
            PK_TRACE_INF("+++++ +++++ QUAD STOP EXIT [LEVEL 11-15] +++++ +++++");
            //--------------------------------------------------------------------------

            PK_TRACE_DBG("Check: quad[%d] m_l2[%d] m_pg[%d] Serviced by SX11FH",
                         qloop, m_l2, m_pg);

            PK_TRACE("Update STOP history on quad[%d]: in transition of exit",
                     qloop);
            scom_data.words.lower = 0;
            scom_data.words.upper = SSH_EXIT_IN_SESSION;
            GPE_PUTSCOM_VAR(PPM_SSHSRC, QUAD_ADDR_BASE, qloop, 0, scom_data.value);

            //=================================
            MARK_TAG(SX_POWERON, (32 >> qloop))
            //=================================

            // NOTE: it is required to serialize power on quad PFETs to prevent droop
            PK_TRACE_INF("SX11.A: Cache Poweron");
            p9_hcd_cache_poweron(qloop);

            //=========================
            MARK_TRAP(SX_CHIPLET_RESET)
            //=========================

            PK_TRACE_INF("SX11.B: Cache Chiplet Reset");
            p9_hcd_cache_chiplet_reset(qloop, m_pg);

#if !SKIP_INITF

            PK_TRACE_INF("SX11.C: Cache Chiplet L3 DCC Setup");
            p9_hcd_cache_chiplet_l3_dcc_setup(qloop);

#endif


#if !STOP_PRIME
#if !SKIP_INITF

            PK_TRACE_INF("SX11.D: Cache Gptr Time Initf");
            p9_hcd_cache_gptr_time_initf(qloop);

#endif

            //====================================
            MARK_TAG(SX_DPLL_SETUP, (32 >> qloop))
            //====================================

#if !SKIP_INITF

            PK_TRACE_INF("SX11.E: Cache Dpll Initf");
            p9_hcd_cache_dpll_initf(qloop);

#endif

            PK_TRACE_INF("SX11.F: Cache Dpll Setup");
            p9_hcd_cache_dpll_setup(qloop);

#if !SKIP_INITF

            PK_TRACE_INF("SX11.G: Cache DCC Skewadjust Setup");
            p9_hcd_cache_dcc_skewadjust_setup(qloop);

#endif

            // set 20, 22, 24 and 26 during Stop11 Exit after setting up the DPLL
            scom_data.words.lower = 0;
            scom_data.words.upper = BIT32(20) | BIT32(22) | BIT32(24) | BIT32(26);

            // set 21, 23, 25, and 27 if EX0 is bad (not partial good)
            if ((~m_pg) & FST_EX_IN_QUAD)
            {
                scom_data.words.upper |= BIT32(21) | BIT32(23) | BIT32(25) | BIT32(27);
            }

            PK_TRACE("Assert inter-ppm settings via QPMMR[22,24,26,EX0PB:21,23,25]");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_OR, qloop), scom_data.value);

            //=======================================
            MARK_TAG(SX_CHIPLET_INITS, (32 >> qloop))
            //=======================================

            PK_TRACE_INF("SX11.H: Cache Chiplet Init");
            p9_hcd_cache_chiplet_init(qloop);

#if !SKIP_INITF

            PK_TRACE_INF("SX11.I: Cache Repair Initf");
            p9_hcd_cache_repair_initf(qloop);

#endif

            //====================================
            MARK_TAG(SX_ARRAY_INIT, (32 >> qloop))
            //====================================

#if !SKIP_ARRAYINIT

            PK_TRACE_INF("SX11.J: Cache Arrayinit");
            p9_hcd_cache_arrayinit(qloop, m_pg);

#endif

#if NIMBUS_DD_LEVEL == 1

// EPM only:
// EPM doesnt have real homer images and pba setup to access homer
// EPM needs to figure out a fused core mode hack to replace these
#if !SKIP_HOMER_ACCESS

            // Reading fused core mode flag in cpmr header
            // To access memory, need to set MSB of homer address
            cpmrHeader_t* pCpmrHdrAddr = (cpmrHeader_t*)(HOMER_CPMR_HEADER_ADDR);

            if (pCpmrHdrAddr->fusedModeStatus == 0xBB)
            {
                PK_TRACE_INF("FUSED_CORE_MODE Flag is set in CPMR Header");

                for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
                {
                    if (cexit & BIT32(cloop))
                    {
                        PK_TRACE_DBG("Check: Assert Core[%d] FUSED_CORE_MODE via CPMMR[9]",
                                     ((qloop << 2) + cloop));
                        GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_OR,
                                                       ((qloop << 2) + cloop)), BIT64(9));
                    }
                }

#if FUSED_CORE_MODE_SCAN_FIX

                PK_TRACE_INF("FCMS: Engage with Fused Mode Scan Workaround");

                if (m_pg & FST_EX_IN_QUAD)
                {
                    fused_core_mode_scan_fix(qloop, 8);
                }

                if (m_pg & SND_EX_IN_QUAD)
                {
                    fused_core_mode_scan_fix(qloop, 9);
                }

#endif

            }

#endif
#endif

#if HW386311_DD1_PBIE_RW_PTR_STOP11_FIX

            PK_TRACE_INF("FCMS: Engage with PBIE Read/Write Pointer Scan Workaround");

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
                        PK_TRACE_INF("ERROR: checkword[%x%x] failed. HALT SGPE!",
                                     scom_data.words.upper, scom_data.words.lower);
                        pk_halt();
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
                         UPPER32(G_ring_save[qloop][spin - 1]),
                         LOWER32(G_ring_save[qloop][spin - 1]));
                RESTORE_RING_BITS(G_ring_spin[spin][1], scom_data.value,
                                  G_ring_save[qloop][spin - 1]);
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, qloop), scom_data.value);
                PK_TRACE("PBRW: mask: %8x %8x",
                         UPPER32(G_ring_spin[spin][1]),
                         LOWER32(G_ring_spin[spin][1]));
                PK_TRACE("PBRW: ring: %8x %8x",
                         scom_data.words.upper,
                         scom_data.words.lower);
                PK_TRACE("PBRW: save: %8x %8x",
                         UPPER32(G_ring_save[qloop][spin - 1]),
                         LOWER32(G_ring_save[qloop][spin - 1]));

            }

            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, qloop), 0);
#endif

            //=====================
            MARK_TRAP(SX_FUNC_INIT)
            //=====================

#if !SKIP_INITF

            PK_TRACE_INF("SX11.K: Cache Func Scan");
            p9_hcd_cache_initf(qloop);

#endif
#endif

            //===========================================
            MARK_TAG(SX_CACHE_STARTCLOCKS, (32 >> qloop))
            //===========================================

            PK_TRACE_INF("SX11.L: Cache Startclocks");
            p9_hcd_cache_startclocks(qloop, m_pg);

        }

        if (m_l2)
        {

            //--------------------------------------------------------------------------
            PK_TRACE_INF("+++++ +++++ EX STOP EXIT [LEVEL 8-10] +++++ +++++");
            //--------------------------------------------------------------------------

            PK_TRACE_DBG("Check: quad[%d] m_l2[%d] m_pg[%d] Serviced by SX8",
                         qloop, m_l2, m_pg);

            //========================================================
            MARK_TAG(SX_L2_STARTCLOCKS, ((m_l2 << 6) | (32 >> qloop)))
            //========================================================

            // do this again here for stop8 in addition to dpll_setup
            PK_TRACE("Switch L2 glsmux select to DPLL output via EXCGCR[34,35]");
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_OR, qloop), BITS64(34, 2));

            PK_TRACE_INF("SX8.A: Cache L2 Startclocks");
            p9_hcd_cache_l2_startclocks(qloop, m_l2, m_pg);

            // for l2 scom init and restore that cannot be done via stop11
            // as if that certain l2 wasnt exiting(thus lack of clock for scom)

            PK_TRACE_INF("SX8.B: Cache L2 Scominit");
            p9_hcd_cache_scominit(qloop, m_l2, 1);

            PK_TRACE_INF("SX8.C: Cache L2 Scomcust");
            p9_hcd_cache_scomcust(qloop, m_l2, 1);

            // reset ex actual state if ex is exited.
            if (m_l2 & FST_EX_IN_QUAD)
            {
                G_sgpe_stop_record.state[qloop].act_state_x0 = 0;
            }

            if (m_l2 & SND_EX_IN_QUAD)
            {
                G_sgpe_stop_record.state[qloop].act_state_x1 = 0;
            }

            PK_TRACE("Update QSSR: drop l2_stopped");
            out32(OCB_QSSR_CLR, (m_l2 << SHIFT32((qloop << 1) + 1)));
        }

        if(m_l2 && G_sgpe_stop_record.state[qloop].act_state_q >= STOP_LEVEL_11)
        {

            //--------------------------------------------------------------------------
            PK_TRACE_INF("+++++ +++++ QUAD STOP EXIT CONTINUE +++++ +++++");
            //--------------------------------------------------------------------------

            PK_TRACE_DBG("Check: quad[%d] m_l2[%d] m_pg[%d] Serviced by SX11SH",
                         qloop, m_l2, m_pg);

            for (ec_index = 0; ec_index < CORES_PER_QUAD; ec_index += 2)
            {

                ec_mask = ((cexit & BITS32(ec_index, 2)) >> SHIFT32((ec_index + 1)));

                if(!ec_mask)
                {
                    continue;
                }

                PK_TRACE("Enable CME SRAM scrub engine via CSCR[1]");
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_CSCR_OR,
                                              qloop, (ec_index >> 1)), BIT64(1));

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

            PK_TRACE_INF("SX11.M: Cache Scom Init");
            p9_hcd_cache_scominit(qloop, m_pg, 0);

            PK_TRACE_INF("SX11.N: Cache Scom Cust");
            p9_hcd_cache_scomcust(qloop, m_pg, 0);

            //==================================
            MARK_TAG(SX_CME_BOOT, (32 >> qloop))
            //==================================

            // doorbell cme to let rebooted cme knows about ongoing stop11
            for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
            {
                if(!(cexit & BIT32(cloop)))
                {
                    continue;
                }

                PK_TRACE_DBG("Check: Core[%d] will send Doorbell1", ((qloop << 2) + cloop));
                p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEMSG,
                                                        ((qloop << 2) + cloop)), BIT64(0));
                // workaround has to use base address as read on OR/CLR leads to error
                p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB1,
                                                        ((qloop << 2) + cloop)), BIT64(7));
                PK_TRACE_INF("SX11.O: Core DB1 to CME");
            }

            // Setting up cme_flags
            do
            {
                ccsr.value = in32(OCB_CCSR);
            }
            while (ccsr.fields.change_in_progress);

            for (ex_mask = 2; ex_mask; ex_mask--)
            {
                if (m_pg & ex_mask)
                {
                    cme_flags       = 0;
                    ex_index        = ex_mask & 1;
                    ec_index        = ((qloop << 2) + (ex_index << 1));

                    if (ex_index == 1)
                    {
                        cme_flags |= CME_EX1_INDICATOR;
                    }

                    if (m_pg & (~ex_mask))
                    {
                        cme_flags |= CME_SIBLING_FUNCTIONAL;
                    }

#if NIMBUS_DD_LEVEL != 1

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
                            cme_flags |= (CME_CORE0_ENABLE >> cloop);
                            GPE_GETSCOM(GPE_SCOM_ADDR_CORE(C_NET_CTRL0,
                                                           (ec_index + cloop)), scom_data.value);

                            if (!(scom_data.words.upper & BIT32(18)))
                            {
                                cme_flags |= (CME_CORE0_ENTRY_FIRST >> cloop);
                            }

#if NIMBUS_DD_LEVEL != 1

                            if (fused_core_mode)
                            {
                                GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR_OR,
                                                               (ec_index + cloop)), BIT64(9));
                            }

#endif

                        }
                    }

                    scom_data.words.lower = 0;
                    scom_data.words.upper = cme_flags;
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS_OR, qloop, ex_index),
                                scom_data.value);
                }
            }

            // enable cme trace array
            //
            // Trace configuration
            // CME_LCL_DBG
            // 0: LCL_EN_DBG
            // 4: LCL_EN_INTR_ADDR
            // 5: LCL_EN_TRACE_EXTRA
            // 6: LCL_EN_TRACE_STALL
            // 7: LCL_EN_WAIT_CYCLES
            // 8: LCL_EN_FULL_SPEED
            // inst: 3D20C000 | addis r9, 0, 0xC000 | R9 = 0xC0000000
            // inst: 3C208F80 | addis r1, 0, 0x8F80 | R1 = 0x88800000
            // inst: 90290120 | stw   r1, 0x120(r9) | 0xC0000120 = R1
            //
            // 1. The trace array has to be stopped to configure it
            // 2. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRCTRL_CONFIG
            //    bit0: store_trig_mode_lt = 1
            //    bit 11 enh_trace_mode = 1
            //    bit 14:15 = trace_select_lt = 10 for CME0
            // 3. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRDATA_CONFIG_0
            //    Set trace data compare mask to 0  (0:63)
            // 4. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRDATA_CONFIG_1
            //    Set trace data compare mask to 0  (64:87)
            // 5. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRDATA_CONFIG_4
            //    Clear MSKa, MSKb
            // 6. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRDATA_CONFIG_5
            //    Clear MSKc, MSKd
            // 7. TP.TCEP03.TPCL3.L3TRA0.TR0.TRACE_TRDATA_CONFIG_9
            //     bit 0 = disable compression:
            //     bit 1 = error_bit_compresion_care_mask
            //             (default is zero so should be enabled)
            //     32  msk_err_q                <= error_mode_lt(0);
            //     33  pat_err_q                <= error_mode_lt(1);
            //     34  trig0_err_msk            <= error_mode_lt(2);
            //     35  trig1_err_msk            <= error_mode_lt(3);
            //     match_err                    <= (msk_err_q or not pat_err_q)
            //                                     xor error_stage_lt(0);
            //     mask = 0 and pattern = 1 and may be trigger 0

            sgpeHeader_t* pSgpeImgHdr = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);

            if (pSgpeImgHdr->g_sgpe_reserve_flags & CME_TRACE_ENABLE)
            {
                // Stop the trace to configure it
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(DEBUG_TRACE_CONTROL, qloop), BIT64(1));

                for (ex_mask = 2; ex_mask; ex_mask--)
                {
                    if (m_pg & ex_mask)
                    {

                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(CME_SCOM_XIRAMEDR, qloop, ex_index),
                                    0x3D20C00000000000);
                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(CME_SCOM_XIRAMEDR, qloop, ex_index),
                                    0x3C20888000000000);
                        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(CME_SCOM_XIRAMEDR, qloop, ex_index),
                                    0x9029012000000000);

                        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                                        (L3TRA_TRACE_TRCTRL_CONFIG   | (ex_index << 7)),
                                        qloop), (BIT64(0) | BIT64(11) | BIT64(14)));
                        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                                        (L3TRA_TRACE_TRDATA_CONFIG_0 | (ex_index << 7)),
                                        qloop), 0);
                        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                                        (L3TRA_TRACE_TRDATA_CONFIG_1 | (ex_index << 7)),
                                        qloop), 0);
                        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                                        (L3TRA_TRACE_TRDATA_CONFIG_4 | (ex_index << 7)),
                                        qloop), 0);
                        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                                        (L3TRA_TRACE_TRDATA_CONFIG_5 | (ex_index << 7)),
                                        qloop), 0);
                        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(
                                        (L3TRA_TRACE_TRDATA_CONFIG_9 | (ex_index << 7)),
                                        qloop), BITS64(33, 2));
                    }
                }

                // Start the trace
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(DEBUG_TRACE_CONTROL, qloop), BIT64(0));
            }

            if (in32(OCB_OCCS2) & BIT32(CME_DEBUG_TRAP_ENABLE))
            {
                PK_TRACE_INF("BREAK: Trap Before CME Boot");
                asm volatile ("trap");
            }

#if !SKIP_CME_BOOT_STOP11

            uint16_t cmeBootList = (m_pg << SHIFT16(((qloop << 1) + 1)));
            PK_TRACE_DBG("Check: CmeBootList[%x]", cmeBootList);
            boot_cme( cmeBootList );
            PK_TRACE_INF("SX11.P: Cmes booted");

#endif

            //=======================================
            MARK_TAG(SX_RUNTIME_INITS, (32 >> qloop))
            //=======================================

            PK_TRACE_INF("SX11.Q: Cache RAS Runtime Scom");
            p9_hcd_cache_ras_runtime_scom(qloop);

            PK_TRACE_INF("SX11.R: Cache OCC Runtime Scom");
            p9_hcd_cache_occ_runtime_scom(qloop);

            //=========================
            MARK_TRAP(SX_ENABLE_ANALOG)
            //=========================

#endif

            G_sgpe_stop_record.state[qloop].act_state_q = 0;

            PK_TRACE("Update STOP history on quad[%d]: \
                     STOP exit completed, cache ready", qloop);
            scom_data.words.lower = 0;
            scom_data.words.upper = SSH_EXIT_COMPLETE;
            GPE_PUTSCOM_VAR(PPM_SSHSRC, QUAD_ADDR_BASE, qloop, 0, scom_data.value);

            PK_TRACE("Update QSSR: drop quad_stopped");
            out32(OCB_QSSR_CLR, BIT32(qloop + 14));
        }

        //--------------------------------------------------------------------------
        PK_TRACE_INF("+++++ +++++ END OF STOP EXIT +++++ +++++");
        //--------------------------------------------------------------------------

        if (qspwu & BIT32(0))
        {
            PK_TRACE_DBG("Check: Quad[%d] will assert SPWU Done", qloop);
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_GPMMR_OR, qloop), BIT64(0));

            G_sgpe_stop_record.group.qswu[VECTOR_CONFIG] |= BIT32(qloop);
            G_sgpe_stop_record.group.qswu[VECTOR_EXIT]   &= ~BIT32(qloop);
            PK_TRACE_INF("SX0.A: Assert Quad SPWU Done");
        }

        // process core portion of core request
        for(cloop = 0; cloop < CORES_PER_QUAD; cloop++)
        {
            if(!(cexit & BIT32(cloop)))
            {
                continue;
            }

            // reset clevel to 0 if core is going to wake up
            G_sgpe_stop_record.level[qloop][cloop] = 0;

            PK_TRACE_DBG("Check: Core[%d] will clear wakeup_notify_select",
                         ((qloop << 2) + cloop));
            p9_dd1_cppm_unicast_wr(
                GPE_SCOM_ADDR_CORE(CPPM_CPMMR,     ((qloop << 2) + cloop)),
                GPE_SCOM_ADDR_CORE(CPPM_CPMMR_CLR, ((qloop << 2) + cloop)),
                BIT64(13), CLR_OP);
            PK_TRACE_INF("SX0.B: Switch CorePPM Wakeup back to CME via CPMMR[13]");
        }

        PK_TRACE("Update QSSR: drop stop_exit_ongoing");
        out32(OCB_QSSR_CLR, BIT32(qloop + 26));
    }

    //===========================
    MARK_TRAP(ENDSCOPE_STOP_EXIT)
    //===========================

    return SGPE_STOP_SUCCESS;
}
