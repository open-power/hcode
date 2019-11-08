/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/tools/imageProcs/ddco_tool.C $                         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2019                                                    */
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
#include <string.h>
#include <errno.h>
#include <getopt.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

#include "p10_ddco.H"

bool debug = false;

#define DEBUG(_fmt_, _args_...)  \
    if (debug)                   \
    {                            \
        printf(_fmt_, ##_args_); \
    }

enum commands
{
    COMMAND_UNDEF,
    COMMAND_ADD,
    COMMAND_GET,
    COMMAND_LIST
};

const char* usage =
    "adds DD level block to container, and creates container, if needed\n"
    "\n"
    "Usage:\n"
    "  ddco_tool [options]\n"
    "    --command add|get|list\n"
    "    --dd    <num>         DD level number (hexadecimal)\n"
    "    --block <file name>   DD level block to be added\n"
    "    --cont  <file name>   DD level block container to be enlarged/shown\n"
    "    --help                this information\n"
    "    --debug               enable debug output\n"
    "\n"
    "Examples:\n"
    "  ddco_tool\n"
    "    --command add\n"
    "    --dd      0x10\n"
    "    --block   output/images/cme/p9n/dd10/cme.bin\n"
    "    --cont    output/images/cme/hcode.bin\n"
    "  ddco_tool\n"
    "    --command get\n"
    "    --cont    output/images/cme/hcode.bin\n"
    "    --dd      0x10\n"
    "  ddco_tool\n"
    "    --command list\n"
    "    --cont    output/images/cme/hcode.bin\n"
    "\n"
    "If the DD level container file already exists, the tool attempts\n"
    "to add the new DD level block. Otherwise a new DD level container\n"
    "is created and a new output file is written.\n"
    "\n"
    "The tool checks for duplicates. That means, a DD level block\n"
    "is to be added is rejected if another block for the same DD\n"
    "level number already exists.\n";

static const struct option options[] =
{
    {"command", required_argument, NULL, 'c'},
    {"dd",      required_argument, NULL, 'n'},
    {"block",   required_argument, NULL, 'b'},
    {"cont",    required_argument, NULL, 'o'},
    {"help",    no_argument,       NULL, 'h'},
    {"debug",   no_argument,       NULL, 'd'},
};

static const char* optionstr = "c:nbo:h:d";

void p9_dd_tool_read(uint8_t** buf, uint32_t* size, char* fn, int mandatory)
{
    FILE* fp;
    uint32_t read;

    fp = fopen(fn, "r");

    if (!fp)
    {
        if (mandatory)
        {
            printf("ERROR: p9_dd_tool_read(): Failed to open %s for reading\n", fn);
            exit(EXIT_FAILURE);
        }

        *buf = NULL;
        *size = 0;
        return;
    }

    fseek(fp, 0, SEEK_END);
    *size = ftell(fp);

    if (*size)
    {
        fseek(fp, 0, SEEK_SET);
        *buf = (uint8_t*)malloc(*size);

        if (!*buf)
        {
            printf("ERROR: p9_dd_tool_read(): Failed to allocate buffer\n");
            fclose(fp);
            exit(EXIT_FAILURE);
        }

        read = fread(*buf, 1, *size, fp);

        if (read != *size)
        {
            printf("ERROR: p9_dd_tool_read(): Failed to read %s\n", fn);
            exit(EXIT_FAILURE);
        }
    }

    fclose(fp);

    return;
}

void p9_dd_tool_write(uint8_t* buf, uint32_t size, char* fn)
{
    FILE* fp;
    uint32_t written;

    fp = fopen(fn, "w+");

    if (!fp)
    {
        printf("ERROR: p9_dd_tool_write(): Failed to open %s for writing\n", fn);
        exit(EXIT_FAILURE);
    }

    written = fwrite(buf, 1, size, fp);

    if (written != size)
    {
        printf("ERROR: p9_dd_tool_write(): Failed to write to %s\n", fn);
        exit(EXIT_FAILURE);
    }

    fclose(fp);

    return;
}

int p9_dd_tool_add(int dd, char* fn_block, char* fn_cont)
{
    uint32_t block_size;
    uint32_t cont_size;
    uint8_t* block;
    uint8_t* cont;
    int rc = 0;

    p9_dd_tool_read(&block, &block_size, fn_block, 1);
    p9_dd_tool_read(&cont,  &cont_size,  fn_cont, 0);

    if (block || block_size)
    {
        rc = p9_dd_add(&cont, &cont_size, dd, block, block_size);

        if (rc == DDCO_SUCCESS)
        {
            p9_dd_tool_write(cont, cont_size, fn_cont);
        }
        else if (rc == DDCO_DUPLICATE_DDLEVEL)
        {
            printf("WARNING: p9_dd_tool_add(): DD level already present in container.\n");
        }
        else
        {
            printf("ERROR: p9_dd_tool_add(): p9_dd_add() returned rc=0x%08x\n", rc);
        }
    }

    free(block);
    free(cont);

    return rc;
}

int p9_dd_tool_get(int dd, char* fn_block, char* fn_cont)
{
    uint32_t block_size;
    uint32_t cont_size;
    uint8_t* block;
    uint8_t* cont;
    int rc = 0;

    p9_dd_tool_read(&cont,  &cont_size,  fn_cont, 1);

    rc = p9_dd_get(cont, dd, &block, &block_size);

    if (rc == DDCO_SUCCESS)
    {
        p9_dd_tool_write(block, block_size, fn_block);
    }
    else
    {
        printf("ERROR: p9_dd_tool_get(): p9_dd_get() returned %d\n", rc);
    }

    free(cont);

    return rc;
}

int p9_dd_tool_list(char* fn_cont)
{
    uint32_t            cont_size;
    uint8_t*            cont;
    struct p9_dd_iter   iter = {NULL, 0};
    struct p9_dd_block* block;
    struct p9_dd_block  block_he;

    p9_dd_tool_read(&cont,  &cont_size,  fn_cont, 1);
    iter.iv_cont = (struct p9_dd_cont*)cont;

    while ((block = p9_dd_next(&iter)))
    {
        p9_dd_betoh(block, &block_he);
        printf("block: dd=0x%x size=%d\n", block_he.iv_dd, block_he.iv_size);
    }

    free(cont);

    return 0;
}

int main(int argc, char* argv[])
{
    int rc = DDCO_SUCCESS;
    char* fn_block = NULL;
    char* fn_cont = NULL;
    int  dd = 0;
    int  command = COMMAND_UNDEF;
    int option = -1;

    if (argc == 1)
    {
        printf("ERROR: Missing arguments\n\n%s", usage);
        exit(EXIT_FAILURE);
    }

    while (-1 != (option = getopt_long(argc, argv, optionstr, options, NULL)))
    {
        switch (option)
        {
            case 'c' :
                if (!strcmp(optarg, "add"))
                {
                    command = COMMAND_ADD;
                }
                else if (!strcmp(optarg, "get"))
                {
                    command = COMMAND_GET;
                }
                else if (!strcmp(optarg, "list"))
                {
                    command = COMMAND_LIST;
                }

                break;

            case 'n' :
                if (sscanf(optarg, "0x%x", &dd) != 1)
                {
                    printf("ERROR: Missing DD level. Must specify a DD level after --dd\n\n%s", usage);
                    exit(EXIT_FAILURE);
                }

                break;

            case 'b' :
                fn_block = strdup(optarg);
                break;

            case 'o' :
                if (fn_cont)
                {
                    printf("ERROR: Only one DD container is allowed\n\n%s", usage);
                    exit(EXIT_FAILURE);
                }

                fn_cont = strdup(optarg);
                break;

            case 'd' :
                debug = true;
                break;

            case 'h' :
                printf("%s", usage);
                exit(0);

            default :
                printf("ERROR: Missing argument\n\n%s", usage);
                exit(EXIT_FAILURE);
        }

        switch (command)
        {
            case COMMAND_LIST :
                if (fn_cont)
                {
                    return p9_dd_tool_list(fn_cont);
                }

                break;

            case COMMAND_ADD :
                if (fn_cont && fn_block && dd)
                {
                    rc = p9_dd_tool_add(dd, fn_block, fn_cont);
                    dd = 0;
                    free(fn_block);
                    fn_block = NULL;

                    if (rc == DDCO_DUPLICATE_DDLEVEL)
                    {
                        rc = DDCO_SUCCESS;
                    }
                }

                break;

            case COMMAND_GET :
                if (fn_cont && fn_block && dd)
                {
                    rc = p9_dd_tool_get(dd, fn_block, fn_cont);
                    dd = 0;
                    free(fn_block);
                    fn_block = NULL;
                }

                break;
        }
    }

    if (rc == DDCO_SUCCESS)
    {
        exit(EXIT_SUCCESS);
    }
    else
    {
        exit(EXIT_FAILURE);
    }
}
