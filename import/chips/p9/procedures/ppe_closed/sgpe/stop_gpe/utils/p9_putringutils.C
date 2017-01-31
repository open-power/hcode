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
#include "p9_sgpe_stop.h"
#include "p9_scan_compression.H"

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
inline uint32_t rs4_get_nibble(const uint8_t* i_rs4Str,
                               const uint32_t i_nibbleIndx)__attribute__((always_inline));
inline uint32_t rs4_get_nibble(const uint8_t* i_rs4Str, const uint32_t i_nibbleIndx)
{
    uint32_t l_byte;

    l_byte = i_rs4Str[i_nibbleIndx >> 1];

    return (i_nibbleIndx % 2 ? l_byte & 0x0f : l_byte >> 4);
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

/// @brief Byte-reverse a 32-bit integer
/// @param[in] i_x 32-bit word that need to be byte reversed
/// @return Byte reversed 32-bit word
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
}; //end of namespace

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

/// @brief Function to apply the Ring data using the standard-scan method
/// @param[in] i_target Chiplet Target of Scan
//  @param[in] i_chipletId data from RS4
/// @param[in] i_operation Type of operation to perform - ROTATE/SCAN
/// @param[in] i_opVal Number of bits for the operation
/// @param[in] i_scanData This value has to be scanned when i_operation is SCAN
/// @return FAPI2_RC_SUCCESS if success, else error code.
inline void sgpeRotate(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const uint32_t i_chipletId,
    uint64_t i_opVal,
    uint64_t i_scanData)__attribute__((always_inline));
inline void sgpeRotate(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const uint32_t i_chipletId,
    uint64_t i_opVal,
    uint64_t i_scanData)

{
    uint32_t l_quadId = (i_chipletId >> 24) & 0x0F;

    do
    {
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

            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10039000, l_quadId), l_rotateCount);

            // RTC 165831: Need to be revisited
            uint64_t  l_scom_data;

            do
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PERV_CPLT_STAT0, l_quadId), l_scom_data);
            }
            while(!(l_scom_data & BIT64(8)));
        }// end of for loop
    }
    while(0);
}

/// @brief Function to set the Scan Region for set pulse mode
/// @param[in] i_target Chiplet Target of Scan
/// @param[in] i_scanRegion Value to be set to select a Scan Region
/// @return FAPI2_RC_SUCCESS if success, else error code.
inline void setupScanRegionForSetPulse(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    uint64_t i_scanRegion,
    const fapi2::RingMode i_ringMode,
    const uint32_t i_chipletId)__attribute__((always_inline));
inline void setupScanRegionForSetPulse(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    uint64_t i_scanRegion,
    const fapi2::RingMode i_ringMode,
    const uint32_t i_chipletId)
{
    uint64_t l_opcgAlign;
    uint32_t l_quadId = (i_chipletId >> 24) & 0x0F;
    // **************************
    // Setup OPCG_ALIGN – SNOP Align=5 and SNOP Wait=7
    // **************************
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10030001, l_quadId), l_opcgAlign);
    //set SNOP Align=8:1 and SNOP Wait=7
    // bits: 4:7   SNOP_ALIGN(0:3) 5: 8:1
    // bits: 20:31 SNOP_WAIT(0:11)
    l_opcgAlign |= BIT64(5);
    l_opcgAlign |= BIT64(7);
    l_opcgAlign |= BIT64(29);
    l_opcgAlign |= BIT64(30);
    l_opcgAlign |= BIT64(31);

    // Do the scom
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030001, l_quadId), l_opcgAlign);

    // **************************
    // Setup Scan-Type and Region
    // **************************
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, l_quadId), i_scanRegion);

    ////////////////////////////
    //prepare clk_region register
    ////////////////////////////
    //First 32 bits tells clock region
    i_scanRegion = i_scanRegion & 0xFFFFFFFF00000000UL;
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030006, l_quadId), i_scanRegion);

    //////////////////////
    //prepare opcg_reg0
    //////////////////////
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030002, l_quadId), 0x0010000000000000);

    // NSL for slow regions
    uint64_t l_opcg_capt1 = 0x0;
    // NSL for fast regions
    uint64_t l_opcg_capt2 = 0x0;

    // setup NSL mode
    if (i_ringMode &  fapi2::RING_MODE_SET_PULSE_NSL)
    {
        // NSL for slow regions
        l_opcg_capt1 = 0x1400000000000000;
        // NSL for fast regions
        l_opcg_capt2 = 0x0400000000000000;

    }
    else   //set pulse all
    {
        // NSL for slow regions
        l_opcg_capt1 = 0x1E00000000000000;
        // NSL for fast regions
        l_opcg_capt2 = 0x0E00000000000000;
    }

    //prepare opcg_reg1
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030003, l_quadId), 0);

    //prepare opcg_reg2
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030003, l_quadId), 0);

    //prepare opcg_capt1
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030010, l_quadId), l_opcg_capt1);

    //prepare opcg_capt2
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030011, l_quadId), l_opcg_capt2);

    //prepare opcg_capt3
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030012, l_quadId), 0);
}
/// @brief Function to decompress the RS4 and apply the Ring data
/// @param[in] i_target Chiplet Target of Scan
/// @param[in] i_rs4 The RS4 compressed string
/// @param[in] i_applyOverride 0 - no override 1- override mode
/// @param[in] i_ringType Common or Instance ring
/// @param[in] i_ringMode Ring operation mode.
/// @return FAPI2_RC_SUCCESS if success, else error code.
fapi2::ReturnCode rs4DecompressionSvc(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const uint8_t* i_rs4,
    bool i_applyOverride,
    RingType_t i_ringType,
    const fapi2::RingMode i_ringMode)
{
    CompressedScanData* l_rs4Header = (CompressedScanData*) i_rs4;
    const uint8_t* l_rs4Str = (i_rs4 + sizeof(CompressedScanData));
    uint64_t l_opcgReg0 = 0;
    uint64_t l_opcgReg1 = 0;
    uint64_t l_opcgReg2 = 0;
    uint64_t l_opcgCapt1 = 0;
    uint64_t l_opcgCapt2 = 0;
    uint64_t l_opcgCapt3 = 0;

    opType_t l_opType = ROTATE;
    uint32_t l_nibbleIndx = 0;
    uint64_t l_bitsDecoded = 0;
    uint32_t l_scanAddr = rs4_revle32(l_rs4Header->iv_scanAddr);
    uint16_t l_ringId = l_rs4Header->iv_ringId;
    uint64_t l_scanRegion = decodeScanRegionData(l_scanAddr);
    fapi2::ReturnCode l_rc;
    uint32_t l_chiplet = (l_scanAddr & 0xFF000000UL);
    uint32_t l_chipletID = i_target.getChipletNumber();
    uint32_t l_mask = 0x08;
    uint64_t l_scomData = 0x0;
    uint64_t l_opcgratio;

    if ( l_chipletID )
    {
        l_chiplet = (l_chipletID << 24);
    }

    uint32_t l_quadId = (l_chiplet >> 24) & 0x0F;

    do
    {
        if (!l_scanRegion)
        {
            PK_TRACE_INF("No valid data in RS4 container so coming out");
            break;
        }

        if ((fapi2::TARGET_TYPE_EX & i_target.getTargetType()) &&
            (i_ringType != INSTANCE_RING))
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

        if ((i_ringMode &  fapi2::RING_MODE_SET_PULSE_NSL) ||
            (i_ringMode &  fapi2::RING_MODE_SET_PULSE_SL) ||
            (i_ringMode &  fapi2::RING_MODE_SET_PULSE_ALL))
        {
            //////////////////////
            //prepare opcg_reg0
            //////////////////////
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10030002, l_quadId), l_opcgReg0);
            //prepare opcg_reg1
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10030003, l_quadId), l_opcgReg1);
            //prepare opcg_reg2
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10030004, l_quadId), l_opcgReg2);
            //prepare opcg_capt1
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10030010, l_quadId), l_opcgCapt1);
            //prepare opcg_capt2
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10030011, l_quadId), l_opcgCapt2);
            //prepare opcg_capt3
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10030012, l_quadId), l_opcgCapt3);

            setupScanRegionForSetPulse(i_target, l_scanRegion, i_ringMode
                                       , l_chiplet);
        }
        else
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, l_quadId), l_scanRegion);
        }


        // Write a 64 bit value for header.
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, l_quadId), 0xa5a5a5a5a5a5a5a5);

        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x10030001, l_quadId), l_scomData);
        l_opcgratio = l_scomData;
        l_scomData = l_scomData & ~BITS64(47, 5);
        l_scomData |= BIT64(51);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030001, l_quadId), l_scomData);

        // Decompress the RS4 string and scan
        do
        {
            if (l_opType == ROTATE)
            {
                // Determine the no.of ROTATE operations encoded in stop-code
                uint32_t l_count = 0;
                l_nibbleIndx += stop_decode(l_rs4Str, l_nibbleIndx, &l_count);

                // Determine the no.of rotates in bits
                uint64_t l_bitRotates = (l_count << 2);

                l_bitsDecoded += l_bitRotates;

                // Do the ROTATE operation
                if (l_bitRotates != 0)
                {
                    sgpeRotate(i_target,
                               l_chiplet,
                               l_bitRotates,
                               0);

                    if(l_rc != fapi2::FAPI2_RC_SUCCESS)
                    {
                        PK_TRACE_INF("OPCG time out");
                        //In EDR: ring Id , quad Id and number of latches that went thru rotate
                        //and scan.
                        uint32_t debug_data_0 = ((uint32_t)l_ringId << 24) |
                                                ((uint32_t) ((l_chiplet >> 24) & 0x0F) << 20) | (l_bitRotates & 0x000FFFFF);
                        asm volatile ("mtedr %0" : : "r" (debug_data_0) : "memory");
                        PK_PANIC(SGPE_STOP_PUTRING_OPCG_TIMEOUT);
                    }
                }

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

                    //fapi2::buffer<uint64_t> l_data(l_scomData);
                    if (l_scanCount >= 2)
                    {
                        l_scomData = rs4_get_verbatim_word(l_rs4Str,
                                                           l_nibbleIndx,
                                                           l_scanCount);

                        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000 | l_count, l_quadId), l_scomData);
                    }
                    else
                    {
                        // Parse the non-zero nibbles of the RS4 string and
                        // scan them into the ring
                        uint32_t l_spyData = l_rs4Str[l_nibbleIndx >> 1];
                        l_scomData = l_nibbleIndx % 2 ? l_spyData & 0x0f : l_spyData >> 4;

                        l_scomData <<= 28;
                        l_scomData = l_scomData << 32;

                        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000 | l_count, l_quadId), l_scomData);
                    }

                    l_nibbleIndx += l_scanCount;
                }
                else
                {
                    if(0xF == l_scanCount) // We are parsing RS4 for override rings
                    {
                        i_applyOverride = true;
                        uint32_t l_careMask =
                            rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                        l_nibbleIndx++;
                        uint32_t l_spyData =
                            rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                        l_nibbleIndx++;

                        for(uint32_t i = 0; i < 4; i++)
                        {
                            l_bitsDecoded += 1;
                            l_scomData = 0x0;

                            if((l_careMask & (l_mask >> i)))
                            {
                                if((l_spyData & (l_mask >> i)))
                                {
                                    l_scomData = 0xFFFFFFFFFFFFFFFF;
                                }

                                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E001, l_quadId), l_scomData);
                            }
                            else
                            {
                                sgpeRotate(i_target,
                                           l_chiplet,
                                           1, // Insert 1 bit
                                           l_scomData);
                            }

                        } // end of looper for bit-parsing a non-zero nibble
                    }
                    else // We are parsing RS4 for base rings
                    {
                        for (uint32_t x = 0; x < l_scanCount; x++)
                        {
                            // Parse the non-zero nibbles of the RS4 string and
                            // scan them into the ring
                            uint32_t l_data =
                                rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                            l_nibbleIndx += 1;

                            for(uint32_t i = 0; i < 4; i++)
                            {
                                l_bitsDecoded += 1;
                                l_scomData = 0x0;

                                if((l_data & (l_mask >> i)))
                                {
                                    l_scomData = 0xFFFFFFFFFFFFFFFF;
                                    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E001, l_quadId), l_scomData);
                                }
                                else
                                {
                                    sgpeRotate(i_target,
                                               l_chiplet,
                                               1, // Insert 1 bit
                                               l_scomData);
                                }
                            }

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
                uint32_t l_spyData = l_rs4Str[l_nibbleIndx >> 1];
                l_scomData = l_nibbleIndx % 2 ? l_spyData & 0x0f : l_spyData >> 4;

                l_scomData <<= 28;
                l_scomData = l_scomData << 32;

                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000 | (l_nibble & 0x3), l_quadId), l_scomData);
            }
            else
            {
                if(0x8 & l_nibble) // We are parsing RS4 for override rings
                {
                    uint32_t l_careMask = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;
                    uint32_t l_spyData = rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;

                    for(uint32_t i = 0; i < 4; i++)
                    {
                        l_bitsDecoded += 1;
                        l_scomData = 0x0;

                        if((l_careMask & (l_mask >> i)))
                        {
                            if((l_spyData & (l_mask >> i)))
                            {
                                l_scomData = 0xFFFFFFFFFFFFFFFF;
                            }

                            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E001, l_quadId), l_scomData);
                        }
                        else
                        {
                            sgpeRotate(i_target,
                                       l_chiplet,
                                       1, // Insert 1 bit
                                       l_scomData);
                        }

                    } // end of looper for bit-parsing a non-zero nibble
                }
                else // We are parsing RS4 for base rings
                {
                    // scan them into the ring
                    uint32_t l_data = rs4_get_nibble(l_rs4Str, l_nibbleIndx);

                    l_nibbleIndx += 1;

                    for(uint32_t i = 0; i < l_nibble; i++)
                    {
                        l_scomData = 0x0;
                        l_bitsDecoded += 1;

                        if((l_data & (l_mask >> i)))
                        {
                            l_scomData = 0xFFFFFFFFFFFFFFFF;
                            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003E001, l_quadId), l_scomData);
                        }
                        else
                        {
                            sgpeRotate(i_target,
                                       l_chiplet,
                                       1, // Insert 1 bit
                                       l_scomData);
                        }
                    } //end of for
                }
            }
        } // end of if(l_nibble != 0)

        //restore scan ratio value
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030001, l_quadId), l_opcgratio);

        // Verify header
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(0x1003E000, l_quadId), l_scomData);

        if(l_scomData != 0xa5a5a5a5a5a5a5a5)
        {
            l_rc = fapi2::FAPI2_RC_PLAT_ERR_RING_HEADER_CHECK;
            //In EDR: ring Id, quad id and number of latches that went thru rotate
            //and scan.
            // In SPRG0: First 32 bits of header data read from the hw
            uint32_t debug_data_0 = ((uint32_t)l_ringId << 24) | ((uint32_t) l_quadId << 20) | (l_bitsDecoded & 0x000FFFFF);
            uint32_t debug_data_1 = (uint32_t)(l_scomData >> 32);
            asm volatile ("mtedr %0" : : "r" (debug_data_0) : "memory");
            asm volatile ("mtsprg0 %0" : : "r" (debug_data_1) : "memory");
            PK_PANIC(SGPE_STOP_PUTRING_HEADER_ERROR);

        }

        if ((i_ringMode &  fapi2::RING_MODE_SET_PULSE_NSL))
        {
            uint64_t l_header = 0xa5a5a5a500000000;

            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x1003A000, l_quadId), l_header);
        }

        // Clean scan region and type data
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030005, l_quadId), 0);

        if ((i_ringMode &  fapi2::RING_MODE_SET_PULSE_NSL) ||
            (i_ringMode &  fapi2::RING_MODE_SET_PULSE_SL) ||
            (i_ringMode &  fapi2::RING_MODE_SET_PULSE_ALL))
        {
            // clear clock region
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030006, l_quadId), 0);
            //restore opcg_reg0
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030002, l_quadId), l_opcgReg0);
            //restore opcg_reg1
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030003, l_quadId), l_opcgReg1);
            //restore opcg_reg2
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030004, l_quadId), l_opcgReg2);
            //restore opcg_capt1
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030010, l_quadId), l_opcgCapt1);
            //restore opcg_capt2
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030011, l_quadId), l_opcgCapt2);
            //restore opcg_capt3
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(0x10030012, l_quadId), l_opcgCapt3);
        }

    }
    while(0);

    return l_rc;
}
