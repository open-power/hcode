/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/sharedlib/errl.c $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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

#include "iota.h"
#include "ppe42_string.h"
#include "iota_trace.h"

#include "p10_hcd_memmap_occ_sram.H"

#include "errldefs.h"
#include "errl.h"

uint8_t G_errLogUnrec[ERRL_MAX_ENTRY_SZ]  __attribute__ ((aligned (8))) = {0};
uint8_t G_errLogInfo [ERRL_MAX_ENTRY_SZ]  __attribute__ ((aligned (8))) = {0};

// As this is common code across GPEs, the number of error logs supported per
// severity (and hence total error logs supported) per GPE has to be same.
// Order of error logs in this table should match relative order per GPE from
// elog_entry_index
// @note The error log payloads are stored as below, local to every PPE instance
//       and the error log table points to such payloads
errlHndl_t  G_gpeErrLogs[ERRL_MAX_SLOTS_PER_GPE] =
{
    (errlHndl_t)& G_errLogUnrec,
    (errlHndl_t)& G_errLogInfo
};

hcode_elog_entry_t* G_elogTable = NULL; // Ptr to shared data err idx tbl
hcodeErrlConfigData_t G_errlConfigData = {0};
hcodeErrlMetadata_t G_errlMetaData[ERRL_MAX_SLOTS_PER_GPE] = {{0}};

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
            case ERRL_SOURCE_PGPE:
                // Shares table in OCC SRAM with other GPEs
                G_errlConfigData.traceSz = ERRL_TRACE_DATA_SZ_PGPE;
                G_errlConfigData.gpeBaseSlot = ERRL_SLOT_PGPE_BASE;
                break;

            case ERRL_SOURCE_XGPE:
                // Shares table in OCC SRAM with other GPEs
                G_errlConfigData.traceSz = ERRL_TRACE_DATA_SZ_XGPE;
                G_errlConfigData.gpeBaseSlot = ERRL_SLOT_XGPE_BASE;
                break;

            case ERRL_SOURCE_QME:
                // Each QME commits error logs to its own table in local QME SRAM
                G_errlConfigData.traceSz = ERRL_TRACE_DATA_SZ_QME;
                G_errlConfigData.tblBaseSlot += (G_errlConfigData.ppeId << 1);
                G_errlConfigData.gpeBaseSlot = G_errlConfigData.tblBaseSlot;
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
            while (l_slot < ERRL_MAX_SLOTS_PER_GPE);
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
    uint64_t*     o_timeStamp )
{
    uint8_t  l_slot = ERRL_SLOT_INVALID;
    uint8_t  l_localSlot = ERRL_SLOT_INVALID;
    uint32_t l_slotmask = ERRL_SLOT_MASK_DEFAULT;

    // this logic will evolve once we support other severities
    // or we could have a map table
    if (ERRL_SEV_UNRECOVERABLE == i_severity)
    {
        switch (G_errlConfigData.source)
        {
            case ERRL_SOURCE_PGPE:
                l_slotmask = ERRL_SLOT_MASK_PGPE_UNREC;
                break;

            case ERRL_SOURCE_XGPE:
                l_slotmask = ERRL_SLOT_MASK_XGPE_UNREC;
                break;

            case ERRL_SOURCE_QME:
                l_slotmask = ~(ERRL_SLOT_MASK_QME_UNREC_BASE >> (G_errlConfigData.ppeId << 1));
                break;
        }
    }
    else if (ERRL_SEV_INFORMATIONAL == i_severity)
    {
        switch (G_errlConfigData.source)
        {
            case ERRL_SOURCE_PGPE:
                l_slotmask = ERRL_SLOT_MASK_PGPE_INFO;
                break;

            case ERRL_SOURCE_XGPE:
                l_slotmask = ERRL_SLOT_MASK_XGPE_INFO;
                break;

            case ERRL_SOURCE_QME:
                l_slotmask = ~(ERRL_SLOT_MASK_QME_INFO_BASE >> (G_errlConfigData.ppeId << 1));
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
                if (ERRL_MAX_SLOTS_PER_GPE > l_localSlot)
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
                    G_errlMetaData[l_localSlot].errId =
                        ((++G_errlConfigData.errId) == 0) ?
                        ++G_errlConfigData.errId :
                        G_errlConfigData.errId;
                    *o_errlId = G_errlMetaData[l_localSlot].errId;
                }
                else
                {
                    // localSlot cannot exceed slots per GPE
                    PK_TRACE_ERR("LocalSlot %d > Max Slot/GPE Slot %d Src 0x%X",
                                 l_localSlot, l_slot, G_errlConfigData.source);
                    l_localSlot = ERRL_SLOT_INVALID;
                }
            }
            else
            {
                // Prev error nor yet offloaded by OCC/XGPE, GPE creating errors
                // faster than OCC/XGPE is consuming them
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
            PK_TRACE_ERR ("Slot %d not free in GPE! Bits 0x%04X Mask 0x%04X "
                          "Word 0x%04X", l_slot, G_errlConfigData.slotBits,
                          l_slotmask, l_slotBitWord);
        }

        // 7. Exit Critical Section to be thread-safe
        pk_critical_section_exit (&ctx);
    }
    else
    {
        PK_TRACE_ERR ("Cannot calculate a free slot! Bad Source %d OR Sev %d!",
                      G_errlConfigData.source, i_severity);
    }

    PK_TRACE_INF ("Sev %d Slot G %d L %d EID 0x%08X",
                  i_severity, l_slot, l_localSlot, *o_errlId);

    return l_localSlot;
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

void reportErrorLog (errlHndl_t i_err)
{
    if (NULL != i_err)
    {
        uint8_t l_slot = 0;

        // Get the slot of the error to be reported based on unique across logs
        do
        {
            if (G_errlMetaData[l_slot].errId == i_err->iv_entryId)
            {
                break;
            }
        }
        while (++l_slot < ERRL_MAX_SLOTS_PER_GPE);

        if (l_slot < ERRL_MAX_SLOTS_PER_GPE)
        {
            PK_TRACE_INF ("reportErrorLog: EID 0x%08X", i_err->iv_entryId);
            hcode_elog_entry_t l_errlEntry;

            l_errlEntry.dw0.fields.errlog_id = i_err->iv_entryId;
            l_errlEntry.dw0.fields.errlog_len = i_err->iv_userDetails.iv_entrySize;
            l_errlEntry.dw0.fields.errlog_addr = (uint32_t)i_err;
            l_errlEntry.dw0.fields.errlog_src = G_errlConfigData.source;

            // Enter Critical Section to be thread-safe
            PkMachineContext ctx;
            pk_critical_section_enter (&ctx);

            // Error Table should get updated last as OCC/XGPE polls on it
            G_elogTable[l_slot].dw0.value = l_errlEntry.dw0.value;

            // Free up this slot as available on this GPE's records.
            // OCC will free up corresponding slot in Shared SRAM space once
            // the error log is processed
            G_errlConfigData.slotBits &= G_errlMetaData[l_slot].slotMask;
            G_errlMetaData[l_slot].slotMask = ERRL_SLOT_MASK_DEFAULT;

            pk_critical_section_exit (&ctx);
        }
    }

    PK_TRACE_INF ("<< reportErrorLog");
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
    const uint32_t i_userData1,
    const uint32_t i_userData2,
    const uint32_t i_userData3 )
{
    PK_TRACE_INF ("createErrl: modid 0x%X rc 0x%X sev 0x%X",
                  i_modId, i_reasonCode, i_sev);

    errlHndl_t  l_rc = NULL;
    uint64_t    l_time = 0;
    uint8_t     l_id = 0;
    uint8_t     l_errSlot = getErrSlotNumAndErrId( i_sev, &l_id, &l_time);

    if (ERRL_MAX_SLOTS_PER_GPE > l_errSlot)
    {
        PK_TRACE_INF ("createErrl: EID [%d] Slot [%d]", l_id, l_errSlot);

        // get slot pointer
        l_rc = G_gpeErrLogs[l_errSlot];
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
        l_rc->iv_userDetails.iv_userData1 = i_userData1;
        l_rc->iv_userDetails.iv_userData2 = i_userData2;
        l_rc->iv_userDetails.iv_userData3 = i_userData3;
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

    PK_TRACE_INF ("<< createErrl EID: 0x%08X",
                  (l_rc != NULL) ? (l_rc->iv_entryId) : 0ull);

    return l_rc;
}


// Function Specification
// Name:  addCalloutToErrl
// Description: Add a callout to an Error Log
// End Function Specification
void addCalloutToErrl(
    errlHndl_t io_err,
    const ERRL_CALLOUT_TYPE i_type,
    const uint64_t i_calloutValue,
    const ERRL_CALLOUT_PRIORITY i_priority)
{
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
        PK_TRACE_INF ("Callout type 0x%02X was NOT added to elog", i_type);
    }
}


// Function Specification
//
// Name:  addUsrDtlsToErrl
//
// Description: Add User Details to an Error Log
// @note i_size should be a multiple of 8 bytes for alignment
// End Function Specification
void addUsrDtlsToErrl(
    errlHndl_t io_err,
    uint8_t* i_dataPtr,
    const uint16_t i_size,
    const uint8_t i_version,
    const ERRL_USR_DETAIL_TYPE i_type)
{
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
            else
            {
                memcpy (l_p, i_dataPtr, l_usrDtlsEntry.iv_size);
            }

            uint16_t l_totalSizeOfUsrDtls = sizeof (ErrlUserDetailsEntry_t) +
                                            l_usrDtlsEntry.iv_size;
            //update usr data entry size
            io_err->iv_userDetails.iv_userDetailEntrySize +=
                l_totalSizeOfUsrDtls;
            //update error log size
            io_err->iv_userDetails.iv_entrySize += l_totalSizeOfUsrDtls;
        }
    }
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

// Function Specification
//
// Name:  commitErrl
//
// Description: Commit an Error Log
//
// End Function Specification
void commitErrl (errlHndl_t* io_err)
{
    if (NULL != *io_err)
    {
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
        reportErrorLog(*io_err);

        *io_err = (errlHndl_t) NULL;
    }
}
