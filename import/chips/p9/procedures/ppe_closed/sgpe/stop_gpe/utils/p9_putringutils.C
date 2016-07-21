/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/utils/p9_putringutils.C $ */
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

/// @file p9_putRingUtils.C
/// @brief Provide the service of decompressing the rs4 encoded string.
///
// *HWP HWP Owner:
// *HWP FW Owner:
// *HWP Team: PM
// *HWP Level: 2
// *HWP Consumed by:SGPE

#include "p9_putringutils.H"

namespace RS4
{
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

    for(uint8_t i = 1; i <= i_nibbleCount; i++, l_index++)
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
uint64_t stop_decode(const uint8_t* i_rs4Str,
                     uint32_t i_nibbleIndx,
                     uint64_t& o_numRotate)
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

    o_numRotate = l_numNonZeroNibbles;

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
}; //end of namespace

void getRingProperties(const RingID i_ringId,
                       uint32_t* o_torOffset,
                       RINGTYPE* o_ringType)
{
    // Determine the TOR ID
    *o_torOffset =
        (INSTANCE_RING_MASK & (RING_PROPERTIES[i_ringId].iv_torOffSet));

    *o_ringType = COMMON_RING;

    // Determine Ring Type
    if(INSTANCE_RING_MARK & (RING_PROPERTIES[i_ringId].iv_torOffSet))
    {
        *o_ringType = INSTANCE_RING;
    }
}
/// @brief Function to apply the Ring data using the standard-scan method
/// @param[in] i_target Chiplet Target of Scan
//  @param[in] i_chipletId data from RS4
/// @param[in] i_operation Type of operation to perform - ROTATE/SCAN
/// @param[in] i_opVal Number of bits for the operation
/// @param[in] i_scanData This value has to be scanned when i_operation is SCAN
/// @return FAPI2_RC_SUCCESS if success, else error code.
fapi2::ReturnCode standardScan(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const uint32_t i_chipletId,
    enum opType_t i_operation,
    uint64_t i_opVal,
    uint64_t i_scanData)
{
    FAPI_INF(">> standardScan");

    fapi2::ReturnCode l_rc = fapi2::FAPI2_RC_SUCCESS;

    do
    {
        // **************
        // Scan or Rotate
        // **************
        if(ROTATE == i_operation)
        {
            // Setup Scom Address for rotate operation
            uint32_t l_scomAddress = SCAN_REG_0x00039000;

            // Add the chiplet ID in the Scom Address
            l_scomAddress |= i_chipletId;

            const uint64_t l_maxRotates = MAX_ROTATE_VALUE;
            uint64_t l_rotateCount = i_opVal;
            uint32_t l_numRotateScoms = 1; // 1 - We need to do atleast one scom

            if(i_opVal > l_maxRotates)
            {
                l_numRotateScoms = (i_opVal / l_maxRotates);
                l_rotateCount = l_maxRotates;
            }


            // Scom Data needs to have the no.of rotates in the bits 12-31
            l_rotateCount <<= 32;

            for(uint32_t i = 0; i < (l_numRotateScoms + 1); i++)
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

                FAPI_INF("l_rotateCount %u", l_rotateCount);
                fapi2::buffer<uint64_t> l_scomData(l_rotateCount);

                fapi2::putScom(i_target, l_scomAddress, l_scomData);

                // Check OPCG_DONE status
                l_scomAddress = SCAN_REG_0x00000100;

                // Add the chiplet ID in the Scom Address
                l_scomAddress |= i_chipletId;

                // @TODO: Value 200 is a random number to start with.
                uint8_t l_attempts = 200;

                while(l_attempts > 0)
                {
                    l_attempts--;

                    fapi2::buffer<uint64_t> l_opcgStatus;

                    fapi2::getScom(i_target, l_scomAddress, l_opcgStatus);

                    if(l_opcgStatus.getBit<8>())
                    {
                        FAPI_INF("OPCG_DONE set");
                        break;
                    }

                    // @TODO: 1 micro second is a number that works now.
                    //        Need to derive the real delay number.
                    fapi2::delay(1000, 1000000);

                }

                if(l_attempts == 0 )
                {
                    l_rc = fapi2::FAPI2_RC_PLAT_ERR_SEE_DATA;
                    FAPI_ERR("Max attempts exceeded checking OPCG_DONE");
                    break;
                }
            }// end of for loop
        }
        else if(SCAN == i_operation)
        {
            // Setting Scom Address for a 64-bit scan
            uint32_t l_scomAddress = SCAN_REG_0x0003E000;

            // Add the chiplet ID in the Scom Address
            l_scomAddress |= i_chipletId;

            uint32_t l_scanCount = i_opVal;

            fapi2::buffer<uint64_t> l_scomData(i_scanData);

            // Set the scan count to the actual value
            l_scomAddress |= l_scanCount;

            fapi2::putScom(i_target, l_scomAddress, l_scomData);

        } // end of if(SCAN == i_operation)
    }
    while(0);

    FAPI_INF("<< standardScan");
    return l_rc;
}


/// @brief Function to reader the header data from the ring and verify it.
/// @param[in] i_target Chiplet Target of Scan
/// @param[in] i_header The header data that is expected.
//  @param[in] i_chipletId data from RS4
/// @return FAPI2_RC_SUCCESS if success, else error code.
fapi2::ReturnCode verifyHeader(const fapi2::Target<fapi2::TARGET_TYPE_ALL>&
                               i_target,
                               const uint64_t i_header,
                               const uint32_t i_chipletId)
{
    fapi2::ReturnCode l_rc = fapi2::FAPI2_RC_SUCCESS;

    do
    {
        uint32_t l_scomAddress = SCAN_REG_0x0003E000; // 64-bit scan
        // Add the chiplet ID in the Scom Address
        l_scomAddress |= i_chipletId;

        fapi2::buffer<uint64_t> l_readHeader;

        fapi2::getScom(i_target, l_scomAddress, l_readHeader);

        FAPI_INF("Got header - %016x", uint64_t(l_readHeader));

        if(l_readHeader != i_header)
        {
            FAPI_ERR("Read header(%016x) data incorrect", uint64_t(l_readHeader));
            l_rc = fapi2::FAPI2_RC_PLAT_ERR_RING_HEADER_CHECK;
            pk_halt();
            break;
            //PK_PANIC(0xFABD);
        }
        else
        {
            PK_TRACE("CHECK word matched");
        }
    }
    while(0);

    return l_rc;

}

/// @brief Function to decompress the RS4 and apply the Ring data
/// @param[in] i_target Chiplet Target of Scan
/// @param[in] i_rs4 The RS4 compressed string
/// @param[in] i_scanType Type of Scan
/// @return FAPI2_RC_SUCCESS if success, else error code.
fapi2::ReturnCode rs4DecompressionSvc(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const uint8_t* i_rs4)
{
    FAPI_INF(">> rs4DecompressionSvc");
    CompressedScanData* l_rs4Header = (CompressedScanData*) i_rs4;
    const uint8_t* l_rs4Str = (i_rs4 + sizeof(CompressedScanData));

    opType_t l_opType = ROTATE;
    uint64_t l_nibbleIndx = 0;
    uint64_t l_bitsDecoded = 0;
    bool l_decompressionDone = false;
    uint64_t l_scanRegion = rs4_revle64(l_rs4Header->iv_scanSelect);
    fapi2::ReturnCode l_rc;
    uint32_t l_chiplet =  (l_rs4Header->iv_chipletId) << 24;
    uint32_t l_chipletID = i_target.getChipletNumber();

    if ( l_chipletID )
    {
        l_chiplet = (l_chipletID << 24);
    }


    do
    {
        if (fapi2::TARGET_TYPE_EX & i_target.getTargetType())
        {
            // this gives position of ex (0 or 1)
            uint32_t l_ex_number = i_target.getTargetNumber();

            // We are in odd EX and it's placed in bottom half of the EQ
            if (l_ex_number % 2)
            {
                uint32_t l_type = (uint32_t)l_scanRegion;
                // need to shift one bit.
                uint32_t l_ex_region = l_scanRegion >> 32;
                l_ex_region = l_ex_region >> 1;
                l_scanRegion = 0;

                l_scanRegion = l_ex_region;
                l_scanRegion = l_scanRegion << 32;
                l_scanRegion = l_scanRegion | l_type;

            }

            // for even ex, the data from RS4 hold good.
        }

        // Set up the scan region for the ring.
        setupScanRegion(i_target, l_scanRegion, l_chiplet);


        // Write a 64 bit value for header.
        const uint64_t l_header = CHECK_WORD_DATA;

        writeHeader(i_target, l_header, l_chiplet);

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
                l_nibbleIndx += stop_decode(l_rs4Str, l_nibbleIndx, l_count);

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

                if(l_bitsDecoded > l_rs4Header->iv_length)
                {
                    FAPI_ERR("Rotate decompression done."
                             "l_bitsDecoded = %d, length = %d",
                             l_bitsDecoded, l_rs4Header->iv_length);
                    l_decompressionDone = true;
                    l_rc = fapi2::FAPI2_RC_PLAT_RING_DECODE_LENGTH_EXCEEDED;
                    break;
                }

                // Do the ROTATE operation
                if (l_bitRotates != 0)
                {
                    l_rc = standardScan(i_target,
                                        l_chiplet,
                                        ROTATE,
                                        l_bitRotates,
                                        0);

                    if(l_rc != fapi2::FAPI2_RC_SUCCESS)
                    {
                        break;
                    }
                }

                l_opType = SCAN;
            }
            else if(l_opType == SCAN)
            {
                uint8_t l_scanCount = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                l_nibbleIndx++;

                if (l_scanCount == 0)
                {
                    FAPI_INF("SCAN COUNT %u", l_scanCount);
                    break;
                }

                if (l_scanCount != 0xF)
                {
                    l_bitsDecoded += (4 * l_scanCount);
                }

                if(l_bitsDecoded > l_rs4Header->iv_length)
                {
                    FAPI_ERR("Scan decompression done."
                             "l_bitsDecoded = %d, length = %d",
                             l_bitsDecoded, l_rs4Header->iv_length);
                    l_decompressionDone = true;
                    l_rc = fapi2::FAPI2_RC_PLAT_RING_DECODE_LENGTH_EXCEEDED;
                    break;
                }

                if(0xF == l_scanCount) // We are parsing RS4 for override rings
                {
                    uint8_t l_careMask = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;
                    uint8_t l_spyData = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;

                    uint8_t l_mask = 0x08;

                    for(uint8_t i = 0; i < 4; i++)
                    {
                        if((l_careMask & (l_mask >> i)))
                        {
                            uint64_t l_scomData = 0x0;

                            if((l_spyData & (l_mask >> i)))
                            {
                                l_scomData = 0xFFFFFFFFFFFFFFFF;
                            }

                            l_bitsDecoded += 1;

                            l_rc = standardScan(i_target,
                                                l_chiplet,
                                                SCAN,
                                                1, // Insert 1 bit
                                                l_scomData);

                            if(l_rc != fapi2::FAPI2_RC_SUCCESS)
                            {
                                break;
                            }
                        }
                        else
                        {
                            l_bitsDecoded += 1;

                            l_rc = standardScan(i_target,
                                                l_chiplet,
                                                ROTATE,
                                                1, 0);

                            if(l_rc != fapi2::FAPI2_RC_SUCCESS)
                            {
                                break;
                            }


                        }
                    } // end of looper for bit-parsing a non-zero nibble

                    if(l_rc != fapi2::FAPI2_RC_SUCCESS)
                    {
                        break;
                    }
                }
                else // We are parsing RS4 for base rings
                {
                    // Parse the non-zero nibbles of the RS4 string and
                    // scan them into the ring
                    uint64_t l_scomData = rs4_get_verbatim(l_rs4Str,
                                                           l_nibbleIndx,
                                                           l_scanCount);
                    l_nibbleIndx += l_scanCount;

                    FAPI_INF ("VERBATIm l_nibbleIndx %u l_scanCount %u "
                              "l_bitsDecoded %u", l_nibbleIndx, l_scanCount, l_bitsDecoded);

                    l_rc = standardScan(i_target,
                                        l_chiplet,
                                        SCAN,
                                        (l_scanCount * 4),
                                        l_scomData);

                    if(l_rc != fapi2::FAPI2_RC_SUCCESS)
                    {
                        break;
                    }
                }

                l_opType = ROTATE;
            } // end of - if(l_opType == SCAN)
        }
        while(1);

        if((l_rc != fapi2::FAPI2_RC_SUCCESS) || (true == l_decompressionDone))
        {
            break;
        }

        // Handle the string termination
        uint8_t l_nibble = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
        l_nibbleIndx++;

        if (l_nibble != 0)
        {
            // Parse the non-zero nibbles of the RS4 string and
            // scan them into the ring
            if((l_bitsDecoded + l_nibble) > l_rs4Header->iv_length)
            {
                FAPI_ERR("Decompression Done."
                         "l_bitsDecoded = %d, l_nibble= %d, length = %d",
                         l_bitsDecoded, l_nibble, l_rs4Header->iv_length);
                l_rc = fapi2::FAPI2_RC_PLAT_RING_DECODE_LENGTH_EXCEEDED;
                break;
            }
            else
            {
                l_bitsDecoded += l_nibble;
                uint64_t l_scomData = rs4_get_verbatim(l_rs4Str,
                                                       l_nibbleIndx,
                                                       1); // return 1 nibble

                FAPI_INF ("l_nibbleIndx %u l_scomData %llu l_bitsDecoded %u",
                          l_nibbleIndx, l_scomData, l_bitsDecoded);

                l_rc = standardScan(i_target,
                                    l_chiplet,
                                    SCAN,
                                    (4 - l_padding_bits) , // scan 4 bits
                                    l_scomData);
            }
        } // end of if(l_nibble != 0)

        // Verify header
        l_rc = verifyHeader(i_target, l_header, l_chiplet);

        if(l_rc)
        {
            break;
        }

        // Clean scan region and type data
        cleanScanRegionandTypeData(i_target, l_chiplet);

    }
    while(0);

    FAPI_INF("<< rs4DecompressionSvc");
    return l_rc;
}
