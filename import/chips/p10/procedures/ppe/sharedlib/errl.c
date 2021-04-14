/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/sharedlib/errl.c $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020,2021                                                    */
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
#include <stdint.h>

#include "ppe42_scom.h"
#include "gpehw_common.h"
#include "ppehw_common.h"
#include "p10_hcd_memmap_occ_sram.H"
#include "p10_hcd_memmap_base.H"

#include "iota.h"
#include "ppe42_string.h"
#include "iota_trace.h"

#include "errldefs.h"
#include "errlqmeproxy.h"
#include "errl.h"

#ifdef __PPE_QME
    #include "qme.h"
    extern QmeRecord G_qme_record;
    //This yields a timeout of 10.6ms at a 4.5GHz core and 24ms at a 2GHz core.
    static uint32_t BCE_TIMEOUT_COUNT = 100000;
#endif

// Error Log payload for the 2 errors to be committed by local GPE
uint8_t G_errLogUnrec[ERRL_MAX_ENTRY_SZ]  __attribute__ ((aligned (8))) = {0};
uint8_t G_errLogInfo [ERRL_MAX_ENTRY_SZ]  __attribute__ ((aligned (8))) = {0};

// Order of error logs in this table should match relative order per GPE as per
// elog_entry_index. This table is set up to point to the error log payloads,
// initialized by respective GPE via the initErrLogging API. Not all entries
// will be valid on all GPEs
errlHndl_t  G_gpeErrLogs[MAX_ELOG_ENTRIES] = {0};

hcode_elog_entry_t* G_elogTable = NULL; // Ptr to shared data err idx tbl
hcodeErrlConfigData_t G_errlConfigData = {0};
hcodeErrlMetadata_t G_errlMetaData[MAX_ELOG_SLOTS_PER_GPE] = {{0}};

/// Internal Function Prototypes
uint32_t reportErrorLog ( errlHndl_t* io_err, bool i_report );
uint8_t getErrSlotNumAndErrId ( ERRL_SEVERITY i_severity,
                                uint8_t*      o_errlId,
                                uint64_t*     o_timeStamp,
                                uint32_t*     o_status );
uint32_t copyTraceBufferPartial ( void*    i_pDst,
                                  uint16_t i_size );
void getPpeRegs ( const uint8_t  i_errlSource,
                  const uint8_t  i_ppeInstance,
                  errlPpeRegs_t* o_data );

/// Function Definitions
#ifndef __PPE_QME
void initQmeErrSlots (const uint8_t* i_pElogPayloadBase)
{
    if (NULL != i_pElogPayloadBase)
    {
        // Initialize the error log payload pointers for all QME
        // elogs, to where they get transferred to in OCC SRAM space
        uint32_t qmeId = 0;

        do
        {
            uint32_t qmeSlotUnrec = ERRL_SLOT_QME_UNREC_BASE + (qmeId * 2);
            uint32_t qmeSlotInf = ERRL_SLOT_QME_INFO_BASE + (qmeId * 2);

            G_gpeErrLogs[qmeSlotUnrec] = (errlHndl_t) (i_pElogPayloadBase +
                                         (ERRL_MAX_ENTRY_SZ * qmeSlotUnrec));
            G_gpeErrLogs[qmeSlotInf] = (errlHndl_t) (i_pElogPayloadBase +
                                       (ERRL_MAX_ENTRY_SZ * qmeSlotInf));
        }
        while (MAX_QUADS > ++qmeId);
    }
}

uint32_t getQmeElogSlotAddr ( const uint8_t i_qmeId,
                              const uint8_t i_elogSlotIndex,
                              uint64_t**    o_ppQmeElogSlot )
{
    uint32_t status = ERRL_STATUS_SUCCESS;
    uint32_t slot = ERRL_SLOT_QMES_BASE + ((i_qmeId * 2) + i_elogSlotIndex);
    *o_ppQmeElogSlot = NULL;

    do
    {
        if (ERRL_SLOT_QMES_MAX < slot)
        {
            // bad QME Id or Slot Index passed
            PK_TRACE_ERR ("Error: Invalid Inputs- QME %d or Idx %d, Slot %d",
                          i_qmeId, i_elogSlotIndex, slot);
            status = ERRL_STATUS_INTERNAL_ERROR;
            break;
        }

        if (G_gpeErrLogs[slot] == NULL)
        {
            // QME Error Log slots not initialized
            PK_TRACE_ERR ("Error: QME %d or Idx %d, Slot %d not initialized!",
                          i_qmeId, i_elogSlotIndex, slot);
            status = ERRL_STATUS_INIT_ERROR;
            break;
        }

        // Enter Critical Section to be thread-safe
        PkMachineContext ctx;
        pk_critical_section_enter (&ctx);

        // Check if matching slot is available in global elog table
        if (G_elogTable[slot].dw0.value != 0)
        {
            // Slot not free in global elog table
            PK_TRACE_ERR ("Error: Elog Slot Busy- QME %d Idx %d Slot %d",
                          i_qmeId, i_elogSlotIndex, slot);
            status = ERRL_STATUS_GLOBAL_SLOTS_FULL;
            break;
        }

        // Get the Error Log Slot Address from the Global Elog Table
        *o_ppQmeElogSlot = (uint64_t*) G_gpeErrLogs[slot];
        pk_critical_section_exit (&ctx);
    }
    while (0);

    PK_TRACE_INF ("getQmeElogSlotAddr: QME %d Idx %d Slot %d Addr: 0x%08x",
                  i_qmeId, i_elogSlotIndex, slot, (uint32_t)(*o_ppQmeElogSlot));
    return status;
}

uint32_t reportQmeError (const uint8_t   i_qmeId,
                         const uint8_t   i_elogSlotIndex,
                         const hcode_elog_entry_t i_elogEntry )
{
    uint32_t status = ERRL_STATUS_SUCCESS;
    uint32_t slot = ERRL_SLOT_QMES_BASE + ((i_qmeId * 2) + i_elogSlotIndex);


    if (ERRL_SLOT_QMES_MAX < slot)
    {
        // bad QME Id or Slot Index passed
        PK_TRACE_ERR ("reportQmeError: Invalid Input- QME %d or Idx %d, Slot %d",
                      i_qmeId, i_elogSlotIndex, slot);
        status = ERRL_STATUS_INTERNAL_ERROR;
    }
    else
    {
        PK_TRACE_INF ("reportQmeError: QME Id %d Slot %d Entry 0x%08X%08X",
                      i_qmeId, slot, i_elogEntry.dw0.words.high_order,
                      i_elogEntry.dw0.words.low_order);
        G_elogTable[slot].dw0.value = i_elogEntry.dw0.value;
    }

    return status;
}

#endif

void initErrLogging ( const uint8_t              i_errlSource,
                      hcode_error_table_t*       i_pErrTable )
{
    if (NULL != i_pErrTable)
    {
        // Initialize common defaults .. note that some change later
        G_errlConfigData.source = i_errlSource;
        G_errlConfigData.tblBaseSlot = ERRL_SLOT_TBL_BASE;
        G_errlConfigData.slotBits = 0;
        G_errlConfigData.errId = 0;

        // Record PPE Processor Version from where errors will be logged
        // e.g. 0x421A0100 == PPE42, Core Ver. Nr. 1, POWER10 DD1
        G_errlConfigData.procVersion = mfspr (SPRN_PVR);
        // Record PPE Instance from which errors will be logged
        G_errlConfigData.ppeId = (uint16_t) ( mfspr(SPRN_PIR) &
                                              PIR_PPE_INSTANCE_MASK );

        switch (i_errlSource)
        {
#ifndef __PPE_QME // save some code space on QME

            case ERRL_SOURCE_PGPE:
                // Shares table in OCC SRAM with other GPEs
                G_errlConfigData.traceSz = ERRL_TRACE_DATA_SZ_PGPE;
                G_errlConfigData.gpeBaseSlot = ERRL_SLOT_PGPE_BASE;
                G_gpeErrLogs[ERRL_SLOT_PGPE_UNREC] = (errlHndl_t) &G_errLogUnrec;
                G_gpeErrLogs[ERRL_SLOT_PGPE_INF] = (errlHndl_t) &G_errLogInfo;
                break;

            case ERRL_SOURCE_XGPE:
                // Shares table in OCC SRAM with other GPEs
                G_errlConfigData.traceSz = ERRL_TRACE_DATA_SZ_XGPE;
                G_errlConfigData.gpeBaseSlot = ERRL_SLOT_XGPE_BASE;
                G_gpeErrLogs[ERRL_SLOT_XGPE_UNREC] = (errlHndl_t) &G_errLogUnrec;
                G_gpeErrLogs[ERRL_SLOT_XGPE_INF] = (errlHndl_t) &G_errLogInfo;
                break;
#endif //  not __PPE_QME

            case ERRL_SOURCE_QME:
                // Each QME commits error logs to its own table in local QME SRAM
                G_errlConfigData.traceSz = ERRL_TRACE_DATA_SZ_QME;
                G_errlConfigData.tblBaseSlot += (( G_errlConfigData.ppeId & 0x0f ) << 1 );
                G_errlConfigData.gpeBaseSlot = G_errlConfigData.tblBaseSlot;
                // EID range of each QME is kept unique to avoid entry conflict
                G_errlConfigData.errId = (G_errlConfigData.ppeId & 0x0f) << 5;
                G_gpeErrLogs[ERRL_SLOT_QME_UNREC_BASE] = (errlHndl_t) &G_errLogUnrec;
                G_gpeErrLogs[ERRL_SLOT_QME_INFO_BASE] = (errlHndl_t) &G_errLogInfo;
                break;

            default:
                G_errlConfigData.source = ERRL_SOURCE_INVALID;
                PK_TRACE_ERR ("initErrLogging: Bad Source 0x%X", i_errlSource);
                break;
        }

        if (ERRL_SOURCE_INVALID != G_errlConfigData.source)
        {
            // For XGPE and PGPE, the Eror Log Index Table is common
            // Each QME has its own copy of the Error Log Index Table
            i_pErrTable->dw0.fields.total_log_slots = MAX_ELOG_ENTRIES;
            i_pErrTable->dw0.fields.magic_word = HCODE_ELOG_TABLE_MAGIC_NUMBER;

            // Init the table pointer of each GPE
            G_elogTable = i_pErrTable->elog;

            // Initialize metadata of error logs to be created to defaults
            uint8_t l_slot = 0;

            do
            {
                G_errlMetaData[l_slot++].slotMask = ERRL_SLOT_MASK_DEFAULT;
            }
            while (l_slot < MAX_ELOG_SLOTS_PER_GPE);
        }
        else
        {
            PK_TRACE_ERR ("initErrLogging: Bad Source Input!");
        }
    }
    else
    {
        // Marking source in config data to invalid, causes all errl.h APIs to no-op
        G_errlConfigData.source = ERRL_SOURCE_INVALID;
        PK_TRACE_ERR ("initErrLogging: Bad Elog Table Input!");
    }

    PK_TRACE_INF ( "initErrLogging: Source 0x%X PPE ID 0x%X Base 0x%X",
                   G_errlConfigData.source, G_errlConfigData.ppeId,
                   G_errlConfigData.tblBaseSlot );
}

// Function Specification
// Name:  getErrSlotNumAndErrId
// Description: Get Error Slot Number and Error Id
// End Function Specification
uint8_t getErrSlotNumAndErrId (
    ERRL_SEVERITY i_severity,
    uint8_t*      o_errlId,
    uint64_t*     o_timeStamp,
    uint32_t*     o_status )
{
    uint8_t  l_slot = ERRL_SLOT_INVALID;
    uint8_t  l_localSlot = ERRL_SLOT_INVALID;
    uint8_t  l_tableSlotIdx = ERRL_SLOT_INVALID;
    uint32_t l_slotmask = ERRL_SLOT_MASK_DEFAULT;
    *o_status = ERRL_STATUS_SUCCESS;

    // this logic will evolve once we support other severities
    // or we could have a map table
    if (ERRL_SEV_UNRECOVERABLE == i_severity)
    {
        switch (G_errlConfigData.source)
        {
#ifndef __PPE_QME // save some code space on QME

            case ERRL_SOURCE_PGPE:
                l_slotmask = ERRL_SLOT_MASK_PGPE_UNREC;
                break;

            case ERRL_SOURCE_XGPE:
                l_slotmask = ERRL_SLOT_MASK_XGPE_UNREC;
                break;
#endif

            case ERRL_SOURCE_QME:
                l_slotmask = ~(ERRL_SLOT_MASK_QME_UNREC_BASE >>
                               (( G_errlConfigData.ppeId & 0x0f ) << 1)
                              );
                break;
        }
    }
    else if (ERRL_SEV_INFORMATIONAL == i_severity)
    {
        switch (G_errlConfigData.source)
        {
#ifndef __PPE_QME // save some code space on QME

            case ERRL_SOURCE_PGPE:
                l_slotmask = ERRL_SLOT_MASK_PGPE_INFO;
                break;

            case ERRL_SOURCE_XGPE:
                l_slotmask = ERRL_SLOT_MASK_XGPE_INFO;
                break;
#endif

            case ERRL_SOURCE_QME:
                l_slotmask = ~(ERRL_SLOT_MASK_QME_INFO_BASE >>
                               (( G_errlConfigData.ppeId & 0x0f ) << 1)
                              );
                break;
        }
    }
    else
    {
        // do nothing
    }

    PK_TRACE_INF ("Source 0x%X Sev 0x%X l_slotmask 0x%X",
                  G_errlConfigData.source, i_severity, l_slotmask);

    // For the slot mask to be valid, one & only one bit should be set to 0
    if (~l_slotmask &&  ((~l_slotmask & (~l_slotmask - 1)) == 0))
    {
        // 0. Enter Critical Section to be thread-safe
        PkMachineContext ctx;
        pk_critical_section_enter (&ctx);

        // 1. Check if a slot is free in the local GPE maintained slotBits word
        uint32_t l_slotBitWord = ~(G_errlConfigData.slotBits | l_slotmask);

        // Count leading 0 bits in l_slotBitWord to get available slot based on
        // l_slotmask. This logic is extensible to allow for a variable
        // number of log slots per souce & severity based on proper definitions
        // in ERRL_SLOT_MASK
        __asm__ __volatile__ ( "cntlzw %0, %1;" : "=r" (l_slot) :
                               "r"  (l_slotBitWord));

        // If l_slot maps within bounds of Error Log Index Table, its available
        if (MAX_ELOG_ENTRIES > (l_slot - G_errlConfigData.tblBaseSlot))
        {
            // 2. Slot matching source + sev is available in local GPE slotBits
            //    Now check that this slot is free in the Error Log Index Table
            if (0 == G_elogTable[l_slot - G_errlConfigData.tblBaseSlot].dw0.value)
            {
                // Matching slot is available in OCC/XGPE watched error table
                // Get the slot relative to this GPE's error log payload array
                l_localSlot = l_slot - G_errlConfigData.gpeBaseSlot;

                // 3. Check that it does not exceed total error slots per GPE
                if (MAX_ELOG_SLOTS_PER_GPE > l_localSlot)
                {
                    // 4. Get time stamp & save off timestamp
                    *o_timeStamp = pk_timebase_get();

                    // 5. Reserve the slot in GPEs slot word (locally) and save
                    //    other slot details in GPE metadata until the error log
                    //    is commtted to the Error Log Index Table. Note that,
                    //    one should not write (commit) any error details to the
                    //    Error Log Index Table until error is ready for commit,
                    //    to avoid OCC/XGPE getting notified of an error before
                    //    it is fully baked.
                    G_errlConfigData.slotBits |= (ERRL_SLOT_SHIFT >> l_slot);
                    G_errlMetaData[l_localSlot].slotMask = l_slotmask;

                    // 6. Save off incremented counter which forms error log id
                    //    Provide next ErrorId; ErrorId should never be 0.
                    uint8_t eidBegin = 0;
                    uint8_t eidWrap = 0;

#ifdef __PPE_QME

                    if (G_errlConfigData.source == ERRL_SOURCE_QME)
                    {
                        // limit every QME EID to its unique range
                        eidBegin = (G_errlConfigData.ppeId & 0x0f) << 5;
                        eidWrap = ((G_errlConfigData.ppeId + 1) & 0x0f) << 5;
                    }

#endif

                    if (++G_errlConfigData.errId == eidWrap)
                    {
                        G_errlConfigData.errId = eidBegin ? eidBegin : ++eidBegin;
                    }

                    G_errlMetaData[l_localSlot].errId = G_errlConfigData.errId;
                    *o_errlId = G_errlMetaData[l_localSlot].errId;

                    // slot returned is local to this PPEs table base slot
                    l_tableSlotIdx = l_slot - G_errlConfigData.tblBaseSlot;
                }
                else
                {
                    // localSlot cannot exceed slots per GPE
                    *o_status = ERRL_STATUS_INTERNAL_ERROR;
                    l_slot = ERRL_SLOT_INVALID;
                    PK_TRACE_ERR("LocalSlot %d > Max Slot/GPE Slot %d Src 0x%X",
                                 l_localSlot, l_slot, G_errlConfigData.source);
                }
            }
            else
            {
                // Prev error not yet offloaded by OCC/XGPE, GPE creating errors
                // faster than OCC/XGPE is consuming them
                *o_status = ERRL_STATUS_GLOBAL_SLOTS_FULL;
                l_slot = ERRL_SLOT_INVALID;
                PK_TRACE_ERR ( "Slot %d not free in elog idx tbl. Source: 0x%X",
                               l_slot, G_errlConfigData.source);
            }
        }
        else
        {
            // This GPE is already processing an error log of the same severity
            // which is not yet committed to the Error Log Index Table. No slots
            // are avaiable to accomodate a new error log of the same severity.
            // Indications:
            // 1. Either multiple errors are created while processing an err log
            // 2. Or, a multi-threaded GPE is producing errors of same severity
            //    faster than they are committed to the Error Log Idx Table
            *o_status = ERRL_STATUS_LOCAL_SLOTS_FULL;
            l_slot = ERRL_SLOT_INVALID;
            PK_TRACE_ERR ("Slot %d not free in GPE! Bits 0x%04X Mask 0x%04X "
                          "Word 0x%04X", l_slot, G_errlConfigData.slotBits,
                          l_slotmask, l_slotBitWord);
        }

        // 7. Exit Critical Section to be thread-safe
        pk_critical_section_exit (&ctx);
    }
    else
    {
        *o_status = ERRL_STATUS_INIT_ERROR;
        PK_TRACE_ERR ("Cannot calculate a free slot! Bad Source %d OR Sev %d!",
                      G_errlConfigData.source, i_severity);
    }

    PK_TRACE_INF ("Slots G %d L %d EID 0x%08X Status %d",
                  l_slot, l_localSlot, *o_errlId, *o_status);

    return l_tableSlotIdx;
}

// @note i_size is a multiple of 8 bytes
//       Trace Buff Header is a multiple of 8 bytes (56 B currently)
//       Each chunk being copied is a multiple of 8 bytes
//       The Trace Buffer User Data Section Payload start address is 8 B aligned
uint32_t copyTraceBufferPartial ( void* i_pDst,
                                  uint16_t i_size )
{
    PK_TRACE_INF (">> copyTraceBufferPartial: size %d bytes", i_size);
    uint16_t l_bytesCopied = 0;
    const uint32_t l_trHdrSz = sizeof(PkTraceBuffer) - PK_TRACE_SZ;
    const uint32_t l_trStateOffset = g_pk_trace_buf.state.offset &
                                     PK_TRACE_CB_MASK;
    uint32_t l_szBytes = l_trHdrSz; // first copy trace header
    bool     l_buffWrapped = false;
    uint32_t l_offset = l_trHdrSz;

    //const uint16_t pk_tr_size = g_pk_trace_buf.size;
    //const uint16_t pk_tr_sz_max = PK_TRACE_SZ;
    //const uint32_t pk_tr_state_offset = g_pk_trace_buf.state.offset;

    if (NULL != i_pDst)
    {
        // copy the trace buffer header
        //PK_TRACE_INF ("Copying Tr Buff Hdr %d bytes", l_szBytes);
        memcpy ( i_pDst,
                 (void*) &g_pk_trace_buf,
                 l_szBytes );
        l_bytesCopied = l_szBytes;

        // If size being copied is less than what was in the header, adjust
        // the necessary fields to suit that partial buffer in new header
        // Can't do this in PPE due to alignment restrictions .. compensate in
        // parser world
#if 0

        if (l_pPkTraceBuf->size > i_size)
        {
            l_pPkTraceBuf->size = i_size;
            l_pPkTraceBuf->state.offset = i_size;
        }

#endif

        l_szBytes = i_size - l_szBytes; // account for copied trace header bytes

        if (l_trStateOffset >= l_szBytes)
        {
            // TEs in requested size fit in -un-wrapped part of buffer
            l_offset +=  l_trStateOffset - l_szBytes;
        }
        else
        {
            // requested size has some TEs in the wrapped part of the buffer
            // copy wrapped chunk of TEs 1st, then copy the -un-wrapped TEs
            // so that we have TEs in rev-chrono after both copies
            l_buffWrapped = true;
            l_szBytes -= l_trStateOffset;
            l_offset += PK_TRACE_SZ - l_szBytes;
        }

        // copy (append to header) the first chunk of TEs
        //PK_TRACE_INF ("Copying 1st chunk of TEs @ %d %d bytes",
        //              l_offset, l_szBytes);
        memcpy ( i_pDst + l_bytesCopied,
                 (void*)(&g_pk_trace_buf) + l_offset,
                 l_szBytes );
        l_bytesCopied += l_szBytes;

        if (l_buffWrapped == true)
        {
            // Now copy the -un-wrapped chunk of TEs
            l_szBytes = l_trStateOffset;
            l_offset = l_trHdrSz;

            // copy (append to 1st chunk) the 2nd chunk of wrapped trace entries
            //PK_TRACE_INF ("Copying 2nd chunk of wrapped TEs @%d %d bytes",
            //              l_offset, l_szBytes);
            memcpy ( i_pDst + l_bytesCopied,
                     (void*)(&g_pk_trace_buf) + l_offset,
                     l_szBytes );
            l_bytesCopied += l_szBytes;
        }
    }

    // PK_TRACE_INF ("buf.state.offset %d offset.wrapped %d buf.sz %d buf.max %d",
    //              pk_tr_state_offset++, l_trStateOffset++, pk_tr_size, pk_tr_sz_max++);

    PK_TRACE_INF ( "<< copyTraceBufferPartial: size %d copied %d",
                   i_size, l_bytesCopied );
    return l_bytesCopied;
}


uint32_t reportErrorLog (errlHndl_t* io_err, bool i_report)
{
    uint32_t l_status = ERRL_STATUS_SUCCESS;

    if (NULL != *io_err)
    {
        uint8_t l_slot = 0;

        // Get slot of error to be reported based on unique EID per GPE
        do
        {
            if (G_errlMetaData[l_slot].errId == (*io_err)->iv_entryId)
            {
                break;
            }
        }
        while (++l_slot < MAX_ELOG_SLOTS_PER_GPE);

        if (l_slot < MAX_ELOG_SLOTS_PER_GPE)
        {
            // find mapping slot in error table of this engine
            uint8_t l_tblIdx = (l_slot + G_errlConfigData.gpeBaseSlot) -
                               G_errlConfigData.tblBaseSlot;

            PK_TRACE_INF ("reportErrorLog: EID 0x%08X Table Idx: %d",
                          (*io_err)->iv_entryId, l_tblIdx);

            if (MAX_ELOG_ENTRIES > l_tblIdx)
            {
                // Enter Critical Section to be thread-safe
                PkMachineContext ctx;
                pk_critical_section_enter (&ctx);

                if (i_report)
                {
                    hcode_elog_entry_t l_errlEntry;

                    l_errlEntry.dw0.fields.errlog_id = (*io_err)->iv_entryId;
                    l_errlEntry.dw0.fields.errlog_len =
                        (*io_err)->iv_userDetails.iv_entrySize;
                    l_errlEntry.dw0.fields.errlog_addr = (uint32_t)(*io_err);
                    l_errlEntry.dw0.fields.errlog_src = G_errlConfigData.source;

                    // Update Error Table last as OCC/XGPE polls on it
                    // OCC frees up corresponding slot in Shared SRAM space once
                    // the error log is processed
                    G_elogTable[l_tblIdx].dw0.value = l_errlEntry.dw0.value;
                }

                // Free up this slot as available on this GPE's records.
                G_errlConfigData.slotBits &= G_errlMetaData[l_slot].slotMask;
                G_errlMetaData[l_slot].slotMask = ERRL_SLOT_MASK_DEFAULT;

                pk_critical_section_exit (&ctx);

                *io_err = (errlHndl_t) NULL;
            }
            else
            {
                PK_TRACE_ERR ("EID 0x%08X Table Idx %d exceeds Elog Table Size %d",
                              (*io_err)->iv_entryId, l_tblIdx, MAX_ELOG_ENTRIES);
                l_status = ERRL_STATUS_INTERNAL_ERROR;
            }
        }
        else
        {
            PK_TRACE_ERR ("No local slot found for EID 0x%08X!",
                          (*io_err)->iv_entryId);
            l_status = ERRL_STATUS_INTERNAL_ERROR;
        }
    }

    return l_status;
}

// Function Specification
// Name:  createErrl
// Description: Create an Error Log
// End Function Specification
errlHndl_t createErrl(
    const uint16_t i_modId,
    const uint8_t i_reasonCode,
    const uint16_t i_extReasonCode,
    const ERRL_SEVERITY i_sev,
    errlUDWords_t* p_uDWords,
    uint32_t*      o_status )
{
    PK_TRACE_INF (">> createErrl: modid 0x%X rc 0x%X sev 0x%X",
                  i_modId, i_reasonCode, i_sev);

    errlHndl_t  l_rc = NULL;
    uint64_t    l_time = 0;
    uint8_t     l_id = 0;

    do
    {
        *o_status = ERRL_STATUS_SUCCESS;

        uint8_t l_errSlot = getErrSlotNumAndErrId( i_sev, &l_id, &l_time, o_status);


        if (*o_status != ERRL_STATUS_SUCCESS)
        {
            PK_TRACE_ERR ("getErrSlotNumAndErrId failed with status %d",
                          *o_status);
            break;
        }

        if (MAX_ELOG_ENTRIES <= l_errSlot)
        {
            *o_status = ERRL_STATUS_INTERNAL_ERROR;
            PK_TRACE_ERR ("Error Slot %d exceeds Elog Table size %d",
                          l_errSlot, MAX_ELOG_ENTRIES);
            break;
        }

        PK_TRACE_INF ("createErrl: EID [%d] Slot [%d]", l_id, l_errSlot);

        // get slot pointer
        l_rc = G_gpeErrLogs[l_errSlot];

        if (NULL == l_rc)
        {
            *o_status = ERRL_STATUS_INIT_ERROR;
            PK_TRACE_ERR ("Elog Ptr for slot %d not initialized in Elog Table!",
                          l_errSlot);
            break;
        }

        // save off entry Id
        l_rc->iv_entryId = l_id;
        //Save off version info
        l_rc->iv_version = ERRL_STRUCT_VERSION_1;
        l_rc->iv_reasonCode = i_reasonCode;
        l_rc->iv_extendedRC = i_extReasonCode;
        l_rc->iv_severity = i_sev;
        l_rc->iv_numCallouts = 0;
        l_rc->iv_maxSize = ERRL_MAX_ENTRY_SZ;

        // reset the committed flag indicating reusing slot for new error
        l_rc->iv_userDetails.iv_committed = 0;
        // save off default sizes of error log and user data sections
        l_rc->iv_userDetails.iv_entrySize = sizeof( ErrlEntry_t );
        l_rc->iv_userDetails.iv_userDetailEntrySize = 0;
        // save off time
        l_rc->iv_userDetails.iv_timeStamp = l_time;
        // save off rest of input parameters
        l_rc->iv_userDetails.iv_modId = i_modId;

        if (p_uDWords)
        {
            l_rc->iv_userDetails.iv_userData1 = p_uDWords->userdata1;
            l_rc->iv_userDetails.iv_userData2 = p_uDWords->userdata2;
            l_rc->iv_userDetails.iv_userData3 = p_uDWords->userdata3;
        }

        l_rc->iv_userDetails.iv_version = ERRL_USR_DTL_STRUCT_VERSION_1;

        // Save other invariants
        l_rc->iv_userDetails.iv_procVersion = G_errlConfigData.procVersion;
        l_rc->iv_userDetails.iv_ppeId = G_errlConfigData.ppeId;

        // Default other unused fields
        l_rc->iv_reserved3 = 0;
        l_rc->iv_userDetails.iv_reserved1 = 0; // reserved by def
        l_rc->iv_userDetails.iv_reserved2 = 0; // reuse OCC State
        l_rc->iv_userDetails.iv_reserved4 = 0; // Alignment
    }
    while (0);

    PK_TRACE_INF ("<< createErrl EID: 0x%08X Status: %d",
                  ((l_rc != NULL) ? (l_rc->iv_entryId) : 0ull),
                  *o_status);

    return l_rc;
}


// Function Specification
// Name:  addCalloutToErrl
// Description: Add a callout to an Error Log
// End Function Specification
uint32_t  addCalloutToErrl(
    errlHndl_t io_err,
    const ERRL_CALLOUT_TYPE i_type,
    const uint64_t i_calloutValue,
    const ERRL_CALLOUT_PRIORITY i_priority)
{
    uint32_t l_status = ERRL_STATUS_SUCCESS;

    // 1. check if handle is valid (not null or invalid)
    // 2. not committed
    // 3. severity is not informational (unless mfg action flag is set)
    // 4. callouts still not full
    if ( (io_err != NULL ) &&
         (io_err->iv_userDetails.iv_committed == 0) &&
         (io_err->iv_severity != ERRL_SEV_INFORMATIONAL) &&
         (io_err->iv_numCallouts < ERRL_MAX_CALLOUTS) )
    {
        //set callout type
        io_err->iv_callouts[ io_err->iv_numCallouts ].iv_type = (uint8_t)i_type;

        //set callout value
        io_err->iv_callouts[ io_err->iv_numCallouts ].iv_calloutValue = i_calloutValue;

        //set priority
        io_err->iv_callouts[ io_err->iv_numCallouts].iv_priority = (uint8_t)i_priority;

        //increment actual number of callout
        io_err->iv_numCallouts++;
    }
    else
    {
        l_status = ERRL_STATUS_USER_ERROR;
        PK_TRACE_INF ("Callout type 0x%02X was NOT added to elog", i_type);
    }

    return l_status;
}


// Function Specification
//
// Name:  addUsrDtlsToErrl
//
// Description: Add User Details to an Error Log
// @note i_size should be a multiple of 8 bytes for alignment
// End Function Specification
uint32_t  addUsrDtlsToErrl (
    errlHndl_t io_err,
    uint8_t* i_dataPtr,
    const uint16_t i_size,
    const uint8_t i_version,
    const ERRL_USR_DETAIL_TYPE i_type )
{
    uint32_t l_status = ERRL_STATUS_USER_ERROR;

    // 1.  check if handle is valid
    // 2.  NOT empty
    // 3.  not committed
    // 4.  size being passed in is valid
    // 5.  data pointer is valid
    // 6.  and we have enough size
    if ((io_err != NULL ) &&
        (io_err->iv_userDetails.iv_committed == 0) &&
        (i_size != 0) &&
        (i_dataPtr != NULL) &&
        ((io_err->iv_userDetails.iv_entrySize) < ERRL_MAX_ENTRY_SZ))
    {
        //adjust user details entry payload size to available size
        uint16_t l_availableSize = ERRL_MAX_ENTRY_SZ -
                                   (io_err->iv_userDetails.iv_entrySize +
                                    sizeof (ErrlUserDetailsEntry_t));

        // Add user details section only if ERRL_USR_DATA_SZ_MIN dwords fit
        if (l_availableSize >= ERRL_USR_DATA_SZ_MIN)
        {
            //local copy of the usr details entry
            ErrlUserDetailsEntry_t l_usrDtlsEntry;

            l_usrDtlsEntry.iv_type = (uint8_t)i_type;
            l_usrDtlsEntry.iv_version = i_version;
            l_usrDtlsEntry.iv_size = (i_size < l_availableSize) ? i_size :
                                     l_availableSize;
            void* l_p = io_err;

            // add user detail entry to end of the current error log
            // copy header of the user detail entry
            l_p = memcpy (l_p + (io_err->iv_userDetails.iv_entrySize),
                          &l_usrDtlsEntry,
                          sizeof (ErrlUserDetailsEntry_t));

            // If we have more cases of user detail section payloads needing
            // additional logic to copy the payload, the below if-else could
            // be moved into a new function

            // copy payload of the user detail entry
            l_p += sizeof (ErrlUserDetailsEntry_t);

            if (ERRL_USR_DTL_TRACE_DATA == l_usrDtlsEntry.iv_type)
            {
                // copy the trace buffer (source data ptr is global)
                copyTraceBufferPartial (l_p, l_usrDtlsEntry.iv_size);
            }
            else if ( l_usrDtlsEntry.iv_type == ERRL_USR_DTL_SR_FFDC )
            {
#ifdef __PPE_QME

                ErrlUserDetailsEntry_t* l_pffdcHdr = ( ErrlUserDetailsEntry_t*)((uint8_t*)l_p - sizeof (ErrlUserDetailsEntry_t));
                uint32_t l_ffdc         =   (uint32_t ) l_p;
                uint32_t l_coreNum   =   *i_dataPtr;

                if( l_coreNum > 3 )
                {
                    PK_TRACE_DBG( "Bad FFDC Source Location Index %d", l_coreNum );
                    l_coreNum = 3;
                }

                l_coreNum   =   l_coreNum * SELF_RESTORE_FFDC_PER_CORE_IN_HOMER;
                uint32_t l_roundedSize  =   l_pffdcHdr->iv_size + ( 32 - (l_ffdc % 32) );
                l_pffdcHdr->iv_size     =   ( l_roundedSize < l_availableSize ) ? l_roundedSize : l_availableSize;

                l_ffdc = (( l_ffdc + 31 ) & ~(0x1F ));

                qme_block_copy_core_data( QME_BCEBAR_0,
                                          (( SELF_RESTORE_FFDC_OFFSET + l_coreNum ) >> 5 ),
                                          (( l_ffdc & 0x0000ffff ) >> 5),
                                          ( SELF_RESTORE_FFDC_PER_QUAD_IN_HOMER >> 5 ),
                                          SELF_RESTORE_FFDC_BLK_CNT );

                G_qme_record.cts_timeout_count = BCE_TIMEOUT_COUNT;

                do
                {
                    PPE_WAIT_4NOP_CYCLES;

                }
                while( ( BLOCK_COPY_SUCCESS != qme_block_copy_check()) &&
                       ( --G_qme_record.cts_timeout_count > 0 ) );

#endif
            }
            else
            {
                memcpy (l_p, i_dataPtr, l_usrDtlsEntry.iv_size);
            }

            // any errors in copying payload are ignored by errl infrastructure
            // and space will be accounted for that in the error log
            uint16_t l_totalSizeOfUsrDtls = sizeof (ErrlUserDetailsEntry_t) +
                                            l_usrDtlsEntry.iv_size;
            //update usr data entry size
            io_err->iv_userDetails.iv_userDetailEntrySize +=
                l_totalSizeOfUsrDtls;
            //update error log size
            io_err->iv_userDetails.iv_entrySize += l_totalSizeOfUsrDtls;
            l_status = ERRL_STATUS_SUCCESS;
        }
        else
        {
            l_status = ERRL_STATUS_LOG_FULL;
            PK_TRACE_ERR ("No space to add usr dtl! I/p %dB Avail: %dB",
                          i_size, l_availableSize);
        }
    }

    return l_status;
}


// Function Specification
//
// Name:  addTraceToErrl
//
// Description: Add trace to an error log
//
// End Function Specification
void addTraceToErrl (errlHndl_t io_err)
{
    PkMachineContext ctx;

    pk_critical_section_enter (&ctx);

    addUsrDtlsToErrl (
        io_err,
        (uint8_t*) &g_pk_trace_buf,
        G_errlConfigData.traceSz,
        ERRL_TRACE_VERSION_1,
        ERRL_USR_DTL_TRACE_DATA );

    pk_critical_section_exit (&ctx);
}


void getPpeRegs ( const uint8_t  i_errlSource,
                  const uint8_t  i_ppeInstance,
                  errlPpeRegs_t* o_data )
{
    uint32_t ppeIdx = 0x3;
    uint32_t ppeXirs[][ERRL_PPE_REGS_MAX] =
    {
        { 0x64010, 0x64013, 0x64014, 0x64015, 0x6401F }, // PGPE
        { 0x66010, 0x66013, 0x66014, 0x66015, 0x6601F }, // XGPE
        {
            PPE_SCOM_ADDR_UC_Q(0x200e0200, i_ppeInstance),
            PPE_SCOM_ADDR_UC_Q(0x200e020c, i_ppeInstance),
            PPE_SCOM_ADDR_UC_Q(0x200e0210, i_ppeInstance),
            PPE_SCOM_ADDR_UC_Q(0x200e0214, i_ppeInstance),
            PPE_SCOM_ADDR_UC_Q(0x200e023c, i_ppeInstance)
        } // QME
    };

    switch (i_errlSource)
    {
        case ERRL_SOURCE_PGPE:
            ppeIdx = 0;
            break;

        case ERRL_SOURCE_XGPE:
            ppeIdx = 1;
            break;

        case ERRL_SOURCE_QME:
            ppeIdx = 2;
            break;
    }

    if (ppeIdx <= 2)
    {
        uint32_t regIdx = 0;

        for (; regIdx < ERRL_PPE_REGS_MAX; ++regIdx)
        {
            PPE_GETSCOM (ppeXirs[ppeIdx][regIdx], o_data->ppeRegs[regIdx]);
        }
    }
}

void getPpeRegsUsrDtls (const uint8_t i_source,
                        const uint8_t i_instance,
                        errlPpeRegs_t* o_ppeRegs,
                        errlDataUsrDtls_t* o_usrDtls)
{
    o_usrDtls->type = ERRL_USR_DTL_PPE_REGS;
    o_usrDtls->size = sizeof (errlPpeRegs_t);
    o_usrDtls->pData = (uint8_t*) &o_ppeRegs;
    o_usrDtls->version = ERRL_PPE_REGS_VERSION_1;
    o_usrDtls->pNext = NULL;

    getPpeRegs (i_source, i_instance, o_ppeRegs);
}

// Function Specification
//
// Name:  commitErrl
//
// Description: Commit an Error Log
//
// End Function Specification
uint32_t commitErrl (errlHndl_t* io_err)
{
    uint32_t l_status = ERRL_STATUS_USER_ERROR;

    if (NULL != *io_err)
    {
        l_status = ERRL_STATUS_SUCCESS;
        // this is the last common place holder to change or override the error
        // log fields like actions, severity, callouts, etc. based on generic
        // handling on cases like xstop, etc., before the error is 'commited'
        // for OCC to notice and trigger (H)TMGT

        // mark the last callout by zeroing out the next one
        uint8_t l_lastCallout = (*io_err)->iv_numCallouts;

        if (l_lastCallout < ERRL_MAX_CALLOUTS)
        {
            PK_TRACE_INF ("Zeroing last+1 callout %u", l_lastCallout);

            (*io_err)->iv_callouts[l_lastCallout].iv_type = 0;
            (*io_err)->iv_callouts[l_lastCallout].iv_calloutValue = 0;
            (*io_err)->iv_callouts[l_lastCallout].iv_priority = 0;
        }

        // numCallouts must be the max value as defined by the TMGT-OCC spec.
        (*io_err)->iv_numCallouts = ERRL_MAX_CALLOUTS;

        // calculate checksum & save it off
        uint32_t    l_cnt = 2;  // starting point is after checksum field
        uint32_t    l_sum = 0;
        uint32_t    l_size = (*io_err)->iv_userDetails.iv_entrySize;
        uint8_t*    l_p = (uint8_t*)*io_err;

        for( ; l_cnt < l_size ; l_cnt++ )
        {
            l_sum += *(l_p + l_cnt);
        }

        (*io_err)->iv_checkSum = l_sum;

        // save off committed
        (*io_err)->iv_userDetails.iv_committed = 1;

        // report error to OCC
        l_status = reportErrorLog (io_err, true);
    }

    return l_status;
}


// Function Specification
//
// Name: deleteErrl
//
// Description: Deletes an error log that has already been created, but not
//              yet committed. It cleans up the internal errl framework so
//              that new errors of the same sev can be created in the same
//              space
//
// End Function Specification
uint32_t deleteErrl (errlHndl_t* io_err)
{
    PK_TRACE_INF ("deleteErrl");
    return (reportErrorLog (io_err, false));
}


// Function Specification
//
// Name:  ppeLogError
//
// Description: Utility function to accept error log params and orchestrate
//              all errl API calls to create, add user details/callouts and
//              commit an Error Log
//
// End Function Specification
uint32_t  ppeLogError (
    const uint8_t       i_rc,
    const uint16_t      i_extRc,
    const uint16_t      i_modId,
    const ERRL_SEVERITY i_sev,
    errlUDWords_t*      p_uDWords,
    errlDataUsrDtls_t*  p_usrDtls,
    errlDataCallout_t*  p_callOuts )
{
    uint32_t status = ERRL_STATUS_SUCCESS;
    errlHndl_t err = NULL;

    // 1. Create an error log, with basic info
    err = createErrl (i_modId,
                      i_rc,
                      i_extRc,
                      i_sev,
                      p_uDWords,
                      &status);

    if (NULL != err)
    {
        // Base error log created successfully
        while ( ((ERRL_STATUS_SUCCESS == status)   ||
                 (ERRL_STATUS_LOG_FULL == status)) && p_usrDtls )
        {
            // 2. Add user details sections passed by user.
            //    Try fitting as many user data sections as possible
            status = addUsrDtlsToErrl(err,
                                      p_usrDtls->pData,
                                      p_usrDtls->size,
                                      p_usrDtls->version,
                                      p_usrDtls->type);
            p_usrDtls = p_usrDtls->pNext;
        }

        if (ERRL_STATUS_LOG_FULL == status)
        {
            // continue as good, even if last added user detail did not fit
            status = ERRL_STATUS_SUCCESS;
        }

        if (ERRL_STATUS_SUCCESS == status)
        {
            // 3. Add traces to the error log, as default
            //    If no space, traces are dropped from the log favouring
            //    user details added before
            addTraceToErrl (err);
        }

        while ((ERRL_STATUS_SUCCESS == status) && p_callOuts)
        {
            // 4. Add callouts passed by user
            status = addCalloutToErrl(err,
                                      p_callOuts->type,
                                      p_callOuts->value,
                                      p_callOuts->priority);
            p_callOuts = p_callOuts->pNext;
        }

        if (ERRL_STATUS_SUCCESS == status)
        {
            // 5. Commit error log to be noticed for retrieval
            //    note: err gets NULL here on success
            status = commitErrl (&err);
        }
    }

    if (err)
    {
        // 6. If something failed in steps 2-5, delete the error to allow for
        //    for subsequent retries or new logs from the caller
        PK_TRACE_ERR ( "ppeLogError: Failed status: %d. delete status: %d",
                       status, (deleteErrl (&err)) );
    }

    // 7. Return first failed status to caller
    return status;
}
