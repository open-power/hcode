/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_img_edit.c $ */
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
    SGPE_RESET_ADDR_POS  =   0x0188,
    SGPE_RESET_ADDRESS   =   0x40,
    SGPE_BUILD_DATE_POS  =   0x0198,
    SGPE_BUILD_VER_POS   =   0x019C,
    SGPE_BUILD_VER       =   0x01,
    QPMR_BUILD_DATE_POS  =   0x18,
    QPMR_BUILD_VER_POS   =   0x1C,
    SGPE_IMAGE           =   1,
    QPMR_IMAGE           =   2,
};

int main(int narg, char* argv[])
{

    if(narg < 2)
    {
        printf("Usage: %s <full path to image>\n",
               argv[0]);
        return -1;
    }

    int imageType = SGPE_IMAGE;
    long int buildDatePos = SGPE_BUILD_DATE_POS;
    long int buildVerPos  = SGPE_BUILD_VER_POS;

    FILE* pImage = fopen( argv[1], "r+");

    time_t buildTime = time(NULL);
    struct tm* headerTime = localtime(&buildTime);

    do
    {
        if( !pImage )
        {
            printf("\n image file not found");
            break;
        }

        fseek (pImage, 0, SEEK_END);
        uint32_t size = ftell (pImage);
        rewind(pImage);

        // For ekb build it's desired to detect the image type w/o special
        // make rules. Better way?
        if(size < 1024)
        {
            imageType = QPMR_IMAGE;
            buildDatePos = QPMR_BUILD_DATE_POS;
            buildVerPos  = QPMR_BUILD_VER_POS;
        }

        uint32_t temp = 0;

        if(imageType == SGPE_IMAGE)
        {
            //  populating SGPE Image Header
            //  populating RESET address
            fseek (pImage, SGPE_RESET_ADDR_POS, SEEK_SET);
            temp = SGPE_RESET_ADDRESS;
            temp = htonl(temp);
            fwrite(&(temp), sizeof(uint32_t), 1, pImage );
        }

        //build date
        fseek( pImage, buildDatePos, SEEK_SET );
        // date format same as in XIP Header YYYYMMDD
        temp = ((headerTime->tm_mday ) |
                ((headerTime->tm_mon + 1) << 8) |
                (headerTime->tm_year + 1900) << 16);

        temp = htonl(temp);
        fwrite(&temp, sizeof(uint32_t), 1, pImage );

        // build ver
        fseek( pImage,  buildVerPos, SEEK_SET );
        temp = htonl(SGPE_BUILD_VER);
        fwrite(&temp, sizeof(uint32_t), 1, pImage );

        fclose(pImage);
    }
    while(0);

    return 0;
}
