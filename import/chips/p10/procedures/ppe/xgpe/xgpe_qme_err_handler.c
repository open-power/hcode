/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_qme_err_handler.c $ */
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

#include "xgpe.h"
#include "p10_hcd_memmap_qme_sram.H"
#include "errlqmeproxy.h"
#include "xgpe_qme_err_handler.h"
#include "p10_scom_eq.H"

// XPGE needs to cater space for all (16) QME Error Logs in OCC SRAM
#define XGPE_ERRL_ENTRY_SZ_QME (ERRL_MAX_ENTRY_SZ * \
                                MAX_QUADS * \
                                MAX_ELOG_SLOTS_PER_GPE)

// Global Variables
// Address of error log table in QME SRAM
uint32_t G_qmeElogTblAddr = 0;
// Memory allocated for offloading QME error logs
uint8_t G_errLogsQme[XGPE_ERRL_ENTRY_SZ_QME] __attribute__((aligned (8))) = {0};
// Base address of the offloaded QME error logs space
uint8_t* G_pErrLogsQme = (uint8_t*)& G_errLogsQme[0];

// Function Prototypes
uint32_t downloadQmeErrl (const uint32_t i_quadId);
uint32_t createQmeErrl (const uint32_t i_quadId);
uint32_t handleQmeMalfunction (const uint32_t i_quadId);


// Function Declarations
void xgpe_qme_sram_access(uint32_t i_quadId,
                          uint32_t i_address,
                          uint32_t i_words_to_access,
                          uint64_t* o_data)
{
    uint64_t l_data64;
    uint64_t l_qscr;
    uint32_t l_sram_start_addr;
    uint32_t l_indx;

    PK_TRACE (">> xgpe_qme_sram_access Quad %d Addr 0x%08x DWords %d Dest 0x%08x",
              i_quadId, i_address, i_words_to_access, (uint32_t)o_data);

    do
    {
        if (!i_address)
        {
            break;
        }

        //Check the ownership befre QME sram access
        PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_FLAGS_RW, i_quadId), l_data64);
        PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSCR_RW, i_quadId), l_qscr);

        // @TODO via RTC: 212641 - handle timeout
        while (l_data64 & BIT64(QME_FLAGS_SRAM_SBE_MODE) || l_qscr & BIT64(0))
        {
            PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_FLAGS_RW, i_quadId), l_data64);
            PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSCR_RW, i_quadId), l_qscr);
        }

        //Set the ownership bit
        PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_FLAGS_WO_OR, i_quadId), BIT64(QME_FLAGS_SRAM_GPE_MODE));

        // Set the QME SRAM address as defined by 16:28 (64k)
        l_sram_start_addr = i_address & 0x0000FFF8;
        l_data64 = (uint64_t)l_sram_start_addr << 32;
        PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSAR, i_quadId), l_data64);

        //Set auto increment
        PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSCR_WO_OR, i_quadId), BIT64(0));

        for (l_indx = 0; l_indx < i_words_to_access; l_indx++)
        {
            PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSAR, i_quadId), l_data64);
            // PK_TRACE("ASAR %08x", l_data64 >> 32);

            if (o_data == NULL)
            {
                // Clear the data, fixed use-case of write in XGPE
                PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSDR, i_quadId), 0);
            }
            else
            {
                // Read data
                PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSDR, i_quadId), l_data64);
                // PK_TRACE("DATA1 %08x %08x", l_data64 >> 32, l_data64);
                *(o_data + l_indx) = l_data64;
            }
        }

        //clear auto increment
        PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSCR_WO_CLEAR, i_quadId), BIT64(0));
        //Clear the ownership bit
        PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_FLAGS_WO_CLEAR, i_quadId), BIT64(QME_FLAGS_SRAM_GPE_MODE));
    }
    while(0);

    PK_TRACE ("<< xgpe_qme_sram_access");
}

uint32_t handleQmeErrl (const uint32_t i_quadId,
                        const uint32_t i_errCode)
{
    uint32_t status = ERRL_STATUS_SUCCESS;
    PK_TRACE (">> handleQmeErrl: QME: %d Err Code: %d", i_quadId, i_errCode);

    if (i_errCode == XGPE_QME_ERR_FIRMWARE)
    {
        // download QME Hcode generated error log
        status = downloadQmeErrl (i_quadId);

        if (ERRL_STATUS_SUCCESS != status)
        {
            // @TODO via RTC 270071:
            // Hcode Spec v0.97, Feb 2021:
            // download failed, create critical error indicating the same
        }
    }
    else
    {
        // @TODO via RTC 270071:
        // Hcode Spec v0.97, Feb 2021:
        // QME hit other errors which it cannot create error logs for.
        // XGPE to create error logs to indicate such a QME error condition
        //
        // 1. Read all configured core’s QME per-Core Scratch Reg (0x200E080C)
        //    to determine if a Critical Error Log Overflow (bit 1) occurred
        // 2. If asserted, create a critical error log indicating the QME error
        //    logging overflow/timeout fault
        // 3. If not asserted, QME HW fault occured. Create a critical error log
        //    indicating the QME HW fault
        //    status = createQmeErrl (i_quadId);
    }

    status = handleQmeMalfunction (i_quadId);

    PK_TRACE ("<< handleQmeErrl: QME: %d Code: %d Status: %d",
              i_quadId, i_errCode, status);
    return status;
}

uint32_t downloadQmeErrl (const uint32_t i_quadId)
{
    uint32_t status = ERRL_STATUS_SUCCESS;
    PK_TRACE (">> downloadQmeErrl: QME %d", i_quadId);

    do
    {
        if ( !G_qmeElogTblAddr)
        {
            QmeHeader_t* pQmeImgHdr = (QmeHeader_t*)(QME_SRAM_HEADER_ADDR);
            G_qmeElogTblAddr = (uint32_t) & (pQmeImgHdr->g_qme_elog_addr);
            uint64_t addr;
            xgpe_qme_sram_access(i_quadId, G_qmeElogTblAddr, 1, &addr);
            G_qmeElogTblAddr = addr;
            PK_TRACE ("QME Elog Table Address in QME SRAM: %08X",
                      G_qmeElogTblAddr);
        }

        if (NULL == (uint32_t*) G_qmeElogTblAddr)
        {
            // bad qme sram address for QME elog table
            status = ERRL_STATUS_INTERNAL_ERROR;
            break;
        }

        // 1. Set space for copy of QME elog table header + elog entries
        uint64_t qmeElogTblDwords[MAX_ELOG_SLOTS_PER_GPE + 1] = {0};
        hcode_error_table_t* pQmeElogTbl = (hcode_error_table_t*) &qmeElogTblDwords;

        // 2. Read & validate that XPGE read the QME elog table
        xgpe_qme_sram_access (i_quadId, G_qmeElogTblAddr,
                              (MAX_ELOG_SLOTS_PER_GPE + 1), qmeElogTblDwords);

        if (HCODE_ELOG_TABLE_MAGIC_NUMBER != pQmeElogTbl->dw0.fields.magic_word)
        {
            // Content at QME SRAM addr does not match QME Elog Table Magic
            status = ERRL_STATUS_INIT_ERROR;
            break;
        }

        hcode_elog_entry_t* pQmeErrEntry = pQmeElogTbl->elog;
        uint32_t idx = 0;

        // 3. Walk through QME elog table and pick-up non-zero elog
        // entries for offload to global elog table
        for ( ;
              ( (ERRL_STATUS_SUCCESS == status) &&
                (idx < MAX_ELOG_SLOTS_PER_GPE) &&
                (0 != pQmeErrEntry[idx].dw0.value) );
              ++idx )
        {
            // 4. Valid elog entry entry present in QME elog table
            //    Get its address in global error log table where it
            //    should be offloaded
            uint64_t* errlDestAddr = NULL;
            uint32_t len = pQmeErrEntry[idx].dw0.fields.errlog_len;
            uint32_t addr = pQmeErrEntry[idx].dw0.fields.errlog_addr;

            status = getQmeElogSlotAddr (i_quadId, idx, &errlDestAddr);

            if (ERRL_STATUS_SUCCESS != status)
            {
                break;
            }

            // convert len to a multiple of 8B
            len += (len % 8) ? 1 : 0;
            // convert to len in dwords
            len >>= 3;

            // 6. Transfer Error from QME SRAM to Global Elog Space
            xgpe_qme_sram_access (i_quadId, addr, len, errlDestAddr);

            // 7. Report QME error log to FW (OCC)
            //    SRC, EID, LEN are as-is from QME, but addr maps to Global SRAM
            pQmeErrEntry[idx].dw0.fields.errlog_addr = (uint32_t) (errlDestAddr);
            status = reportQmeError (i_quadId, idx, pQmeErrEntry[idx]);

            if (ERRL_STATUS_SUCCESS != status)
            {
                break;
            }

            // 8. Free up the error log slot in QME Error Log Table
            //    Base Table Address + (index of error + table hdr word) * sizeof (entry)
            uint32_t qmeSramElogSlotAddr = G_qmeElogTblAddr +
                                           ((idx + 1) * sizeof (hcode_elog_entry_t));
            xgpe_qme_sram_access (i_quadId, qmeSramElogSlotAddr, 1, NULL);
        }   // walk QME elog table entries
    }       // do .. while - break

    while (0);

    if (ERRL_STATUS_SUCCESS != status)
    {
        PK_TRACE ("ERR: QME# %d Tbl@ 0x%08X Status %d",
                  i_quadId, G_qmeElogTblAddr, status);
    }

    PK_TRACE ("<< downloadQmeErrl: QME %d status: %d", i_quadId, status);
    return status;
}

// @TODO via RTC: 270071: Implement the below method

uint32_t createQmeErrl (const uint32_t i_quadId)
{
    uint32_t status = ERRL_STATUS_SUCCESS;

    PK_TRACE ("createQmeErrl: TODO via RTC: 270071");

    return status;
}

// @TODO Depends on RTC: 269800
uint32_t handleQmeMalfunction (const uint32_t i_quadId)
{
    uint32_t status = ERRL_STATUS_SUCCESS;

    PK_TRACE ("handleQmeMalfunction: TODO via RTC: 269800");
    // If critical logs or QME halts are detected,
    // ◦ Sets OCC LFIR[qme_error_notify] (2) as this is one of the bits that HYP will use as a PM
    // Complex fault upon malfunction alert.
    // ◦ Performs the STOP Recovery Trigger to cause a malfunction alert to HYP. @TODO via RTC 269800
    // ◦ Issues a “PM Restart Necessary” IPC (see XGPE to PGPE IPC) to the PGPE. The PGPE will, as
    // a result, stop the OCC Beacon to initiate the restart. If informational logs are present, no PM
    // restart is requested. If PM restart is requested, the OCC will extract the QME logs for
    // commitment by TMGT before requesting restart to TMGT.

    return status;
}
