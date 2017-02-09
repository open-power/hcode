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
#include <stddef.h>   /* offsetof  */

#include <pk_debug_ptrs.h>
#include <p9_hcode_image_defines.H>

enum
{
    CME_IMAGE               =   1,
    CPMR_IMAGE              =   2,
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

    int imageType = CME_IMAGE;
    long int hcodeLenPos    = CME_HEADER_IMAGE_OFFSET + offsetof(cmeHeader_t, g_cme_hcode_length);
    long int hcodeOffsetPos = CME_HEADER_IMAGE_OFFSET + offsetof(cmeHeader_t, g_cme_hcode_offset);

    FILE* pImage = fopen( argv[1], "r+" );

    if( !pImage )
    {
        printf("Could not open %s\n", argv[1]);
        return -2;
    }

    do
    {
        if( !pImage )
        {
            break;
        }

        printf("                    Debug Pointers Offset   : %d (0x%X)\n", CME_DEBUG_PTRS_OFFSET, CME_DEBUG_PTRS_OFFSET);
        printf("                    Debug Pointers size     : %ld (0x%lX)\n", sizeof(pk_debug_ptrs_t), sizeof(pk_debug_ptrs_t));
        printf("                    CME Image Offset        : %ld (0x%lX)\n", CME_DEBUG_PTRS_OFFSET + sizeof(pk_debug_ptrs_t),
               CME_DEBUG_PTRS_OFFSET + sizeof(pk_debug_ptrs_t));


        fseek (pImage, 0, SEEK_END);
        uint32_t size = ftell (pImage);
        rewind (pImage);
        printf("                    Hcode Image size        : %d (0x%X)\n", size, size);

        // For ekb build it's desired to detect the image type w/o special
        // make rules. Better way?
        if(size < CME_HCODE_IMAGE_OFFSET)
        {
            imageType = CPMR_IMAGE;
            hcodeLenPos    = offsetof(cpmrHeader_t, cmeImgLength);
            hcodeOffsetPos = offsetof(cpmrHeader_t, cmeImgOffset);
            printf("                    CPMR size               : %d (0x%X)\n", size, size);
            FILE* pHcodeImage = fopen( argv[2], "r+" );
            fseek (pHcodeImage, 0, SEEK_END);
            size = ftell (pHcodeImage);
            rewind (pHcodeImage);
            printf("                    CME Hcode size          : %d (0x%X)\n", size, size);
        }

        printf("                    CME Hcode Offset Address: %ld (0x%lX)\n", hcodeOffsetPos , hcodeOffsetPos);
        fseek ( pImage, hcodeOffsetPos , SEEK_SET );
        uint32_t temp = CME_HCODE_IMAGE_OFFSET;
        temp = htonl(temp);
        fwrite(&temp, sizeof(cmeHeader.g_cme_hcode_offset), 1, pImage );

        // cme hcode length
        printf("                    CME HCode Length Address: %ld (0x%lX)\n", hcodeLenPos, hcodeLenPos);
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
            printf("                    Self Restore size  %s     : %d (0x%X)\n", argv[3], selfRestSize, selfRestSize);

            fseek ( pImage  , CPMR_SELF_RESTORE_OFFSET_BYTE , SEEK_SET );
            temp = htonl( SELF_RESTORE_CPMR_OFFSET );
            fwrite(&temp, sizeof(uint32_t), 1, pImage );

            fseek ( pImage  , CPMR_SELF_RESTORE_LENGTH_BYTE , SEEK_SET );
            temp = htonl( selfRestSize );
            fwrite(&temp, sizeof(uint32_t), 1, pImage );
        }

        fclose(pImage);
    }
    while(0);

    return 0;
}
