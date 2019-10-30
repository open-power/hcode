/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/utils/stopreg/p10_stop_api_tool.C $ */
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
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include "p10_stop_api.H"
#include "p10_stop_data_struct.H"
#include "p10_cpu_reg_restore_instruction.H"
#include "p10_stop_util.H"
#include "p10_hcode_image_defines.H"
#include <map>
#include <string>
#include <algorithm>
#include <cstring>
#include <assert.h>
#include <stdio.h>
#include <stdint.h>

///
/// @file   p10_stop_api_tool.C
/// @brief  edits CPMR region of full or partial HOMER in binary form.
///
// *HWP HW Owner    :  Greg Still <stillgs@us.ibm.com>
// *HWP FW Owner    :  Prem Shanker Jha <premjha2@in.ibm.com>
// *HWP Team        :  PM
// *HWP Level       :  2
// *HWP Consumed by :  CRO

using namespace std;
namespace stopImageSection
{

enum
{
    INVALID_MODE        = 1,
    BATCH_MODE          = 2,
    REGULAR_OP_MODE     = 3,
    DEFAULT_MODE        = 4,
    MATCH               = 0,
    MAX_FILE_NAME_SIZE  = 500,
    MAX_ARGS            = 4,
    CPMR_EDIT_INPUTS    = 7,
};

enum
{
    SUCCESS = 0,
};

enum
{
    SAVE_CPU_REG            = 1,
    SAVE_CPU_SCOM           = 2,
    CORE_SCOPE_REG          = 4,
    THREAD_SCOPE_REG        = 4,
    EPM_STRUCT_RESERVE_SIZE = 3,
    CPU_REG_ENTRY_CORE = (CORE_SCOPE_REG * 4) + 4, // added RFID opcode size
    CPU_REG_ENTRY_THREAD = (THREAD_SCOPE_REG * 4) + 4, // added RFID opcode size
    MAX_CORE_EPM            = 32,
    MAX_THREAD_EPM          = 4,
    CORE_PER_QUAD           = 4,
    NOP_OPCODE              = 0x60000000,
    EPM_HOMER_VERSION       = 0x00000001,
    MM                      = 10,
    DD                      = 19,
    YYYY                    = 2015,
    EPM_HOMER_BUILD_DATE    = (MM << 24 | DD << 16 | YYYY),
    BLANK_WORD              = 0x00000000,
    STOP_IMAGE_TEST_SIZE    = (4 * ONE_MB),
    EPM_DMA_FILE_ENTRY_SIZE = 8,
    FOUR_K_PAGE_PAGE_SIZE   = 4096,
    SELF_RESTORE_BIN_SIZE   = 256 * ONE_KB,
    CPU_REG_REST_OFFSET     = 0x2100,
    DMA_OUTPUT              = 0x01,
    BIN_OUTPUT              = 0x02,
    BIN_DMA_OUTPUT          = 0x03,
    BIN_INPUT               = 0x04,
    SR_INPUT                = 0x05,
    SELF_REST_BIN_OUTPUT    = 0x06,
    SELF_REST_BIN_APPEND_CPMR_OUTPUT    = 0x07,
    THREAD_LAUNCH_START_WORD     = 0x80840,  // from start of HOMER in Words
    SELF_REST_SIZE_END_WORD      = 0x8C000, // from start of HOMER in Words
    THREAD_AREA_END_WORD         = 512,

};

enum AsmSection_t
{
    SRESET_HNDLR = 1,
    THREAD_LAUNCHER = 2,
    RESTORE_CODE = 3,
};

std::map<uint32_t, bool> g_sprRegisterTest;
std::map< string , uint32_t > g_sprMap;
map< string , uint32_t > g_scomOp;
map< string , uint32_t > g_scomArea;
map< uint32_t, string > g_stopErrCode;

}

const float TOOL_VERSION = 1.00;
FILE* g_pErrTrace = NULL;

uint32_t launchBasedOnPir( void* i_pfakeHomer, std::string&   i_testHomerDesc,
                           bool i_fuseMode,
                           int32_t& o_startPos, uint32_t& o_cpuRegCount );

uint32_t launchBasedOnCoreAndThread( void* i_pfakeHomer,
                                     std::string& i_testHomerDesc, bool i_fuseMode,
                                     int32_t& o_startPos, uint32_t& o_cpuRegCount );

void generateDmaOutput( void* pfakeHomer, FILE* fpImageOut, uint32_t i_offSet );
uint32_t launchForScom( void* i_pfakeHomer, string& i_testHomerDesc,
                        int32_t& o_posStart );
void printToolHelp();
void printErrorHint( uint8_t* i_argList );
void populateFakeCpmr( void* pfakeCpmr, bool i_fuseMode );
void initSelfRestoreRegion( void* pfakeHomer );



/*
 * @brief Entry point of p10_stop_api_tool
 * @note syntax for launch of tool
 * ./p10_stop_api_tool -r p10_HOMER_input -i inputBinary.bin -o outPutFile.dma | outputFile.bin -f fused | unfused
*/

int main( int argc, char* argv[])
{
    using namespace stopImageSection;
    int   rc = SUCCESS;
    FILE* fpImageIn     =   NULL;
    FILE* fpImageOutDma =   NULL;
    FILE* fpImageOutBin =   NULL;
    FILE* fpRegInput    =   NULL;
    char* pfakeHomer    =   NULL;
    bool fuseMode       =   false;
    uint32_t outputType =   BIN_OUTPUT;
    uint32_t inputType  =   BIN_INPUT;
    g_pErrTrace = fopen("error_trace.txt", "w+" );
    assert( g_pErrTrace != NULL );

    g_sprRegisterTest[PROC_STOP_SPR_CIABR]   =  true;
    g_sprRegisterTest[PROC_STOP_SPR_DAWR]    =  true;
    g_sprRegisterTest[PROC_STOP_SPR_DAWRX]   =  true;
    g_sprRegisterTest[PROC_STOP_SPR_HSPRG0]  =  true;
    g_sprRegisterTest[PROC_STOP_SPR_LDBAR]   =  true;
    g_sprRegisterTest[PROC_STOP_SPR_LPCR]    =  true;
    g_sprRegisterTest[PROC_STOP_SPR_PSSCR]   =  true;
    g_sprRegisterTest[PROC_STOP_SPR_MSR]     =  true;
    g_sprRegisterTest[PROC_STOP_SPR_HRMOR]   =  false;
    g_sprRegisterTest[PROC_STOP_SPR_HID]     =  false;
    g_sprRegisterTest[PROC_STOP_SPR_HMEER]   =  false;
    g_sprRegisterTest[PROC_STOP_SPR_PMCR]    =  false;
    g_sprRegisterTest[PROC_STOP_SPR_PTCR]    =  false;
    g_sprRegisterTest[PROC_STOP_SPR_SMFCTRL] =  true;
    g_sprRegisterTest[PROC_STOP_SPR_USPRG0]  =  true;
    g_sprRegisterTest[PROC_STOP_SPR_USPRG1]  =  true;
    g_sprRegisterTest[PROC_STOP_SPR_URMOR]   =  false;


    fprintf( g_pErrTrace, "%s", "Processing Input Parameters...\n");
    g_sprMap["CIABR"]   =   PROC_STOP_SPR_CIABR;
    g_sprMap["DAWR" ]   =   PROC_STOP_SPR_DAWR;
    g_sprMap["DAWRX"]   =   PROC_STOP_SPR_DAWRX;
    g_sprMap["HSPRG0"]  =   PROC_STOP_SPR_HSPRG0;
    g_sprMap["LDBAR"]   =   PROC_STOP_SPR_LDBAR;
    g_sprMap["LPCR" ]   =   PROC_STOP_SPR_LPCR;
    g_sprMap["PSSCR"]   =   PROC_STOP_SPR_PSSCR;
    g_sprMap["MSR"]     =   PROC_STOP_SPR_MSR;
    g_sprMap["HRMOR"]   =   PROC_STOP_SPR_HRMOR;
    g_sprMap["HID"  ]   =   PROC_STOP_SPR_HID;
    g_sprMap["HMEER"]   =   PROC_STOP_SPR_HMEER;
    g_sprMap["PMCR"]    =   PROC_STOP_SPR_PMCR;
    g_sprMap["PTCR"]    =   PROC_STOP_SPR_PTCR;
    g_sprMap["SMFCTRL"] =   PROC_STOP_SPR_SMFCTRL;
    g_sprMap["USPRG0"]  =   PROC_STOP_SPR_USPRG0;
    g_sprMap["USPRG1"]  =   PROC_STOP_SPR_USPRG1;
    g_sprMap["URMOR"]   =   PROC_STOP_SPR_URMOR;

    g_scomOp["APPEND"]      =   PROC_STOP_SCOM_APPEND;
    g_scomOp["REPLACE"]     =   PROC_STOP_SCOM_REPLACE;
    g_scomOp["OR"]          =   PROC_STOP_SCOM_OR;
    g_scomOp["AND"]         =   PROC_STOP_SCOM_AND;
    g_scomOp["NOOP"]        =   PROC_STOP_SCOM_NOOP;
    g_scomOp["RESET"]       =   PROC_STOP_SCOM_RESET;
    g_scomOp["OR_APPEND"]   =   PROC_STOP_SCOM_OR_APPEND;
    g_scomOp["AND_APPEND"]  =   PROC_STOP_SCOM_AND_APPEND;

    g_scomArea["CORE_SCOM"] =   PROC_STOP_SECTION_CORE;
    g_scomArea["EQ"]        =   PROC_STOP_SECTION_CACHE;
    g_scomArea["L2"]        =   PROC_STOP_SECTION_L2;
    g_scomArea["L3"]        =   PROC_STOP_SECTION_L3;

    g_stopErrCode[STOP_SAVE_SUCCESS]                    = "stop save success";
    g_stopErrCode[STOP_SAVE_ARG_INVALID_IMG]            = "invalid pointer to HOMER";
    g_stopErrCode[STOP_SAVE_ARG_INVALID_REG]            = "invalid CPU register";
    g_stopErrCode[STOP_SAVE_ARG_INVALID_THREAD]         = "invalid thread id";
    g_stopErrCode[STOP_SAVE_ARG_INVALID_MODE]           = "invalid mode";
    g_stopErrCode[STOP_SAVE_ARG_INVALID_CORE]           = "invalid core id";
    g_stopErrCode[STOP_SAVE_SPR_ENTRY_NOT_FOUND]        = "spr restore entry not found";
    g_stopErrCode[STOP_SAVE_SPR_ENTRY_UPDATE_FAILED]    =
        "spr restore entry update failed";
    g_stopErrCode[STOP_SAVE_SCOM_INVALID_OPERATION]     = "invalid SCOM operation";
    g_stopErrCode[STOP_SAVE_SCOM_INVALID_SECTION]       =
        "invalid SCOM section specified";
    g_stopErrCode[STOP_SAVE_SCOM_INVALID_ADDRESS]       = "invalid SCOM address";
    g_stopErrCode[STOP_SAVE_SCOM_INVALID_CHIPLET]       = "invalid chiplet id";
    g_stopErrCode[STOP_SAVE_SCOM_ENTRY_UPDATE_FAILED]   =
        "scom entry update failed";
    g_stopErrCode[STOP_SAVE_FAIL]                       = "stop api fail";

    do
    {
        int32_t argNum = 1;
        uint32_t rcTemp = 0;
        uint32_t badArg = 1;
        uint8_t argList[20] = {0};


        if ( 3 > argc )
        {
            if( (std::string(argv[argNum]) == "--h") ||
                (std::string(argv[argNum]) == "-h")  ||
                (std::string(argv[argNum]) == "-help" ) ||
                (std ::string(argv[argNum] ) == "--help" ))
            {
                printToolHelp();
                exit(EXIT_SUCCESS);;
            }

            if(( std::string(argv[argNum]) == "--v" ) ||
               ( std::string(argv[argNum]) == "--V" ) )
            {
                printf("\n\tVersion %.2f \n", TOOL_VERSION );
            }
            else
            {
                fprintf( g_pErrTrace, "\nERR:Insufficient inputs to launch the tool\n" );
                printf("\nInsufficient inputs to launch the tool\n");
                break;
            }
        }
        else if ( argc == CPMR_EDIT_INPUTS )
        {
            bool editCpmr = false;
            fprintf( g_pErrTrace, "\nChecking for CPMR edit case \n");

            for( int32_t index = 0; index < argc; index++ )
            {
                std::string l_argument( argv[index]);

                if( l_argument == "-obcf" )
                {
                    fprintf( g_pErrTrace, "\nFound CPMR edit case \n");
                    editCpmr = true;
                    break;
                }
            }

            if( !editCpmr )
            {
                printf("\nMissing parameter \n");
                printToolHelp();
                break;
            }
        }
        else if( argc < MAX_ARGS )
        {
            printf("\nMissing parameter \n");
            printToolHelp();
        }

        while( argNum < argc  )
        {
            badArg = 1;

            if(( std::string( argv[argNum] ) == "-is" ) && ( 0 == argList[0] ))
            {
                badArg  = 0;
                fpImageIn = fopen( argv[argNum + 1], "r" );

                if( !fpImageIn )
                {
                    fprintf( g_pErrTrace, "\nERR:could not open the input file %s\n",
                             argv[argNum + 1] );
                    rcTemp = -1;
                    break;
                }

                inputType = SR_INPUT;
                argList[0] = 1;
            }

            else if(( std::string( argv[argNum] ) == "-ih" ) && ( 0 == argList[0] ))
            {
                badArg  = 0;
                fpImageIn = fopen( argv[argNum + 1], "r" );

                if( !fpImageIn )
                {
                    fprintf( g_pErrTrace, "\nERR:could not open the input file %s\n",
                             argv[argNum + 1] );
                    rcTemp = -1;
                    break;
                }

                inputType = BIN_INPUT;
                argList[0] = 1;
            }

            if(( std::string( argv[argNum] ) == "-ob" ) && ( 0 == argList[1]) )
            {
                string binFileName( argv[argNum + 1] );

                if( std::string::npos == binFileName.find(".bin" , 0 ) )
                {
                    rcTemp = -1;
                    fprintf( g_pErrTrace, "\n ERR: .bin extension expected in output file");
                    break;
                }

                badArg  = 0;
                fpImageOutBin = fopen( argv[argNum + 1], "w+" );

                if( !fpImageOutBin )
                {
                    fprintf( g_pErrTrace, "\nERR:could not open the output file %s\n",
                             argv[argNum + 1] );
                    rcTemp = -1;
                    break;
                }

                outputType = BIN_OUTPUT;
                argList[1] = 1;
            }

            else if(( std::string( argv[argNum] ) == "-od" ) && ( 0 == argList[1]) )
            {
                string dmaFileName( argv[argNum + 1] );

                if( std::string::npos == dmaFileName.find( ".dma", 0 ) )
                {
                    rcTemp = -1;
                    fprintf( g_pErrTrace, "\n ERR: .dma extension expected in output file");
                    break;
                }

                badArg  = 0;
                fpImageOutDma = fopen( argv[argNum + 1], "w+" );

                if( !fpImageOutDma )
                {
                    fprintf( g_pErrTrace, "\nERR:could not open the output file %s\n",
                             argv[argNum + 1] );
                    rcTemp = -1;
                    break;
                }

                outputType = DMA_OUTPUT;
                argList[1] = 1;
            }

            else if((( std::string( argv[argNum] ) == "-obd"  ) ||
                     ( std::string( argv[argNum]) == "-odb" ))   &&
                    ( 0 == argList[1]) )
            {
                char* pFileName = new char [( strlen(argv[argNum + 1] ) + 5 )];
                std::string outFileStr( pFileName );

                if( (std::string::npos != outFileStr.find(".dma", 0) ) ||
                    (std::string::npos != outFileStr.find(".bin", 0) ) ||
                    (std::string::npos != outFileStr.find(".", 0) )
                  )
                {
                    fprintf( g_pErrTrace, "\nERR:Bad extension for outtput file %s\n",
                             argv[argNum + 1] );
                    rcTemp = -1;
                    break;
                }

                memset( pFileName, 0, (strlen(argv[argNum + 1]) + 5) );
                memcpy( pFileName, argv[argNum + 1], strlen(argv[argNum + 1]) );
                strcat( pFileName, ".dma" );
                badArg  = 0;
                fpImageOutDma = fopen( pFileName, "w+" );

                if( !fpImageOutDma )
                {
                    fprintf( g_pErrTrace, "\nERR:could not open the output  file %s\n", pFileName );
                    rcTemp = -1;
                    delete pFileName;
                    break;
                }

                memset( pFileName, 0, (strlen(argv[argNum + 1]) + 3) );
                memcpy( pFileName, argv[argNum + 1], strlen(argv[argNum + 1]) );
                strcat( pFileName, ".bin" );
                fpImageOutBin = fopen( argv[argNum + 1], "w+" );

                if( !fpImageOutBin )
                {
                    fprintf( g_pErrTrace, "\nERR:could not open the output binary file %s\n",
                             pFileName );
                    rcTemp = -1;
                    delete pFileName;
                    break;
                }

                outputType = BIN_DMA_OUTPUT;
                delete pFileName;
                argList[1] = 1;
            }
            else if(( std::string( argv[argNum] ) == "-obcf"  ) &&
                    ( 0 == argList[1]) )
            {
                string shortSelfRestFileName( argv[argNum + 1] );

                if( std::string::npos == shortSelfRestFileName.find( ".bin", 0 ) )
                {
                    rcTemp = -1;
                    fprintf( g_pErrTrace, "\n ERR:.bin extension expected in SR output file");
                    break;
                }

                badArg  = 0;
                fpImageOutBin = fopen( argv[argNum + 1], "w+" );

                if( !fpImageOutBin )
                {
                    fprintf( g_pErrTrace, "\nERR:could not open the output file %s\n",
                             argv[argNum + 1] );
                    printf( "\nCould not open the outputfile %s\n", argv[argNum + 1] );
                    rcTemp = -1;
                    break;
                }

                outputType = SELF_REST_BIN_APPEND_CPMR_OUTPUT;
                argList[1] = 1;
            }
            else if(( std::string( argv[argNum] ) == "-obs"  ) &&
                    ( 0 == argList[1]) )
            {
                string shortSelfRestFileName( argv[argNum + 1] );

                if( std::string::npos == shortSelfRestFileName.find( ".bin", 0 ) )
                {
                    rcTemp = -1;
                    fprintf( g_pErrTrace, "\n ERR:.bin extension expected in SR output file" );
                    printf( "\nMissing 'bin' extension in output file name\n" );
                    break;
                }

                badArg  = 0;
                fpImageOutBin = fopen( argv[argNum + 1], "w+" );

                if( !fpImageOutBin )
                {
                    fprintf( g_pErrTrace, "\nERR:could not open the output file %s\n",
                             argv[argNum + 1] );
                    printf( "\nCould not open the output file %s\n", argv[argNum + 1] );
                    rcTemp = -1;
                    break;
                }

                outputType = SELF_REST_BIN_OUTPUT;
                argList[1] = 1;
            }

            if(( std::string(argv[argNum]) == "-r" ) && ( 0 == argList[2]))
            {
                badArg  = 0;
                fpRegInput = fopen( argv[argNum + 1], "r" );

                if(!fpRegInput )
                {
                    fprintf( g_pErrTrace, "\nERR:could not open register description file");
                    printf( "\nERR:could not open register description file\n" );
                    rcTemp = -1;
                    break;
                }

                argList[2] = 1;
            }

            if(( std::string(argv[argNum]) == "-f" ) && ( 0 == argList[3] ))
            {
                badArg  = 0;

                if( std::string(argv[argNum + 1]) == "fused" )
                {
                    fuseMode = true;
                }
                else if( std::string(argv[argNum + 1]) == "unfused" )
                {
                    fuseMode = false;
                }
                else
                {
                    fprintf( g_pErrTrace, "\nERR: Unsupported option for fused mode setting");
                    printf( "\nUnsupported option\n" );
                    rcTemp = -1;
                    break;
                }

                argList[3] = 1;
            }

            if( badArg )
            {
                rcTemp = -1;
                fprintf(g_pErrTrace, "\nERR:unexpected argument");
                printf("\nunexpected argument %s %s\n", argv[argNum], argv[argNum + 1]);
                break;
            }

            argNum++;
            argNum++;

        }// whileargv[argNum]

        if( rcTemp )
        {
            printToolHelp();
            printErrorHint( argList );
            fprintf(g_pErrTrace, "\nERR: exit due to bad inputs");
            break;
        }

        pfakeHomer = (char*)malloc( STOP_IMAGE_TEST_SIZE );
        uint32_t* ptempHomer    =   (uint32_t*) pfakeHomer;
        uint32_t count          =   0;
        fseek( fpImageIn, 0, SEEK_END );
        uint32_t inputBinSize   =   ftell( fpImageIn );
        rewind(fpImageIn);
        fprintf(g_pErrTrace, "\n Input binary size 0x%08x", inputBinSize );

        if( SELF_REST_BIN_APPEND_CPMR_OUTPUT == outputType )
        {
            count = fread( (uint8_t*) pfakeHomer, sizeof(uint8_t), inputBinSize,
                           fpImageIn );
            fprintf( g_pErrTrace, "\nread 0x%08x bytes from input SR file. File size 0x%08x",
                     count, inputBinSize );
            populateFakeCpmr( pfakeHomer, fuseMode );
            fwrite( pfakeHomer, sizeof(uint8_t), count , fpImageOutBin );
            break;
        }

        fseek( fpRegInput, 0, SEEK_END );
        uint32_t regInputSize = ftell( fpRegInput );
        rewind (fpRegInput);
        char* pRegInput = (char*) malloc(regInputSize);
        fread ( pRegInput, sizeof(char), regInputSize, fpRegInput );
        string testHomerDesc(pRegInput, regInputSize );
        uint32_t cpuRegEntryCnt = 0;
        int32_t posStart = 0;

        do
        {

            if( SR_INPUT == inputType )
            {
                count = fread( (pfakeHomer + TWO_MB), sizeof(uint8_t), SMF_SELF_RESTORE_CODE_SIZE, fpImageIn );
                fprintf( g_pErrTrace, "\nread 0x%08x bytes from CPMR bin filesize 0x%08x",
                         count, inputBinSize );
            }
            else
            {
                count = fread( ptempHomer, sizeof(uint8_t), inputBinSize, fpImageIn );
                fprintf( g_pErrTrace, "\nread 0x%08x bytes from HOMER bin", count );
            }

            initSelfRestoreRegion( pfakeHomer );
            populateFakeCpmr( ((uint8_t*)pfakeHomer + TWO_MB), fuseMode );

            rc = launchBasedOnCoreAndThread( pfakeHomer, testHomerDesc, fuseMode,
                                             posStart,  cpuRegEntryCnt );

            if(STOP_SAVE_FAIL == rc )
            {
                break;
            }

            posStart = 0;
            launchBasedOnPir( pfakeHomer, testHomerDesc, fuseMode, posStart,
                              cpuRegEntryCnt );
            fprintf( g_pErrTrace, "\n:PIR entry not found ");
            fprintf( g_pErrTrace, "\nCPU Register Restore entry: 0x%04x", cpuRegEntryCnt );
            posStart = 0;

            if( STOP_SAVE_FAIL == launchForScom( pfakeHomer, testHomerDesc, posStart ) )
            {
                fprintf( g_pErrTrace, "\nERR: failure in test input file parsing " );
            }

            if( pRegInput )
            {
                free( pRegInput );
                pRegInput = NULL;
            }
        }
        while( 0 );

        if(STOP_SAVE_FAIL == rc )
        {
            fprintf( g_pErrTrace, "\nERR:failure due to error in test case input " );
        }

        if( ( DMA_OUTPUT == outputType ) || ( BIN_DMA_OUTPUT == outputType ))
        {
            generateDmaOutput( pfakeHomer,
                               fpImageOutDma,
                               (outputType == BIN_DMA_OUTPUT) ? 0 : TWO_MB );
        }

        if( ( BIN_OUTPUT == outputType ) || ( BIN_DMA_OUTPUT == outputType ) )
        {
            if( pfakeHomer )
            {
                fwrite( pfakeHomer, sizeof(uint8_t), STOP_IMAGE_TEST_SIZE , fpImageOutBin );
            }
        }

        if( SELF_REST_BIN_OUTPUT == outputType )
        {
            if( pfakeHomer )
            {
                fwrite( pfakeHomer + TWO_MB, sizeof(uint8_t), SELF_RESTORE_BIN_SIZE, fpImageOutBin );
            }
        }
    }
    while(0);

    if( fpImageIn )
    {
        fclose(fpImageIn);
        fpImageIn = NULL;
    }

    if( fpImageOutDma )
    {
        fclose(fpImageOutDma);
        fpImageOutDma = NULL;
    }

    if( fpImageOutBin )
    {
        fclose(fpImageOutBin);
        fpImageOutBin = NULL;
    }

    if(fpRegInput)
    {
        fclose(fpRegInput);
        fpRegInput = NULL;
    }

    if( pfakeHomer )
    {
        free(pfakeHomer);
        pfakeHomer = NULL;
    }

    if( g_pErrTrace )
    {
        fclose(g_pErrTrace);
        g_pErrTrace = NULL;
    }

    return rc;
}


uint32_t launchBasedOnCoreAndThread( void* i_pfakeHomer,
                                     std::string& i_testHomerDesc, bool i_fuseMode,
                                     int32_t& o_posStart, uint32_t& o_cpuRegCount )
{
    using namespace stopImageSection;
    uint32_t rc = 0;
    uint32_t corePos = 0;
    uint32_t threadPos = 0;
    uint32_t posEnd = 0;
    bool allCores = false;
    bool allThread = false;
    uint32_t i_regName;
    uint64_t i_regData;
    uint64_t apiIteration = 0;

    fprintf( g_pErrTrace, "\n ENTER: launchBasedOnCoreAndThread" );

    do
    {
        const string& delimit = " \f\n\r\t\v";
        string keyWord;

        posEnd = i_testHomerDesc.find(":CORE", o_posStart );

        if( posEnd == (uint32_t) std::string::npos )
        {
            if( 0 == o_posStart )
            {
                fprintf( g_pErrTrace, "\n :CORE key word missing in test input" );
                corePos = posEnd;
            }

            break;
        }

        do
        {
            keyWord.empty();
            o_posStart = posEnd + 5;
            posEnd = i_testHomerDesc.find( ':', o_posStart );
            std::string keyWord = i_testHomerDesc.substr( o_posStart, posEnd - o_posStart );

            if( keyWord.find("ALL", 0 ) != std::string::npos )
            {
                fprintf( g_pErrTrace, "\ntest case for all cores" );
                allCores = true;
                break;
            }

            corePos = strtoull( keyWord.c_str(), NULL, 16 );

        }
        while(0);

        o_posStart = posEnd;
        keyWord.empty();

        if( !allCores )
        {
            posEnd = i_testHomerDesc.find( ":THREAD", o_posStart );

            if( posEnd == std::string::npos )
            {
                fprintf( g_pErrTrace, "\n :THREAD key word missing in test input" );
                threadPos = posEnd;
                break;
            }

            o_posStart = posEnd + 8;

            do
            {
                posEnd = i_testHomerDesc.find( ':', o_posStart );
                std::string keyWord = i_testHomerDesc.substr( o_posStart, posEnd - o_posStart );
                std::remove(keyWord.begin(), keyWord.end(), ' ' );

                if( keyWord.compare("ALL" ) == 0 )
                {
                    fprintf( g_pErrTrace, "\ntest case for all thread" );
                    allThread = true;
                    break;
                }

                threadPos = strtoull( keyWord.c_str(), NULL, 16 );
                apiIteration = 1;
                o_posStart = posEnd;

            }
            while(0);
        }

        fprintf( g_pErrTrace, "\n core :%d  thread: %d", corePos, threadPos );

        if( (threadPos > MAX_THREAD_EPM ) || (corePos > MAX_CORE_EPM ) )
        {
            fprintf( g_pErrTrace, "\nERR: invalid core id  or thread id ");
            rc = STOP_SAVE_FAIL;
            break;
        }

        keyWord.empty();
        posEnd = i_testHomerDesc.find(":SPR_NAME", o_posStart );

        if( posEnd == std::string::npos )
        {
            fprintf( g_pErrTrace, "\nERR:Incorect format: no SPR specifier" );
            rc = STOP_SAVE_FAIL;
            break;
        }

        o_posStart += 10;
        posEnd = i_testHomerDesc.find( ":", o_posStart);
        keyWord = i_testHomerDesc.substr( o_posStart, posEnd - o_posStart );
        keyWord = keyWord.substr( 0, keyWord.find_last_not_of( delimit ) + 1 );

        if ( g_sprMap.end() != g_sprMap.find( keyWord.c_str() ) )
        {
            i_regName = g_sprMap[keyWord.c_str()];
        }
        else
        {
            fprintf( g_pErrTrace, "\nregister not supported %s", keyWord.c_str() );
            break;
        }

        o_posStart = posEnd + 1 ;
        keyWord = i_testHomerDesc.substr( o_posStart, 8);
        std::remove(keyWord.begin(), keyWord.end(), ' ' );

        if( keyWord.compare("SPR_DATA") != 0 )
        {
            fprintf( g_pErrTrace, "\n ERR:Incorrect format: no SPR Data\n" );
            rc = STOP_SAVE_FAIL;
            break;
        }

        keyWord.empty();
        o_posStart += 9;
        posEnd = i_testHomerDesc.find( "\n", o_posStart );
        keyWord.empty();
        keyWord = i_testHomerDesc.substr( o_posStart, posEnd - o_posStart  );
        o_posStart = posEnd;
        i_regData = strtoull( keyWord.c_str(), NULL, 16 );

        if( allCores )
        {
            apiIteration = MAX_CORE_EPM * MAX_THREAD_EPM;
            corePos = 0;
            threadPos = 0;
        }
        else if( allThread )
        {
            apiIteration = MAX_THREAD_EPM;
            threadPos = 0;
        }

        uint8_t pirVal = 0;

        for( uint32_t itr = 0; itr < apiIteration; itr++ )
        {

            pirVal = 0;
            pirVal = (corePos / CORE_PER_QUAD) << CORE_PER_QUAD;
            corePos = corePos % CORE_PER_QUAD;

            switch( corePos )
            {
                case 0:
                    break;

                case 1:
                    if( i_fuseMode )
                    {
                        pirVal |= FUSED_CORE_BIT3;
                    }
                    else
                    {
                        pirVal |= FUSED_CORE_BIT1;
                    }

                    break;

                case 2:
                    pirVal |= FUSED_CORE_BIT0;
                    break;

                case 3:
                    if( i_fuseMode )
                    {
                        pirVal |= ( FUSED_CORE_BIT0 | FUSED_CORE_BIT3 );
                    }
                    else
                    {
                        pirVal |= (FUSED_CORE_BIT0 | FUSED_CORE_BIT1 );
                    }

                    break;
            }

            switch( threadPos )
            {
                case 0:
                    break;

                case 1:
                    if( i_fuseMode )
                    {
                        pirVal |= FUSED_CORE_BIT2;
                    }
                    else
                    {
                        pirVal |= FUSED_CORE_BIT3;
                    }

                    break;

                case 2:
                    if( i_fuseMode )
                    {
                        pirVal |= FUSED_CORE_BIT1;
                    }
                    else
                    {
                        pirVal |= FUSED_CORE_BIT2;
                    }

                    break;

                case 3:
                    if( i_fuseMode )
                    {
                        pirVal |= ( FUSED_CORE_BIT1 | FUSED_CORE_BIT2 );
                    }
                    else
                    {
                        pirVal |= ( FUSED_CORE_BIT2 | FUSED_CORE_BIT3);
                    }

                    break;
            }

            uint64_t tempPir = pirVal;
#if _LP64
            fprintf( g_pErrTrace,
                     "\n Calling proc_stop_save_cpureg: regName 0x%d register data 0x%016lx "
                     "PIR 0x%016lx", i_regName, i_regData, tempPir );
#else
            fprintf( g_pErrTrace,
                     "\n Calling proc_stop_save_cpureg: regName 0x%d register data 0x%016llx "
                     "PIR 0x%016llx", i_regName, i_regData, tempPir );
#endif
            rc = proc_stop_save_cpureg( i_pfakeHomer,
                                        (CpuReg_t)i_regName,
                                        i_regData,
                                        tempPir );

            if( rc )
            {
                fprintf( g_pErrTrace, "\nERR:proc_stop_save_cpureg failed RC %s",
                         g_stopErrCode[rc].c_str() );
                printf( "\n Failed to create SPR restore entries\n" );
                rc = -1;
                break;
            }

            corePos++;
            threadPos++;
            o_cpuRegCount++;
        }


    }
    while( corePos != std::string::npos );

    fprintf( g_pErrTrace, "\n EXIT: launchBasedOnCoreAndThread" );
    return rc;

}

///  @brief       Launches the tool based on PIR as input.
///  @param[in]   i_pfakeHomer      points to buffer presenting HOMER.
///  @param[in]   i_testHomerDesc   string containing register description.
///  @param[in]   i_fuseMode        fuse mode status.
///  @param[in]   o_startPos        last point in string searched for keyword.
///  @param[in]   o_cpuRegCount     number of CPU register entries found
uint32_t launchBasedOnPir( void* i_pfakeHomer, std::string&   i_testHomerDesc,
                           bool i_fuseMode,
                           int32_t& o_startPos,
                           uint32_t& o_cpuRegCount )
{
    using namespace stopImageSection;
    uint32_t rc = 0;
    const string& delimit = " \f\n\r\t\v";
    uint32_t pirPos = 0;
    uint32_t posEnd = 0;
    uint64_t i_pirVal = 0;
    uint32_t i_regName = 0;
    uint64_t i_regData = 0;
    fprintf( g_pErrTrace, "\n ENTER: launchBasedOnPir" );

    do
    {
        pirPos = i_testHomerDesc.find(":PIR", o_startPos );

        if( pirPos != (uint32_t)std::string::npos )
        {
            o_startPos = pirPos + 4;
            posEnd = i_testHomerDesc.find( ':', o_startPos );
            std::string keyWord = i_testHomerDesc.substr( o_startPos, posEnd - o_startPos );
            i_pirVal = strtoull( keyWord.c_str(), NULL, 16 );
            i_pirVal = i_pirVal ;

            o_startPos = posEnd + 1;
            keyWord.empty();
            keyWord = i_testHomerDesc.substr( o_startPos, 8);

            if( keyWord.compare("SPR_NAME") != 0 )
            {
                fprintf( g_pErrTrace, "\nERR:Incorect format: no SPR name " );
                rc = STOP_SAVE_FAIL;
                break;
            }

            o_startPos += 9;
            posEnd = i_testHomerDesc.find( ":", o_startPos);
            keyWord = i_testHomerDesc.substr( o_startPos, posEnd - o_startPos );
            keyWord = keyWord.substr( 0, keyWord.find_last_not_of( delimit ) + 1 );

            if ( g_sprMap.end() != g_sprMap.find( keyWord.c_str() ) )
            {
                i_regName = g_sprMap[keyWord.c_str()];
            }

            else
            {
                fprintf( g_pErrTrace, "\nERR:register not supported %s", keyWord.c_str() );
                rc = STOP_SAVE_FAIL;
                break;
            }

            o_startPos = posEnd + 1 ;
            keyWord = i_testHomerDesc.substr( o_startPos, 8);
            std::remove(keyWord.begin(), keyWord.end(), ' ' );

            if( keyWord.compare("SPR_DATA") != 0 )
            {
                fprintf( g_pErrTrace, "\nERR:Incorrect format: no SPR DataIncorrect format" );
                rc = STOP_SAVE_FAIL;
                break;
            }

            o_startPos += 9;
            posEnd = i_testHomerDesc.find( "\n", o_startPos );
            keyWord.empty();
            keyWord = i_testHomerDesc.substr( o_startPos, posEnd - o_startPos  );
            o_startPos = posEnd;
            i_regData = strtoull( keyWord.c_str(), NULL, 16 );

#if _LP64
            fprintf( g_pErrTrace,
                     "\n Calling proc_stop_save_cpureg: regName 0x%d register data 0x%016lx "
                     "PIR 0x%016lx", i_regName, i_regData, i_pirVal );
#else
            fprintf( g_pErrTrace,
                     "\n Calling proc_stop_save_cpureg: regName 0x%d register data 0x%016llx "
                     "PIR 0x%016llx", i_regName, i_regData, i_pirVal );
#endif
            rc = proc_stop_save_cpureg( i_pfakeHomer,
                                        (CpuReg_t)i_regName,
                                        i_regData,
                                        i_pirVal );
            o_cpuRegCount++;

            if( rc )
            {
                fprintf( g_pErrTrace, "\nERR:proc_stop_save_cpureg failed RC 0x%s ",
                         g_stopErrCode[rc].c_str() );
                rc = -1;
                break;
            }
        }

    }
    while(pirPos != (uint32_t)std::string::npos);

    fprintf( g_pErrTrace, "\n EXIT: launchBasedOnPir" );
    return rc;
}

///  @brief       generates the output image file in DMA format.
///  @param[in]   pfakeHomer  points to buffer presenting HOMER.
///  @param[in]   fpImageOut  points to output image file.
///  @param[in]   i_offSet    offset to the start of HOMER.

void generateDmaOutput( void* pfakeHomer, FILE* fpImageOut, uint32_t i_offSet )
{
    using namespace stopImageSection;

    do
    {
        fprintf( g_pErrTrace, "\n generating output Image in DMA format");

        if(!pfakeHomer)
        {
            fprintf( g_pErrTrace, "\n pointer to HOMER buffer is invalid");
            break;
        }

        if( !fpImageOut )
        {
            fprintf( g_pErrTrace, "\n ERR:invalid pointer to output image file");
            break;
        }

        uint32_t* pHomerDword = (uint32_t*) ((uint8_t*)pfakeHomer + i_offSet );
        uint32_t homerDWordSz = ( (((4 * ONE_MB) - i_offSet )) >> 3);

        for(uint32_t dWordCnt = 0; dWordCnt < homerDWordSz; dWordCnt++ )
        {
            fprintf( fpImageOut, "%X", 0xd );
            fprintf( fpImageOut, "%c", ' ' );
            fprintf( fpImageOut, "%08X", i_offSet );
            fprintf( fpImageOut, "%c", ' ' );
            fprintf( fpImageOut, "0x%08x", htobe32(*pHomerDword ));
            fprintf( fpImageOut, "%08x", htobe32(*(pHomerDword + 1) ));
            fprintf( fpImageOut, "%c", '\n' );
            pHomerDword++;
            pHomerDword++;
            i_offSet += 8;
        }

        fprintf( g_pErrTrace, "\n generation of output Image: SUCCESS");

    }
    while(0);
}

/// @brief      launches  STOP API tool for cache chiplet.
/// @param[in]  i_pfakeHomer        file in which fake HOMER is to be written.
/// @param[out] i_testHomerDesc     string containing test input description.
/// @param[in]  i_posStart          start earch position in string.
/// @return     SUCCESS is function succeeds else error code.
uint32_t launchForScom( void* i_pfakeHomer, string& i_testHomerDesc,
                        int32_t& o_startPos )
{
    using namespace stopImageSection;
    uint32_t rc = SUCCESS;

    do
    {
        const string& delimit = " \f\n\r\t\v";
        uint32_t chipletPos = 0;
        uint32_t posEnd = 0;
        uint32_t scomAddress = 0;
        uint64_t scomData = 0;
        fprintf( g_pErrTrace, "\n ENTER: launchForScom" );

        do
        {
            chipletPos = i_testHomerDesc.find(":SCOM_ADDRESS", o_startPos );

            if( chipletPos != (uint32_t)std::string::npos )
            {
                o_startPos = chipletPos + 14;
                posEnd = i_testHomerDesc.find( ':', o_startPos );
                string keyWord = i_testHomerDesc.substr( o_startPos, posEnd - o_startPos );
                o_startPos = posEnd;
                keyWord = keyWord.substr( 0, keyWord.find_last_not_of( delimit ) + 1 );


                if ( keyWord.size() < 10 )
                {
                    fprintf( g_pErrTrace, "\nERR:SCOM address format  not supported %s",
                             keyWord.c_str() );
                    rc = STOP_SAVE_FAIL;
                    break;
                }

                if( std::string::npos == (keyWord.find( "0x", 0 ) )
                    && (std::string::npos == keyWord.find( "0X", 0 )))
                {
                    fprintf( g_pErrTrace, "\n 0x expected in SCOM Address i.e. 0xAABBCCDD" );
                    rc = STOP_SAVE_FAIL;
                    break;
                }

                scomAddress = strtoull( keyWord.c_str(), NULL, 16 );

                posEnd = i_testHomerDesc.find( ":SCOM_DATA", o_startPos);

                if( (uint32_t)std::string::npos == posEnd )
                {
                    fprintf( g_pErrTrace,
                             "\nERR:SCOM Data:\n" );
                    rc = STOP_SAVE_FAIL;
                    break;
                }

                o_startPos = posEnd + 11;

                posEnd = i_testHomerDesc.find( ":", o_startPos );
                keyWord = i_testHomerDesc.substr( o_startPos, posEnd - o_startPos  );

                if( ( std::string::npos == keyWord.find("0x", 0 ) ) &&
                    ( std::string::npos == keyWord.find("0X", 0 )) )
                {
                    fprintf( g_pErrTrace, "\n ERR: 0x or 0X expected in SCOM Data" );
                    rc = STOP_SAVE_FAIL;
                    break;
                }

                o_startPos = posEnd;
                scomData = strtoull( keyWord.c_str(), NULL, 16 );

                posEnd = i_testHomerDesc.find( ":SCOM_OP", o_startPos);

                if( (uint32_t) std::string::npos == posEnd )
                {
                    fprintf( g_pErrTrace,
                             "\nERR:Incorrect format: no SCOM OP Incorrect format:\n" );
                    rc = STOP_SAVE_FAIL;
                    break;
                }

                o_startPos = posEnd + 9;

                posEnd = i_testHomerDesc.find( ":", o_startPos );
                keyWord = i_testHomerDesc.substr( o_startPos, posEnd - o_startPos  );
                o_startPos = posEnd;
                keyWord = keyWord.substr( 0, keyWord.find_last_not_of( delimit ) + 1 );
                uint32_t scomOperation = g_scomOp[keyWord.c_str()];

                posEnd = i_testHomerDesc.find( ":SCOM_AREA", o_startPos );

                if( (uint32_t) std::string::npos == posEnd )
                {
                    fprintf( g_pErrTrace, "\nERR:Incorect format: no SCOM AREA specified" );
                    rc = STOP_SAVE_FAIL;
                    break;
                }

                o_startPos = posEnd + 11;

                posEnd = i_testHomerDesc.find( "\n", o_startPos );
                keyWord = i_testHomerDesc.substr( o_startPos, posEnd - o_startPos );
                keyWord = keyWord.substr( 0, keyWord.find_last_not_of( delimit ) + 1 );
                uint32_t scomArea = g_scomArea[keyWord.c_str()];
#ifdef _LP64
                fprintf( g_pErrTrace,
                         "\n Calling proc_stop_save_scom with SCOM Address 0x%08x SCOM Data 0x%016lx "
                         "SCOM Op 0x%08x SCOM Area 0x%08x",
                         scomAddress, scomData, scomOperation, scomArea );
#else
                fprintf( g_pErrTrace,
                         "\n Calling proc_stop_save_scom with SCOM Address 0x%08x SCOM Data 0x%016llx "
                         "SCOM Op 0x%08x SCOM Area 0x%08x",
                         scomAddress, scomData, scomOperation, scomArea );

#endif
                rc = proc_stop_save_scom( i_pfakeHomer,
                                          scomAddress,
                                          scomData,
                                          (ScomOperation_t) scomOperation,
                                          (ScomSection_t ) scomArea );

                if( rc )
                {
                    fprintf( g_pErrTrace, "\nERR:proc_stop_save_scom failed RC 0x%s \n",
                             g_stopErrCode[rc].c_str() );
                    rc = STOP_SAVE_FAIL;
                    break;
                }
            }

        }
        while(chipletPos != (uint32_t)std::string::npos);

        fprintf( g_pErrTrace, "\n EXIT: launchForScom" );

    }
    while(0);

    return rc;
}


void printToolHelp()
{
    puts("\nproc_stop_api_tool accepts Self Restore or full HOMER as binary input and edits"
         "\nits CPU and SCOM register restoration part. Syntax for launching the tool : \n"
         "\n./proc_stop_api_tool -r reg file -is input file name -ob output file name -f fuse status \n\n"
         "\n\t-is   input file name    file containing self-restore region binary e.g proc_sr.bin\n"
         "\n\t-ih   input file name    file containing input HOMER binary            \n"
         "\n\t-ob   output file name   output binary file which tool writes to.\n"
         "\n\t-od   output file name   output file in which image is written in DMA form \n"
         "\n\t-obs  output file name   output file in which only self restore image is written in bin form \n"
         "\n\t-obcf output file name   output file in which first 256B of self restore image is populated with\n"
         "\n\t                         CPMR header\n"
         "\n\t-obd  output file name   output file in binary form. Two output files are\n"
         "\n\t                        created\n"
         "\n\t-odb output file name   output in DMA as well as binary form. Two output files are\n"
         "\n\t                        created\n"
         "\n\t-f  fuse mode           core fuse mode status( fused or unfused)"
         "\n\t-r  reg file            describes the SPR and SCOM registers and restore "
         "\n\t                        values associated.\n\n"
         "\n\tNote: STOP API Tool accepts binary as input and outputs image in DMA or binary format."
         "\n\tFor option -odb or -obd, tool just expects file name without any extension e.g."
         "\n\tproc_homer_out" );
    printf("\nVersion %.2f \n", TOOL_VERSION );
}

void printErrorHint( uint8_t* i_argList )
{
    using namespace stopImageSection;

    for( uint32_t i = 0; i < MAX_ARGS; i++ )
    {
        if( 0 == i_argList[i] )
        {
            switch( i )
            {
                case 0:
                    printf("\n\tCheck -ix ??");
                    break;

                case 1:
                    printf("\n\tCheck -oxx ??");
                    break;

                case 2:
                    printf("\n\tCheck -r ??");
                    break;

                case 3:
                    printf("\n\tCheck -f ??");
                    break;
            }
        }
    }
}

void populateFakeCpmr ( void* i_pfakeCpmr, bool i_fuseStatus )
{
    using namespace hcodeImageBuild;
    time_t buildTime        =   time(NULL);
    struct tm* headerTime   =   localtime(&buildTime);
    uint64_t* i_cpmrWord    =   (uint64_t*) i_pfakeCpmr;
    uint64_t tempDwWord     =   stopImageSection::ATTN_OPCODE;
    tempDwWord = tempDwWord << 32;
    tempDwWord |= stopImageSection::ATTN_OPCODE;
    tempDwWord = htobe64( tempDwWord);
    memcpy( i_cpmrWord, &tempDwWord, sizeof(uint64_t) );
    i_cpmrWord++;
    tempDwWord = htobe64(CPMR_MAGIC_NUMBER);
    memcpy( i_cpmrWord, &tempDwWord, sizeof(uint64_t) );
    i_cpmrWord++;
    tempDwWord = ((headerTime->tm_year + 1900) << 16) |
                 ((headerTime->tm_mon + 1) << 8) |
                 (headerTime->tm_mday);
    tempDwWord  = tempDwWord << 32;
    tempDwWord |= 0x0001;
    tempDwWord = htobe64(tempDwWord);
    memcpy( i_cpmrWord, &tempDwWord, sizeof(uint64_t) );
    i_cpmrWord++;
    tempDwWord = i_fuseStatus ? uint32_t(FUSED_CORE_MODE) : uint32_t(NONFUSED_CORE_MODE);
    tempDwWord = htobe64(tempDwWord);
    memcpy( i_cpmrWord, &tempDwWord, sizeof(uint64_t) );
    fprintf( g_pErrTrace, "\nPopulated CPMR Header of HOMER\n" );
}


void initSelfRestoreRegion( void* i_fakeHomer )
{
    hcodeImageBuild::Homerlayout_t*  l_pChipHomer    =   ( hcodeImageBuild::Homerlayout_t* )i_fakeHomer;
    uint32_t l_fillBlr          =   htobe32(SELF_RESTORE_BLR_INST);
    uint32_t l_fillAttn         =   htobe32(CORE_RESTORE_PAD_OPCODE);
    uint32_t l_byteCnt          =   0;
    uint32_t* l_pSelfRestLoc   =
        (uint32_t*)&l_pChipHomer->iv_cpmrRegion.iv_selfRestoreRegion.iv_coreSelfRestore[0];

    hcodeImageBuild::SmfSprRestoreRegion_t* l_pSaveRestore   =
        (hcodeImageBuild::SmfSprRestoreRegion_t*)&l_pChipHomer->iv_cpmrRegion.iv_selfRestoreRegion.iv_coreSelfRestore[0];

    while( l_byteCnt < SMF_SELF_RESTORE_CORE_REGS_SIZE )
    {
        memcpy( l_pSelfRestLoc, &l_fillAttn, sizeof( uint32_t ) );
        l_byteCnt += 4;
        l_pSelfRestLoc++;
    }

    //Initialize Core SPR and Thread SPR start boundary with BLR instruction.

    for( size_t l_coreId = 0; l_coreId < MAX_CORES_PER_CHIP; l_coreId++ )
    {
        memcpy( (uint32_t*)&l_pSaveRestore->iv_coreRestoreArea[0], &l_fillBlr, sizeof(uint32_t) );

        for( size_t l_threadId = 0; l_threadId < MAX_THREADS_PER_CORE; l_threadId++ )
        {
            memcpy( &l_pSaveRestore->iv_threadRestoreArea[l_threadId][0],
                    &l_fillBlr,
                    sizeof(uint32_t) );
        }

        l_pSaveRestore++;
    }
}
