/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/lib/p9_hcd_block_copy.c $ */
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

///
/// @file p9_hcd_block_copy.c
/// @brief  initiates a data transfer by block copy from HOMER to CME SRAM.
///
// *HWP HWP Owner:  Greg Still <stillgs@us.ibm.com>
// *HWP FW Owner:   Prem S Jha <premjha2@in.ibm.com>
// *HWP Team:       PM
// *HWP Level:      2
// *HWP Consumed by: CME/SGPE
//
#include <stdint.h>
#include "pk.h"
#include "ppe42.h"
#include "ppe42_scom.h"
#include "cmehw_common.h"
#include "gpehw_common.h"
#include "p9_hcd_block_copy.h"
#include "cme_register_addresses.h"



//------------------------------------------------------------------------------------

void startCmeBlockCopy( uint64_t i_cmeStartBlk, uint32_t i_blockLength, uint32_t i_cmePos,
                        uint8_t i_barIndex, uint32_t i_mbaseVal )
{

#if defined(__PPE_CME) || defined(__PPE_SGPE)

    uint64_t l_bceStatusData = ((START_BLOCK_COPY)       |   // starts block copy operation
                                (RD_FROM_HOMER_TO_SRAM)  |   // sets direction of copy HOMER to CME SRAM
                                // BAR register to be used for accessing main memory base
                                ((i_barIndex == 0) ? SEL_BCEBAR0 : SEL_BCEBAR1) |
                                (SET_RD_PRIORITY_0)      |   // No priority set
                                ((i_cmeStartBlk & 0x0000FFF ) << SBASE_SHIFT_POS) |  //copy page to this SRAM Block.
                                // number of blocks to be copied
                                (((uint64_t) i_blockLength & 0x00007FF) << NUM_BLK_SHIFT_POS ) |
                                (((uint64_t) i_mbaseVal & 0x00000000003FFFFF) ));

#endif

#ifdef __PPE_CME
    // for CME platform use local address for register BCECSR.
    // using BCECSR SCOM address will not work as it is meant
    // for entities external to CME.
    out64(CME_LCL_BCECSR, l_bceStatusData);
#endif

#ifdef __PPE_SGPE
    //getting quad id by dividing cme pos with 2
    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_BCECSR, (i_cmePos >> 1), (i_cmePos % 2)), l_bceStatusData);
#endif
}

//------------------------------------------------------------------------------------

BceReturnCode_t checkCmeBlockCopyStatus( uint32_t i_cmePos)
{
    BceReturnCode_t l_bcRetCode = BLOCK_COPY_IN_PROGRESS;

    do
    {
        uint64_t l_bceStatusData = 0;

#ifdef __PPE_CME
        // for CME platform use local address for register BCECSR.
        // using BCECSR SCOM address will not work as it is meant
        // for entities external to CME.
        l_bceStatusData = in64(CME_LCL_BCECSR);
#endif

#ifdef __PPE_SGPE
        // SGPE reading block copy engine status of CME
        GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_BCECSR, (i_cmePos >> 1), (i_cmePos % 2)), l_bceStatusData);
#endif

        if( CHECK_ERROR & l_bceStatusData )     // checking if block copy engine reported an error.
        {
            l_bcRetCode = BLOCK_COPY_FAILED;    // abort the block copy
            break;
        }

        if( !(l_bceStatusData & CHECK_BUSY) )   // check if block copy is done.
        {
            l_bcRetCode = BLOCK_COPY_SUCCESS;   // block copy completed.
            break;
        }
    }
    while(0);

    return l_bcRetCode;
}
