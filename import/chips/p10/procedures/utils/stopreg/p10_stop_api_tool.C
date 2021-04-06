/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/utils/stopreg/p10_stop_api_tool.C $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2021                                                    */
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
#include <fapi2.H>
#include <fapi2ClientCapi.H>
#include <ecmdDefines.H>
#include <ecmdReturnCodes.H>
#include <ecmdStructs.H>
#include <ecmdDataBuffer.H>
#include <croStructs.H>
#include <croClientCapi.H>

//#define __DEBUG_

///
/// @file   p10_stop_api_tool.C
/// @brief  edits CPMR region of full or partial HOMER in binary form.
///
// *HWP HW Owner    :  Greg Still <stillgs@us.ibm.comprList
// *HWP FW Owner    :  Prem Shanker Jha <premjha2@in.ibm.com>
// *HWP Team        :  PM
// *HWP Level       :  2
// *HWP Consumed by :  CRO

using namespace std;
using namespace fapi2;

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
    MAX_ARGS            = 7,
    CPMR_EDIT_INPUTS    = 7,
    MAX_SPR_NAME_SIZE   = 50,
    BAD_INSUFF_ARGS     = 1,
    INCOM_ARG_SET       = 2,
    BAD_INPUT_FILE      = 3,
    BAD_OUTPUT_FILE     = 4,
    INTERNAL_ERROR      = 5,
};

enum StopApiType
{
    STOP_API_SPR  =  1,
    STOP_API_SCOM =  2,
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
    SPR_RESTORE_LIVE             = 0x08,
    SCOM_RESTORE_LIVE            = 0x09,
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

struct SprProfile
{
    char iv_sprName[stopImageSection::MAX_SPR_NAME_SIZE];
    uint32_t iv_sprId;
    uint32_t iv_corePos;
    uint32_t iv_threadPos;
    uint64_t iv_sprData;
    SprProfile():
        iv_sprId( 0 ),
        iv_corePos( 0 ),
        iv_threadPos( 0 ),
        iv_sprData( 0 )
    {
        memset( iv_sprName, 0x00, stopImageSection::MAX_SPR_NAME_SIZE );
    }
};

struct ScomProfile
{
    uint32_t iv_scomAddress;
    uint64_t iv_scomData;
    uint32_t iv_sectn;
    uint32_t iv_scomOp;
};

struct ProcDetails
{
    uint32_t iv_nodePos;
    uint32_t iv_procPos;
};

struct ArgInfo
{
    uint8_t iv_inSelfBin;
    uint8_t iv_inHomerBin;
    uint8_t iv_fusedStatus;
    uint8_t iv_regDesc;
    uint8_t iv_opLive;
    uint8_t iv_editFuseMode;
    uint8_t iv_inputType;
    uint8_t iv_outputType;
    uint16_t iv_nodeValid;
    uint16_t iv_nodePos;
    uint16_t iv_procValid;
    uint16_t iv_procPos;
    uint32_t iv_fusedMode;
    std::string iv_regFileName;
    std::string iv_inHomerFileName;
    std::string iv_inSelfFileName;
    std::string iv_outFileName;
    FILE* iv_inFpSelfRestore;
    FILE* iv_inFpReg;
    FILE* iv_inFpHomer;
    FILE* iv_outFpBin;
    FILE* iv_outFpDma;

    ArgInfo() :
        iv_inSelfBin( 0),
        iv_inHomerBin( 0 ),
        iv_fusedStatus( 0 ),
        iv_regDesc( 0 ),
        iv_opLive( 0 ),
        iv_regFileName( "" ),
        iv_inHomerFileName( "" ),
        iv_inSelfFileName( "" ),
        iv_outFileName( "" ),
        iv_inFpSelfRestore( NULL ),
        iv_inFpReg( NULL ),
        iv_inFpHomer( NULL ),
        iv_outFpBin( NULL ),
        iv_outFpDma( NULL )
    { }
};


std::map<uint32_t, bool> g_sprRegisterTest;
std::map< string , uint32_t > g_sprMap;
map< string , uint32_t > g_scomOp;
map< string , uint32_t > g_scomArea;
map< uint32_t, string > g_stopErrCode;

} //namespace stopImageSection


vector< stopImageSection::SprProfile > g_sprList;
vector< stopImageSection::ScomProfile > g_scomList;
const float TOOL_VERSION = 1.10;
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
void populateFakeCpmr( void* pfakeCpmr, bool i_fuseMode );
void initSelfRestoreRegion( void* pfakeHomer );
void dumpSprRestoreData( );
uint32_t launchSprLive( std::string& i_testHomerDesc, bool i_fuseMode, int32_t& o_posStart );
uint32_t launchForScomLive( string& i_testHomerDesc,  int32_t& o_startPos );
uint32_t editHomer ( stopImageSection::ProcDetails& i_procDetails, uint32_t i_fusedCoreMode,
                     stopImageSection::StopApiType i_apiType );
uint32_t getPirValue( uint32_t i_corePos, uint32_t i_threadPos, uint32_t i_fusedCoreMode );
uint32_t updateSprBin( ecmdChipTarget& pu_target, ecmdDataBuffer& i_ecmdSprBuf,
                       uint32_t i_fusedCoreMode, uint64_t i_homerBase );
uint32_t analyzeArgs( int argc, char* argv[], stopImageSection::ArgInfo& i_argInfo );
uint32_t processArgs( stopImageSection::ArgInfo& i_argInfo );

/*
 * @brief Entry point of p10_stop_api_tool
 * @note syntax for launch of tool
 * ./p10_stop_api_tool -r p10_HOMER_input -i inputBinary.bin -o outPutFile.dma | outputFile.bin -f fused | unfused
*/

int main( int argc, char* argv[])
{
    using namespace stopImageSection;
    int   rc = SUCCESS;
    char* pfakeHomer    =   NULL;
    bool fuseMode       =   false;
    ArgInfo l_argInfo;
    ProcDetails l_procInfo;
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

        uint32_t count = 0;
        string testHomerDesc;
        uint32_t cpuRegEntryCnt = 0;
        int32_t posStart = 0;

        rc = analyzeArgs( argc, argv, l_argInfo );

        if( rc )
        {
            printf( "\nAfter analyzeArgs " );
            break;
        }

        if( l_argInfo.iv_inFpReg )
        {
            printf( "\nBefore SEEK" );
            fseek( l_argInfo.iv_inFpReg, 0, SEEK_END );
            uint32_t regInputSize = ftell( l_argInfo.iv_inFpReg );
            rewind ( l_argInfo.iv_inFpReg );
#ifdef __DEBUG_
            printf( "\nProcessed Reg File  :  %d", regInputSize );
#endif
            char* pRegInput =  (char*) malloc( regInputSize );

            if( pRegInput )
            {
                count  =  fread ( pRegInput, sizeof(char), regInputSize, l_argInfo.iv_inFpReg );
#ifdef __DEBUG_
                printf( "\nProcessed Reg File  :  %d", count );
#endif
                string l_tmpStr( pRegInput, regInputSize );
                testHomerDesc  =  l_tmpStr;
            }
            else
            {
                rc = INTERNAL_ERROR;
                break;
            }

            if( pRegInput )
            {
                free( pRegInput );
                pRegInput = NULL;
            }

            if( l_argInfo.iv_inFpReg )
            {
                fclose( l_argInfo.iv_inFpReg );
                l_argInfo.iv_inFpReg = NULL;

            }
        }

        if(  SPR_RESTORE_LIVE == l_argInfo.iv_outputType )
        {
            fprintf( g_pErrTrace, "\nLive Update Of SPR Region HOMER\n" );
            launchSprLive( testHomerDesc, fuseMode, posStart );
            l_procInfo.iv_nodePos  =  l_argInfo.iv_nodePos;
            l_procInfo.iv_procPos  =  l_argInfo.iv_procPos;
            editHomer( l_procInfo, fuseMode, stopImageSection::STOP_API_SPR );
            break;
        }

        if(  SCOM_RESTORE_LIVE == l_argInfo.iv_outputType )
        {
            fprintf( g_pErrTrace, "\nLive Update Of SCOM Region of HOMER\n" );
            posStart = 0;
            launchForScomLive( testHomerDesc, posStart );
            l_procInfo.iv_nodePos  =  l_argInfo.iv_nodePos;
            l_procInfo.iv_procPos  =  l_argInfo.iv_procPos;
            editHomer( l_procInfo, fuseMode, stopImageSection::STOP_API_SCOM );
            break;
        }

        pfakeHomer = (char*)malloc( STOP_IMAGE_TEST_SIZE );

        if( !pfakeHomer )
        {
            printf( "\nInternal Memory Error" );
            rc = INTERNAL_ERROR;
            break;
        }

        uint32_t* ptempHomer    =   (uint32_t*) pfakeHomer;
        FILE* l_fpInputBin     =   NULL;

        if( l_argInfo.iv_inSelfBin )
        {
            l_fpInputBin = l_argInfo.iv_inFpSelfRestore;
        }
        else
        {
            l_fpInputBin = l_argInfo.iv_inFpHomer;
        }

        fseek( l_fpInputBin, 0, SEEK_END );
        uint32_t inputBinSize   =   ftell( l_fpInputBin );
        rewind( l_fpInputBin );
        fprintf(g_pErrTrace, "\n Input binary size 0x%08x", inputBinSize );

        if( SELF_REST_BIN_APPEND_CPMR_OUTPUT == l_argInfo.iv_outputType )
        {
            count = fread( (uint8_t*) pfakeHomer, sizeof(uint8_t), inputBinSize,
                           l_fpInputBin );
            fprintf( g_pErrTrace, "\nread 0x%08x bytes from input SR file. File size 0x%08x",
                     count, inputBinSize );

            populateFakeCpmr( pfakeHomer, fuseMode );

            fwrite( pfakeHomer, sizeof(uint8_t), count , l_argInfo.iv_outFpBin );

            break;
        }

        do
        {
            if( SR_INPUT == l_argInfo.iv_inputType )
            {
                count = fread( (pfakeHomer + TWO_MB), sizeof(uint8_t), SMF_SELF_RESTORE_CODE_SIZE, l_fpInputBin );
                fprintf( g_pErrTrace, "\nread 0x%08x bytes from CPMR bin filesize 0x%08x",
                         count, inputBinSize );
            }
            else
            {
                count = fread( ptempHomer, sizeof(uint8_t), inputBinSize, l_fpInputBin );
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
        }
        while( 0 );

        if( STOP_SAVE_FAIL == rc )
        {
            fprintf( g_pErrTrace, "\nERR:failure due to error in test case input " );
        }

        if( ( DMA_OUTPUT == l_argInfo.iv_outputType ) || ( BIN_DMA_OUTPUT == l_argInfo.iv_outputType ))
        {
            generateDmaOutput( pfakeHomer,
                               l_argInfo.iv_outFpDma,
                               (l_argInfo.iv_outputType == BIN_DMA_OUTPUT) ? 0 : TWO_MB );
#ifdef __DEBUG_
            printf( "\nDMA Output Written" );
#endif
        }

        if( ( BIN_OUTPUT == l_argInfo.iv_outputType ) || ( BIN_DMA_OUTPUT == l_argInfo.iv_outputType ) )
        {
            if( pfakeHomer )
            {
                fwrite( pfakeHomer, sizeof(uint8_t), STOP_IMAGE_TEST_SIZE , l_argInfo.iv_outFpBin );
            }

#ifdef __DEBUG_
            printf( "\nBin Output Written" );
#endif
        }

        if( SELF_REST_BIN_OUTPUT == l_argInfo.iv_outputType )
        {
            if( pfakeHomer )
            {
                fwrite( pfakeHomer + TWO_MB, sizeof(uint8_t), SELF_RESTORE_BIN_SIZE, l_argInfo.iv_outFpBin );
            }

#ifdef __DEBUG_
            printf( "\nSR Bin Output Written" );
#endif
        }

        l_fpInputBin = NULL;
    }
    while(0);

    if( l_argInfo.iv_inFpSelfRestore )
    {
        fclose( l_argInfo.iv_inFpSelfRestore );
        l_argInfo.iv_inFpSelfRestore  = NULL;
    }

    if( l_argInfo.iv_inFpHomer )
    {
        fclose( l_argInfo.iv_inFpHomer );
        l_argInfo.iv_inFpHomer = NULL;
    }

    if( l_argInfo.iv_outFpBin )
    {
        fclose( l_argInfo.iv_outFpBin );
        l_argInfo.iv_outFpBin = NULL;
    }


    if( l_argInfo.iv_outFpDma )
    {
        fclose( l_argInfo.iv_outFpDma );
        l_argInfo.iv_outFpDma = NULL;
    }

    if( pfakeHomer )
    {
        free( pfakeHomer );
        pfakeHomer = NULL;
    }

    if( g_pErrTrace )
    {
        fclose(g_pErrTrace);
        g_pErrTrace = NULL;
    }

    return rc;
}

//-------------------------------------------------------------------------------------------------------

uint32_t getPirValue( uint32_t i_corePos, uint32_t i_threadPos, uint32_t i_fusedCoreMode )
{
    using namespace stopImageSection;
    uint32_t l_pirValue  = 0;
    l_pirValue = 0;
    l_pirValue = (i_corePos / CORE_PER_QUAD) << CORE_PER_QUAD;
    i_corePos  = i_corePos % CORE_PER_QUAD;

    switch( i_corePos )
    {
        case 0:
            break;

        case 1:
            if( i_fusedCoreMode )
            {
                l_pirValue |= FUSED_CORE_BIT3;
            }
            else
            {
                l_pirValue |= FUSED_CORE_BIT1;
            }

            break;

        case 2:
            l_pirValue |= FUSED_CORE_BIT0;
            break;

        case 3:
            if( i_fusedCoreMode )
            {
                l_pirValue |= ( FUSED_CORE_BIT0 | FUSED_CORE_BIT3 );
            }
            else
            {
                l_pirValue |= (FUSED_CORE_BIT0 | FUSED_CORE_BIT1 );
            }

            break;
    }

    switch( i_threadPos )
    {
        case 0:
            break;

        case 1:
            if( i_fusedCoreMode )
            {
                l_pirValue |= FUSED_CORE_BIT2;
            }
            else
            {
                l_pirValue |= FUSED_CORE_BIT3;
            }

            break;

        case 2:
            if( i_fusedCoreMode )
            {
                l_pirValue |= FUSED_CORE_BIT1;
            }
            else
            {
                l_pirValue |= FUSED_CORE_BIT2;
            }

            break;

        case 3:
            if( i_fusedCoreMode )
            {
                l_pirValue |= ( FUSED_CORE_BIT1 | FUSED_CORE_BIT2 );
            }
            else
            {
                l_pirValue |= ( FUSED_CORE_BIT2 | FUSED_CORE_BIT3);
            }

            break;
    }

    return l_pirValue;
}

//-------------------------------------------------------------------------------------------------------

uint32_t updateScomBin( ecmdChipTarget& pu_target, ecmdDataBuffer& i_ecmdSprBuf,
                        uint32_t i_fusedCoreMode, uint64_t i_homerBase )
{
    using namespace stopImageSection;
    uint32_t l_rc        =  stopImageSection::SUCCESS;
    uint8_t* l_pScomMem =  (uint8_t*)malloc( i_ecmdSprBuf.getByteLength() ) ;

    fprintf(g_pErrTrace, "\nENTER: updateScomBin");

    do
    {
        if( !l_pScomMem )
        {
            printf( "\nMemory Failure" );
            l_rc = -1;
            break;
        }

        memset( l_pScomMem, 0x00, i_ecmdSprBuf.getByteLength() );
        fprintf(g_pErrTrace, "\nBuffer Allocated  And Init To 0");

        l_rc = i_ecmdSprBuf.extract( l_pScomMem, 0, ( SELF_SAVE_RESTORE_REGION_SIZE + SCOM_RESTORE_SIZE_TOTAL )  * 8 );

        if( ECMD_DBUF_SUCCESS != l_rc )
        {
            printf( "\nFailed To Extract ecmdBuffer to a regular buffer" );
            break;
        }

#ifdef __DEBUG_
        printf( "\nSize of SCOM List 0x%08x (%d)",  (uint32_t) g_scomList.size(),
                (uint32_t) g_scomList.size() );
        printf( "\nBuffer Check Word 0x%016lx", htobe64(*(uint64_t*)(l_pScomMem)) );
        printf( "\nBuffer Check Word 0x%016lx", htobe64(*(uint64_t*)(l_pScomMem + 8)) );
#endif

        for( auto scom : g_scomList )
        {
            l_rc  =  proc_stop_save_scom( l_pScomMem, scom.iv_scomAddress,
                                          scom.iv_scomData, ( ScomOperation_t) scom.iv_scomOp,
                                          ( ScomSection_t )scom.iv_sectn );

            fprintf( g_pErrTrace, "\nproc_stop_save_scom Called For SCOM Address 0x%08x SCOM Data"
                     "0x%016lx SCOM Op 0x%08x SCOM Sectn 0x%08x RC 0x%08x",
                     scom.iv_scomAddress, scom.iv_scomData, scom.iv_scomOp,
                     scom.iv_sectn, l_rc );

            if( l_rc )
            {
                fprintf( g_pErrTrace, "\nproc_stop_save_scom Failed " );
                break;
            }
        }

        i_ecmdSprBuf.memCopyIn( l_pScomMem, (( SELF_SAVE_RESTORE_REGION_SIZE + SCOM_RESTORE_SIZE_TOTAL ) * 8) );

        l_rc = croInitExtension();

        if( l_rc != ECMD_SUCCESS )
        {
            printf("\neCMD Cronus Extension Initialization Failed" );
            break;
        }

        l_rc  =  croPutMem( pu_target, i_homerBase, ( SELF_SAVE_RESTORE_REGION_SIZE + SCOM_RESTORE_SIZE_TOTAL ),
                            i_ecmdSprBuf, 0 );

        if( ECMD_SUCCESS != l_rc )
        {
            printf( "\ncroPutMem Failed To Update HOMER Of Machine 0x%08x", (uint32_t) l_rc );
            break;
        }

#ifdef __DEBUG_
        l_rc = i_ecmdSprBuf.writeFile( "p10_homer_spr_scom_region_mod.bin", ECMD_SAVE_FORMAT_BINARY_DATA, NULL );
        printf("\nSaved File  p10_homer_spr_scom_region_mod.bin" );
#endif

        printf("\nSUCCES: HOMER Updated, Saved File  p10_homer_spr_scom_region_mod.bin" );

        if ( l_rc != ECMD_DBUF_SUCCESS )
        {
            printf( "\nFailed To Write p10_homer_spr_scom_region_mod.bin RC: 0x%08x", (uint32_t) l_rc );
            break;
        }

    }
    while( 0 );

    if( l_pScomMem )
    {
        free( l_pScomMem );
        l_pScomMem  =  NULL;
    }

    fprintf(g_pErrTrace, "\nEXIT: updateScomBin");
    return l_rc;
}

//-------------------------------------------------------------------------------------------------------

uint32_t updateSprBin( ecmdChipTarget& pu_target, ecmdDataBuffer& i_ecmdSprBuf, uint32_t i_fusedCoreMode,
                       uint64_t i_homerBase )
{
    uint32_t l_rc  =  stopImageSection::SUCCESS;
    uint8_t* l_pSprMem = (uint8_t*)malloc( i_ecmdSprBuf.getByteLength() ) ;


    fprintf(g_pErrTrace, "\nENTER: updateSprBin");

    do
    {
        if( !l_pSprMem )
        {
            printf( "\nMemory Failure" );
            l_rc = -1;
            break;
        }

        memset( l_pSprMem, 0x00, i_ecmdSprBuf.getByteLength() );
        fprintf(g_pErrTrace, "\nBuffer Allocated  And Init To 0");

        l_rc = i_ecmdSprBuf.extract( l_pSprMem, 0, (SELF_SAVE_RESTORE_REGION_SIZE * 8) );

        if( ECMD_DBUF_SUCCESS != l_rc )
        {
            printf( "\nFailed To Extract ecmdBuffer to a regular buffer" );
            break;
        }

#ifdef __DEBUG_
        printf( "\nSize of SPR List 0x%08x (%08d)",  (uint32_t) g_sprList.size(),
                (uint32_t) g_sprList.size() );
        printf( "\nBuffer Check Word 0x%016lx", htobe64(*(uint64_t*)(l_pSprMem)));
        printf( "\nBuffer Check Word 0x%016lx", htobe64(*(uint64_t*)(l_pSprMem + 8)));
#endif

        for( auto spr : g_sprList )
        {
            uint64_t l_pirValue = getPirValue( spr.iv_corePos, spr.iv_threadPos, i_fusedCoreMode );
            l_rc  =  stopImageSection::proc_stop_save_cpureg( l_pSprMem, ( stopImageSection::CpuReg_t )spr.iv_sprId,
                     spr.iv_sprData, l_pirValue );

            fprintf( g_pErrTrace, "\nproc_stop_save_cpureg Called Core 0x%08x Thread Pos 0x%08x"
                     "PIR 0x%016lx SPR Id 0x%08x SPR Data 0x%016lx l_rc : 0x%08x",
                     spr.iv_corePos, spr.iv_threadPos, l_pirValue,  (uint32_t) spr.iv_sprId,
                     spr.iv_sprData, l_rc );

            if( l_rc )
            {
                fprintf( g_pErrTrace, "\nproc_stop_save_cpureg Failed " );
                break;
            }
        }

        i_ecmdSprBuf.memCopyIn( l_pSprMem, ( SELF_SAVE_RESTORE_REGION_SIZE * 8 ));

        l_rc = croInitExtension();

        if( l_rc != ECMD_SUCCESS )
        {
            printf("\neCMD Cronus Extension Initialization Failed" );
            break;
        }

        l_rc  =  croPutMem( pu_target, i_homerBase, SELF_SAVE_RESTORE_REGION_SIZE, i_ecmdSprBuf, 0 );

        if( ECMD_SUCCESS != l_rc )
        {
            printf( "\ncroPutMem Failed To Update HOMER Of Machine 0x%08x", (uint32_t) l_rc );
            break;
        }

#ifdef __DEBUG_
        l_rc = i_ecmdSprBuf.writeFile( "p10_homer_spr_scom_region_mod.bin", ECMD_SAVE_FORMAT_BINARY_DATA, NULL );
        printf("\nSaved File  p10_homer_spr_scom_region_mod.bin" );
#endif

        printf("\nSUCCES: HOMER Updated, Saved File  p10_homer_spr_scom_region_mod.bin" );

        if ( l_rc != ECMD_DBUF_SUCCESS )
        {
            printf( "\nFailed To Write p10_homer_spr_scom_region.bin RC: 0x%08x", (uint32_t) l_rc );
            break;
        }

    }
    while( 0 );

    if( l_pSprMem )
    {
        free( l_pSprMem );
        l_pSprMem  =  NULL;
    }

    fprintf(g_pErrTrace, "\nEXIT: updateSprBin");
    return l_rc;
}

//-------------------------------------------------------------------------------------------------------

uint32_t  editHomer( stopImageSection::ProcDetails& i_procDetails, uint32_t i_fusedMode,
                     stopImageSection::StopApiType i_apiType )
{
    uint32_t l_rc = stopImageSection::SUCCESS;
    // procedure constants
    const std::string PROCEDURE = "p10_stop_api_tool";
    const std::string REVISION  = "$Revision: 1.0 $";
    // flow/control variables
    uint32_t  rc   =  ECMD_SUCCESS;
    ecmdDllInfo DLLINFO;
    extern bool GLOBAL_SIM_MODE;
    std::string         file_name;
    ecmdLooperData      node_looper;
    ecmdChipTarget      node_target;
    bool                valid_pos_found = false;
    fapi2::ReturnCode   rc_fapi(fapi2::FAPI2_RC_SUCCESS);
    uint32_t l_partialHomerSize = 0;
    fprintf(g_pErrTrace, "\nENTER: editHomer");

    do
    {
        //--------------------------------------------------------------------------
        // load and initialize the eCMD Dll
        // if left NULL, which DLL to load is determined by the ECMD_DLL_FILE
        // environment variable
        // if set to a specific value, the specified DLL will be loaded
        //--------------------------------------------------------------------------
        rc = ecmdLoadDll("");

        if (rc)
        {
            break;
        }

        //--------------------------------------------------------------------------
        //This is needed if you're running a FAPI procedure from this eCMD procedure
        //--------------------------------------------------------------------------
        // initalize FAPI2 extension
        rc = fapi2InitExtension();

        if (rc)
        {
            ecmdOutputError("Error initializing FAPI2 extension!\n");
            break;
        }

        // establish if this is a simulation run or not
        rc = ecmdQueryDllInfo(DLLINFO);

        if (rc)
        {
            ecmdUnloadDll();
            break;
        }

        if (DLLINFO.dllEnv == ECMD_DLL_ENV_SIM)
        {
            GLOBAL_SIM_MODE = true;
        }

        ecmdLooperData pu_looper;
        ecmdChipTarget pu_target;

        // configure looper to iterate over specified configured positions
        pu_target.chipType          =  "pu";
        pu_target.chipTypeState     =  ECMD_TARGET_FIELD_VALID;
        pu_target.chipUnitType      =  ECMD_TARGET_FIELD_UNUSED;
        pu_target.chipUnitTypeState =  ECMD_TARGET_FIELD_UNUSED;
        pu_target.chipUnitNumState  =  ECMD_TARGET_FIELD_UNUSED;
        pu_target.chipUnitNum       =  ECMD_TARGET_FIELD_UNUSED;
        pu_target.cage              =  node_target.cage;
        pu_target.node              =  i_procDetails.iv_nodePos;
        pu_target.pos               =  i_procDetails.iv_procPos;
        pu_target.posState          =  ECMD_TARGET_FIELD_VALID;
        pu_target.cageState         =  ECMD_TARGET_FIELD_WILDCARD;
        pu_target.nodeState         =  ECMD_TARGET_FIELD_VALID;
        pu_target.slotState         =  ECMD_TARGET_FIELD_WILDCARD;
        pu_target.threadState       =  ECMD_TARGET_FIELD_UNUSED;

        rc = ecmdConfigLooperInit(pu_target, ECMD_SELECTED_TARGETS_LOOP_DEFALL, pu_looper);

        if (rc)
        {
            ecmdOutputError("Error initializing chip looper for EQs!\n");
            break;
        }

        // loop over configured positions inside current node
        while(ecmdConfigLooperNext(pu_target, pu_looper))
        {
            fapi2::buffer <uint64_t> l_homerBase;
            ecmdDataBuffer  l_sprBuffer( SELF_SAVE_RESTORE_REGION_SIZE * 8 );
            l_sprBuffer.flushTo0();
            fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP> fapi_procTgt( &pu_target );
            FAPI_TRY( fapi2::getScom( fapi_procTgt,  0x1010cda, l_homerBase ),
                      "Failed To Read PBABAR0 Register To Get HOMER Base" );

            printf( "\nHOMER Base 0x%016lx\n", (uint64_t)l_homerBase );
            l_homerBase  =  l_homerBase + 0x200000;
            l_partialHomerSize = SELF_SAVE_RESTORE_REGION_SIZE + ( ( i_apiType == stopImageSection::STOP_API_SCOM ) ?
                                 SCOM_RESTORE_SIZE_TOTAL : 0 );

            rc = getMemPba( pu_target, (uint64_t)l_homerBase, l_partialHomerSize, l_sprBuffer );

            if( rc != ECMD_SUCCESS )
            {
                printf( "\nFailed To Download SPR Region of HOMER. RC 0x%08x\n", (uint32_t) rc );
                break;
            }

#ifdef __DEBUG_
            rc = l_sprBuffer.writeFile( "p10_homer_spr_scom_region.bin", ECMD_SAVE_FORMAT_BINARY_DATA , NULL );
            printf("\nSaved File  p10_homer_spr_scom_region.bin" );
#endif

            if( stopImageSection::STOP_API_SPR == i_apiType )
            {
                updateSprBin( pu_target, l_sprBuffer, i_fusedMode, l_homerBase );
            }
            else if ( stopImageSection::STOP_API_SCOM == i_apiType )
            {
                updateScomBin( pu_target, l_sprBuffer, i_fusedMode, l_homerBase );
            }

            if ( rc != ECMD_DBUF_SUCCESS )
            {
                printf( "\nFailed To Write p10_homer_spr_scom_region.bin" );
                break;
            }

            valid_pos_found = 1;

            // check that a valid target was found
            if (rc == ECMD_SUCCESS && !valid_pos_found)
            {
                ecmdOutputError("No valid targets found!\n");
                ecmdUnloadDll();
                return ECMD_TARGET_NOT_CONFIGURED;
            }

            break;
        }   //while(ecmdConfigLooperNext(pu_target, pu_looper))

    }
    while(0);

fapi_try_exit:
    fprintf(g_pErrTrace, "\nEXIT: editHomer");
    return l_rc;
}

//-------------------------------------------------------------------------------------------------------

void dumpSprRestoreData()
{
    printf( "\n----------------------------------------- SPR Restore Data --------------------------- " );

    for( auto spr : g_sprList )
    {
        printf( "\n---------------------------------------------------------------------------------\n " );
        printf( "\n\tSPR Name     \t:\t%s", spr.iv_sprName );
        printf( "\n\tSPR Id       \t:\t%04x", spr.iv_sprId );
#if _LP64
        printf( "\n\tSPR Data     \t:\t%016lx", spr.iv_sprData );
#else
        printf( "\n\tSPR Data     \t:\t%016llx", spr.iv_sprData );
#endif
        printf( "\n\tCore Pos     \t:\t%02x", spr.iv_corePos );
        printf( "\n\tThread Pos   \t:\t%02x", spr.iv_threadPos );
    }

    printf( "\n----------------------------------------- SPR Restore Data Ends ----------------------\n " );
}

//-----------------------------------------------------------------------------------------------------------

uint32_t launchBasedOnCoreAndThread( void* i_pfakeHomer, std::string& i_testHomerDesc, bool i_fuseMode,
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

        uint64_t tempPir = getPirValue( corePos, threadPos, i_fuseMode );

        for( uint32_t itr = 0; itr < apiIteration; itr++ )
        {

#if _LP64
            fprintf( g_pErrTrace,
                     "\n Calling proc_stop_save_cpureg: regName 0x%d register data 0x%016lx "
                     "PIR 0x%016lx", i_regName, i_regData, tempPir );
#else
            fprintf( g_pErrTrace,
                     "\n Calling proc_stop_save_cpureg: regName 0x%d register data 0x%016llx "
                     "PIR 0x%016llx", i_regName, i_regData, tempPir );
#endif
            rc = stopImageSection::proc_stop_save_cpureg( i_pfakeHomer,
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

//-----------------------------------------------------------------------------------------------------------------------

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
            rc = stopImageSection::proc_stop_save_cpureg( i_pfakeHomer,
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

//-----------------------------------------------------------------------------------------------------------------------

///  @brief       Launches the tool for live operation on machine
///  @param[in]   i_testHomerDesc   string containing register description.
///  @param[in]   i_fuseMode        fuse mode status.
///  @param[in]   o_posStart        last point in string searched for keyword.
///  @param[in]   o_cpuRegCount     number of CPU register entries found
uint32_t launchSprLive( std::string&   i_testHomerDesc,
                        bool i_fuseMode,
                        int32_t& o_posStart  )
{
    using namespace stopImageSection;
    uint32_t rc = 0;
    uint32_t corePos = 0;
    uint32_t threadPos = 0;
    uint32_t posEnd = 0;
    bool allCores = false;
    uint32_t i_regName;
    uint64_t i_regData;

    fprintf( g_pErrTrace, "\n ENTER: launchSprLive" );

    do
    {
        SprProfile l_profile;
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
                    break;
                }

                threadPos = strtoull( keyWord.c_str(), NULL, 16 );
                o_posStart = posEnd;

            }
            while(0);
        }

        fprintf( g_pErrTrace, "\n core :%d  thread: %d", corePos, threadPos );
        l_profile.iv_threadPos = threadPos;
        l_profile.iv_corePos   = corePos;

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
            l_profile.iv_sprId = i_regName;
            memcpy( l_profile.iv_sprName, keyWord.c_str(), keyWord.size() );
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
        posEnd      =    i_testHomerDesc.find( "\n", o_posStart );
        keyWord.empty();
        keyWord     =    i_testHomerDesc.substr( o_posStart, posEnd - o_posStart  );
        o_posStart  =    posEnd;
        i_regData   =    strtoull( keyWord.c_str(), NULL, 16 );
        l_profile.iv_sprData = i_regData;

        g_sprList.push_back( l_profile );
        printf( "\nSize of g_sprList 0x%08x", (uint32_t)g_sprList.size());
    }
    while( corePos != std::string::npos );

    fprintf( g_pErrTrace, "\n EXIT: launchSprLive" );
    return rc;

}

//-----------------------------------------------------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------------------------------------------------

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
                rc = stopImageSection::proc_stop_save_scom( i_pfakeHomer,
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

//-----------------------------------------------------------------------------------------------------------------------
/// @brief      launches  STOP API tool for scom restore entry
/// @param[out] i_testHomerDesc     string containing test input description.
/// @param[in]  i_posStart          start earch position in string.
/// @return     SUCCESS is function succeeds else error code.
uint32_t launchForScomLive( string& i_testHomerDesc, int32_t& o_startPos )
{
    using namespace stopImageSection;
    uint32_t rc = SUCCESS;

    do
    {
        const string& delimit = " \f\n\r\t\v";
        uint32_t chipletPos = 0;
        uint32_t posEnd     = 0;
        fprintf( g_pErrTrace, "\n ENTER: launchForScomLive" );

        do
        {
            ScomProfile l_scomProfile;
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

                l_scomProfile.iv_scomAddress = strtoull( keyWord.c_str(), NULL, 16 );

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
                l_scomProfile.iv_scomData = strtoull( keyWord.c_str(), NULL, 16 );

                posEnd = i_testHomerDesc.find( ":SCOM_OP", o_startPos);

                if( (uint32_t) std::string::npos == posEnd )
                {
                    fprintf( g_pErrTrace,
                             "\nERR:Incorrect format: no SCOM OP Incorrect format:\n" );
                    rc = STOP_SAVE_FAIL;
                    break;
                }

                o_startPos = posEnd + 9;

                posEnd   =  i_testHomerDesc.find( ":", o_startPos );
                keyWord  =  i_testHomerDesc.substr( o_startPos, posEnd - o_startPos  );
                o_startPos  =  posEnd;
                keyWord  =  keyWord.substr( 0, keyWord.find_last_not_of( delimit ) + 1 );
                l_scomProfile.iv_scomOp = g_scomOp[keyWord.c_str()];

                posEnd = i_testHomerDesc.find( ":SCOM_AREA", o_startPos );

                if( (uint32_t) std::string::npos == posEnd )
                {
                    fprintf( g_pErrTrace, "\nERR:Incorect format: no SCOM AREA specified" );
                    rc = STOP_SAVE_FAIL;
                    break;
                }

                o_startPos = posEnd + 11;

                posEnd   =  i_testHomerDesc.find( "\n", o_startPos );
                keyWord  =  i_testHomerDesc.substr( o_startPos, posEnd - o_startPos );
                keyWord  =  keyWord.substr( 0, keyWord.find_last_not_of( delimit ) + 1 );
                l_scomProfile.iv_sectn  =  g_scomArea[keyWord.c_str()];

                g_scomList.push_back( l_scomProfile );
            }

        }
        while(chipletPos != (uint32_t)std::string::npos);

        fprintf( g_pErrTrace, "\n EXIT: launchForScomLive" );

    }
    while(0);

    return rc;
}
//-----------------------------------------------------------------------------------------------------------------------

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
         "\n\t--liveSpr                  Updates HOMER of a proc on a live machine\n\n"
         "\n                          Inorder to operate on a live machine, in a cronus lab window : \n\n"
         "\n                          ./proc_stop_api_tool -r reg file -f fused status --liveSpr -p x -n y\n\n"
         "\n\t--liveScom              Updates HOMER of a proc on a live machine\n\n"
         "\n                          Inorder to operate on a live machine, in a cronus lab window : \n\n"
         "\n                          ./proc_stop_api_tool -r reg file -f fused status --liveScom -p x -n y\n\n"
         "\n\t-n                      Node Position\n\n"
         "\n\t-p                      Proc Position\n\n"
         "\n\tNote: STOP API Tool accepts binary as input and outputs image in DMA or binary format."
         "\n\tFor option -odb or -obd, tool just expects file name without any extension e.g."
         "\n\tproc_homer_out. However, for -ob or -od, an extension .bin and .dma is mandatory in file name."
         "\n\n\tSyntax For Register Description File: \n"
         "\n\tSPR Restore Entry:\n"
         "\t:CORE (number in hex ) :THREAD (thread in hex) :SPR_NAME spr name  :SPR_DATA 0x80000000073a2000\n"
         "\t:CORE 0f :THREAD 0 :SPR_NAME HSPRG0  :SPR_DATA 0x80000000073a2000\n\n"
         "\tSPRs Supported:        CIABR, DAWR, DAWRX, HSPRG0, LDBAR, LPCR, PSSCR, MSR, HRMOR, HID, HMEER, PMCR, \n"
         "        				   PTCR, SMFCTRL, USPRG0, USPRG1, URMOR \n\n"
         "\tSCOM Restore Entry:\n"
         "\t:SCOM_ADDRESS address:   :SCOM_DATA data :SCOM_OP op :SCOM_AREA region\n"
         "\t:SCOM_ADDRESS 0x20018654 :SCOM_DATA 0xC0000001C0000006 :SCOM_OP REPLACE :SCOM_AREA L3\n\n"
         "\tSCOM_OP Supported:       APPEND, REPLACE, OR, AND, NOOP, RESET, OR_APPEND, AND_APPEND\n"
         "\tSCOM_AREA Supported:     CORE_SCOM, EQ, L2, L3 \n"

        );

    printf("\nVersion %.2f \n", TOOL_VERSION );
}

//-----------------------------------------------------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------------------------------------------------

uint32_t analyzeArgs( int argc, char* argv[], stopImageSection::ArgInfo& i_argInfo )
{
    using namespace stopImageSection;
    uint32_t l_rc   =  SUCCESS;
    int32_t  argNum = 1;
    printf("\n>> analyzeArgs");

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

        if(( std::string(argv[argNum]) == "-v" ) ||
           ( std::string(argv[argNum]) == "-V" ) )
        {
            printf("\n\tVersion %.2f \n", TOOL_VERSION );
            exit(EXIT_SUCCESS);;
        }
        else
        {
            fprintf( g_pErrTrace, "\nERR:Insufficient inputs to launch the tool\n" );
            printf("\nInsufficient inputs to launch the tool\n");
            l_rc = BAD_INSUFF_ARGS;
            return l_rc;
        }
    }
    else if ( argc == CPMR_EDIT_INPUTS )
    {

    }
    else if( argc < MAX_ARGS )
    {
        printf("\nMissing parameter \n");
        printToolHelp();
    }

    printf( "\nargc = %d", argc );

    while( argNum < argc  )
    {

        if(( std::string( argv[argNum] ) == "-is" ) )
        {
            if( ( argNum + 1) < argc )
            {
                i_argInfo.iv_inSelfFileName =  std::string( argv[argNum + 1] );
                i_argInfo.iv_inSelfBin    =  0x01;
                i_argInfo.iv_inputType    =  SR_INPUT;
                argNum++;
#ifdef __DEBUG_
                printf( "\nIn: Self Restore File Name  :  %s", i_argInfo.iv_inSelfFileName.c_str());
#endif

            }
            else
            {
                l_rc  =  BAD_INSUFF_ARGS;
                break;
            }
        }

        else if(( std::string( argv[argNum] ) == "-ih" ) )
        {
            if( ( argNum + 1) < argc )
            {
                i_argInfo.iv_inHomerFileName =  std::string( argv[argNum + 1] );
                i_argInfo.iv_inHomerBin      =  0x01;
                i_argInfo.iv_inputType       =  BIN_INPUT;
                argNum++;
#ifdef __DEBUG_
                printf( "\nIn: HOMER File Name         :  %s", i_argInfo.iv_inHomerFileName.c_str());
#endif
            }
            else
            {
                l_rc  =  BAD_INSUFF_ARGS;
            }

        }

        if(( std::string( argv[argNum] ) == "-ob" ) )
        {
            if( ( argNum + 1) < argc )
            {
                i_argInfo.iv_outFileName     =  std::string( argv[argNum + 1] );;
                i_argInfo.iv_outputType      =  BIN_OUTPUT;
                argNum++;
#ifdef __DEBUG_
                printf( "\nOut :HOMER File Name        :  %s", i_argInfo.iv_outFileName.c_str());
#endif
            }
            else
            {
                l_rc  =  BAD_INSUFF_ARGS;
                break;
            }
        }

        else if(( std::string( argv[argNum] ) == "-od" ) )
        {
            if( ( argNum + 1) < argc )
            {
                string dmaFileName( argv[argNum + 1] );

                if( std::string::npos == dmaFileName.find( ".dma", 0 ) )
                {
                    fprintf( g_pErrTrace, "\n ERR: .dma extension expected in output file");
                    break;
                }

                i_argInfo.iv_outFileName  =  dmaFileName;
                i_argInfo.iv_outputType   =  DMA_OUTPUT;
                argNum++;
#ifdef __DEBUG_
                printf( "\nOut :HOMER File Name        :  %s", i_argInfo.iv_outFileName.c_str());
#endif

            }
            else
            {
                l_rc  =  BAD_INSUFF_ARGS;
                break;
            }
        }

        else if((( std::string( argv[argNum] ) == "-obd"  ) ||
                 ( std::string( argv[argNum]) == "-odb" )))
        {
            if( ( argNum + 1) < argc )
            {
                i_argInfo.iv_outFileName   =  std::string( argv[argNum + 1] );
                i_argInfo.iv_outputType    =  BIN_DMA_OUTPUT;
                argNum++;
#ifdef __DEBUG_
                printf( "\nOut :HOMER File Name  :  %s", i_argInfo.iv_outFileName.c_str());
#endif

                if( ( i_argInfo.iv_outFileName.find( ".dma", 0 ) == string::npos ) ||
                    ( i_argInfo.iv_outFileName.find( ".bin", 0 ) == string::npos ) )
                {
                    l_rc  =  BAD_INSUFF_ARGS;
                    break;
                }
            }
            else
            {
                l_rc  =  BAD_INSUFF_ARGS;
                break;
            }
        }
        else if(( std::string( argv[argNum] ) == "-obcf"  ) )
        {

        }
        else if(( std::string( argv[argNum] ) == "-obs"  ))
        {
            if( ( argNum + 1) < argc )
            {
                if( i_argInfo.iv_outFileName.find( ".bin", 0 ) != string::npos )
                {
#ifdef __DEBUG_
                    printf( "\nOut :HOMER File Name       :  %s", i_argInfo.iv_outFileName.c_str());
#endif

                    i_argInfo.iv_outFileName   =  std::string( argv[argNum + 1] );
                    i_argInfo.iv_outputType    =  SELF_REST_BIN_OUTPUT;
                    argNum++;
                }
                else
                {
                    l_rc  =  BAD_INSUFF_ARGS;
                    break;
                }
            }
            else
            {
                l_rc  =  BAD_INSUFF_ARGS;
                break;
            }
        }

        if(( std::string(argv[argNum]) == "-r" ) )
        {
            if( ( argNum + 1) < argc )
            {
                i_argInfo.iv_regFileName    =  std::string( argv[argNum + 1] );
                i_argInfo.iv_regDesc        =  0x01;
                argNum++;
#ifdef __DEBUG_
                printf( "\nRegister Description File   :  %s", i_argInfo.iv_regFileName.c_str());
#endif
            }
            else
            {
                l_rc  =  BAD_INSUFF_ARGS;
                break;
            }
        }

        if(( std::string(argv[argNum]) == "-f" ) )
        {
            if( ( argNum + 1) < argc )
            {
                i_argInfo.iv_fusedStatus = 0x01;
#ifdef __DEBUG_
                printf( "\nFused Core Mode             :  %s", argv[argNum + 1] );
#endif

                if( std::string(argv[argNum + 1]) == "fused" )
                {
                    i_argInfo.iv_fusedMode  =  true;
                }
                else if( std::string(argv[argNum + 1]) == "unfused" )
                {
                    i_argInfo.iv_fusedMode  =  false;
                }
                else
                {
                    fprintf( g_pErrTrace, "\nERR: Unsupported option for fused mode setting");
                    printf( "\nUnsupported option\n" );
                    l_rc  =  BAD_INSUFF_ARGS;
                    break;
                }

                argNum++;
            }
            else
            {
                l_rc  =  BAD_INSUFF_ARGS;
                break;
            }
        }

        if ( ( std::string( argv[argNum] ) == "--liveSpr" ) )
        {
            i_argInfo.iv_outputType  = SPR_RESTORE_LIVE;
            i_argInfo.iv_opLive      = 0x01;
            printf( "\nHOMER's SPR region  will be updated live. Ignoring arguments --ixx or --obxx if passed\n"  );
        }

        if ( ( std::string( argv[argNum] ) == "--liveScom" ) )
        {
            i_argInfo.iv_outputType  = SCOM_RESTORE_LIVE;
            i_argInfo.iv_opLive      = 0x01;
            printf( "\nHOMER's SCOM region will be updated live. Ignoring arguments --ixx or --obxx if passed\n"  );
        }

        if( ( std::string( argv[argNum] ) == "-n" ) )
        {
            if( ( argNum + 1 ) < argNum )
            {
                i_argInfo.iv_nodePos  =  std::stol( std::string( argv[argNum + 1] ), NULL, 10 );
#ifdef __DEBUG_
                printf( "\nNode Pos                    :  %d", i_argInfo.iv_nodePos );
#endif

                if( i_argInfo.iv_nodePos > 3 )
                {
                    printf( "\nBad Node Id\n" );
                    break;
                }

                i_argInfo.iv_nodeValid =  0x01;
                argNum++;
            }
        }

        if( ( std::string( argv[argNum] ) == "-p" ) )
        {
            if( ( argNum + 1 ) < argNum )
            {
                i_argInfo.iv_procPos = std::stol( std::string( argv[argNum + 1] ), NULL, 10 );
#ifdef __DEBUG_
                printf( "\nProc Pos                    :  %d", i_argInfo.iv_procPos );
#endif

                if( i_argInfo.iv_procPos > 3 )
                {
                    printf( "\nBad Proc Id\n" );
                    break;
                }

                i_argInfo.iv_procValid =  0x01;
                argNum++;
            }
        }

        argNum++;

    }// whileargv[argNum]

    do
    {
        if( l_rc )
        {
            break;
        }

        if( ( !i_argInfo.iv_opLive ) && ( !i_argInfo.iv_inSelfBin && !i_argInfo.iv_inHomerBin ) )
        {
            printf( "\nMissing Or Bad Input Arguments ( -ih or -is ) ");
            l_rc  =  stopImageSection::INCOM_ARG_SET;
            break;
        }

        if( ( !i_argInfo.iv_opLive ) && ( ( BIN_OUTPUT != i_argInfo.iv_outputType ) &&
                                          ( DMA_OUTPUT != i_argInfo.iv_outputType ) &&
                                          ( BIN_DMA_OUTPUT != i_argInfo.iv_outputType ) ) )
        {
            printf( "\nMissing Or Bad Output Arguments ( -ob | -obs | -od | -obd | -odb ) ");
            l_rc  =  stopImageSection::INCOM_ARG_SET;
            break;
        }

        if( i_argInfo.iv_opLive )
        {
            if( !i_argInfo.iv_procValid )
            {
                i_argInfo.iv_procPos  =  0x00;
            }

            if( !i_argInfo.iv_nodeValid )
            {
                i_argInfo.iv_nodePos  =  0x00;
            }
        }

    }
    while( 0 );

    l_rc =  processArgs( i_argInfo );

    if( l_rc )
    {
        printf("\nprocessArgs failed" );
    }


    printf("\n<< analyzeArgs");

    return l_rc;
}

//----------------------------------------------------------------------------------------------------------------
//
uint32_t processArgs( stopImageSection::ArgInfo& i_argInfo )
{
    uint32_t l_rc = 0;
    using namespace stopImageSection;
    printf("\n>> processArgs" );

    do
    {
        if( i_argInfo.iv_inSelfBin )
        {
            i_argInfo.iv_inFpSelfRestore = fopen( i_argInfo.iv_inSelfFileName.c_str(), "r" );

            if( !i_argInfo.iv_inFpSelfRestore )
            {
                fprintf( g_pErrTrace, "Bad Self Restore File Name" );
                printf( "\nFailed To Open Input Self Restore Bin File" );
                l_rc = BAD_INPUT_FILE;
                break;
            }
        }

        if( i_argInfo.iv_inHomerBin )
        {
            i_argInfo.iv_inFpHomer = fopen( i_argInfo.iv_inHomerFileName.c_str(), "r" );

            if( !i_argInfo.iv_inFpHomer )
            {
                fprintf( g_pErrTrace, "Bad Input HOMER File Name %s", i_argInfo.iv_inHomerFileName.c_str() );
                printf( "\nFailed To Open Input HOMER File :  %s", i_argInfo.iv_inHomerFileName.c_str() );
                l_rc = BAD_INPUT_FILE;
                break;
            }
        }

        if( i_argInfo.iv_regDesc )
        {
            i_argInfo.iv_inFpReg = fopen( i_argInfo.iv_regFileName.c_str(), "r" );

            if( !i_argInfo.iv_inFpReg )
            {
                fprintf( g_pErrTrace, "Bad Input Register Description File Name" );
                printf( "\nFailed To Open Input Register Description File : %s", i_argInfo.iv_regFileName.c_str() );
                l_rc = BAD_INPUT_FILE;
                break;
            }
        }

        if( ( i_argInfo.iv_outputType == BIN_OUTPUT ) || ( SELF_REST_BIN_OUTPUT == i_argInfo.iv_outputType ))
        {
            if( string::npos == i_argInfo.iv_outFileName.find( ".bin" , 0 ) )
            {
                fprintf( g_pErrTrace, "\nBad Output File Extension. Expected .bin" );
                printf( "\nBad Output File Extension. Expected .bin  :  %s", i_argInfo.iv_outFileName.c_str() );
                l_rc = BAD_OUTPUT_FILE;
                break;
            }

            i_argInfo.iv_outFpBin = fopen( i_argInfo.iv_outFileName.c_str(), "w+" );

            if( !i_argInfo.iv_outFpBin )
            {
                fprintf( g_pErrTrace, "\nFailed To Open Output Binary File" );
                printf( "\nFailed To Open Output Binary File  :  %s", i_argInfo.iv_outFileName.c_str() );
                l_rc = BAD_OUTPUT_FILE;
                break;
            }
        }


        if( i_argInfo.iv_outputType == DMA_OUTPUT )
        {
            if( string::npos == i_argInfo.iv_outFileName.find( ".dma" , 0 ) )
            {
                fprintf( g_pErrTrace, "\nBad Output File Extension. Expected .dma" );
                printf( "\nBad Output File Extension. Expected .dma  :  %s", i_argInfo.iv_outFileName.c_str() );
                l_rc = BAD_OUTPUT_FILE;
                break;
            }

            i_argInfo.iv_outFpDma = fopen( i_argInfo.iv_outFileName.c_str(), "w+" );

            if( !i_argInfo.iv_outFpDma )
            {
                printf( "\nFailed To Open Output DMA File     :  %s", i_argInfo.iv_outFileName.c_str() );
                fprintf( g_pErrTrace, "\nFailed To Open Output DMA File" );
                l_rc = BAD_OUTPUT_FILE;
                break;
            }

        }

        if( i_argInfo.iv_outputType == BIN_DMA_OUTPUT )
        {
            std::string l_tmpFileName = i_argInfo.iv_outFileName + ".dma";
            i_argInfo.iv_outFpDma = fopen( l_tmpFileName.c_str(), "w+" );

            if( !i_argInfo.iv_outFpDma )
            {
                printf( "\n-obd  Failed To Open Output DMA File" );
                fprintf( g_pErrTrace, "\nFailed To Open Output DMA File" );
                l_rc = BAD_OUTPUT_FILE;
                break;
            }

            l_tmpFileName = i_argInfo.iv_outFileName + ".bin";
            i_argInfo.iv_outFpBin = fopen( l_tmpFileName.c_str(), "w+" );

            if( !i_argInfo.iv_outFpBin )
            {
                printf( "\n-obd Failed To Open Output Bin File" );
                fprintf( g_pErrTrace, "\nFailed To Open Output Bin File" );
                l_rc = BAD_OUTPUT_FILE;
                break;
            }

        }
    }
    while( 0 );

    printf("\n<< processArgs" );
    return l_rc;

}
