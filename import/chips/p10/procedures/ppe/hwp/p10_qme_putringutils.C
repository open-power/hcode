/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwp/p10_qme_putringutils.C $  */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
/// @file   p10_putringutils.C
/// @brief  Provide the service of decompressing the rs4 encoded string.
///
// *HWP HW Owner:       Greg Still <stillgs@us.ibm.com>
// *HWP FW Owner:       Prem S Jha <premjha2@in.ibm.com>
// *HWP Team:           PM
// *HWP Level:          2
// *HWP Consumed by:    QME

// *INDENT-OFF*

#include <p10_qme_putringutils.H>
#include <p10_scan_compression.H>
#include <p10_hcd_common.H>
#include <p10_ringId.H>
#include <p10_scom_eq_1.H>
#include <p10_scom_eq_8.H>
#include <p10_scom_perv_2.H>
//#include <iota_app_cfg.h>

#ifndef __UNIT_TEST_
#include <qme_panic_codes.h>
#include <p10_hcd_common.H>
#include <iota.h>
#endif

#ifdef __UNIT_TEST_

std::map <uint16_t, uint64_t> g_ringScanRegionMap;

void initScanRegionTest()
{
    g_ringScanRegionMap[ec_cl2_fure]   =   0x4780000000009000ul;
    g_ringScanRegionMap[ec_cl2_gptr]   =   0x4780000000002000ul;
    g_ringScanRegionMap[ec_cl2_repr]   =   0x4780000000002000ul;
    g_ringScanRegionMap[ec_cl2_time]   =   0x4780000000000100ul;
    g_ringScanRegionMap[ec_cl2_cmsk]   =   0x4780000000000020ul;
    g_ringScanRegionMap[ec_cl2_inex]   =   0x4780000000000010ul;
    g_ringScanRegionMap[ec_mma_fure]   =   0x0001000000009000ul;
    g_ringScanRegionMap[ec_mma_gptr]   =   0x0001000000002000ul;
    g_ringScanRegionMap[ec_mma_repr]   =   0x0001000000000200ul;
    g_ringScanRegionMap[ec_mma_time]   =   0x0001000000000100ul;
    g_ringScanRegionMap[ec_mma_cmsk]   =   0x0001000000000020ul;
    g_ringScanRegionMap[ec_mma_inex]   =   0x0001000000000010ul;
    g_ringScanRegionMap[ec_l3_fure]    =   0x4078000000009000ul;
    g_ringScanRegionMap[ec_l3_gptr]    =   0x4078000000002000ul;
    g_ringScanRegionMap[ec_l3_repr]    =   0x4078000000000200ul;
    g_ringScanRegionMap[ec_l3_time]    =   0x4078000000000100ul;
    g_ringScanRegionMap[ec_l3_cmsk]    =   0x4078000000000020ul;
    g_ringScanRegionMap[ec_l3_inex]    =   0x4078000000000010ul;
}

#endif

enum
{
    HEADER_CHECK_PATTERN    =   0xa5a5a5a5a5a5a5a5ull,
    ENABLE_PARALLEL_SCAN    =   0x40000000,
    SELECT_ALL_ECL          =   0x07800000,
    SELECT_ALL_L3           =   0x00780000,
    SHIFT_TO_ECL            =   8,
    SHIFT_TO_L3             =   12,
    SHIFT_TO_MMA            =   18,
    SCAN_REGION_ECL0        =   0x04000000,
    SCAN_REGION_L30         =   0x00400000,
    SCAN_REGION_MMA0        =   0x00010000,
};

//
// Function Definitions
//
///
/// @brief Return           A big-endian-indexed nibble from a byte string
/// @param[in] i_rs4Str     The RS4 scan string
/// @param[in] i_nibbleIndx Index into i_rs4Str that need to converted
///                         into a nibble
/// @return big-endian-indexed nibble
///
inline uint32_t rs4_get_nibble( const uint8_t* i_rs4Str,
                                const uint32_t i_nibbleIndx)__attribute__((always_inline) );

inline uint32_t rs4_get_nibble( const uint8_t* i_rs4Str, const uint32_t i_nibbleIndx )
{
    uint32_t l_byte;

    l_byte = i_rs4Str[i_nibbleIndx >> 1];

    return ( ( i_nibbleIndx & 0x01 ) ? ( l_byte & 0x0f ) : l_byte >> 4 );
}

//------------------------------------------------------------------------------------------

///
/// @brief Decode an unsigned integer from a 4-bit octal stop code.
/// @param[in]  i_rs4Str        The RS4 scan string
/// @param[in]  i_nibbleIndx    Index into i_rs4Str that has the stop-code
/// @param[out] o_numRotate     No.of rotates decoded from the stop-code.
/// @return The number of nibbles decoded.
///
inline uint32_t stop_decode( const uint8_t* i_rs4Str,
                             uint32_t i_nibbleIndx,
                             uint32_t* o_numRotate )__attribute__((always_inline) );

inline uint32_t stop_decode( const uint8_t* i_rs4Str,
                             uint32_t i_nibbleIndx,
                             uint32_t* o_numRotate )
{
    uint32_t l_numNibblesParsed = 0; // No.of nibbles that make up the stop-code
    uint32_t l_numNonZeroNibbles = 0;
    uint32_t l_nibble;
    uint32_t l_byte;

    do
    {
        l_byte      =   i_rs4Str[i_nibbleIndx >> 1];

        l_nibble    =   ( i_nibbleIndx & 0x01 ? l_byte & 0x0f : l_byte >> 4);

        l_numNonZeroNibbles = ( l_numNonZeroNibbles << 3 ) + ( l_nibble & 0x07 );

        i_nibbleIndx++;
        l_numNibblesParsed++;
    }
    while( ( l_nibble & 0x08 ) == 0 );

    *o_numRotate    =   l_numNonZeroNibbles;

    return l_numNibblesParsed;
}

//------------------------------------------------------------------------------------------


inline uint64_t decodeScanRegionData(
                    const fapi2::Target<fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST >& i_target,
                    const uint32_t i_ringAddress,
                    const uint16_t i_ringId )__attribute__((always_inline) );

inline uint64_t decodeScanRegionData(
                    const fapi2::Target<fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST >& i_target,
                    const uint32_t i_ringAddress, const uint16_t i_ringId )
{
    uint64_t l_value        =   0;
    uint32_t l_scan_region  =   ( ( i_ringAddress & 0x0000FFF0 ) |
                                   ( ( i_ringAddress & 0x00F00000 ) >> 20 ) ) << 13;

    if( ec_cl2_repr == i_ringId )
    {
        l_scan_region  |= (i_target.getCoreSelect( ) << SHIFT32(SHIFT_TO_ECL));
    }
    else if ( ec_l3_repr == i_ringId )
    {
        l_scan_region  |=   (i_target.getCoreSelect( ) << SHIFT32(SHIFT_TO_L3));
    }
    else if ( SCAN_REGION_ECL0 & l_scan_region )
    {
        l_scan_region   |=  SELECT_ALL_ECL;
        l_scan_region   |=  ENABLE_PARALLEL_SCAN; //Enabling parallel scan for Core
    }
    else if ( SCAN_REGION_L30 & l_scan_region )
    {
        l_scan_region   |=  SELECT_ALL_L3;
        l_scan_region   |=  ENABLE_PARALLEL_SCAN; //Enabling parallel scan for L3
    }
    else if( SCAN_REGION_MMA0 & l_scan_region )
    {
        l_scan_region |= (i_target.getCoreSelect( ) << SHIFT32(SHIFT_TO_MMA));
    }

    //Inserting scan type value starting from bit position 48
    uint32_t l_scan_type    =   0x00008000 >> ( i_ringAddress & 0x0000000F );
    // Exception: If scantype is 0x0f then we need special handling.

     if ( ( i_ringAddress & 0x0000000F ) == 0xF )
     {
         //Setting bit 48 and 51
         l_scan_type     =   0x00009000;
     }

     l_value             =   l_scan_region;
     l_value             =   ( l_value << 32 ) |  l_scan_type;

     #ifdef  __UNIT_TEST_
     initScanRegionTest();

     if( l_value    ==     g_ringScanRegionMap[i_ringId] )
     {
         FAPI_INF( "SUCCESS: Ring 0x%04x Scan Region And Type Match", (uint16_t) i_ringId );
     }
     else
     {
         FAPI_INF( "FAIL: Ring 0x%04x Scan Region Found 0x%016lx Expected 0x%016lx",
                    (uint16_t) i_ringId, l_value, g_ringScanRegionMap[i_ringId] );
     }
     #endif

    return   l_value;

}

//------------------------------------------------------------------------------------------

///
/// @brief Return verbatim data from the RS4 string
/// @param[in] i_rs4Str         The RS4 scan string
/// @param[in] i_nibbleIndx     Index into i_rs4Str that need to converted
///                             into a nibble
/// @param[in] i_nibbleCount    The count of nibbles that need to be put
///                             in the return value.
/// @return    big-endian-indexed double word
///
inline uint64_t rs4_get_verbatim_word( const uint8_t* i_rs4Str,
                                       const uint32_t i_nibbleIndx,
                                       uint32_t i_nibbleCount)__attribute__((always_inline) );

inline uint64_t rs4_get_verbatim_word( const uint8_t* i_rs4Str,
                                       const uint32_t i_nibbleIndx,
                                       uint32_t i_nibbleCount )
{
    uint64_t l_doubleWord   =   0;
    const uint32_t* l_data  =   NULL;
    uint32_t l_offset       =   0;
    uint32_t l_shift        =   32;
    uint32_t l_64shift      =   32;
    uint32_t l_rightShift   =   0;
    uint32_t l_cnt          =   0;
    uint32_t l_mod          =   0;
    uint64_t l_tempWord     =   0;
    uint32_t l_index        =   i_nibbleIndx;

    while ( i_nibbleCount )
    {
        l_cnt       =   l_index >> 1;
        l_mod       =   l_cnt % 4;
        l_offset    =   l_cnt - l_mod;
        l_data      =   (uint32_t*)((uint8_t*)i_rs4Str + l_offset);
        l_shift     =   (4 - l_mod) << 3;

        l_mod = l_index % 2;

        if ( l_mod )
        {
            l_shift =   l_shift - 4;
        }

        l_offset    =   *l_data << (32 - l_shift);
        l_tempWord = l_offset;

        if ( l_64shift )
        {
            l_tempWord = l_tempWord <<  l_64shift;
        }
        else
        {
            l_tempWord = l_tempWord >> ( l_rightShift << 2 );
        }


        l_doubleWord |= l_tempWord;

        uint32_t x = 8 - (l_index % 8);

        if ( x < i_nibbleCount )
        {
            l_index += x;
            l_64shift = 64 - ( 32 +  ( x << 2 ) );

            l_rightShift = i_nibbleIndx % 8;

            if ( !l_64shift && l_rightShift )
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

//------------------------------------------------------------------------------------------

fapi2::ReturnCode p10_putRingUtils(
    const fapi2::Target<fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST>& i_target,
    uint8_t* i_rs4,
    QME_SCOM_CONTROLS i_scomOp,
    rs4Type_t i_rs4Type,
    const fapi2::RingMode i_ringMode )
{
    using namespace scomt;
    using namespace eq;
    using namespace perv;

    fapi2::buffer<uint64_t> l_scomData     =   0;
    uint8_t* l_rs4Str               =   0;
    CompressedScanData* l_rs4Header =   NULL;
    bool l_bOverride                =   UNDEFINED_BOOLEAN;
    uint32_t l_ringId               =   0;
    bool     l_coreCommon           =   true;
    uint64_t l_scanRegion   =   0;

#ifndef __UNIT_TEST_
    uint32_t l_nibbleIndx   =   0;
    uint32_t l_bitsDecoded  =   0;
    uint32_t l_mask         =   0x08;
    uint32_t l_careMask     =   0;
    uint32_t l_nibbleCnt    =   0;
    uint32_t l_scanIndex    =   0;
    uint32_t l_data         =   0;
    uint32_t l_spyData      =   0;
    opType_t l_opType       =   ROTATE;
    const uint32_t l_maxRotate      =   4095;
    std::vector< fapi2::Target < fapi2::TARGET_TYPE_CORE >> l_coreTgt  =
                                        i_target.getChildren< fapi2::TARGET_TYPE_CORE >();
    fapi2::Target< fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST > l_eqMcTgt  =
                    i_target.getParent< fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST >();
    fapi2::Target<fapi2::TARGET_TYPE_EQ | fapi2::TARGET_TYPE_MULTICAST,
                    fapi2::MULTICAST_COMPARE > l_eqMcCompTgt    =    l_eqMcTgt;
    fapi2::Target<fapi2::TARGET_TYPE_EQ> l_eqTgt    =
                                        l_coreTgt[0].getParent< fapi2::TARGET_TYPE_EQ >();
#endif

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
            l_rs4Str    = i_rs4 + sizeof(CompressedScanData);  //Calculating location 'B'
        }
        else if( CMSK == i_rs4Type )
        {
            l_rs4Header = (CompressedScanData*)(i_rs4 + sizeof( CompressedScanData ));
            l_rs4Str    = i_rs4 + ( sizeof( CompressedScanData) << 1);
        }
        else    //Stumped Ring
        {
            l_rs4Header = (CompressedScanData*) i_rs4;
            CompressedScanData* l_cmskHeader = ( CompressedScanData*) ( i_rs4 + sizeof(CompressedScanData) );
            l_rs4Str    = i_rs4 + sizeof(CompressedScanData) + rev_16( l_cmskHeader->iv_size );   //Calculating location 'D'
        }

        if( !l_rs4Str )
        {
            FAPI_INF( "Bad RS4 Container" );
        }

        l_ringId        =   rev_16(l_rs4Header->iv_ringId);

        if(( ec_cl2_repr ==  l_ringId ) || ( ec_mma_repr == l_ringId ) || ( ec_l3_repr == l_ringId ))
        {
            l_coreCommon    =   false;
        }

        FAPI_INF( "Ring Id is 0x%04x magic 0x%04x",
                  (uint16_t)l_ringId , (uint32_t) rev_16(l_rs4Header->iv_magic) );

        // Determine override/flush status
        if ( ( l_rs4Header->iv_type & RS4_IV_TYPE_OVRD_MASK ) == RS4_IV_TYPE_OVRD_OVRD )
        {
            l_bOverride = true;
        }
        else if ( ( l_rs4Header->iv_type & RS4_IV_TYPE_OVRD_MASK ) == RS4_IV_TYPE_OVRD_FLUSH )
        {
            l_bOverride = false;
        }
        else // Violation of decompression engine rules
        {
            FAPI_INF("The iv_type Ovrd bits MUST be either 0x%02x (override) or 0x%02x"
                     " (flush). However, the [masked] iv_type = 0x%02x",
                     RS4_IV_TYPE_OVRD_OVRD,
                     RS4_IV_TYPE_OVRD_FLUSH,
                     (l_rs4Header->iv_type & RS4_IV_TYPE_OVRD_MASK));
        #ifndef __UNIT_TEST_
            IOTA_PANIC(QME_STOP_PUTRING_HEADER_ERROR);
        #endif
        }

        // Get scan region and type value
        l_scomData      =   decodeScanRegionData( i_target, rev_32( l_rs4Header->iv_scanAddr ), l_ringId );
        l_scanRegion    =   l_scomData;

#ifndef __UNIT_TEST_

        if( STUMPED_RING == i_rs4Type )
        {
            //After scanning a CMSK Ring, when we scan RS4 accompanying it,
            //MSB of the scan region must be set. This ensures that mask bits
            //are init to 0 and are not part of the scan chain.
            uint64_t temp   =   0x01;
            temp            =   temp << 63;
            l_scomData     |=   temp;
        }

        // Set up the scan region for the ring.
        // Write a 64 bit value for header.

        FAPI_TRY(fapi2::putScom( l_eqTgt, SCAN_REGION_TYPE, l_scomData ) );
        FAPI_TRY(fapi2::putScom( l_eqTgt, SCAN64, HEADER_CHECK_PATTERN ) );

        // Decompress the RS4 string and scan
        do
        {
            if ( l_opType == ROTATE )
            {
                // Determine the no.of ROTATE operations encoded in stop-code
                uint32_t l_bitRotates;
                l_nibbleIndx +=  stop_decode(l_rs4Str, l_nibbleIndx, &l_bitRotates);

                // Determine the no.of rotates in bits
                l_bitRotates  =  l_bitRotates << 2;

                l_bitsDecoded += l_bitRotates;

                // Do the ROTATE operation
                if ( l_bitRotates > l_maxRotate )
                {

                    // Prevent PPE compiler from using a software divide
                    // (l_bitRotates/l_maxRotate) to pre-calculate number of loop iterations
                    // this saves 128 Bytes and takes less time than a software divide
                    // (hide behind the getscoms)
                    uint32_t primenum       =   32749; //largest 15-bit prime
                    uint32_t fakenumber     =   primenum;

                    // fakenumber can never be zero

                    for ( ; (l_bitRotates > l_maxRotate) || (fakenumber == 0); )
                    {
                        l_bitRotates -= l_maxRotate;
                        FAPI_TRY(fapi2::getScom( l_eqTgt, (SCAN32 | l_maxRotate), l_scomData ) );

                        if ( ( fakenumber -= 7 ) < 15 )
                        {
                            fakenumber = primenum;    // ensure always >0
                        }
                    }
                }

                FAPI_TRY(fapi2::getScom( l_eqTgt, (SCAN32 | l_bitRotates), l_scomData ));

                l_opType = SCAN;
            }
            else if( l_opType == SCAN )
            {
                uint32_t l_scanCount = rs4_get_nibble( l_rs4Str, l_nibbleIndx );
                l_nibbleIndx++;

                if ( l_scanCount == 0 )
                {
                    break;
                }

                if ( (!l_bOverride) && l_scanCount != 0xF ) // Process flush ring (and ensure no '0'-writes)
                {
                    uint32_t l_count    =   l_scanCount << 2;;
                    l_bitsDecoded      +=   l_count;

                    if ( l_scanCount >= 2 )
                    {
                        l_scomData = rs4_get_verbatim_word( l_rs4Str,
                                                            l_nibbleIndx,
                                                            l_scanCount );

                        FAPI_TRY( fapi2::putScom( l_eqTgt, (SCAN64 | l_count), l_scomData ));
                    }
                    else
                    {
                        // Parse the non-zero nibbles of the RS4 string and
                        // scan them into the ring
                        l_spyData   =   l_rs4Str[l_nibbleIndx >> 1];
                        l_scomData  =   ( l_nibbleIndx & 0x01 ) ? ( l_spyData & 0x0f ) : ( l_spyData >> 4 );
                        l_scomData  <<= 28;
                        l_scomData  =   l_scomData << 32;
                        FAPI_TRY( fapi2::putScom( l_eqTgt, (SCAN64 | l_count), l_scomData ));
                    }

                    l_nibbleIndx   +=   l_scanCount;
                }
                else  // Process override ring (plus the occasional flush ring with '0'-write bits)
                {
                    if( 0xF == l_scanCount ) // Process ring with '0'-write bits
                    {
                        l_careMask      =    rs4_get_nibble( l_rs4Str, l_nibbleIndx );
                        l_nibbleIndx++;
                        l_spyData       =    rs4_get_nibble( l_rs4Str, l_nibbleIndx );
                        l_nibbleIndx++;

                        for( l_nibbleCnt = 0; l_nibbleCnt < 4; l_nibbleCnt++ )
                        {
                            l_bitsDecoded  +=   1;
                            l_scomData      =   0x0;
                            l_data          =   l_mask >> l_nibbleCnt;

                            if( l_careMask & l_data )
                            {
                                l_scomData  =   l_spyData & l_data ? 0xFFFFFFFFFFFFFFFF : 0;
                                FAPI_TRY( fapi2::putScom( l_eqTgt, (SCAN64 | 0x01), l_scomData ));
                            }
                            else
                            {
                                FAPI_TRY( fapi2::getScom( l_eqTgt, (SCAN32 | 0x01), l_scomData ));
                            }
                        }
                    }
                    else // Process ring with only '1'-write bits
                    {
                        for ( l_scanIndex = 0; l_scanIndex < l_scanCount; l_scanIndex++ )
                        {
                            // Parse the non-zero nibbles of the RS4 string and
                            // scan them into the ring
                            l_data        =     rs4_get_nibble( l_rs4Str, l_nibbleIndx );
                            l_nibbleIndx +=     1;

                            for( l_nibbleCnt = 0; l_nibbleCnt < 4; l_nibbleCnt++ )
                            {
                                l_scomData     =    0x0;
                                l_bitsDecoded +=    1;

                                if( ( l_data & ( l_mask >> l_nibbleCnt ) ) )
                                {
                                    l_scomData = 0xFFFFFFFFFFFFFFFF;

                                    FAPI_TRY( fapi2::putScom( l_eqTgt, (SCAN64 | 0x01), l_scomData ));
                                }
                                else
                                {
                                    FAPI_TRY( fapi2::getScom( l_eqTgt, (SCAN32 | 0x01), l_scomData ));
                                }
                            }//end of for loop
                        }
                    }
                }

                l_opType = ROTATE;
            } // end of - if(l_opType == SCAN)
        }
        while(1);

        // Handle the string termination
        uint32_t l_nibble = rs4_get_nibble( l_rs4Str, l_nibbleIndx );
        l_nibbleIndx++;

        if ( l_nibble != 0 )
        {
            if ( !l_bOverride && !( l_nibble & 0x8 ) ) // Process flush ring (and ensure no '0'-writes))
            {
                l_bitsDecoded  +=   l_nibble;
                l_spyData       =   l_rs4Str[l_nibbleIndx >> 1];
                l_scomData      =   ( l_nibbleIndx & 0x01 ) ? ( l_spyData & 0x0f ) : ( l_spyData >> 4 );

                l_scomData    <<=   28;
                l_scomData      =   l_scomData << 32;

                FAPI_TRY( fapi2::putScom( l_eqTgt, (SCAN64 | (l_nibble & 0x3)), l_scomData ));
            }
            else // Process override ring (plus occasional flush ring with '0'-write bits)
            {
                if( 0x8 & l_nibble ) // Process ring with '0'-write bits
                {
                    l_careMask  =   rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;
                    l_spyData   =   rs4_get_nibble(l_rs4Str, l_nibbleIndx);
                    l_nibbleIndx++;

                    for( l_nibbleCnt = 0; l_nibbleCnt < 4; l_nibbleCnt++ )
                    {
                        l_bitsDecoded  +=   1;
                        l_scomData      =   0x0;
                        l_data          =   l_mask >> l_nibbleCnt;

                        if( l_careMask & l_data )
                        {
                            l_scomData  =   l_spyData & l_data ? 0xFFFFFFFFFFFFFFFF : 0;

                            FAPI_TRY( fapi2::putScom( l_eqTgt, (SCAN64 | (l_nibble & 0x1)), l_scomData ));
                        }
                        else
                        {
                            FAPI_TRY( fapi2::getScom( l_eqTgt, (SCAN32 | 0x01), l_scomData ));
                        }
                    }
                }
                else // Process ring with only '1'-write bits
                {
                    // scan them into the ring
                    l_data          =   rs4_get_nibble( l_rs4Str, l_nibbleIndx );
                    l_nibbleIndx   +=   1;

                    for( l_nibbleCnt = 0; l_nibbleCnt < l_nibble; l_nibbleCnt++ )
                    {
                        l_scomData      =   0x0;
                        l_bitsDecoded  +=   1;

                        if( ( l_data & ( l_mask >> l_nibbleCnt ) ) )
                        {
                            l_scomData  =   0xFFFFFFFFFFFFFFFF;
                            FAPI_TRY( fapi2::putScom( l_eqTgt, (SCAN64 | 0x01), l_scomData ));
                        }
                        else
                        {
                            FAPI_TRY( fapi2::getScom( l_eqTgt, (SCAN32 | 0x01), l_scomData ));
                        }
                    } //end of for
                }
            }
        } // end of if(l_nibble != 0)

        // Verify header
        fapi2::buffer<uint64_t> l_readHeader;
        if( l_coreCommon )
        {
            FAPI_TRY( fapi2::getScom( l_eqMcCompTgt, (SCAN64 | 0x1), l_readHeader) );
        }
        else
        {
            FAPI_TRY( fapi2::getScom( l_eqTgt, (SCAN64 | 0x1), l_readHeader) );
        }
        if( l_readHeader != HEADER_CHECK_PATTERN )
        {
            FAPI_INF("l_readHeader %08X %08X", l_readHeader >> 32, l_readHeader);

            //In EDR: ring Id (8b),core value(4b) and number of latches that went thru rotate
            //and scan.
            //In SPRG0: First 32 bits of header data read from the hw
            uint32_t l_ringId       =   l_rs4Header->iv_ringId;
            uint32_t debug_data_0   =   (l_ringId << 24) | (l_bitsDecoded & 0x000FFFFF);
            uint32_t debug_data_1   =   (uint32_t)(l_readHeader >> 32);
            asm volatile ("mtspr %0, %1" : : "i" (61), "r" (debug_data_0) : "memory");
            asm volatile ("mtspr %0, %1" : : "i" (272), "r" (debug_data_1) : "memory");
            IOTA_PANIC(QME_STOP_PUTRING_HEADER_MISMATCH);
        }

        if( ( l_scanRegion >> 32 ) & ENABLE_PARALLEL_SCAN )
        {
            FAPI_TRY( fapi2::getScom( l_eqTgt, CPLT_STAT0, l_scomData ) );

            if( l_scomData.getBit<CPLT_STAT0_CC_CTRL_PARALLEL_SCAN_COMPARE_ERR>() )
            {
                IOTA_PANIC(QME_STOP_PUTRING_PARALLEL_SCAN_ERR);
            }
        }

        // Clean scan region and type data
        FAPI_TRY( fapi2::putScom( l_eqTgt, SCAN_REGION_TYPE, 0 ));
#else

        FAPI_INF( "Scan Region  0x%016lx Type 0x%016lx Override : %s Coomon %s",
                  l_scanRegion, l_scomData, l_bOverride ? "TRUE" : "FALSE",
                  l_coreCommon ? "TRUE" : "FALSE"  );

#endif //__UNIT_TEST_

    }
    while(0);

#ifndef __UNIT_TEST_
fapi_try_exit:
#endif

    return fapi2::current_err;
}

//------------------------------------------------------------------------------------------

fapi2::ReturnCode p10_qme_putringutils(
            const fapi2::Target<fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST>& i_target,
            uint8_t* i_rs4,
            QME_SCOM_CONTROLS i_scomOp,
            rs4Type_t i_rs4Type )
{
    fapi2::ReturnCode l_rc;
    FAPI_TRY( p10_putRingUtils( i_target, i_rs4, i_scomOp, i_rs4Type, fapi2::RING_MODE_HEADER_CHECK ) );

fapi_try_exit:
    return fapi2::current_err;
}
