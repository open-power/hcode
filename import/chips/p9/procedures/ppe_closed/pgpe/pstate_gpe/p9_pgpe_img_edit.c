/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_img_edit.c $ */
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
#include <stddef.h>     /* offsetof */
#include <netinet/in.h>
#include <time.h>
#include <p9_hcode_image_defines.H>

enum
{
    PGPE_RESET_ADDR_POS  =   0x0188,
    PGPE_RESET_ADDRESS   =   0x40,
    PGPE_BUILD_DATE_POS  =   0x0198,
    PGPE_BUILD_VER_POS   =   0x019C,
    PGPE_BUILD_VER       =   0x01,
    PPMR_BUILD_DATE_POS  =   0x18,
    PPMR_BUILD_VER_POS   =   0x1C,
    PGPE_IMAGE           =   1,
    PPMR_IMAGE           =   2,
    PPMR_PGPE_HCODE_OFF_POS  = 0x28,
    PPMR_PGPE_HCODE_OFF_VAL  = 0xA00, //512B + 1KB + 1kB
};

int main(int narg, char* argv[])
{

    if(narg < 2)
    {
        printf("Usage: %s <full path to image>\n",
               argv[0]);
        return -1;
    }

    int imageType = PGPE_IMAGE;

    uint32_t buildDatePos;
    uint32_t buildVerPos;

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

        uint32_t l_ppmr_pgpe_hcode_len_val = 0;

        // For ekb build it's desired to detect the image type w/o special
        // make rules. Better way?

        if(size < 1024)
        {
            printf("                    PPMR size:     %d\n", size);
            imageType = PPMR_IMAGE;
            buildDatePos = offsetof(PpmrHeader_t, g_ppmr_build_date);
            buildVerPos  = offsetof(PpmrHeader_t, g_ppmr_build_ver);

            if( !pDependImage )
            {
                printf("\n image file to find the size was not found\n");
                break;
            }

            fseek (pDependImage, 0, SEEK_END);
            l_ppmr_pgpe_hcode_len_val = ftell (pDependImage);
            rewind(pDependImage);
            fclose(pDependImage);
        }

        uint32_t temp = 0;

        if(imageType == PGPE_IMAGE)
        {
            printf("                    PGPE size: %d\n", size);
            //  populating PGPE Image Header
            //  populating RESET address
            uint32_t l_reset_addr_pos = offsetof(PgpeHeader_t, g_pgpe_sys_reset_addr);
            fseek (pMainImage, l_reset_addr_pos, SEEK_SET);
            temp = PGPE_RESET_ADDRESS;
            temp = htonl(temp);
            fwrite(&(temp), sizeof(uint32_t), 1, pMainImage );

            buildDatePos = offsetof(PgpeHeader_t, g_pgpe_build_date);
            buildVerPos  = offsetof(PgpeHeader_t, g_pgpe_build_ver);
        }

        // build date
        fseek( pMainImage, buildDatePos, SEEK_SET );
        // date format same as in XIP Header YYYYMMDD
        temp = ((headerTime->tm_mday ) |
                ((headerTime->tm_mon + 1) << 8) |
                (headerTime->tm_year + 1900) << 16);

        printf("                    Build date:    %X pos %X\n", temp, buildDatePos);
        temp = htonl(temp);
        fwrite(&temp, sizeof(uint32_t), 1, pMainImage );


        // build ver
        printf("                    Build version: %X pos %X\n", temp, buildVerPos);
        fseek( pMainImage,  buildVerPos, SEEK_SET );
        temp = htonl(PGPE_BUILD_VER);
        fwrite(&temp, sizeof(uint32_t), 1, pMainImage );

        if (imageType == PPMR_IMAGE)
        {
            //SGPE HCODE offset in PPMR header
            uint32_t l_hcode_offset_pos = offsetof(PpmrHeader_t, g_ppmr_hcode_offset);
            fseek ( pMainImage , l_hcode_offset_pos, SEEK_SET );
            temp =  sizeof(PpmrHeader_t) +
                    PGPE_LVL_1_BOOT_LOAD_SIZE +
                    PGPE_LVL_2_BOOT_LOAD_SIZE;
            printf("                    PPMR Hcode offset: 0x%X\n", temp);
            temp = htonl(temp);
            fwrite(&temp, sizeof(uint32_t), 1, pMainImage );

            //SGPE Hcode length in PPMR header
            uint32_t l_hcode_length_pos = offsetof(PpmrHeader_t, g_ppmr_hcode_length);
            fseek ( pMainImage , l_hcode_length_pos, SEEK_SET );
            temp = l_ppmr_pgpe_hcode_len_val;
            printf("                    PPMR Hcode size:   0x%X (%d)\n", temp, temp);
            temp = htonl(temp);
            fwrite(&temp, sizeof(uint32_t), 1, pMainImage );
        }

        fclose(pMainImage);

    }
    while(0);

    return 0;
}
