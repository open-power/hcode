/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/lib/p9_hcd_block_copy.h $ */
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
#ifndef __P9_HCD_BLOCK_COPY_H__
#define __P9_HCD_BLOCK_COPY_H__
#include <stdint.h>

//config values associated with CME Block Copy Engine.
typedef enum
{
    ENABLE_WR_SCOPE         = 0x0000000000000010,
    ENABLE_RD_SCOPE         = 0x0000000000000040,
    BLOCK_COPY_SIZE_1MB     = 0x0000000000000001,
    START_BLOCK_COPY        = 0x2000000000000000,
    RD_FROM_HOMER_TO_SRAM   = 0x0800000000000000,
    SEL_BCEBAR0             = 0x0000000000000000,
    SEL_BCEBAR1             = 0x0400000000000000,
    SET_RD_PRIORITY_0       = 0x0000000000000000,
    SET_SBASE               = 0x0000000000000000,
    CHECK_BUSY              = 0x8000000000000000,
    CHECK_ERROR             = 0x4000000000000000,
    BAR_INDEX_0             = 0x00,
    BAR_INDEX_1             = 0x01,

} BceConfigVal_t;

//Return codes associated with Block Copy Engine.
typedef enum
{
    BLOCK_COPY_SUCCESS      = 0,
    BLOCK_COPY_SCOM_FAIL    = 1,
    BLOCK_COPY_FAILED       = 2,
    BLOCK_COPY_INVALID_ARG  = 3,
    BLOCK_COPY_IN_PROGRESS  = 4,
} BceReturnCode_t;

//Platforms that can request block copy transfer.
typedef enum
{
    PLAT_NA     =   0,
    PLAT_CME    =   1,
    PLAT_SGPE   =   2,
} InitiatorPlat_t;

// SCOM addresses associated with a CME BCE.
typedef enum
{
    SCOM_ADDR_BCEBAR0   =   0x10012010,
    SCOM_ADDR_BCEBAR1   =   0x10012011,
    SCOM_ADDR_BCEBCSR   =   0x1001200F,
    SCOM_ADDR_PBABAR0   =   0x05012B00,
} ScomAddrList_t;

// Bit shifts needed for various fields of CME's BCESCR register
enum
{
    BASE_SHIFT_POS      =   20,
    NUM_BLK_SHIFT_POS   =   36,
    SBASE_SHIFT_POS     =   24,
    CME_BASE_ADDRESS    =   0x10012000,
};

#define SGPE_SCOM_ADDR(addr, quad, ex) (addr | CME_BASE_ADDRESS | (quad << 24) | (ex << 10) )

#define PPE_GETSCOM(addr, data)                                        \
    rc = getscom(0, addr, &data);                                      \
    if (rc) {                                                          \
        PK_TRACE("getscom@%d failed w/rc=0x%08x",                      \
                 addr, rc);                                            \
        pk_halt();                                                     \
    }

#define PPE_PUTSCOM(addr, data)                                        \
    rc = putscom(0, addr, data);                                       \
    if (rc) {                                                          \
        PK_TRACE("putscom@%d failed w/rc=0x%08x",                      \
                 addr, rc);         \
        pk_halt();                                                     \
    }
/// @brief accomplishes block copy from mainstore to CME SRAM.
/// @param [in]  i_cmeStartBlk   Block no associated with CME SRAM( a block is 32B )
/// @param [in]  i_blockLength   number of block to be transferred.
/// @param [in]  i_cmePos        Position of CME in the P9 chip.
/// @param [in]  i_plat          platform requesting block copy transfer.
/// @param [in]  i_mbaseVal      main memory block index from where block copy begins.
/// @note  It is a non blocking function. It doesn't poll the status and error bits.
///        It is expected to be called by CME and SGPE only.
void startCmeBlockCopy( uint64_t i_cmeStartBlk, uint32_t i_blockLength,
                        uint32_t i_cmePos, InitiatorPlat_t i_plat, uint8_t i_barIndex,
                        uint32_t i_mbaseVal );

/// @brief accomplishes block copy from mainstore to CME SRAM.
/// @param [in]  i_cmePos        Position of CME in the P9 chip.
/// @param [in]  i_plat          platform requesting block copy transfer.
/// @retVal BLOCK_COPY_SUCCESS is block succeeds, return code otherwise.
/// @note  It is a non blocking function. It doesn't poll the status and error bits.
///        It is expected to be called by CME and SGPE only.
BceReturnCode_t checkCmeBlockCopyStatus( uint32_t i_cmePos, InitiatorPlat_t i_plat );

/// @brief initializes the BCENARn register.
/// @param [in]  i_plat     platform calling CME's block copy engine.
/// @param [in]  i_barIndex 0 for BCEBAR0 and 1 for BCEBAR1
/// @param [in]  i_barRegData address to be written to BCEBARn
/// @param [in]  i_cmePos     position of CME.
/// @note  No PPE other than SGPE is expected to call this function. It is expected to
///        be called by SGPE only.
void initCmeBceBarAddr( uint8_t i_barIndex, uint64_t i_barRegData, uint8_t i_cmePos );
#endif
