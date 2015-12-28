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

enum
{
    CME_PER_QUAD    = 0x0002,
};

//------------------------------------------------------------------------------------

void initCmeBceBarAddr( uint8_t i_barIndex, uint64_t i_barRegData, uint8_t i_cmePos )
{
    uint32_t l_bceBarAddr = (i_barIndex == 0 ) ? SCOM_ADDR_BCEBAR0 : SCOM_ADDR_BCEBAR1;
    uint64_t l_bceBarData = 0;
    int rc = 0;

    uint8_t l_quadId = i_cmePos >> 1;

    l_bceBarAddr = SGPE_SCOM_ADDR( l_bceBarAddr, l_quadId, i_cmePos );

    l_bceBarData = (( i_barRegData & 0x0000000FFFFFFFFF ) << BASE_SHIFT_POS);
    l_bceBarData |= (ENABLE_WR_SCOPE | ENABLE_RD_SCOPE | BLOCK_COPY_SIZE_1MB );
    PPE_PUTSCOM(l_bceBarAddr, l_bceBarData);        // set the source address for block copy

}

//------------------------------------------------------------------------------------

void startCmeBlockCopy( uint64_t i_cmeStartBlk, uint32_t i_blockLength, uint32_t i_cmePos,
                        InitiatorPlat_t i_plat, uint8_t i_barIndex, uint32_t i_mbaseVal )
{
    int rc = 0;

    uint64_t l_bceStatusData = ((START_BLOCK_COPY)       |   // starts block copy operation
                                (RD_FROM_HOMER_TO_SRAM)  |   // sets direction of copy HOMER to CME SRAM
                                ((i_barIndex == 0) ? SEL_BCEBAR0 : SEL_BCEBAR1) | // BAR register to be used for accessing main memory base
                                (SET_RD_PRIORITY_0)      |   // No priority set
                                ((i_cmeStartBlk & 0x0000FFF ) << SBASE_SHIFT_POS) |  //copy page to this SRAM Block.
                                (((uint64_t) i_blockLength & 0x00007FF) << NUM_BLK_SHIFT_POS ) | // number of blocks to be copied
                                (((uint64_t) i_mbaseVal & 0x00000000003FFFFF) ));

    if( PLAT_CME == i_plat )
    {
        // for CME platform use local address for register BCECSR.
        // using BCECSR SCOM address will not work as it is meant
        // for entities external to CME.
        uint32_t l_cmeBceAddr = CME_LCL_BCECSR;
        out64( l_cmeBceAddr, l_bceStatusData );
    }
    else if( PLAT_SGPE == i_plat )
    {
        //getting quad id by dividing cme pos with 2
        uint8_t l_quadId = i_cmePos >> 1;

        uint32_t l_sgpeBceAddr = SGPE_SCOM_ADDR( SCOM_ADDR_BCEBCSR, l_quadId, i_cmePos );
        PPE_PUTSCOM(l_sgpeBceAddr, l_bceStatusData );
    }
}

//------------------------------------------------------------------------------------

BceReturnCode_t checkCmeBlockCopyStatus( uint32_t i_cmePos, InitiatorPlat_t i_plat )
{
    BceReturnCode_t l_bcRetCode = BLOCK_COPY_IN_PROGRESS;

    do
    {
        uint64_t l_bceStatusData = 0;
        int rc = 0;

        if( PLAT_CME == i_plat )
        {
            // for CME platform use local address for register BCECSR.
            // using BCECSR SCOM address will not work as it is meant
            // for entities external to CME.
            uint32_t l_cmeBcelAddr = CME_LCL_BCECSR;
            l_bceStatusData = in64(l_cmeBcelAddr);
            // CME reading block copy engine status
            out64(l_cmeBcelAddr, l_bceStatusData );
        }
        else if( PLAT_SGPE == i_plat )
        {
            // getting quad id by dividing cme pos with 2
            uint8_t l_quadId = i_cmePos >> 1;

            uint32_t l_sgpeBceAddr = SGPE_SCOM_ADDR( SCOM_ADDR_BCEBCSR, l_quadId, i_cmePos );
            // SGPE reading block copy engine status of CME
            PPE_GETSCOM(l_sgpeBceAddr, l_bceStatusData);
        }

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
