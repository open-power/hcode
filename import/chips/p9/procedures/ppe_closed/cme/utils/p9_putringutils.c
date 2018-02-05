/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/utils/p9_putringutils.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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
inline uint32_t rs4_get_nibble(const uint8_t* i_rs4Str,
                               const uint32_t i_nibbleIndx)__attribute__((always_inline));
inline uint32_t rs4_get_nibble(const uint8_t* i_rs4Str, const uint32_t i_nibbleIndx)
{
    uint32_t l_byte;

    l_byte = i_rs4Str[i_nibbleIndx >> 1];

    return (i_nibbleIndx % 2 ? l_byte & 0x0f : l_byte >> 4);
}


///
/// @brief Decode an unsigned integer from a 4-bit octal stop code.
/// @param[in] i_rs4Str The RS4 scan string
/// @param[in] i_nibbleIndx Index into i_rs4Str that has the stop-code
/// @param[out] o_numRotate No.of rotates decoded from the stop-code.
/// @return The number of nibbles decoded.
///
inline uint32_t stop_decode(const uint8_t* i_rs4Str,
                            uint32_t i_nibbleIndx,
                            uint32_t* o_numRotate)__attribute__((always_inline));
inline uint32_t stop_decode(const uint8_t* i_rs4Str,
                            uint32_t i_nibbleIndx,
                            uint32_t* o_numRotate)
{
    uint32_t l_numNibblesParsed = 0; // No.of nibbles that make up the stop-code
    uint32_t l_numNonZeroNibbles = 0;
    uint32_t l_nibble;
    uint32_t l_byte;

    do
    {
        l_byte = i_rs4Str[i_nibbleIndx >> 1];

        l_nibble = (i_nibbleIndx % 2 ? l_byte & 0x0f : l_byte >> 4);

        l_numNonZeroNibbles = (l_numNonZeroNibbles << 3) + (l_nibble & 0x07);

        i_nibbleIndx++;
        l_numNibblesParsed++;
    }
    while((l_nibble & 0x08) == 0);

    *o_numRotate = l_numNonZeroNibbles;

    return l_numNibblesParsed;
}


///
/// @brief Generate scan region and type value
/// @param[in] i_ringAddress ring address
/// @return 64 bit value
///
inline uint64_t decodeScanRegionData(const uint32_t i_ringAddress)__attribute__((always_inline));
inline uint64_t decodeScanRegionData(const uint32_t i_ringAddress)
{
    uint32_t l_scan_data = (i_ringAddress & 0x0000FFF0) << 13;

    uint64_t l_value = l_scan_data; // region value

    //Decoding scan type
    l_scan_data = 0x00008000 >> (i_ringAddress & 0x0000000F);

    // This is special case if encoded type is 0xF
    if ( (i_ringAddress & 0x0000000F) == 0xF)
    {
        l_scan_data = 0x00008000 | (l_scan_data << 12);
    }

    l_value = (l_value << 32) | l_scan_data;

    return l_value;
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
inline uint64_t rs4_get_verbatim_word(const uint8_t* i_rs4Str,
                                      const uint32_t i_nibbleIndx,
                                      uint32_t i_nibbleCount)__attribute__((always_inline));
inline uint64_t rs4_get_verbatim_word(const uint8_t* i_rs4Str,
                                      const uint32_t i_nibbleIndx,
                                      uint32_t i_nibbleCount)
{
    uint64_t l_doubleWord = 0;

    const uint32_t* l_data =  NULL;
    uint32_t l_offset  = 0;
    uint32_t l_shift = 32;
    uint32_t l_cnt;
    uint32_t l_mod;
    uint32_t l_index = i_nibbleIndx;
    uint64_t l_tempWord;
    uint32_t l_64shift = 32;
    uint32_t l_rightShift = 0;

    while (i_nibbleCount)
    {
        l_cnt =  l_index >> 1;
        l_mod = l_cnt % 4;
        l_offset = l_cnt - l_mod;
        l_data = (uint32_t*)((uint8_t*)i_rs4Str + l_offset);
        l_shift = (4 - l_mod) << 3;

        l_mod = l_index % 2;

        if (l_mod)
        {
            l_shift = l_shift - 4;
        }

        l_offset = *l_data << (32 - l_shift);
        l_tempWord = l_offset;

        if (l_64shift)
        {
            l_tempWord = l_tempWord <<  l_64shift;
        }
        else
        {
            l_tempWord = l_tempWord >> (l_rightShift << 2);
        }


        l_doubleWord |= l_tempWord;

        uint32_t x = 8 - (l_index % 8);

        if (x < i_nibbleCount)
        {
            l_index += x;
            l_64shift = 64 - (32 +  (x << 2));

            l_rightShift = i_nibbleIndx % 8;

            if (!l_64shift && l_rightShift)
            {
                l_rightShift = 8 - l_rightShift;
            }

            i_nibbleCount -= x;
        }
        else
        {
            i_nibbleCount = 0;
        }
    }

    return l_doubleWord;
}


//// @brief Function to apply the rotate operation
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
/// @param[in] i_opVal Number of bits for the operation
/// @param[in] i_scanData This value has to be scanned when i_operation is SCAN

/// @brief Byte-reverse a 32-bit integer
///// @param[in] i_x 32-bit word that need to be byte reversed
///// @return Byte reversed 32-bit word
inline uint32_t rs4_revle32(const uint32_t i_x)__attribute__((always_inline));
inline uint32_t rs4_revle32(const uint32_t i_x)
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

/// @brief Function to decompress the RS4 and apply the Ring data
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
/// @param[in] i_rs4 The RS4 compressed string
/// @param[in] i_applyOverride- 0 (no override) 1 (override mode)
/// @param[in] i_rs4Type type of RS4 package
int rs4DecompressionSvc(
    enum CME_CORE_MASKS i_core,
    enum CME_SCOM_CONTROLS i_scom_op,
    uint8_t* i_rs4,
    uint32_t i_applyOverride,
    enum rs4Type_t i_rs4Type )
{
    enum opType_t l_opType = ROTATE;
    uint32_t l_nibbleIndx = 0;
    uint32_t l_bitsDecoded = 0;
    uint32_t l_mask = 0x08;
    uint64_t l_scomData;
    uint32_t l_careMask;
    uint32_t i, x;
    uint32_t l_data;
    uint32_t l_spyData;
    const uint32_t l_maxRotate = 4095;

    uint8_t* l_rs4Str = 0;
    CompressedScanData* l_rs4Header = NULL;


    do
    {
        //Note: It is a ring with CMSK. This ring needs to be scanned differently
        //Below are the steps :
        //(1). To Common Ring Base, add 2B TOR offset. This will take us to
        //     base of the ring container. Call it A
        //(2). Add to A size of Rs4v3 Header. This will take us to end of
        //     RS4V3 Header meant for the ring. Call it B.
        //(3). At B, begins RSv3 header meant for CMSK ring. Read it's iv_size field.
        //     Call it C.
        //(4). By construction, we know RS4 for ring will be at address
        //     B + C, whereas CMSK RS4 is at B + size of CMSK Ring Header.
        //
        //-------------------------------------------  A
        //          Stumped Ring RS4v3 Header
        //-------------------------------------------  B  --
        //          CMSK RS4v3 Header                     |
        //-------------------------------------------     | --> C
        //          CMSK Ring Payload                     |
        //-------------------------------------------  D  --
        //          Stumped Ring Payload
        //-------------------------------------------

        if( REGULAR == i_rs4Type )
        {
            l_rs4Header = (CompressedScanData*) i_rs4;
            l_rs4Str = i_rs4 + sizeof(CompressedScanData);  //Calculating location 'B'
        }
        else if( CMSK == i_rs4Type )
        {
            PK_TRACE_DBG("CMSK start");
            l_rs4Header = (CompressedScanData*)(i_rs4 + sizeof( CompressedScanData ));
            l_rs4Str = i_rs4 + ( sizeof( CompressedScanData) << 1);
        }
        else    //Stumped Ring
        {
            l_rs4Header = (CompressedScanData*) i_rs4;
            CompressedScanData* l_cmskHeader = ( CompressedScanData*) ( i_rs4 + sizeof(CompressedScanData) );
            l_rs4Str = i_rs4 + sizeof(CompressedScanData) + l_cmskHeader->iv_size;   //Calculating location 'D'
        }

        // Get scan region and type value
        l_scomData = decodeScanRegionData(rs4_revle32(l_rs4Header->iv_scanAddr));

        if( STUMPED_RING == i_rs4Type )
        {
            //After scanning a CMSK Ring, when we scan RS4 accompanying it,
            //MSB of the scan region must be set. This ensures that mask bits
            //are init to 0 and are not part of the scan chain.
            uint64_t temp = 0x01;
            temp = temp << 63;
            l_scomData |= temp;
        }

        // Set up the scan region for the ring.
        CME_PUTSCOM(0x00030005, i_core, l_scomData);

        // Write a 64 bit value for header.
        CME_PUTSCOM(0x0003E000, i_core, 0xa5a5a5a5a5a5a5a5);

        // Decompress the RS4 string and scan
        do
        {
            if (l_opType == ROTATE)
            {
                // Determine the no.of ROTATE operations encoded in stop-code
                uint32_t l_bitRotates;
                l_nibbleIndx += stop_decode(l_rs4Str, l_nibbleIndx, &l_bitRotates);

                // Determine the no.of rotates in bits
                l_bitRotates =  l_bitRotates << 2;

                l_bitsDecoded += l_bitRotates;

                // Do the ROTATE operation
                if (l_bitRotates > l_maxRotate)
                {

// Prevent PPE compiler from using a software divide
// (l_bitRotates/l_maxRotate) to pre-calculate number of loop iterations
// this saves 128 Bytes and takes less time than a software divide
// (hide behind the getscoms)
                    uint32_t primenum = 32749; //largest 15-bit prime
                    uint32_t fakenumber = primenum;

// fakenumber can never be zero
                    for (; (l_bitRotates > l_maxRotate) || (fakenumber == 0); )
                    {
                        l_bitRotates -= l_maxRotate;
                        CME_GETSCOM_OP(0x00038000 | l_maxRotate, i_core, i_scom_op, l_scomData);

                        if ((fakenumber -= 7) < 15)
                        {
                            fakenumber = primenum;    // ensure always >0
                        }
                    }
                }

                CME_GETSCOM_OP(0x00038000 | l_bitRotates, i_core, i_scom_op, l_scomData);

                l_opType = SCAN;
            }
            else if(l_opType == SCAN)
            {
                uint32_t l_scanCount = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                l_nibbleIndx++;

                if (l_scanCount == 0)
                {
                    break;
                }

                if ((!i_applyOverride) && l_scanCount != 0xF)
                {
                    uint32_t l_count = l_scanCount << 2;;
                    l_bitsDecoded += l_count;

                    if (l_scanCount >= 2)
                    {
                        l_scomData = rs4_get_verbatim_word(l_rs4Str,
                                                           l_nibbleIndx,
                                                           l_scanCount);
                        CME_PUTSCOM(0x0003E000 |  l_count, i_core, l_scomData);
                    }
                    else
                    {
                        // Parse the non-zero nibbles of the RS4 string and
                        // scan them into the ring
                        l_spyData = l_rs4Str[l_nibbleIndx >> 1];
                        l_scomData = l_nibbleIndx % 2 ? l_spyData & 0x0f : l_spyData >> 4;

                        l_scomData <<= 28;
                        l_scomData = l_scomData << 32;

                        CME_PUTSCOM(0x0003E000 |  l_count, i_core, l_scomData);
                    }

                    l_nibbleIndx += l_scanCount;
                }
                else  // We are parsing RS4 for override rings
                {
                    if(0xF == l_scanCount) // We are parsing RS4 for override rings
                    {
                        i_applyOverride = 1;
                        l_careMask =
                            rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                        l_nibbleIndx++;
                        l_spyData =
                            rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                        l_nibbleIndx++;

                        for(i = 0; i < 4; i++)
                        {
                            l_bitsDecoded += 1;
                            l_scomData = 0x0;
                            l_data = l_mask >> i;

                            if(l_careMask & l_data)
                            {
                                l_scomData = l_spyData & l_data ?
                                             0xFFFFFFFFFFFFFFFF : 0;
                                CME_PUTSCOM(0x0003E000 | 0x1, i_core, l_scomData);
                            }
                            else
                            {
                                CME_GETSCOM_OP(0x00038000 | 0x00000001, i_core, i_scom_op, l_scomData);
                            }
                        } // end of looper for bit-parsing a non-zero nibble
                    }
                    else // We are parsing RS4 for base rings
                    {
                        for (x = 0; x < l_scanCount; x++)
                        {
                            // Parse the non-zero nibbles of the RS4 string and
                            // scan them into the ring
                            l_data =
                                rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                            l_nibbleIndx += 1;

                            for(i = 0; i < 4; i++)
                            {
                                l_scomData = 0x0;
                                l_bitsDecoded += 1;

                                if((l_data & (l_mask >> i)))
                                {
                                    l_scomData = 0xFFFFFFFFFFFFFFFF;
                                    CME_PUTSCOM(0x0003E000 | 0x1, i_core, l_scomData);
                                }
                                else
                                {
                                    CME_GETSCOM_OP(0x00038000 | 0x1, i_core, i_scom_op, l_scomData);
                                }
                            }//end of for loop

                        } // end of looper for bit-parsing a non-zero nibble
                    }
                }

                l_opType = ROTATE;
            } // end of - if(l_opType == SCAN)
        }
        while(1);

        // Handle the string termination
        uint32_t l_nibble = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
        l_nibbleIndx++;

        if (l_nibble != 0)
        {
            if (!i_applyOverride)
            {
                l_bitsDecoded += l_nibble;
                l_spyData = l_rs4Str[l_nibbleIndx >> 1];
                l_scomData = l_nibbleIndx % 2 ? l_spyData & 0x0f : l_spyData >> 4;

                l_scomData <<= 28;
                l_scomData = l_scomData << 32;

                CME_PUTSCOM(0x0003E000 | (l_nibble & 0x3), i_core, l_scomData);
            }
            else
            {
                if(0x8 & l_nibble) // We are parsing RS4 for override rings
                {
                    l_careMask = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;
                    l_spyData = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;

                    for(i = 0; i < 4; i++)
                    {
                        l_bitsDecoded += 1;
                        l_scomData = 0x0;
                        l_data  = l_mask >> i;

                        if(l_careMask & l_data)
                        {

                            l_scomData = l_spyData & l_data ?
                                         0xFFFFFFFFFFFFFFFF : 0;
                            CME_PUTSCOM(0x0003E000 | 0x1, i_core, l_scomData);
                        }
                        else
                        {
                            CME_GETSCOM_OP(0x00038000 | 0x1, i_core, i_scom_op, l_scomData);
                        }

                    } // end of looper for bit-parsing a non-zero nibble
                }
                else // We are parsing RS4 for base rings
                {
                    // scan them into the ring
                    l_data = rs4_get_nibble(l_rs4Str, l_nibbleIndx);

                    l_nibbleIndx += 1;

                    for(i = 0; i < l_nibble; i++)
                    {
                        l_scomData = 0x0;
                        l_bitsDecoded += 1;

                        if((l_data & (l_mask >> i)))
                        {
                            l_scomData = 0xFFFFFFFFFFFFFFFF;
                            CME_PUTSCOM(0x0003E000 | 0x1, i_core, l_scomData);
                        }
                        else
                        {
                            CME_GETSCOM_OP(0x00038000 | 0x1, i_core, i_scom_op, l_scomData);
                        }
                    } //end of for
                }
            }
        } // end of if(l_nibble != 0)

        if( CMSK == i_rs4Type )
        {
            PK_TRACE_DBG("CMSK END");
        }

        // Verify header
        enum CME_SCOM_CONTROLS l_scomOp = i_scom_op;
        uint64_t l_readHeader;

        // when both cores are enabled.. scom op cant be queued
        if (i_scom_op == CME_SCOM_QUEUED)
        {
            l_scomOp = CME_SCOM_NOP;
        }

        CME_GETSCOM_OP(0x0003E000, i_core, l_scomOp, l_readHeader);

        if(l_readHeader != 0xa5a5a5a5a5a5a5a5)
        {
            PK_TRACE_INF("l_readHeader %08X %08X", l_readHeader >> 32, l_readHeader);
            //In EDR: ring Id (8b),core value(4b) and number of latches that went thru rotate
            //and scan.
            // In SPRG0: First 32 bits of header data read from the hw
            uint32_t l_ringId = l_rs4Header->iv_ringId;
            uint32_t debug_data_0 = (l_ringId << 24) | ((uint32_t)i_core << 20) | (l_bitsDecoded & 0x000FFFFF);
            uint32_t debug_data_1 = (uint32_t)(l_readHeader >> 32);
            asm volatile ("mtedr %0" : : "r" (debug_data_0) : "memory");
            asm volatile ("mtsprg0 %0" : : "r" (debug_data_1) : "memory");
            PK_PANIC(CME_STOP_PUTRING_HEADER_ERROR);
        }

        // Clean scan region and type data
        CME_PUTSCOM(0x00030005, i_core, 0);
    }
    while(0);

    return 0;
}
