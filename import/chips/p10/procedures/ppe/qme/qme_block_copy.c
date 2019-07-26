/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_block_copy.c $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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

extern QmeRecord G_qme_record;

//config values associated with CME Block Copy Engine.
enum QME_BCE_CONTROL_STATUS
{
    CHECK_BUSY              = BIT32(0),
    CHECK_ERROR             = BIT32(1),
    START_BLOCK_COPY        = BIT64(2),
    RD_FROM_HOMER_TO_SRAM   = BIT64(4),
    WR_FROM_SRAM_TO_HOMER   = 0,
    SEL_BCEBAR0             = 0,
    SEL_BCEBAR1             = BIT64(5),
    SET_RD_PRIORITY_0       = 0,
    SBASE_SHIFT_POS         = 24,
    NUM_BLK_SHIFT_POS       = 36
};

void
qme_block_copy_start(uint32_t barIndex, uint32_t bcMembase, uint32_t bcSrambase, uint32_t bcLength)
{
    //let us find out HOMER address where core specific scan rings reside.
    // use native 16-bit PPE multiply instruction
    bcMembase = bcMembase + (mulu16( G_qme_record.quad_id , bcLength ) << 5 );
    bcMembase = bcMembase >> 5;

    PK_TRACE_DBG("Start qme block copy MBASE 0x%08x SBSE 0x%08x Len 0x%08x  QME Ist %d",
                 bcMembase, bcSrambase, bcLength, G_qme_record.quad_id);

    uint64_t l_bceControlData = (// starts block copy operation
                                    (START_BLOCK_COPY)                                        |
                                    // sets direction of copy HOMER to CME SRAM
                                    (RD_FROM_HOMER_TO_SRAM)                                   |
                                    // BAR register to be used for accessing main memory base
                                    ((barIndex == 0) ? SEL_BCEBAR0 : SEL_BCEBAR1)             |
                                    // No priority set
                                    (SET_RD_PRIORITY_0)                                       |
                                    //copy page to this SRAM Block.
                                    ((bcSrambase & 0x0000FFF ) << SBASE_SHIFT_POS)            |
                                    // number of blocks to be copied
                                    (((uint64_t) bcLength & 0x00007FF) << NUM_BLK_SHIFT_POS ) |
                                    (((uint64_t) bcMembase & 0x00000000003FFFFF) ));

    out64(QME_LCL_BCECSR, l_bceControlData);
}


BceReturnCode_t
qme_block_copy_check()
{
    BceReturnCode_t l_rc = BLOCK_COPY_BUSY;

    while(1)
    {
        uint32_t l_bceStatusData = in32(QME_LCL_BCECSR);

        if( CHECK_ERROR & l_bceStatusData )     // checking if block copy engine reported an error.
        {
            PK_TRACE_ERR("ERROR: Failed to block copy on qme %d", G_qme_record.quad_id);
            l_rc = BLOCK_COPY_FAILED;           // abort the block copy
            break;
        }

        if( !( CHECK_BUSY & l_bceStatusData ) ) // check if block copy is done.
        {
            l_rc = BLOCK_COPY_SUCCESS;          // block copy completed.
            break;
        }
    }

    return l_rc;
}
