/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_thread_db.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
#include "pk.h"
#include "ppe42_scom.h"

#include "cme_firmware_registers.h"
#include "cme_register_addresses.h"
#include "cppm_firmware_registers.h"
#include "cppm_register_addresses.h"
#include "ppm_firmware_registers.h"
#include "ppm_register_addresses.h"
#include "qppm_firmware_registers.h"
#include "qppm_register_addresses.h"

#include "ppehw_common.h"
#include "cmehw_common.h"
#include "cmehw_interrupts.h"

#include "p9_cme_irq.h"
#include "p9_cme_stop.h"
#include "pstate_pgpe_cme_api.h"
#include "ppe42_cache.h"
#include "p9_hcode_image_defines.H"
#include "p9_cme_pstate.h"
#include "cme_panic_codes.h"


//
//External Globals and globals
//
extern CmeRecord G_cme_record;
extern CmeStopRecord G_cme_stop_record;
extern CmePstateRecord G_cme_pstate_record;
extern cmeHeader_t* G_cmeHeader;
extern LocalPstateParmBlock* G_lppb;
extern uint8_t G_vdm_threshold_table[];
cppm_cmedb0_t G_dbData;


//
//Function Prototypes
//
inline void p9_cme_pstate_register()__attribute__((always_inline));
inline void p9_cme_pstate_db0_stop() __attribute__((always_inline));
inline void p9_cme_pstate_db0_pmsr_updt() __attribute__((always_inline));
inline void p9_cme_pstate_freq_update(uint32_t) __attribute__((always_inline));
inline void p9_cme_pstate_update_analog() __attribute__((always_inline));

void p9_cme_pstate_init();
void p9_cme_pstate_process_db0();
void p9_cme_pstate_notify_sib(INTERCME_DIRECT_INTF intf);
void p9_cme_pstate_db0_start();
void p9_cme_pstate_db0_glb_bcast();
void p9_cme_pstate_db0_clip_bcast();
void p9_cme_pstate_update();

//
//Doorbell0 interrupt handler
//
void
p9_cme_pgpe_hb_loss_handler(void* arg, PkIrqId irq)
{
    PK_TRACE_ERR("HB LOSS OCCURED");

    //Clear Interrupt
    out32(G_CME_LCL_EISR_CLR, BIT32(4));

    //Quad Manager
    if(G_cme_pstate_record.qmFlag)
    {
        //Notify and Receive ack from sibling CME. This syncs up both CMEs before
        //Quad Manager touches any analog controls. Otherwise, it's possible that
        //sibling due to STOP ends up touching resclks
        p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN2);

#ifdef USE_CME_RESCLK_FEATURE

        if (in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_RCLK_OPERABLE))
        {
            p9_cme_resclk_update(ANALOG_COMMON, p9_cme_resclk_get_index(ANALOG_PSTATE_RESCLK_OFF),
                                 G_cme_pstate_record.resclkData.common_resclk_idx);
            out32(G_CME_LCL_FLAGS_CLR, BIT32(CME_FLAGS_RCLK_OPERABLE));
        }

#endif
        //move DPLL directly to value in QPPMR[Fsafe] if that value is nonzero
        data64_t scom_data = {0};
        ippm_read(QPPM_QPMMR, &scom_data.value);
        uint32_t FSafe = (scom_data.words.upper >> 20) & 0x7FF;

        out32(G_CME_LCL_FLAGS_CLR, BIT32(CME_FLAGS_PSTATES_ENABLED));
        out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_SAFE_MODE) |
              BIT32(CME_FLAGS_PGPE_HB_LOSS_SAFE_MODE));

        if(FSafe)
        {
            PK_TRACE_INF("Fsafe=0x%x", FSafe);
            G_cme_pstate_record.nextPstate = G_lppb->dpll_pstate0_value - FSafe;
            G_cme_pstate_record.globalPstate = G_lppb->dpll_pstate0_value - FSafe;
            p9_cme_pstate_update_analog();
        }

        //Notify and Receive ack from sibling CME. This is to tell sibling that
        //Quad Manager is done touching analong controls
        p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN2);
        //Sibling CME
    }
    else
    {
        //Wait to receive a notify from Quad Manager
        //and then ACK back to quad manager
        while(!(in32_sh(CME_LCL_EISR) & BIT64SH(39)));

        intercme_direct(INTERCME_DIRECT_IN2, INTERCME_DIRECT_ACK, 0);

        PK_TRACE_INF("RCVed Notify and ACKed");

        out32(G_CME_LCL_FLAGS_CLR, BIT32(CME_FLAGS_PSTATES_ENABLED));
        out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_SAFE_MODE) |
              BIT32(CME_FLAGS_PGPE_HB_LOSS_SAFE_MODE));

        //Wait to receive a notify from Quad Manager
        //and then ACK back to quad manager
        while(!(in32_sh(CME_LCL_EISR) & BIT64SH(39)));

        intercme_direct(INTERCME_DIRECT_IN2, INTERCME_DIRECT_ACK, 0);
        PK_TRACE_INF("RCVed Notify and ACKed");
    }

    PK_TRACE_ERR("HB LOSS OCCURED Processed!");
}

//
//Doorbell0 interrupt handler
//
//Only enabled on QuadManager-CME
void p9_cme_pstate_db0_handler(void)
{
    //Mask EIMR[PGPE_HB_LOSS/4];
    g_eimr_override |= BIT64(4);

    p9_cme_pstate_process_db0();

    g_eimr_override &= ~BIT64(4);
}

//
//Doorbell3 interrupt handler
//
//Note: This enabled on both QuadManagerCME and SiblingCME
void p9_cme_pstate_db3_handler(void)
{
    cppm_cmedb3_t    db3;
    ppm_sshsrc_t sshsrc;
    uint32_t cm;

    //Clear EISR and read DB3 register
    out32(G_CME_LCL_EISR_CLR, BITS32(10, 2));
    CME_GETSCOM(CPPM_CMEDB3, G_cme_pstate_record.firstGoodCoreMask, db3.value);
    PK_TRACE_INF("DB3 Handler DB3=0x%08x%08x", db3.value >> 32, db3.value);

    if((db3.fields.cme_message_numbern == MSGID_DB3_HIGH_PRIORITY_PSTATE) ||
       (db3.fields.cme_message_numbern == MSGID_DB3_REPLAY_DB0) ||
       (db3.fields.cme_message_numbern == MSGID_DB3_ENTER_SAFE_MODE))
    {

        G_cme_pstate_record.updateAnalogError = 0;
        G_cme_pstate_record.skipSiblingLock = 1;

        //On quadManage, we process the data in DB0. The data is written
        //by PGPE before writing the DB3 register
        if(G_cme_pstate_record.qmFlag)
        {
            p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN2);
            p9_cme_pstate_process_db0();
        }
        //On Sibling, poll on intercme_msg "LOCK_SIBLING", then
        //poll on intercme_in0/1 direct msg.
        else
        {
            //Wait to receive a notify from Quad Manager
            //and then ACK back to quad manager
            while(!(in32_sh(CME_LCL_EISR) & BIT64SH(39)));

            intercme_direct(INTERCME_DIRECT_IN2, INTERCME_DIRECT_ACK, 0);

            p9_cme_pstate_sibling_lock_and_intercme_protocol(INTERCME_MSG_LOCK_SKIP);
        }

        if (db3.fields.cme_message_numbern == MSGID_DB3_ENTER_SAFE_MODE)
        {
            out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_SAFE_MODE));
        }

        G_cme_pstate_record.skipSiblingLock = 0;
    }
    else if (db3.fields.cme_message_numbern == MSGID_DB3_DISABLE_SGPE_HANDOFF)
    {

        G_cme_record.disableSGPEHandoff = 1;

        for(cm = 2; cm > 0; cm--)
        {
            if (in32(G_CME_LCL_FLAGS) & cm)
            {
                CME_GETSCOM(PPM_SSHSRC, cm, sshsrc);

                //then clear the EIMR[PC_INTERRUPT_PENDING_C1)]
                if ((sshsrc.fields.stop_gated == 1) && (
                        (sshsrc.fields.act_stop_level < 5) ||
                        (sshsrc.fields.act_stop_level == 5 && sshsrc.fields.stop_transition != 0x2)))
                {
                    CME_PUTSCOM(CPPM_CPMMR_CLR, cm, BIT64(13));
                    out32(G_CME_LCL_EIMR_CLR, cm << SHIFT32(13));
                }
            }
        }

        //Notify and Receive ack from sibling CME. This syncs up
        //Quad Manager and Sibling before Quad Manager acks back to
        //PGPE
        if (G_cme_pstate_record.qmFlag)
        {
            p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN2);
            send_ack_to_pgpe(MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK);
        }
        else
        {
            //Wait to receive a notify from Quad Manager
            //and then ACK back to quad manager
            while(!(in32_sh(CME_LCL_EISR) & BIT64SH(39)));

            intercme_direct(INTERCME_DIRECT_IN2, INTERCME_DIRECT_ACK, 0);
        }
    }
    else if (db3.fields.cme_message_numbern == MSGID_DB3_SUSPEND_STOP_ENTRY)
    {
        G_cme_stop_record.core_vdm_droop = CME_MASK_BC;

        if (!(G_cme_stop_record.entry_ongoing ||
              G_cme_stop_record.exit_ongoing))
        {
            p9_cme_stop_eval_eimr_override();
        }

        //Note: we don't ack back to PGPE. Instead, the STOP code will set the
        //CME_FLAGS[SUSPEND_ENTRY] whenever it finishes any currently ongoing entry

    }
    else if (db3.fields.cme_message_numbern == MSGID_DB3_UNSUSPEND_STOP_ENTRY)
    {
        G_cme_stop_record.core_vdm_droop = 0;

        if (!(G_cme_stop_record.entry_ongoing ||
              G_cme_stop_record.exit_ongoing))
        {
            p9_cme_stop_eval_eimr_override();
        }

        //Notify and Receive ack from sibling CME. This syncs up
        //Quad Manager and Sibling before Quad Manager acks back to
        //PGPE
        if (G_cme_pstate_record.qmFlag)
        {
            p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN2);
            send_ack_to_pgpe(MSGID_PCB_TYPE4_UNSUSPEND_ENTRY_ACK);
        }
        else
        {
            //Wait to receive a notify from Quad Manager
            //and then ACK back to quad manager
            while(!(in32_sh(CME_LCL_EISR) & BIT64SH(39)));

            intercme_direct(INTERCME_DIRECT_IN2, INTERCME_DIRECT_ACK, 0);
        }

    }
    else if (db3.fields.cme_message_numbern == MSGID_DB3_CLIP_BROADCAST)
    {
        PK_TRACE_INF("PSTATE: DB3 Clip Enter");

        uint32_t dbQuadInfo, dbBit8_15;
        cppm_cmedb0_t dbData;
        CME_GETSCOM(CPPM_CMEDB0, G_cme_pstate_record.firstGoodCoreMask, dbData.value);
        dbBit8_15 = (dbData.value & BITS64(8, 8)) >> SHIFT64(15);
        dbQuadInfo = (dbData.value >> (in32(G_CME_LCL_SRTCH0) &
                                       (BITS32(CME_SCRATCH_LOCAL_PSTATE_IDX_START, CME_SCRATCH_LOCAL_PSTATE_IDX_LENGTH)
                                       ))) & 0xFF;

        //Quad Manager
        if(G_cme_pstate_record.qmFlag)
        {
            //Sync up with sibling CME
            p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN2);

            if (dbBit8_15 == DB0_CLIP_BCAST_TYPE_PMIN)
            {
                G_cme_pstate_record.pmin = dbQuadInfo;
            }
            else
            {
                G_cme_pstate_record.pmax = dbQuadInfo;
            }

            PK_TRACE_INF("PSTATE: Pmin=0x%x,Pmax=0x%x", G_cme_pstate_record.pmin, G_cme_pstate_record.pmax);


            p9_cme_pstate_pmsr_updt();

            //Sync up with the sibling CME before ACKing back to PGPE
            p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN2); //Notify sibling

            //Send type4(ack doorbell)
            send_ack_to_pgpe(MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK);

        }
        //On Sibling, poll on intercme_in2 direct msg.
        else
        {
            //Wait to receive a notify from Quad Manager
            //and then ACK back to quad manager
            while(!(in32_sh(CME_LCL_EISR) & BIT64SH(39)));

            intercme_direct(INTERCME_DIRECT_IN2, INTERCME_DIRECT_ACK, 0);

            if (dbBit8_15 == DB0_CLIP_BCAST_TYPE_PMIN)
            {
                G_cme_pstate_record.pmin = dbQuadInfo;
            }
            else
            {
                G_cme_pstate_record.pmax = dbQuadInfo;
            }

            p9_cme_pstate_pmsr_updt();

            //Wait to receive a notify from Quad Manager
            //and then ACK back to quad manager
            while(!(in32_sh(CME_LCL_EISR) & BIT64SH(39)));

            intercme_direct(INTERCME_DIRECT_IN2, INTERCME_DIRECT_ACK, 0);
        }

        PK_TRACE_INF("PSTATE: DB3 Clip Exit");
    }

    else
    {
        //\todo  Will be done as part of 41947
        //41947
    }

    PK_TRACE_INF("DB3 Handler Done ");
}


//
void p9_cme_pstate_init()
{
    PK_TRACE_INF("PSTATE: Init Started");
    PkMachineContext  ctx __attribute__((unused));
    uint32_t cores = 0;
    data64_t scom_data;
    uint64_t eimr_clr = 0;
    uint64_t eimr_or = 0;
    uint32_t resclk_data;

    G_cmeHeader = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);
    G_lppb = (LocalPstateParmBlock*)(G_cmeHeader->g_cme_pstate_region_offset + CME_SRAM_BASE_ADDR);
    PK_TRACE_INF("PSTATE: Hdr=0x%x, LPPB=0x%x, Nominal_Freq_Mhz=%d ", (uint32_t)G_cmeHeader, (uint32_t)G_lppb,
                 G_lppb->operating_points[NOMINAL].frequency_mhz);

    // Pre-compute the value to be used as the SPURR reference during CME Boot and
    // save in a variable to be used later during Stop exit.
    // The value is the 2's complement of ROUND((Core Nominal Frequency in Mhz)/64)

    // grab the core freq in MHz from the pstate parameter block
    uint32_t core_freq = (G_lppb->operating_points[NOMINAL].frequency_mhz);

    // generate a rounded up divide by 64 to normalize
    // (to the number of cycles/32 in 16x 32Mhz TOD pulses)
    core_freq = (core_freq >> 5 & 0x1) ? (1 + (core_freq >> 6)) : (core_freq >> 6);

    // generate 2's complement and shift into bits 0:7 of 32-bit value
    G_cme_record.spurr_freq_ref_upper = ((~core_freq) + 1) << 24;

    // Mask PMCR interrupts, these will be unmasked when starting Pstates
    eimr_or |= BITS64(34, 2);



    //Read CME_LCL_FLAGS
    uint32_t cme_flags = in32(G_CME_LCL_FLAGS);

    G_cme_pstate_record.qmFlag         = cme_flags & BIT32(CME_FLAGS_QMGR_MASTER);
    G_cme_pstate_record.siblingCMEFlag = cme_flags & BIT32(CME_FLAGS_SIBLING_FUNCTIONAL);

    if(cme_flags & BIT32(CME_FLAGS_CORE0_GOOD))
    {
        G_cme_pstate_record.firstGoodCoreMask = CME_MASK_C0;
        cores |= CME_MASK_C0;
    }
    else // Core1 must be good
    {
        G_cme_pstate_record.firstGoodCoreMask = CME_MASK_C1;
        cores |= CME_MASK_C1;
    }

    //Disable PGPE heart beat loss
    g_eimr_override |= BIT64(4);
    out32(G_CME_LCL_EIMR_OR, BIT32(4));

    //Enable Interrupts depending on whether this CME is
    //a quadManager or siblingCME. DB0 is enabled only
    //on quadManager. Whereas, InterCME_IN0 only on
    //siblingCME.
    //
    //if quadManager
    if (G_cme_pstate_record.qmFlag)
    {
        if(G_cme_pstate_record.siblingCMEFlag)
        {
            // Wait for the sibling to boot
            intercme_direct(INTERCME_DIRECT_IN1, INTERCME_DIRECT_NOTIFY, 1);
        }

        if (cme_flags & BIT32(CME_FLAGS_CORE0_GOOD))
        {
            eimr_clr |= BIT64(36); //Enable DB0_0
            eimr_or  |= BIT64(37); //Disable DB0_1
        }
        else
        {
            eimr_clr |= BIT64(37); //Enable  DB0_1
            eimr_or  |= BIT64(36); //Disable DB0_0
        }

        // Disable the intercme messages used by the Sibling
        eimr_or |= BIT64(7) | BIT64(38);

        // Pstate Clocking Initialization (QM)
        // Calculate the initial pstate
        ippm_read(QPPM_DPLL_STAT, &scom_data.value);
        int32_t pstate = (int32_t)G_lppb->dpll_pstate0_value
                         - (int32_t)((scom_data.value & BITS64(1, 11)) >> SHIFT64(11));
        // Clip the pstate at ultra-turbo, ie. pstate=0
        G_cme_pstate_record.quadPstate = (pstate < 0) ? 0 : (uint32_t)pstate;
        PK_TRACE_INF("qm | initial pstate=%d", G_cme_pstate_record.quadPstate);

#ifdef USE_CME_VDM_FEATURE

        // VDM Enablement (QM)
        // Do this prior to synchronizing the Pstate w/ its Sibling CME
        if(G_cmeHeader->g_cme_qm_mode_flags & CME_QM_FLAG_SYS_VDM_ENABLE)
        {
            uint32_t i;
            uint32_t region = pstate_to_vpd_region(G_cme_pstate_record.quadPstate);
            // VID compare
            scom_data.value = (uint64_t)(pstate_to_vid_compare(G_cme_pstate_record.quadPstate, region)
                                         & BITS32(24, 8)) << SHIFT64(7);
            // Calculate the new index for each threshold
            calc_vdm_threshold_indices(G_cme_pstate_record.quadPstate, region,
                                       G_cme_pstate_record.vdmData.vdm_threshold_idx);

            // Thresholds; no stepping is required since the VDMs are still
            // disabled at this point.
            for(i = 0; i < NUM_THRESHOLD_POINTS; ++i)
            {
                scom_data.words.upper |= G_vdm_threshold_table[
                                             G_cme_pstate_record.vdmData.vdm_threshold_idx[i]]
                                         << (SHIFT32(11) - (i * 4));
            }

            PK_TRACE_INF("qm | initial vdmcfgr=%08x%08x", scom_data.words.upper,
                         scom_data.words.lower);
            ippm_write(QPPM_VDMCFGR, scom_data.value);
#if NIMBUS_DD_LEVEL != 10
            // Slam the VDM Jump values at CME boot/init (VDMs are not enabled yet)
            ippm_read(QPPM_DPLL_CTRL, &scom_data.value);
            scom_data.words.lower = calc_vdm_jump_values(G_cme_pstate_record.quadPstate,
                                    region);
            ippm_write(QPPM_DPLL_CTRL, scom_data.value);
#endif//NIMBUS_DD_LEVEL
            // Assumes 100us has elapsed during cache chiplet wakeup after
            // enabling the full-speed cache clock grid
            // Clear VDM Disable
            ippm_write(PPM_VDMCR_CLR, BIT64(1));
        }

#endif//USE_CME_VDM_FEATURE

        // Synchronize initial pstate w/ sibling CME
        if(G_cme_pstate_record.siblingCMEFlag)
        {
            out32(G_CME_LCL_EITR_OR, BIT32(30));
            out32(G_CME_LCL_EIPR_OR, BIT32(30));
            intercme_msg_send(G_cme_pstate_record.quadPstate,
                              IMT_INIT_PSTATE);
        }
    }
    else  // Sibling CME
    {
        // Disable all DB0 and DB3 interrupts
        eimr_or |= BITS64(36, 2) | BITS64(10, 2);

        // Sibling set-up for intercme messaging, after this respond to the QMs
        // notify to tell him the Sib is ready to go
        out32(G_CME_LCL_EITR_OR, BIT32(29));
        out32(G_CME_LCL_EIPR_OR, BIT32(29));

        // Wait for QM to send an initial notify
        while(!(in32_sh(CME_LCL_EISR) & BIT64SH(38)));

        intercme_direct(INTERCME_DIRECT_IN1, INTERCME_DIRECT_ACK, 0);

        intercme_msg_recv(&G_cme_pstate_record.quadPstate, IMT_INIT_PSTATE);
        PK_TRACE_INF("sib | initial pstate=%d", G_cme_pstate_record.quadPstate);

        //Enable InterCME_IN0 but do not clear the override mask
        eimr_clr |= BIT64(7);
    }

    if (cme_flags & BIT32(CME_FLAGS_CORE0_GOOD))
    {
        eimr_clr |=  BIT64(10); //Enable DB3_0
        eimr_or  |=  BIT64(11); //Disable DB3_1
    }
    else
    {
        eimr_clr |= BIT64(11); //Enable  DB3_1
        eimr_or  |= BIT64(10); //Disable DB3_0
    }


    g_eimr_override |= eimr_or;
    g_eimr_override &= ~eimr_clr;
    out64(CME_LCL_EIMR_OR,  eimr_or);
    out64(CME_LCL_EIMR_CLR, eimr_clr);

    // At this point, both QM and Sib can set their initial global Pstate
    G_cme_pstate_record.globalPstate = G_cme_pstate_record.quadPstate;

    // Resonant Clocking Check (QM + Sibling)
    // Check that resonance is not enabled in CACCR
    CME_GETSCOM(CPPM_CACCR, cores, scom_data.value);
    // Ignore clk_sync_enable, reserved, and override bits
    resclk_data = scom_data.words.upper & BITS32(0, 13);

#if (NIMBUS_DD_LEVEL > 20 || CUMULUS_DD_LEVEL > 10) && DISABLE_STOP8 == 0
    // Check that resonance is not enabled in EXCGCR
    ippm_read(QPPM_EXCGCR, &scom_data.value);
    // Ignore clk_sync_enable, clkglm_async_reset, clkglm_sel, and reserved
    resclk_data |= scom_data.words.upper & BITS32(0, 30);
#endif

    // Check that resonance is not enabled in QACCR
    ippm_read(QPPM_QACCR, &scom_data.value);
    resclk_data |= scom_data.words.upper & BITS32(0, 13);

    if(resclk_data != 0)
    {
        PK_PANIC(CME_PSTATE_RESCLK_ENABLED_AT_BOOT);
    }

#ifdef USE_CME_RESCLK_FEATURE

    // Resonant Clocking Initialization (QM + Sibling)
    if(G_cmeHeader->g_cme_qm_mode_flags & CME_QM_FLAG_RESCLK_ENABLE)
    {
        uint32_t curr_idx = (uint32_t)G_lppb->resclk.resclk_index[0];

        // Initialize the Resclk indices
        G_cme_pstate_record.resclkData.core0_resclk_idx = curr_idx;
        G_cme_pstate_record.resclkData.core1_resclk_idx = curr_idx;

        if(G_cme_pstate_record.qmFlag)
        {
            uint32_t next_idx = p9_cme_resclk_get_index(G_cme_pstate_record.quadPstate);

#if DISABLE_STOP8 == 0
            G_cme_pstate_record.resclkData.l2_ex0_resclk_idx = curr_idx;
            G_cme_pstate_record.resclkData.l2_ex1_resclk_idx = curr_idx;

            // Directly Write QACCR without stepping, prepare for later enablement
            // since cores and L2s are currently being overridden with CACCR and EXCGCR
            G_cme_pstate_record.resclkData.common_resclk_idx = next_idx;

            // Read QACCR
            ippm_read(QPPM_QACCR, &scom_data.value);
            // Clear out the resclk settings just to be safe (should not be needed)
            scom_data.value &= ~BITS64(0, 13);
            // OR-in the resclk settings which match the current Pstate
            scom_data.value |= (((uint64_t)G_lppb->resclk.steparray[next_idx].value) << 48);
            ippm_write(QPPM_QACCR, scom_data.value);
#else
            // Step QACCR since both L2 clock domains are already enabled, not using EXCGCR due to HW bug
            p9_cme_resclk_update(ANALOG_COMMON, next_idx, curr_idx);
#endif

        }

        out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_RCLK_OPERABLE));
    }

#endif//USE_CME_RESCLK_FEATURE

#ifdef USE_CME_VDM_FEATURE

    // Set VDM Operable flag for both QM and Sib, at this point the QM has
    // completed all initialization for VDMs and QM and Sib are interlocked
    if(G_cmeHeader->g_cme_qm_mode_flags & CME_QM_FLAG_SYS_VDM_ENABLE)
    {
        out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_VDM_OPERABLE));
    }

#endif//USE_CME_VDM_FEATURE

    //Register with PGPE
    p9_cme_pstate_register();

    PK_TRACE_INF("PSTATE: Init Exit");
}

//
//Process Doorbell0
//
void p9_cme_pstate_process_db0()
{
    G_cme_pstate_record.updateAnalogError = 0;
    uint64_t scom_data;

    PK_TRACE_INF("PSTATE: Process DB0 Enter");

    //Clear EISR and read DB0 register
    out32_sh(CME_LCL_EISR_CLR, BITS64SH(36, 2));
    CME_GETSCOM(CPPM_CMEDB0, G_cme_pstate_record.firstGoodCoreMask, G_dbData.value);

    CME_GETSCOM_OR( CPPM_CSAR, CME_MASK_BC, scom_data );

    if( scom_data & BIT64(CPPM_CSAR_PSTATE_HCODE_ERROR_INJECT) )
    {
        // Clear the injection so things are not permenently stuck
        CME_PUTSCOM(CPPM_CSAR_CLR, CME_MASK_BC, BIT64(CPPM_CSAR_PSTATE_HCODE_ERROR_INJECT));
        PK_TRACE_ERR("CME PSTATE ERROR INJECT TRAP");
        PK_PANIC(CME_PSTATE_TRAP_INJECT);
    }

    uint32_t cme_flags = in32(G_CME_LCL_FLAGS);

    PK_TRACE_INF("PSTATE: DB0=0x%08x%08x", G_dbData.value >> 32, G_dbData.value);

    //Ignore if Doorbell0 if DB0_PROCESSING_ENABLE=0. This bit is zero
    //upon CME boot. PGPE will set it right before sending Pstate Starts.
    //PGPE clears it before ACKing Stop Entry Notify(this CME is about to powered off)
    //back to SGPE
    if (!(cme_flags & BIT32(CME_FLAGS_SAFE_MODE)))
    {
        //Process DB0
        //Start Pstates and Pstates NOT enabled
        if((G_dbData.fields.cme_message_number0 == MSGID_DB0_START_PSTATE_BROADCAST) &&
           (!(cme_flags & BIT32(CME_FLAGS_PSTATES_ENABLED))))
        {
            //This will Clear EISR[DB0_C0/1] to prevent another DB0 interrupt
            //PGPE multicast Global Bcast/Clip Bcast DB0, and it's possible that
            //the DB0 interrupt was taken as a result of multicast operation, but
            //the value of DB0 read corresponds to Pstate Start. In such a case,
            //another DB0 interrupt can happen, and it appears as PGPE has sent
            //a second Pstate Start causing CME to ACK back with error and Halt
            p9_cme_pstate_db0_start();
        }
        //Global Actual Broadcast and Pstates enabled
        else if((G_dbData.fields.cme_message_number0 == MSGID_DB0_GLOBAL_ACTUAL_BROADCAST) ||
                (G_dbData.fields.cme_message_number0 == MSGID_DB0_DB3_PAYLOAD))
        {
            //Process Global Bcast only if Pstates are enabled.
            //Otherwise, ignore. The reason is PGPE multicasts Global Bcast, and doorbell0
            //can be written while this CME is powered-off or or about to be powered-off.
            //For Pstate Start and Stop PGPE only unicasts.
            if (cme_flags & BIT32(CME_FLAGS_PSTATES_ENABLED))
            {
                p9_cme_pstate_db0_glb_bcast();
            }
        }
        //Stop Pstates only if Pstates are enabled
        else if((G_dbData.fields.cme_message_number0 == MSGID_DB0_STOP_PSTATE_BROADCAST) &&
                (cme_flags & BIT32(CME_FLAGS_PSTATES_ENABLED)))
        {
            p9_cme_pstate_db0_stop();
        }
        //Pmin or Pmax Update
        else if(G_dbData.fields.cme_message_number0 == MSGID_DB0_CLIP_BROADCAST)
        {
            //Process only if Pstates are enabled. Otherwise, ignore.
            if (cme_flags & BIT32(CME_FLAGS_PSTATES_ENABLED))
            {
                p9_cme_pstate_db0_clip_bcast();
            }
        }
        else if(G_dbData.fields.cme_message_number0 == MSGID_DB0_PMSR_UPDT)
        {
            p9_cme_pstate_db0_pmsr_updt();
        }
        else if(G_dbData.fields.cme_message_number0 == MSGID_DB0_REGISTER_DONE)
        {
            send_ack_to_pgpe(MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK);
        }
        //Otherwise, send an ERR ACK to PGPE and Halt
        else
        {
            PK_TRACE_INF("PSTATE: Bad DB0=0x%x", (uint8_t)G_dbData.fields.cme_message_number0);
            send_ack_to_pgpe(MSGID_PCB_TYPE4_ACK_ERROR);

            if(in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_PM_DEBUG_HALT_ENABLE))
            {
                if(G_dbData.fields.cme_message_number0 < MSGID_DB0_VALID_START ||
                   G_dbData.fields.cme_message_number0 > MSGID_DB0_VALID_END)
                {
                    PK_PANIC(CME_PSTATE_UNEXPECTED_DB0_MSGID);
                }
                else
                {
                    PK_PANIC(CME_PSTATE_INVALID_DB0_MSGID);
                }
            }
        }
    }

    PK_TRACE_INF("PSTATE: Process DB0 Exit");
}


inline void p9_cme_pstate_register()
{
    G_cme_pstate_record.registerInProgress = 1;
    uint64_t scom_data;
    CME_GETSCOM_OR( CPPM_CSAR, CME_MASK_BC, scom_data );
    uint32_t register_enable = scom_data & BIT64(CPPM_CSAR_ENABLE_PSTATE_REGISTRATION_INTERLOCK);
    uint32_t msgCnt = 0;
    uint32_t done = 0;

    //Quad Manager sends register message to PGPE
    if (G_cme_pstate_record.qmFlag)
    {
        //Clear EISR[DB0_C0/1]
        out32_sh(CME_LCL_EISR_CLR, BITS64SH(36, 2));

        send_ack_to_pgpe(MSGID_PCB_TYPE4_QUAD_MGR_AVAILABLE);
        PK_TRACE_INF("PSTATE: Register Msg Sent");

        if(register_enable)
        {
            PK_TRACE_INF("PSTATE: DB0 Processing is Enabled");

            //PGPE sends MSGID_DB0_REGISTER_DONE, if Pstates aren't active anymore.
            //Otherwise, PGPE sends DB0 in the following order
            //1. MSGID_DB0_START_PSTATE_BROADCAST
            //2. MSGID_DB0_CLIP_BROADCAST
            //3. MSGID_DB0_CLIP_BROADCAST
            while(!done)
            {
                uint32_t db0_check = G_cme_pstate_record.firstGoodCoreMask << SHIFT64SH(37);

                //Wait until DB0 is written again (looking only at the first good CPPM)

                while(!(in32_sh(CME_LCL_EISR) & db0_check)) {}

                out32_sh(CME_LCL_EISR_CLR, db0_check);

                CME_GETSCOM(CPPM_CMEDB0, G_cme_pstate_record.firstGoodCoreMask, G_dbData.value);

                //Process DB0
                if((G_dbData.fields.cme_message_number0 == MSGID_DB0_START_PSTATE_BROADCAST))
                {
                    p9_cme_pstate_db0_start();
                    msgCnt++;
                }
                else if ((G_dbData.fields.cme_message_number0 ==  MSGID_DB0_CLIP_BROADCAST) &&
                         ((in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_PSTATES_ENABLED))))
                {
                    p9_cme_pstate_db0_clip_bcast();
                    msgCnt++;
                }
                //PGPE sends this if Pstates aren't active anymore
                else if ((G_dbData.fields.cme_message_number0 ==  MSGID_DB0_REGISTER_DONE))
                {
                    send_ack_to_pgpe(MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK);
                    done = 1;
                }

                if (msgCnt == 3)
                {
                    done = 1;
                }
            }
        }

    }
    //Sibling CME
    else
    {
        if (register_enable)
        {
            PK_TRACE_INF("PSTATE: Wait on Pstate Start");

            //PGPE sends MSGID_DB0_REGISTER_DONE, if Pstates aren't active anymore.
            //Otherwise, PGPE sends DB0 in the following order
            //1. MSGID_DB0_START_PSTATE_BROADCAST
            //2. MSGID_DB0_CLIP_BROADCAST
            //3. MSGID_DB0_CLIP_BROADCAST
            while(!done)
            {
                if ((G_dbData.fields.cme_message_number0 ==  MSGID_DB0_REGISTER_DONE))
                {
                    done = 1;
                    PK_TRACE_INF("PSTATE: Sib Register Got Pstate Register Done");
                }
                else
                {
                    p9_cme_pstate_sibling_lock_and_intercme_protocol(INTERCME_MSG_LOCK_WAIT_ON_RECV);
                    msgCnt++;

                    if (msgCnt == 3)
                    {
                        done = 1;
                    }
                }

                PK_TRACE_INF("PSTATE: Sib Register MsgCnt=%d", msgCnt);
            }
        }
    }

    G_cme_pstate_record.registerInProgress = 0;
    PK_TRACE_INF("PSTATE: Register Done\n");
}

//
//Doorbell0 Start
//
void p9_cme_pstate_db0_start()
{
    PK_TRACE_INF("PSTATE: DB0 Start Enter");

    p9_cme_pstate_update();
    uint32_t ack;

    //Enable PGPE_HEARTBEAT_LOSS in EIMR upon Pstate Start
    //will be applied on return from DB0 interrupt
    g_eimr_override &= ~BIT64(4);

    //Clear EISR[DB0_C0/1] to prevent another interrupt
    out32_sh(CME_LCL_EISR_CLR, BITS64SH(36, 2));

    //Prepare PPM type4 payload for ACK/NACK for PGPE
    //Send NACK, if any errors. Otherwise, send ACK

    if(G_cme_pstate_record.updateAnalogError)
    {
        ack = MSGID_PCB_TYPE4_NACK_DROOP_PRESENT;
    }
    else
    {
        ack = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;

        out32(G_CME_LCL_FLAGS_OR, BIT32(24));//Set Pstates Enabled

        //Enable PMCR Interrupts (for good cores) when this task is done
        g_eimr_override &= ~(uint64_t)(G_cme_record.core_enabled << SHIFT64(35));

        //Clear Core GPMMR RESET_STATE_INDICATOR bit to show pstates have started
        CME_PUTSCOM(PPM_GPMMR_CLR, G_cme_record.core_enabled, BIT64(15));
    }

    //Send type4(ack doorbell)
    send_ack_to_pgpe(ack);

    //Reset G_cme_pstate_record.updateAnalogError
    G_cme_pstate_record.updateAnalogError = 0;

    PK_TRACE_INF("PSTATE: DB0 Start Exit");
}

//
//Doorbell0 Global Broadcast
//
void p9_cme_pstate_db0_glb_bcast()
{
    PK_TRACE_INF("PSTATE: DB0 GlbBcast Enter");

    p9_cme_pstate_update();
    uint32_t ack;

    //Prepare PPM type4 payload for ACK/NACK for PGPE
    //Send NACK, if any errors. Otherwise, send ACK
    if(G_cme_pstate_record.updateAnalogError)
    {
        ack = MSGID_PCB_TYPE4_NACK_DROOP_PRESENT;
    }
    else
    {
        ack = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
    }

    //Send type4(ack doorbell)
    send_ack_to_pgpe(ack);
    G_cme_pstate_record.updateAnalogError = 0;
    PK_TRACE_INF("PSTATE: DB0 GlbBcast Exit\n");
}

//
//Doorbell0 Pstate Stop
//
inline void p9_cme_pstate_db0_stop()
{
    PK_TRACE_INF("PSTATE: DB0 Stop Enter");

    out32(G_CME_LCL_FLAGS_CLR, BIT32(24));//Set Pstates Disabled

    //Disable PGPE_HEARTBEAT_LOSS in EIMR
    //will be applied on return from DB0 interrupt
    g_eimr_override |= BIT64(4);
    out32(G_CME_LCL_EIMR_OR, BIT32(4));

    // Disable both PMCR regs ignoring partial-goodness
    out32_sh(CME_LCL_EIMR_OR, BITS64SH(34, 2));
    g_eimr_override |= BITS64(34, 2);

    //PGPE will update the LMCR[0] before sending the STOP PSTATE Doorbell.
    //Here we update the PMSR to indicate that Pstates are no longer honored accordingly.
    p9_cme_pstate_pmsr_updt();
    p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN0); //Notify sibling

    //Send type4(ack doorbell)
    send_ack_to_pgpe(MSGID_PCB_TYPE4_ACK_PSTATE_SUSPENDED);

    //Set Core GPMMR RESET_STATE_INDICATOR bit to show pstates have stopped
    CME_PUTSCOM(PPM_GPMMR_OR, G_cme_record.core_enabled, BIT64(15));

    PK_TRACE_INF("PSTATE: DB0 Stop Exit");
}

void p9_cme_pstate_db0_clip_bcast()
{

    PK_TRACE_INF("PSTATE: DB0 Clip Enter");


    uint32_t dbBit8_15 = (G_dbData.value & BITS64(8, 8)) >> SHIFT64(15);

    uint32_t dbQuadValue = (G_dbData.value >> (in32(G_CME_LCL_SRTCH0) &
                            (BITS32(CME_SCRATCH_LOCAL_PSTATE_IDX_START,
                                    CME_SCRATCH_LOCAL_PSTATE_IDX_LENGTH)))) & 0xFF;

    if (dbBit8_15 == DB0_CLIP_BCAST_TYPE_PMIN)
    {
        G_cme_pstate_record.pmin = dbQuadValue;
    }
    else
    {
        G_cme_pstate_record.pmax = dbQuadValue;
    }

    PK_TRACE_INF("PSTATE: Pmin=0x%x,Pmax=0x%x", G_cme_pstate_record.pmin, G_cme_pstate_record.pmax);

    if(G_cme_pstate_record.siblingCMEFlag)
    {
        // "Lock" the sibling. Notify will unlock it
        intercme_msg_send(0, IMT_LOCK_SIBLING);
    }

    p9_cme_pstate_pmsr_updt();
    p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN0); //Notify sibling

    //Send type4(ack doorbell)
    send_ack_to_pgpe(MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK);

    PK_TRACE_INF("PSTATE: DB0 Clip Exit");
}

inline void p9_cme_pstate_db0_pmsr_updt()
{
    PK_TRACE_INF("PSTATE: DB0 Pmsr Updt Enter");

    uint32_t dbBit8_15 = (G_dbData.value & BITS64(8, 8)) >> SHIFT64(15);

    switch(dbBit8_15)
    {
        case DB0_PMSR_UPDT_SET_PSTATES_SUSPENDED:
            out32(G_CME_LCL_FLAGS_OR, BIT32(17));
            break;

        case DB0_PMSR_UPDT_CLEAR_PSTATES_SUSPENDED:
            out32(G_CME_LCL_FLAGS_CLR, BIT32(17));
            break;
    }

    p9_cme_pstate_pmsr_updt();

    p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN0); //Notify sibling

    //Send type4(ack doorbell)
    send_ack_to_pgpe(MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK);

    //Set Core GPMMR RESET_STATE_INDICATOR bit to show pstates have stopped
    CME_PUTSCOM(PPM_GPMMR_OR, G_cme_record.core_enabled, BIT64(15));

    PK_TRACE_INF("PSTATE: DB0 Safe Mode Exit");
}

void p9_cme_pstate_notify_sib(INTERCME_DIRECT_INTF intf)
{
    PK_TRACE_INF("PSTATE: Notify Enter");

    //Notify sibling CME(if any)
    if(G_cme_pstate_record.siblingCMEFlag)
    {
        intercme_direct(intf, INTERCME_DIRECT_NOTIFY, 0);
    }
}

inline void p9_cme_pstate_freq_update(uint32_t cme_flags)
{
    if(cme_flags & BIT32(CME_FLAGS_FREQ_UPDT_DISABLE))
    {
        PK_TRACE_INF("PSTATE: Freq Updt Disabled");
    }
    else
    {
        PK_TRACE_INF("PSTATE: Freq Updt Enter");
        PK_TRACE_INF("PSTATE: Dpll0=0x%x", G_lppb->dpll_pstate0_value);

        //Adjust DPLL
        qppm_dpll_freq_t dpllFreq;

        //Write new value of DPLL using INTERPPM
        //Currently, fmax, fmin and fmult are all written with the same value
        dpllFreq.value = 0;
        dpllFreq.fields.fmax  = G_lppb->dpll_pstate0_value - G_cme_pstate_record.nextPstate;
        dpllFreq.fields.fmult = dpllFreq.fields.fmax;
        dpllFreq.fields.fmin  = dpllFreq.fields.fmax;

        if (dpllFreq.fields.fmult > DPLL_MAX_VALUE ||
            dpllFreq.fields.fmult < DPLL_MIN_VALUE)
        {
            PK_PANIC(CME_PSTATE_DPLL_OUT_OF_BOUNDS_REQ);
        }

        ippm_write(QPPM_DPLL_FREQ, dpllFreq.value);

        G_cme_pstate_record.updateAnalogError = poll_dpll_stat();

        PK_TRACE_INF("PSTATE: Freq Updt Exit");
    }
}

inline void p9_cme_pstate_update_analog()
{
    do
    {

        uint32_t cme_flags = in32(G_CME_LCL_FLAGS);

#ifdef USE_CME_VDM_FEATURE

        // if increasing voltage (decreasing Pstate) then change VDM threshold settings before changing frequency
        if((cme_flags & BIT32(CME_FLAGS_VDM_OPERABLE))
           && G_cme_pstate_record.nextPstate < G_cme_pstate_record.quadPstate)
        {
            G_cme_pstate_record.updateAnalogError = p9_cme_vdm_update(G_cme_pstate_record.nextPstate);
        }

        if (G_cme_pstate_record.updateAnalogError)
        {
            break;
        } //If error skip the code below

#endif //USE_CME_VDM_FEATURE

#ifdef USE_CME_RESCLK_FEATURE

        uint32_t rescurr = (cme_flags & BIT32(CME_FLAGS_RCLK_OPERABLE))
                           ? G_cme_pstate_record.resclkData.common_resclk_idx
                           : 0;

        uint32_t resnext = (cme_flags & BIT32(CME_FLAGS_RCLK_OPERABLE))
                           ? p9_cme_resclk_get_index(G_cme_pstate_record.nextPstate)
                           : 0;

        if(resnext < rescurr)
        {
            p9_cme_resclk_update(ANALOG_COMMON, resnext, rescurr);
        }

#endif//USE_CME_RESCLK_FEATURE

        p9_cme_pstate_freq_update(cme_flags);

        //If error changing DPLL freq, skip the code below
        if (G_cme_pstate_record.updateAnalogError)
        {
            break;
        }

#ifdef USE_CME_RESCLK_FEATURE

        if(resnext > rescurr)
        {
            p9_cme_resclk_update(ANALOG_COMMON, resnext, rescurr);
        }

#endif//USE_CME_RESCLK_FEATURE

#ifdef USE_CME_VDM_FEATURE

        // if decreasing voltage (increasing Pstate) then change VDM threshold settings after changing frequency
        if((cme_flags & BIT32(CME_FLAGS_VDM_OPERABLE))
           && G_cme_pstate_record.nextPstate >= G_cme_pstate_record.quadPstate)
        {
            G_cme_pstate_record.updateAnalogError = p9_cme_vdm_update(G_cme_pstate_record.nextPstate);

            if (G_cme_pstate_record.updateAnalogError)
            {
                break;
            }
        }

#endif//USE_CME_VDM_FEATURE
    }
    while(0);

}

void p9_cme_pstate_update()
{
    PkMachineContext ctx;

    PK_TRACE_INF("PSTATE: Pstate Updt Enter");

    G_cme_pstate_record.nextPstate = (G_dbData.value >> (in32(G_CME_LCL_SRTCH0) &
                                      (BITS32(CME_SCRATCH_LOCAL_PSTATE_IDX_START,
                                              CME_SCRATCH_LOCAL_PSTATE_IDX_LENGTH)))) & 0xFF;

    G_cme_pstate_record.globalPstate = (G_dbData.value & BITS64(8, 8))
                                       >> SHIFT64(15);

    if((G_cme_pstate_record.nextPstate != G_cme_pstate_record.quadPstate) ||
       G_cme_pstate_record.registerInProgress)
    {
        if(G_cme_pstate_record.siblingCMEFlag && (!G_cme_pstate_record.skipSiblingLock))
        {
            // "Lock" the sibling until the pstate transition is complete
            intercme_msg_send(0, IMT_LOCK_SIBLING);
            // The Sibling is a "pumpkin" from this point forward until
            // we call p9_cme_pstate_notify_sib()
        }

        PK_TRACE_INF("PSTATE: DBData=0x%08x%08x", G_dbData.value >> 32,
                     G_dbData.value);

        pk_critical_section_enter(&ctx);

        p9_cme_pstate_pmsr_updt_in_progress();

        p9_cme_pstate_update_analog();

        //Update quadPstate only if no error
        if(!G_cme_pstate_record.updateAnalogError)
        {
            // Must update quadPstate before calling PMSR update
            G_cme_pstate_record.quadPstate = G_cme_pstate_record.nextPstate;
        }
        else
        {
            out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_PSTATES_SUSPENDED));
        }

        pk_critical_section_exit(&ctx);
    }

    p9_cme_pstate_pmsr_updt();

    if(G_cme_pstate_record.updateAnalogError)
    {
        p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN1);
    }
    else
    {
        p9_cme_pstate_notify_sib(INTERCME_DIRECT_IN0);
    }

    PK_TRACE_INF("PSTATE: Pstate Updt Exit");
}
