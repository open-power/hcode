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

#include <p9_hcd_memmap_base.H>

enum
{
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
    long int buildDatePos = SGPE_BUILD_DATE_IMAGE_OFFSET;
    long int buildVerPos  = SGPE_BUILD_VER_IMAGE_OFFSET;

    FILE* pMainImage = fopen( argv[1], "r+");
    FILE* pDependImage = fopen(argv[2], "r+");

    time_t buildTime = time(NULL);
    struct tm* headerTime = localtime(&buildTime);

    do
    {
        if( !pMainImage )
        {
            printf("\n image file to edit was not found\n");
            break;
        }

        fseek (pMainImage, 0, SEEK_END);
        uint32_t size = ftell (pMainImage);
        rewind(pMainImage);
        uint32_t QPMR_SGPE_HCODE_LEN_VAL = 0;

        // For ekb build it's desired to detect the image type w/o special
        // make rules. Better way?

        if(size < 1024)
        {
            printf("                    QPMR size: %d\n", size);
            imageType = QPMR_IMAGE;
            buildDatePos = QPMR_BUILD_DATE_BYTE;
            buildVerPos  = QPMR_BUILD_VER_BYTE;

            if( !pDependImage )
            {
                printf("\n image file to find the size was not found\n");
                break;
            }

            fseek (pDependImage, 0, SEEK_END);
            QPMR_SGPE_HCODE_LEN_VAL = ftell (pDependImage);
            rewind(pDependImage);
        }

        uint32_t temp = 0;

        if(imageType == SGPE_IMAGE)
        {
            printf("                    SGPE size: %d\n", size);
            //  populating SGPE Image Header
            //  populating RESET address
            fseek (pMainImage, SGPE_RESET_ADDR_IMAGE_OFFSET, SEEK_SET);
            temp = SGPE_HCODE_RESET_ADDR_VAL;
            temp = htonl(temp);
            fwrite(&(temp), sizeof(uint32_t), 1, pMainImage );
        }

        // build date
        fseek( pMainImage, buildDatePos, SEEK_SET );
        // date format same as in XIP Header YYYYMMDD
        temp = ((headerTime->tm_mday ) |
                ((headerTime->tm_mon + 1) << 8) |
                (headerTime->tm_year + 1900) << 16);

        temp = htonl(temp);
        fwrite(&temp, sizeof(uint32_t), 1, pMainImage );

        // build ver
        fseek( pMainImage,  buildVerPos, SEEK_SET );
        temp = htonl(SGPE_BUILD_VERSION);
        fwrite(&temp, sizeof(uint32_t), 1, pMainImage );

        if (imageType == QPMR_IMAGE)
        {
            //SGPE HCODE offset in QPMR header
            fseek ( pMainImage , QPMR_SGPE_HCODE_OFFSET_BYTE, SEEK_SET );
            temp = SGPE_IMAGE_QPMR_OFFSET;
            temp = htonl(temp);
            fwrite(&temp, sizeof(uint32_t), 1, pMainImage );

            //SGPE Hcode length in QPMR header
            fseek ( pMainImage , QPMR_SGPE_HCODE_LENGTH_BYTE, SEEK_SET );
            temp = QPMR_SGPE_HCODE_LEN_VAL;
            temp = htonl(temp);
            fwrite(&temp, sizeof(uint32_t), 1, pMainImage );
        }

        fclose(pMainImage);
        //fclose(pDependImage);
    }
    while(0);

    return 0;
}
