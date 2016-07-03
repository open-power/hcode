/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_img_edit.c $ */
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
#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include <time.h>
#include <stddef.h>   /* offsetof  */

#include <p9_cme_img_layout.h>
#include <pk_debug_ptrs.h>
#include <p9_hcode_image_defines.H>

//namespace p9_hcodeImageBuild;

enum
{
    HCODE_OFFSET_POS    =   0x190,
    HCODE_LEN_POS       =   0x194,
    CME_HCODE_OFFSET    =   0x200,
    CME_BUILD_DATE_POS  =   0x188,
    CME_BUILD_VER_POS   =   0x18C,
    CME_BUILD_VER       =   0x001,
    CPMR_ATTN_WORD0     =   0x00,
    CPMR_ATTN_WORD1     =   0x03,
    CPMR_BUILD_DATE_POS =   0x10,
    CPMR_BUILD_VER_POS  =   0x14,
    CPMR_HCODE_OFFSET_POS =   0x20,
    CPMR_HCODE_LEN_POS    =   0x24,
    CPMR_SELFREST_OFF_POS =   0x48,
    CPMR_SELFREST_OFF_VAL =   0x100,
    CPMR_SELFREST_LEN_POS =   0x4C,
    CME_IMAGE           =   1,
    CPMR_IMAGE          =   2,
};

int main(int narg, char* argv[])
{
    if (narg < 2)
    {
        printf("Usage: %s <full path to image>\n",
               argv[0]);
        return -1;
    }

    cmeHeader_t  cmeHeader;
    //cpmrHeader_t cpmrHeader;

    int imageType = CME_IMAGE;
    long int buildDatePos   = 0;
    long int buildVerPos    = 0;
    long int hcodeLenPos    = CME_HEADER_OFFSET + offsetof(cmeHeader_t, g_cme_hcode_length);
    long int hcodeOffsetPos = CME_HEADER_OFFSET + offsetof(cmeHeader_t, g_cme_hcode_offset);

    FILE* pImage = fopen( argv[1], "r+" );

    if( !pImage )
    {
        printf("Could not open %s\n", argv[1]);
        return -2;
    }

    time_t buildTime = time(NULL);
    struct tm* headerTime = localtime(&buildTime);

    do
    {
        if( !pImage )
        {
            break;
        }

        printf("Debug Pointers Offset   : %d (0x%X)\n", PPE_DEBUG_PTRS_OFFSET, PPE_DEBUG_PTRS_OFFSET);
        printf("Debug Pointers size     : %ld (0x%lX)\n", sizeof(pk_debug_ptrs_t), sizeof(pk_debug_ptrs_t));
        printf("CME Image Offset        : %ld (0x%lX)\n", PPE_DEBUG_PTRS_OFFSET + sizeof(pk_debug_ptrs_t),
               PPE_DEBUG_PTRS_OFFSET + sizeof(pk_debug_ptrs_t));


        fseek (pImage, 0, SEEK_END);
        uint32_t size = ftell (pImage);
        rewind (pImage);
        printf("Hcode Image size        : %d (0x%X)\n", size, size);

        // For ekb build it's desired to detect the image type w/o special
        // make rules. Better way?
        if(size < CME_HCODE_OFFSET)
        {
            imageType = CPMR_IMAGE;
            buildDatePos   = offsetof(cpmrHeader_t, cpmrbuildDate);
            buildVerPos    = offsetof(cpmrHeader_t, cpmrVersion);
            hcodeLenPos    = offsetof(cpmrHeader_t, cmeImgLength);
            hcodeOffsetPos = offsetof(cpmrHeader_t, cmeImgOffset);
            printf("CPMR size               : %d (0x%X)\n", size, size);
            FILE* pHcodeImage = fopen( argv[2], "r+" );
            fseek (pHcodeImage, 0, SEEK_END);
            size = ftell (pHcodeImage);
            rewind (pHcodeImage);
            printf("CME Hcode size               : %d (0x%X)\n", size, size);
        }

        // cme build date  yyyymmdd
        fseek ( pImage, buildDatePos , SEEK_SET );

        uint32_t temp = (((headerTime->tm_year + 1900) << 16) |
                         ((headerTime->tm_mon + 1) << 8) |
                         (headerTime->tm_mday));
        printf("Build date              : %X -> %04d/%02d/%02d (YYYY/MM/DD)\n",
               temp, headerTime->tm_year + 1900, headerTime->tm_mon + 1, headerTime->tm_mday);

        temp = htonl(temp);
        fwrite(&temp, sizeof(uint32_t), 1, pImage );

        // cme build version
        fseek ( pImage , buildVerPos, SEEK_SET );
        temp = htonl(CME_BUILD_VER);
        fwrite(&temp, sizeof(uint32_t), 1, pImage );
        printf("CME_HEADER_OFFSET        : %X\n", CME_HEADER_OFFSET);

        printf("CME Hcode Offset Address: %ld (0x%lX)\n", hcodeOffsetPos , hcodeOffsetPos);
        fseek ( pImage, hcodeOffsetPos , SEEK_SET );
        temp = CME_HCODE_OFFSET;
        temp = htonl(temp);
        fwrite(&temp, sizeof(cmeHeader.g_cme_hcode_offset), 1, pImage );

        // cme hcode length
        printf("CME HCode Length Address: %ld (0x%lX)\n", hcodeLenPos, hcodeLenPos);
        fseek ( pImage, hcodeLenPos, SEEK_SET );
        temp = htonl( size );
        fwrite(&temp, sizeof(cmeHeader.g_cme_hcode_length), 1, pImage );

        // self restore offset + length
        if (imageType == CPMR_IMAGE )
        {
            FILE* pSelfRest = fopen( argv[3], "r+");
            fseek (pSelfRest, 0, SEEK_END);
            uint32_t selfRestSize = ftell (pSelfRest);
            rewind(pSelfRest);
            printf("Self Restore size  %s     : %d (0x%X)\n", argv[3], selfRestSize, selfRestSize);

            fseek ( pImage  , CPMR_SELFREST_OFF_POS , SEEK_SET );
            temp = htonl( CPMR_SELFREST_OFF_VAL );
            fwrite(&temp, sizeof(uint32_t), 1, pImage );

            fseek ( pImage  , CPMR_SELFREST_LEN_POS , SEEK_SET );
            temp = htonl( selfRestSize );
            fwrite(&temp, sizeof(uint32_t), 1, pImage );
        }

        fclose(pImage);
    }
    while(0);

    return 0;
}
