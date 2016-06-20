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
#include "p9_putringutils.h"

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

    l_byte = i_rs4Str[i_nibbleIndx / 2];


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
        l_byte = i_rs4Str[l_index / 2];

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
uint64_t stop_decode(const uint8_t* i_rs4Str,
                     uint32_t i_nibbleIndx,
                     uint64_t* o_numRotate)
{
    uint64_t l_numNibblesParsed = 0; // No.of nibbles that make up the stop-code
    uint64_t l_numNonZeroNibbles = 0;
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

/// @brief Byte-reverse a 64-bit integer
/// @param[in] i_x 64-bit word that need to be byte reversed
/// @return Byte reversed 64-bit word
uint64_t rs4_revle64(const uint64_t i_x)
{
    uint64_t rx;

#ifndef _BIG_ENDIAN
    uint8_t* pix = (uint8_t*)(&i_x);
    uint8_t* prx = (uint8_t*)(&rx);

    prx[0] = pix[7];
    prx[1] = pix[6];
    prx[2] = pix[5];
    prx[3] = pix[4];
    prx[4] = pix[3];
    prx[5] = pix[2];
    prx[6] = pix[1];
    prx[7] = pix[0];
#else
    rx = i_x;
#endif

    return rx;
}

void getRingProperties(const RingID i_ringId,
                       uint32_t* o_torOffset,
                       RINGTYPE* o_ringType)
{
    do
    {
        // Determine the TOR ID
        *o_torOffset =
            (INSTANCE_RING_MASK & (RING_PROPERTIES[i_ringId].iv_torOffSet));

        if(INVALID_RING == *o_torOffset)
        {
            break;
        }

        // Determine Ring Type
        if(INSTANCE_RING_MARK & (RING_PROPERTIES[i_ringId].iv_torOffSet))
        {
            *o_ringType = INSTANCE_RING;
        }
        else
        {
            *o_ringType = COMMON_RING;
        }
    }
    while(0);
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
                const uint8_t i_chipletId,
                enum opType_t i_operation,
                uint64_t i_opVal,
                uint64_t i_scanData)
{

    uint32_t l_chiplet = i_chipletId << 24;

    do
    {
        // **************
        // Scan or Rotate
        // **************
        if(ROTATE == i_operation)
        {
            // Setup Scom Address for rotate operation
            uint32_t l_scomAddress = 0x00008000;

            // Add the chiplet ID in the Scom Address
            l_scomAddress |= l_chiplet;

            const uint64_t l_maxRotates = 0x100000;
            uint64_t l_rotateCount = i_opVal;
            uint32_t l_numRotateScoms = 1; // 1 - We need to do atleast one scom

            if(i_opVal > l_maxRotates)
            {
                l_numRotateScoms = (i_opVal / l_maxRotates);
                l_rotateCount = l_maxRotates;
            }


            // Scom Data needs to have the no.of rotates in the bits 12-31
            l_rotateCount <<= 32;
            uint32_t i;

            for(i = 0; i < (l_numRotateScoms + 1); i++)
            {
                if(i == l_numRotateScoms)
                {
                    if(i_opVal <= l_maxRotates)
                    {
                        break;
                    }

                    l_rotateCount = (i_opVal % l_maxRotates);
                    l_rotateCount <<= 32;
                }

                CME_GETSCOM(l_scomAddress, i_core, i_scom_op, l_rotateCount);
            }// end of for loop
        }
        else if(SCAN == i_operation)
        {
            // Setting Scom Address for a 64-bit scan
            uint32_t l_scomAddress = 0x0000E000;

            // Add the chiplet ID in the Scom Address
            l_scomAddress |= l_chiplet;

            uint32_t l_scanCount = i_opVal;


            // Set the scan count to the actual value
            l_scomAddress |= l_scanCount;

            CME_PUTSCOM(l_scomAddress, i_core, i_scanData);

        } // end of if(SCAN == i_operation)
    }
    while(0);

}


/// @brief Function to set the Scan Region
//  @param[in] i_core - core select value
/// @param[in] i_scanRegion Value to be set to select a Scan Region
//  @param[in] i_chipletId data from RS4
void setupScanRegion(enum CME_CORE_MASKS i_core,
                     uint64_t i_scanRegion,
                     const uint8_t i_chipletId)
{
    uint32_t l_chiplet =  i_chipletId << 24;

    do
    {
        // **************************
        // Setup Scan-Type and Region
        // **************************
        uint32_t l_scomAddress = 0x00030005;

        // Add the chiplet ID in the Scom Address
        l_scomAddress |= l_chiplet;

        CME_PUTSCOM(l_scomAddress, i_core, i_scanRegion);
    }
    while(0);
}

/// @brief Function to write the header data to the ring.
//  @param[in] i_core - core select value
/// @param[in] i_header The header data that is to be written.
//  @param[in] i_chipletId data from RS4
void writeHeader(enum CME_CORE_MASKS i_core,
                 const uint64_t i_header,
                 const uint8_t i_chipletId)
{
    do
    {
        uint32_t l_chiplet = i_chipletId << 24;

        uint32_t l_scomAddress = 0x0000E040; // 64-bit scan
        // Add the chiplet ID in the Scom Address
        l_scomAddress |= l_chiplet;

        CME_PUTSCOM(l_scomAddress, i_core, i_header);
    }
    while(0);


}

/// @brief Function to reader the header data from the ring and verify it.
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
/// @param[in] i_header The header data that is expected.
//  @param[in] i_chipletId data from RS4
int verifyHeader(enum CME_CORE_MASKS i_core,
                 enum CME_SCOM_CONTROLS i_scom_op,
                 const uint64_t i_header,
                 const uint8_t i_chipletId)
{
    int l_rc = 0;
    uint64_t l_readHeader = 0;

    do
    {
        uint32_t l_chiplet = i_chipletId << 24;

        uint32_t l_scomAddress = 0x0003E000; // 64-bit scan
        // Add the chiplet ID in the Scom Address
        l_scomAddress |= l_chiplet;

        CME_GETSCOM(l_scomAddress, i_core, i_scom_op, l_readHeader);

        if(l_readHeader != i_header)
        {
            PK_TRACE("Check word mismatch %016llx", l_readHeader);
            pk_halt();
            break;
        }
    }
    while(0);

    return l_rc;

}

/// @brief Function to decompress the RS4 and apply the Ring data
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
/// @param[in] i_rs4 The RS4 compressed string
int rs4DecompressionSvc(
    enum CME_CORE_MASKS i_core,
    enum CME_SCOM_CONTROLS i_scom_op,
    const uint8_t* i_rs4)
{
    CompressedScanData_t* l_rs4Header = (CompressedScanData_t*) i_rs4;
    const uint8_t* l_rs4Str = (i_rs4 + sizeof(CompressedScanData_t));

    enum opType_t l_opType = ROTATE;
    uint64_t l_nibbleIndx = 0;
    uint64_t l_bitsDecoded = 0;
    uint64_t l_scanRegion = rs4_revle64(l_rs4Header->iv_scanSelect);
    uint8_t l_chipletId = l_rs4Header->iv_chipletId;

    do
    {
        if (l_rs4Header->iv_length == 0)
        {
            break;
        }

        // Set up the scan region for the ring.
        setupScanRegion(i_core, l_scanRegion, l_chipletId);

        // Write a 64 bit value for header.
        const uint64_t l_header = 0xa5a5a5a5a5a5a5a5;
        writeHeader(i_core, l_header, l_chipletId);

        //if the ring length is not 8bit aligned, then we need to skip the
        //padding bits
        uint8_t l_padding_bits = 0;

        if (l_rs4Header->iv_length % 4)
        {
            l_padding_bits = (4 - (l_rs4Header->iv_length % 4));
        }

        uint8_t l_skip_64bits = 1;

        // Decompress the RS4 string and scan
        do
        {
            if (l_opType == ROTATE)
            {
                // Determine the no.of ROTATE operations encoded in stop-code
                uint64_t l_count = 0;
                l_nibbleIndx += stop_decode(l_rs4Str, l_nibbleIndx, &l_count);

                // Determine the no.of rotates in bits
                uint64_t l_bitRotates = (4 * l_count);

                //Need to skip 64bits , because we have already written header
                //data.
                if (l_skip_64bits)
                {
                    l_bitRotates -= SIXTYFOUR_BIT_HEADER;
                    l_skip_64bits = 0;
                }

                l_bitsDecoded += l_bitRotates;

                // Do the ROTATE operation
                if (l_bitRotates != 0)
                {
                    queuedScan(i_core,
                               i_scom_op,
                               l_chipletId,
                               ROTATE,
                               l_bitRotates, 0);
                }

                l_opType = SCAN;
            }
            else if(l_opType == SCAN)
            {
                uint8_t l_scanCount = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                l_nibbleIndx++;

                if (l_scanCount == 0)
                {
                    break;
                }

                if (l_scanCount != 0xF)
                {
                    l_bitsDecoded += (4 * l_scanCount);
                }

                if(0xF == l_scanCount) // We are parsing RS4 for override rings
                {
                    uint8_t l_careMask = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;
                    uint8_t l_spyData = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;

                    uint8_t l_mask = 0x08;
                    uint8_t i;

                    for(i = 0; i < 4; i++)
                    {
                        if((l_careMask & (l_mask >> i)))
                        {
                            uint64_t l_scomData = 0x0;

                            if((l_spyData & (l_mask >> i)))
                            {
                                l_scomData = 0xFFFFFFFFFFFFFFFF;
                            }

                            l_bitsDecoded += 1;

                            queuedScan(i_core,
                                       i_scom_op,
                                       l_chipletId,
                                       SCAN,
                                       1, // Insert 1 bit
                                       l_scomData);
                        }
                        else
                        {
                            l_bitsDecoded += 1;

                            queuedScan(i_core,
                                       i_scom_op,
                                       l_chipletId,
                                       ROTATE,
                                       1, 0);
                        }
                    } // end of looper for bit-parsing a non-zero nibble
                }
                else // We are parsing RS4 for base rings
                {
                    // Parse the non-zero nibbles of the RS4 string and
                    // scan them into the ring
                    uint64_t l_scomData = rs4_get_verbatim(l_rs4Str,
                                                           l_nibbleIndx,
                                                           l_scanCount);
                    l_nibbleIndx += l_scanCount;

                    queuedScan(i_core,
                               i_scom_op,
                               l_chipletId,
                               SCAN,
                               (l_scanCount * 4),
                               l_scomData);
                }

                l_opType = ROTATE;
            } // end of - if(l_opType == SCAN)
        }
        while(1);

        // Handle the string termination
        uint8_t l_nibble = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
        l_nibbleIndx++;

        if (l_nibble != 0)
        {
            // Parse the non-zero nibbles of the RS4 string and
            // scan them into the ring
            if((l_bitsDecoded + l_nibble) > l_rs4Header->iv_length)
            {
                break;
            }
            else
            {
                l_bitsDecoded += l_nibble;
                uint64_t l_scomData = rs4_get_verbatim(l_rs4Str,
                                                       l_nibbleIndx,
                                                       1); // return 1 nibble

                queuedScan(i_core,
                           i_scom_op,
                           l_chipletId,
                           SCAN,
                           (4 - l_padding_bits) , // scan 4 bits
                           l_scomData);
            }
        } // end of if(l_nibble != 0)

        // Verify header
        verifyHeader(i_core, i_scom_op, l_header, l_chipletId);

        // Clean scan region and type data
        cleanScanRegionandTypeData(i_core, l_chipletId);
    }
    while(0);

    return 1;
}


/// @brief Function to clean up the scan region and type
/// @param[in] i_core - core select value
//  @param[in] chipletId data from RS4
void cleanScanRegionandTypeData(
    enum CME_CORE_MASKS i_core,
    const uint8_t i_chipletId)
{
    uint32_t l_chiplet = i_chipletId << 24;

    do
    {
        //////////////////////
        //cleanup opcg_reg0
        //////////////////////
        uint32_t l_scomAddress = 0x00030005;

        // Add the chiplet ID in the Scom Address
        l_scomAddress |= l_chiplet;

        CME_PUTSCOM(l_scomAddress, i_core, 0);

    }
    while(0);

}
