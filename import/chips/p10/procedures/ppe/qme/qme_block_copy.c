/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_block_copy.c $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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
    SBASE_SHIFT_POS         = 23, //change wrt to P9 due to change in SRAM size
    NUM_BLK_SHIFT_POS       = 36
};

void
qme_block_copy_start(uint32_t barIndex, uint32_t bcMembase, uint32_t bcSrambase, uint32_t bcLength)
{
    //let us find out HOMER address where core specific scan rings reside.
    // use native 16-bit PPE multiply instruction
    uint64_t l_tempData = 0;
    uint64_t l_bceControlData = 0;
    bcMembase = bcMembase + (mulu16( G_qme_record.quad_id , bcLength ));
    PK_TRACE_DBG("Start qme block copy MBASE 0x%08x SBSE 0x%08x Len 0x%08x  QME Ist %d",
                 bcMembase, bcSrambase, bcLength, G_qme_record.quad_id);

    l_tempData  =  bcSrambase;
    l_bceControlData  =  l_tempData << SBASE_SHIFT_POS;

    l_tempData  =  bcLength;
    l_bceControlData  |=  l_tempData << NUM_BLK_SHIFT_POS;

    l_tempData =  bcMembase;
    l_bceControlData |= l_tempData;

    l_bceControlData  =  l_bceControlData |
                         START_BLOCK_COPY |
                         RD_FROM_HOMER_TO_SRAM |
                         ((barIndex == 0) ? SEL_BCEBAR0 : SEL_BCEBAR1) |
                         (SET_RD_PRIORITY_0);

    PKTRACE( "Control Data 0x%08x%08x", (l_bceControlData >> 32), (uint32_t)l_bceControlData );
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
