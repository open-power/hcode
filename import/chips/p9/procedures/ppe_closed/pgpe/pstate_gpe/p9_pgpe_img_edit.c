/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_img_edit.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2019                                                    */
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
#include <stdlib.h>
#include <netinet/in.h>
#include <time.h>
#include <p9_hcode_image_defines.H>

enum
{
    PGPE_IMAGE           =   1,
    PPMR_IMAGE           =   2,
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
            uint32_t l_reset_addr_pos = PGPE_HEADER_IMAGE_OFFSET + offsetof(PgpeHeader_t, g_pgpe_sys_reset_addr);
            fseek (pMainImage, l_reset_addr_pos, SEEK_SET);
            temp = OCC_SRAM_PGPE_HCODE_RESET_ADDR;
            temp = htonl(temp);
            fwrite(&(temp), sizeof(uint32_t), 1, pMainImage );

            buildDatePos = PGPE_HEADER_IMAGE_OFFSET + offsetof(PgpeHeader_t, g_pgpe_build_date);
            buildVerPos  = PGPE_HEADER_IMAGE_OFFSET + offsetof(PgpeHeader_t, g_pgpe_build_ver);
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

        if(narg > 3) // if version passed in the use it
        {
            temp = htonl(strtoul(argv[3], 0, 16));
        }
        else
        {
            temp = htonl(PGPE_BUILD_VERSION);
        }

        fwrite(&temp, sizeof(uint32_t), 1, pMainImage );

        if (imageType == PPMR_IMAGE)
        {
            //PGPE HCODE offset in PPMR header
            uint32_t l_hcode_offset_pos = offsetof(PpmrHeader_t, g_ppmr_hcode_offset);
            fseek ( pMainImage , l_hcode_offset_pos, SEEK_SET );
            temp =  sizeof(PpmrHeader_t) +
                    PGPE_BOOT_COPIER_SIZE +
                    PGPE_BOOT_LOADER_SIZE;
            printf("                    PPMR Hcode offset: 0x%X\n", temp);
            temp = htonl(temp);
            fwrite(&temp, sizeof(uint32_t), 1, pMainImage );

            //PGPE Hcode length in PPMR header
            uint32_t l_hcode_length_pos = offsetof(PpmrHeader_t, g_ppmr_hcode_length);
            fseek ( pMainImage , l_hcode_length_pos, SEEK_SET );
            temp = l_ppmr_pgpe_hcode_len_val;
            printf("                    PPMR Hcode size:   0x%X (%d)\n", temp, temp);
            temp = htonl(temp);
            fwrite(&temp, sizeof(uint32_t), 1, pMainImage );

            //PGPE SRAM Region Start
            uint32_t l_pgpe_sram_region_start_offset = offsetof(PpmrHeader_t, g_ppmr_pgpe_sram_region_start);
            fseek ( pMainImage , l_pgpe_sram_region_start_offset, SEEK_SET );
            temp = OCC_SRAM_PGPE_BASE_ADDR;
            printf("                    PPMR Pgpe Sram Region Start: 0x%X\n", temp);
            temp = htonl(temp);
            fwrite(&temp, sizeof(uint32_t), 1, pMainImage );

            //PGPE SRAM Region Size
            uint32_t l_pgpe_sram_region_size_offset = offsetof(PpmrHeader_t, g_ppmr_pgpe_sram_region_size);
            fseek ( pMainImage , l_pgpe_sram_region_size_offset, SEEK_SET );
            temp = OCC_SRAM_PGPE_REGION_SIZE;
            printf("                    PPMR Pgpe Sram Region Size: 0x%X\n", temp);
            temp = htonl(temp);
            fwrite(&temp, sizeof(uint32_t), 1, pMainImage );
        }

        fclose(pMainImage);

    }
    while(0);

    return 0;
}
