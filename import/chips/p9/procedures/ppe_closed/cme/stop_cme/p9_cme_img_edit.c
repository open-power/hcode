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
    CME_IMAGE           =   1,
    CPMR_IMAGE          =   2,
};

int main(int narg, char* argv[])
{

    if(narg < 2)
    {
        printf("Usage: %s <full path to image>\n",
               argv[0]);
        return -1;
    }

    int imageType = CME_IMAGE;
    long int buildDatePos = CME_BUILD_DATE_POS;
    long int buildVerPos  = CME_BUILD_VER_POS;

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

        fseek (pImage, 0, SEEK_END);
        uint32_t size = ftell (pImage);
        rewind(pImage);

        // For ekb build it's desired to detect the image type w/o special
        // make rules. Better way?
        if(size < CME_HCODE_OFFSET)
        {
            imageType = CPMR_IMAGE;
            buildDatePos = CPMR_BUILD_DATE_POS;
            buildVerPos  = CPMR_BUILD_VER_POS;
        }

        // cme build date  yyyymmdd
        fseek ( pImage, buildDatePos , SEEK_SET );

        uint32_t temp = ( (headerTime->tm_year + 1900) << 16) |
                        ((headerTime->tm_mon + 1) << 8) |
                        (headerTime->tm_mday + 1);

        temp = htonl(temp);

        fwrite(&temp, sizeof(uint32_t), 1, pImage );

        // build version
        fseek ( pImage , buildVerPos, SEEK_SET );
        temp = htonl(CME_BUILD_VER);
        fwrite(&temp, sizeof(uint32_t), 1, pImage );


        if(imageType == CME_IMAGE)
        {
            // cme hcode offset
            fseek ( pImage, HCODE_OFFSET_POS , SEEK_SET );
            temp = CME_HCODE_OFFSET;
            temp = htonl(temp);
            fwrite(&(temp), sizeof(uint32_t), 1, pImage );

            // cme hcode length
            fseek ( pImage , HCODE_LEN_POS , SEEK_SET );
            temp = htonl( size );
            fwrite(&temp, sizeof(uint32_t), 1, pImage );
        }

        fclose(pImage);
    }
    while(0);

    return 0;
}
