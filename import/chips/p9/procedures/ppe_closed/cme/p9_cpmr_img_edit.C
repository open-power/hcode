/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/p9_cpmr_img_edit.C $ */
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


//#include <p9_cpmr_header.H>
#include <p9_cme_img_layout.h>
//#include <p9_cme_header.H>
#include <pk_debug_ptrs.h>
#include <p9_hcode_image_defines.H>

using namespace p9_hcodeImageBuild;

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
};

int main(int narg, char* argv[])
{
    if (narg < 4)
    {
        printf("Usage: %s <full path to image>\n",
               argv[0]);
        return -1;
    }

    FILE* pImage = fopen( argv[1], "r+" );
    FILE* pCpmr = fopen( argv[2], "r+" );
    FILE* pSelfRest = fopen( argv[3], "r+");

    //FILE* pImage = fopen( "./obj/cme/cme.bin", "r+" );
    //FILE* pCpmr = fopen( "./obj/cme/cpmr_header.bin", "r+" );
    //FILE* pSelfRest = fopen( "../../utils/stopreg/selfRest.bin", "r+");


    time_t buildTime = time(NULL);
    struct tm* headerTime = localtime(&buildTime);

    cmeHeader_t  cmeHeader;
    cpmrHeader_t cpmrHeader;

    do
    {
        if( !pImage )
        {
            break;
        }

        if( !pCpmr )
        {
            break;
        }

        printf("Debug Pointers Offset   : %d (0x%X)\n", PPE_DEBUG_PTRS_OFFSET, PPE_DEBUG_PTRS_OFFSET);
        printf("Debug Pointers size     : %d (0x%X)\n", sizeof(pk_debug_ptrs_t), sizeof(pk_debug_ptrs_t));

        printf("CME Image Offset        : %d (0x%X)\n", PPE_DEBUG_PTRS_OFFSET + sizeof(pk_debug_ptrs_t),
               PPE_DEBUG_PTRS_OFFSET + sizeof(pk_debug_ptrs_t));

        fseek (pCpmr, 0, SEEK_END);
        uint32_t Cpmrsize = ftell (pCpmr);
        rewind(pCpmr);
        printf("CPMR size               : %d (0x%X)\n", Cpmrsize, Cpmrsize);

        fseek (pImage, 0, SEEK_END);
        uint32_t Imagesize = ftell (pImage);
        rewind(pImage);
        printf("Hcode Image size        : %d (0x%X)\n", Imagesize, Imagesize);

        fseek (pSelfRest, 0, SEEK_END);
        uint32_t selfRestSize = ftell (pSelfRest);
        rewind(pSelfRest);
        printf("Self Restore size       : %d (0x%X)\n", selfRestSize, selfRestSize);

        // cme build date  yyyymmdd
        fseek ( pImage, CME_HEADER_OFFSET + offsetof(cmeHeader_t, g_cme_build_date) , SEEK_SET );
        fseek ( pCpmr, offsetof(cpmrHeader_t, cpmrbuildDate) , SEEK_SET );
        uint32_t temp = (((headerTime->tm_year + 1900) << 16) |
                         ((headerTime->tm_mon + 1) << 8) |
                         (headerTime->tm_mday));
        printf("Build date              : %X -> %04d/%02d/%02d (YYYY/MM/DD)\n",
               temp, headerTime->tm_year + 1900, headerTime->tm_mon + 1, headerTime->tm_mday);

        temp = htonl(temp);
        fwrite(&temp, sizeof(cmeHeader.g_cme_build_date), 1, pImage );
        fwrite(&temp, sizeof(cpmrHeader.cpmrbuildDate), 1, pCpmr );

        // cme build version
        fseek ( pImage, CME_HEADER_OFFSET + offsetof(cmeHeader_t, g_cme_build_ver) , SEEK_SET );
        fseek ( pCpmr, offsetof(cpmrHeader_t, cpmrVersion) , SEEK_SET );
        temp = htonl(CME_BUILD_VER);
        fwrite(&temp, sizeof(cmeHeader.g_cme_build_ver), 1, pImage );
        fwrite(&temp, sizeof(cpmrHeader.cpmrVersion), 1, pCpmr );

        printf("CME_HEADER_OFFSET        : %X\n", CME_HEADER_OFFSET);

        // cme hcode offset
        fseek ( pImage, HCODE_OFFSET_POS , SEEK_SET );
        temp = CME_HCODE_OFFSET;
        temp = htonl(temp);
        fwrite(&(temp), sizeof(uint32_t), 1, pImage );

        // cme hcode length
        fseek ( pImage , HCODE_LEN_POS , SEEK_SET );
        temp = htonl( Imagesize );
        fwrite(&temp, sizeof(uint32_t), 1, pImage );
        fwrite(&temp, sizeof(uint32_t), 1, pCpmr );

        // self restore offset+ length
        fseek ( pCpmr  , CPMR_SELFREST_OFF_POS , SEEK_SET );
        temp = htonl( CPMR_SELFREST_OFF_VAL );
        fwrite(&temp, sizeof(uint32_t), 1, pCpmr );

        fseek ( pCpmr  , CPMR_SELFREST_LEN_POS , SEEK_SET );
        temp = htonl( selfRestSize );
        fwrite(&temp, sizeof(uint32_t), 1, pCpmr );

        printf("CME Hcode Offset Address: %X\n", CME_HEADER_OFFSET + offsetof(cmeHeader_t, g_cme_hcode_offset));
        fseek ( pImage, CME_HEADER_OFFSET + offsetof(cmeHeader_t, g_cme_hcode_offset) , SEEK_SET );
        temp = CME_HCODE_OFFSET;
        temp = htonl(temp);
        fwrite(&temp, sizeof(cmeHeader.g_cme_hcode_offset), 1, pImage );
        fwrite(&temp, sizeof(cpmrHeader.cmeImgOffset), 1, pCpmr );

        // cme hcode length
        printf("CME HCode Length Address: %X\n", CME_HEADER_OFFSET + offsetof(cmeHeader_t, g_cme_hcode_length));
        fseek ( pImage, CME_HEADER_OFFSET + offsetof(cmeHeader_t, g_cme_hcode_length) , SEEK_SET );
        fseek ( pCpmr, offsetof(cpmrHeader_t, cmeImgLength) , SEEK_SET );
        temp = htonl( Imagesize );
        fwrite(&temp, sizeof(cmeHeader.g_cme_hcode_length), 1, pImage );
        fwrite(&temp, sizeof(cpmrHeader.cmeImgLength), 1, pCpmr );

        fclose(pImage);
        fclose(pCpmr);
    }
    while(0);

    return 0;
}
