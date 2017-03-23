/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/utils/p9_putringutils.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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
/// @file p9_putringutils.c
/// @brief Provide the service of decompressing the rs4 encoded string.
///
// *HWP HWP Owner: Bilicon Patil <bilpatil@in.ibm.com>
// *HWP FW Owner: Prasad Ranganath <prasadbgr@in.ibm.com>
// *HWP Team: PM
// *HWP Level: 2
// *HWP Consumed by: CME

#include "pk.h"
#include "ppe42_scom.h"
#include "p9_cme_irq.h"
#include "p9_putringutils.h"
#include "p9_scan_compression.H"

//
// Function Definitions
//

///
/// @brief Return a big-endian-indexed nibble from a byte string
/// @param[in] i_rs4Str The RS4 scan string
/// @param[in] i_nibbleIndx Index into i_rs4Str that need to converted
///                         into a nibble
/// @return big-endian-indexed nibble
///
uint8_t rs4_get_nibble(const uint8_t* i_rs4Str, const uint32_t i_nibbleIndx)
{
    uint8_t l_byte;
    uint8_t l_nibble;

    l_byte = i_rs4Str[i_nibbleIndx >> 1];


    if(i_nibbleIndx % 2)
    {
        l_nibble = (l_byte & 0x0f);
    }
    else
    {
        l_nibble = (l_byte >> 4);
    }

    return l_nibble;
}

///
/// @brief Return verbatim data from the RS4 string
/// @param[in] i_rs4Str The RS4 scan string
/// @param[in] i_nibbleIndx Index into i_rs4Str that need to converted
///                         into a nibble
/// @param[in] i_nibbleCount The count of nibbles that need to be put
///                          in the return value.
/// @return big-endian-indexed double word
///
uint64_t rs4_get_verbatim(const uint8_t* i_rs4Str,
                          const uint32_t i_nibbleIndx,
                          const uint8_t i_nibbleCount)
{
    uint8_t l_byte;
    uint8_t l_nibble;
    uint64_t l_doubleWord = 0;

    uint32_t l_index = i_nibbleIndx;
    uint8_t i;

    for(i = 1; i <= i_nibbleCount; i++, l_index++)
    {
        l_byte = i_rs4Str[l_index >> 1];

        if(l_index % 2)
        {
            l_nibble = (l_byte & 0x0f);
        }
        else
        {
            l_nibble = (l_byte >> 4);
        }

        uint64_t l_tempDblWord = l_nibble;
        l_tempDblWord <<= (64 - (4 * i));

        l_doubleWord |= l_tempDblWord;
    }

    return l_doubleWord;
}

///
/// @brief Decode an unsigned integer from a 4-bit octal stop code.
/// @param[in] i_rs4Str The RS4 scan string
/// @param[in] i_nibbleIndx Index into i_rs4Str that has the stop-code
/// @param[out] o_numRotate No.of rotates decoded from the stop-code.
/// @return The number of nibbles decoded.
///
uint32_t stop_decode(const uint8_t* i_rs4Str,
                     uint32_t i_nibbleIndx,
                     uint32_t* o_numRotate)
{
    uint32_t l_numNibblesParsed = 0; // No.of nibbles that make up the stop-code
    uint32_t l_numNonZeroNibbles = 0;
    uint8_t l_nibble;

    do
    {
        l_nibble = rs4_get_nibble(i_rs4Str, i_nibbleIndx);

        l_numNonZeroNibbles = (l_numNonZeroNibbles * 8) + (l_nibble & 0x07);

        i_nibbleIndx++;
        l_numNibblesParsed++;
    }
    while((l_nibble & 0x08) == 0);

    *o_numRotate = l_numNonZeroNibbles;

    return l_numNibblesParsed;
}

/// @brief Byte-reverse a 32-bit integer
///// @param[in] i_x 32-bit word that need to be byte reversed
///// @return Byte reversed 32-bit word
uint32_t rs4_revle32(const uint32_t i_x)
{
    uint32_t rx;

#ifndef _BIG_ENDIAN
    uint8_t* pix = (uint8_t*)(&i_x);
    uint8_t* prx = (uint8_t*)(&rx);

    prx[0] = pix[3];
    prx[1] = pix[2];
    prx[2] = pix[1];
    prx[3] = pix[0];
#else
    rx = i_x;
#endif

    return rx;
}

uint64_t decodeScanRegionData(const uint32_t i_ringAddress)
{
    uint32_t l_scan_region = (i_ringAddress & 0x0000FFF0) << 13;

    uint32_t l_scan_type = 0x00008000 >> (i_ringAddress & 0x0000000F);

    // This is special case if encoded type is 0xF
    if ( (i_ringAddress & 0x0000000F) == 0xF)
    {
        l_scan_type = 0x00008000 | (l_scan_type << 12);
    }

    uint64_t l_value = l_scan_region;
    l_value = (l_value << 32) | l_scan_type;

    return l_value;
}

/// @brief Function to apply the Ring data using the queue method
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
//  @param[in] i_chipletId data from RS4
/// @param[in] i_operation Type of operation to perform - ROTATE/SCAN
/// @param[in] i_opVal Number of bits for the operation
/// @param[in] i_scanData This value has to be scanned when i_operation is SCAN
void queuedScan(enum CME_CORE_MASKS i_core,
                enum CME_SCOM_CONTROLS i_scom_op,
                enum opType_t i_operation,
                uint32_t i_opVal,
                uint64_t i_scanData)
{
    do
    {
        uint32_t l_scomAddress = 0;

        // **************
        // Scan or Rotate
        // **************
        if(ROTATE == i_operation)
        {
            // Setup Scom Address for rotate operation
            l_scomAddress = 0x00038000;

            const uint32_t l_maxRotates = 4095;
            uint32_t l_rotateCount = i_opVal;
            uint32_t l_numRotateScoms = 1; // 1 - We need to do atleast one scom

            if(i_opVal > l_maxRotates)
            {
                l_numRotateScoms = (i_opVal / l_maxRotates);
                l_rotateCount = l_maxRotates;
            }

            // Scom Data needs to have the no.of rotates in the bits 12-31
            uint32_t i;
            l_scomAddress |= l_rotateCount;

            for(i = 0; i < (l_numRotateScoms + 1); ++i)
            {
                if(i == l_numRotateScoms)
                {
                    if(i_opVal <= l_maxRotates)
                    {
                        break;
                    }

                    l_rotateCount = (i_opVal % l_maxRotates);
                    l_scomAddress = 0x00038000 | l_rotateCount;
                }

                getscom(0, CME_SCOM_ADDR(l_scomAddress, i_core, i_scom_op), &i_scanData);
            }// end of for loop
        }
        else if(SCAN == i_operation)
        {
            // Setting Scom Address for a 64-bit scan
            l_scomAddress = 0x0003E000;

            // Set the scan count to the actual value
            l_scomAddress |= i_opVal;

            putscom(0, CME_SCOM_ADDR(l_scomAddress, i_core, i_scom_op), i_scanData);
        } // end of if(SCAN == i_operation)
    }
    while(0);
}


/// @brief Function to decompress the RS4 and apply the Ring data
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
/// @param[in] i_rs4 The RS4 compressed string
int rs4DecompressionSvc(
    enum CME_CORE_MASKS i_core,
    enum CME_SCOM_CONTROLS i_scom_op,
    uint8_t* i_rs4,
    uint8_t i_applyOverride)
{
    CompressedScanData* l_rs4Header = (CompressedScanData*) i_rs4;
    uint8_t* l_rs4Str = (i_rs4 + sizeof(CompressedScanData));

    enum opType_t l_opType = ROTATE;
    enum opType_t l_opValue = ROTATE;
    uint32_t l_nibbleIndx = 0;
    uint32_t l_bitsDecoded = 0;
    uint32_t l_scanAddr = rs4_revle32(l_rs4Header->iv_scanAddr);
    uint16_t l_ringId = l_rs4Header->iv_ringId;
    uint64_t l_scanRegion = decodeScanRegionData(l_scanAddr);
    uint32_t l_scanData = 0;
    uint8_t l_mask = 0x08;
    uint64_t l_scomData = 0;

    do
    {
        if (!l_scanRegion)
        {
            PK_TRACE_INF("No data in RS4 container so coming out");
            break;
        }

        // Set up the scan region for the ring.
        putscom(0, CME_SCOM_ADDR(0x00030005, i_core, i_scom_op), l_scanRegion);

        // Write a 64 bit value for header.
        putscom(0, CME_SCOM_ADDR(0x0003E000, i_core, i_scom_op), 0xa5a5a5a5a5a5a5a5);


        // Decompress the RS4 string and scan
        do
        {
            if (l_opType == ROTATE)
            {
                // Determine the no.of ROTATE operations encoded in stop-code
                uint32_t l_count = 0;
                l_scanData = 0;
                l_nibbleIndx += stop_decode(l_rs4Str, l_nibbleIndx, &l_count);

                // Determine the no.of rotates in bits
                uint32_t l_bitRotates = (4 * l_count);

                l_bitsDecoded += l_bitRotates;

                // Do the ROTATE operation
                if (l_bitRotates != 0)
                {
                    l_opValue = ROTATE;
                    l_scanData = l_bitRotates;
                    l_scomData = 0;
                }

                l_opType = SCAN;
            }
            else if(l_opType == SCAN)
            {
                uint32_t l_scanCount = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                l_nibbleIndx++;
                l_scanData = 0;

                if (l_scanCount == 0)
                {
                    break;
                }

                if ((!i_applyOverride) && l_scanCount != 0xF)
                {
                    l_bitsDecoded += (4 * l_scanCount);

                    // Parse the non-zero nibbles of the RS4 string and
                    // scan them into the ring
                    l_scomData = rs4_get_verbatim(l_rs4Str,
                                                  l_nibbleIndx,
                                                  l_scanCount);
                    l_nibbleIndx += l_scanCount;
                    l_opValue = SCAN;
                    l_scanData = l_scanCount * 4;
                }
                else  // We are parsing RS4 for override rings
                {
                    if(0xF == l_scanCount) // We are parsing RS4 for override rings
                    {
                        i_applyOverride = 1;
                        uint8_t l_careMask =
                            rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                        l_nibbleIndx++;
                        uint8_t l_spyData =
                            rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                        l_nibbleIndx++;
                        uint8_t i = 0;

                        for(i = 0; i < 4; i++)
                        {
                            l_bitsDecoded += 1;
                            l_scomData = 0x0;

                            if((l_careMask & (l_mask >> i)))
                            {
                                if((l_spyData & (l_mask >> i)))
                                {
                                    l_scomData = 0xFFFFFFFFFFFFFFFF;
                                }

                                l_opValue = SCAN;
                            }
                            else
                            {
                                l_opValue = ROTATE;
                            }

                            queuedScan(i_core,
                                       i_scom_op,
                                       l_opValue,
                                       1,
                                       l_scomData);
                        } // end of looper for bit-parsing a non-zero nibble
                    }
                    else // We are parsing RS4 for base rings
                    {
                        uint8_t x = 0;
                        uint8_t i = 0;

                        for (x = 0; x < l_scanCount; x++)
                        {
                            // Parse the non-zero nibbles of the RS4 string and
                            // scan them into the ring
                            uint8_t l_data =
                                rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                            l_nibbleIndx += 1;

                            for(i = 0; i < 4; i++)
                            {
                                l_scomData = 0x0;
                                l_bitsDecoded += 1;

                                if((l_data & (l_mask >> i)))
                                {
                                    l_opValue = SCAN;
                                    l_scomData = 0xFFFFFFFFFFFFFFFF;
                                }
                                else
                                {
                                    l_opValue = ROTATE;
                                }

                                queuedScan(i_core,
                                           i_scom_op,
                                           l_opValue,
                                           1,
                                           l_scomData);
                            }//end of for loop

                        } // end of looper for bit-parsing a non-zero nibble
                    }
                }

                l_opType = ROTATE;
            } // end of - if(l_opType == SCAN)

            if (l_scanData)
            {
                queuedScan(i_core,
                           i_scom_op,
                           l_opValue,
                           l_scanData,
                           l_scomData);
            }
        }
        while(1);

        // Handle the string termination
        uint8_t l_nibble = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
        l_nibbleIndx++;

        if (l_nibble != 0)
        {
            if (!i_applyOverride)
            {
                l_bitsDecoded += l_nibble;
                uint64_t l_scomData = rs4_get_verbatim(l_rs4Str,
                                                       l_nibbleIndx,
                                                       1); // return 1 nibble
                queuedScan(i_core,
                           i_scom_op,
                           SCAN,
                           l_nibble & 0x3,
                           l_scomData);
            }
            else
            {
                PK_TRACE_INF("OVERRIDE !!!!!!");

                if(0x8 & l_nibble) // We are parsing RS4 for override rings
                {
                    uint8_t l_careMask = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;
                    uint8_t l_spyData = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;
                    uint8_t i = 0;

                    for(i = 0; i < 4; i++)
                    {
                        l_bitsDecoded += 1;
                        l_scomData = 0x0;

                        if((l_careMask & (l_mask >> i)))
                        {
                            if((l_spyData & (l_mask >> i)))
                            {
                                l_scomData = 0xFFFFFFFFFFFFFFFF;
                            }

                            l_opValue = SCAN;
                        }
                        else
                        {
                            l_opValue = ROTATE;
                        }

                        queuedScan(i_core,
                                   i_scom_op,
                                   l_opValue,
                                   1,
                                   l_scomData);
                    } // end of looper for bit-parsing a non-zero nibble
                }
                else // We are parsing RS4 for base rings
                {
                    // scan them into the ring
                    uint8_t l_data = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    uint8_t i = 0;

                    l_nibbleIndx += 1;

                    for(i = 0; i < l_nibble; i++)
                    {
                        l_scomData = 0x0;
                        l_bitsDecoded += 1;

                        if((l_data & (l_mask >> i)))
                        {
                            l_opValue = SCAN;
                            l_scomData = 0xFFFFFFFFFFFFFFFF;

                        }
                        else
                        {
                            l_opValue = ROTATE;
                        }

                        queuedScan(i_core,
                                   i_scom_op,
                                   l_opValue,
                                   1,
                                   l_scomData);
                    } //end of for
                }
            }
        } // end of if(l_nibble != 0)

        // Verify header
        uint64_t l_readHeader = 0;
        enum CME_SCOM_CONTROLS l_scomOp = i_scom_op;

        // when both cores are enabled.. scom op cant be queued
        if (i_scom_op == CME_SCOM_QUEUED)
        {
            l_scomOp = CME_SCOM_NOP;
        }

        getscom(0, CME_SCOM_ADDR(0x0003E000, i_core, l_scomOp), &l_readHeader);

        PK_TRACE_DBG ("l_readHeader %08X %08X", l_readHeader >> 32, l_readHeader);

        if(l_readHeader != 0xa5a5a5a5a5a5a5a5)
        {
            //In EDR: ring Id (8b),core value(4b) and number of latches that went thru rotate
            //and scan.
            // In SPRG0: First 32 bits of header data read from the hw
            uint32_t debug_data_0 = ((uint32_t)l_ringId << 24) | ((uint32_t)i_core << 20) | (l_bitsDecoded & 0x000FFFFF);
            uint32_t debug_data_1 = (uint32_t)(l_readHeader >> 32);
            asm volatile ("mtedr %0" : : "r" (debug_data_0) : "memory");
            asm volatile ("mtsprg0 %0" : : "r" (debug_data_1) : "memory");
            PK_PANIC(CME_STOP_PUTRING_HEADER_ERROR);
        }

        // Clean scan region and type data
        putscom(0, CME_SCOM_ADDR(0x00030005, i_core, l_scomOp), 0);
    }
    while(0);

    return 1;
}
