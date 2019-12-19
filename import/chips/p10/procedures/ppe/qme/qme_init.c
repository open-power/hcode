/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_init.c $              */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
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

#include "qme.h"
#include "p9_cme_copy_scan_ring.h"
#include "p9_hcode_image_defines.H"

extern QmeRecord G_qme_record;

void
qme_init()
{
    uint32_t   entry_first = 0;
    uint32_t   exit_first  = 0;
    uint32_t   qme_flags   = 0;
    uint32_t   core_mask   = 0;

    //--------------------------------------------------------------------------
    // Parse CME Flags and Initialize Core States
    //--------------------------------------------------------------------------

    if (!G_qme_record.c_configured)
    {
        PK_TRACE_DBG("ERROR: Not a single core is configured to this QME. HALT QME!");
        PK_PANIC(QME_NO_CONFIGURED_CORE);
    }

    // partial_good and entry_first:  unmask entry
    // partial_good and !entry_first: unmask exit
    // !partial_good:                 dont unmask
    qme_flags   = (in32(G_QME_LCL_FLAGS) & 0xF);
    entry_first = ( (cme_flags >> 2) & cme_flags & CME_MASK_BC);
    exit_first  = (~(cme_flags >> 2) & cme_flags & CME_MASK_BC);

    G_qme_record.c_stopped = exit_first;

    // use SISR[2:3] PM_BLOCK_INTERRUPTS to init block wakeup status
    G_qme_record.core_blockpc = ((in32(G_CME_LCL_SICR) & BITS32(2, 2)) >> SHIFT32(3));
    G_qme_record.core_blockwu = G_qme_record.core_blockpc;
    G_qme_record.core_blockey = 0;
    G_qme_record.core_suspendwu = G_qme_record.core_blockpc;
    G_qme_record.core_suspendey = 0;
    G_qme_record.core_vdm_droop = 0;

    if (in32(G_CME_LCL_FLAGS) & BIT32(CME_FLAGS_BLOCK_ENTRY_STOP11))
    {
        G_qme_record.core_blockey = CME_MASK_BC;
        G_qme_record.core_suspendey = CME_MASK_BC;
    }

    // use SISR[16:17] SPECIAL_WKUP_DONE to init special wakeup status
    G_qme_record.c_special_wakeup_done = ((in32(G_CME_LCL_SISR) & BITS32(16, 2)) >> SHIFT32(17));

    PK_TRACE_DBG("Setup: cme_flags[%x] entry_first[%x] exit_first[%x]",
                 cme_flags, entry_first, exit_first);

    G_qme_record.c_stop11_done = ((~G_cme_record.c_configured) | exit_first);
    p9_cme_stop_eval_eimr_override();

    //--------------------------------------------------------------------------
    // BCE Core Specific Scan Ring
    //--------------------------------------------------------------------------

#if !SKIP_BCE_SCAN_RING

    PK_TRACE_DBG("Setup: BCE Setup Kickoff to Copy Core Specific Scan Ring");

    cmeHeader_t* pCmeImgHdr = (cmeHeader_t*)(CME_SRAM_HEADER_ADDR);

    //right now a blocking call. Need to confirm this.
    start_cme_block_copy(CME_BCEBAR_1,
                         (CME_IMAGE_CPMR_OFFSET + (pCmeImgHdr->g_cme_core_spec_ring_offset << 5)),
                         pCmeImgHdr->g_cme_core_spec_ring_offset,
                         pCmeImgHdr->g_cme_max_spec_ring_length);

    PK_TRACE_DBG("Setup: BCE Check for Copy Completed");

    if( BLOCK_COPY_SUCCESS != check_cme_block_copy() )
    {
        PK_TRACE_DBG("ERROR: BCE Copy of Core Specific Scan Ring Failed. HALT CME!");
        PK_PANIC(CME_STOP_BCE_CORE_RING_FAILED);
    }

#endif

    //--------------------------------------------------------------------------
    // Common Hardware Settings
    //--------------------------------------------------------------------------

#if HW386841_NDD1_DSL_STOP1_FIX

    PK_TRACE("Disable the Auto-STOP1 function for Nimbus DD1 via LMCR[18,19]");
    out32(G_CME_LCL_LMCR_OR, BITS32(18, 2));

#endif

    PK_TRACE("Drop STOP override mode and active mask via LMCR[16,17]");
    out32(G_CME_LCL_LMCR_CLR, BITS32(16, 2));

    PK_TRACE_DBG("Setup: SPWU Interrupt Polority[%d]", G_qme_record.core_in_spwu);
    out32(G_CME_LCL_EIPR_CLR, (G_qme_record.core_in_spwu << SHIFT32(15)));
    out32(G_CME_LCL_EIPR_OR,  (((~G_qme_record.core_in_spwu) & CME_MASK_BC) << SHIFT32(15)));
    out32(G_CME_LCL_SICR_OR,  ((G_qme_record.core_in_spwu << SHIFT32(5)) |
                               (G_qme_record.core_in_spwu << SHIFT32(17))));
    out32(G_CME_LCL_SICR_CLR, ((((~G_qme_record.core_in_spwu) & CME_MASK_BC) << SHIFT32(5)) |
                               (((~G_qme_record.core_in_spwu) & CME_MASK_BC) << SHIFT32(17))));

    PK_TRACE("Assert auto spwu disable, disable auto spwu via LMCR[12/13]");
    out32(G_CME_LCL_LMCR_OR, BITS32(12, 2));

    PK_TRACE_DBG("Setup: Umask STOP Interrupts Now Based on Entry_First Flag");
    // unmask db1 for block stop protocol
    out32_sh(CME_LCL_EIMR_CLR, (CME_MASK_BC << SHIFT64SH(41)));
    out32(G_CME_LCL_EIMR_CLR,
          ((CME_MASK_BC << SHIFT32(19)) |  // DB2
           (entry_first << SHIFT32(21)) |  // PM_ACTIVE
           (exit_first  << SHIFT32(13)) |  // PC_INTR_PENDING
#if SPWU_AUTO
           (exit_first  << SHIFT32(15)) |
#else
           (CME_MASK_BC << SHIFT32(15)) |  // SPWU always unmask
#endif
           (exit_first  << SHIFT32(17)))); // RGWU

    //--------------------------------------------------------------------------
    // CME Init Completed
    //--------------------------------------------------------------------------

    PK_TRACE_INF("Setup: CME STOP READY");
    out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_STOP_READY));

#if EPM_P9_TUNING
    asm volatile ("tw 0, 31, 0");
#endif

}
