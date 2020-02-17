/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/prcd/prcdUtils.C $                                */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2015,2020                                                    */
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
//------------------------------------------------------------------------------
// *! FILENAME : prcdUtils.C
// *! TITLE : Procedure Utilities
// *! DESCRIPTION : A collection of utility functions for the procedures
// *! CONTEXT : To be used by any procedure
// *!
// *! CHIP :     N/A
// *! EC LEVEL : N/A
// *!
// *!
// *! PRECONDITIONS :  N/A
// *! POSTCONDITIONS : N/A
// *! STARTING CLOCK STATE : N/A
// *! EXITING CLOCK STATE :  N/A
// *!
// *!
// *! OWNER NAME :  Jonny Lab   Email: jonnylab@us.ibm.com
// *! BACKUP NAME : Jenny Lab   Email: jennylab@us.ibm.com
// *!
// *!
// *! OTHER DOCUMENTATION : none
// *!
//------------------------------------------------------------------------------

//----------------------------------------------------------------------
//  Includes
//----------------------------------------------------------------------
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <inttypes.h>

//----------------------------------------------------------------------
//  eCMD Includes
//----------------------------------------------------------------------
#include <ecmdClientCapi.H>
#include <simClientCapi.H>
#include <ecmdDataBuffer.H>
#include <ecmdUtils.H>
#include <ecmdSharedUtils.H>
#include <ecmdReturnCodes.H>

//----------------------------------------------------------------------
//  Local Functions
//----------------------------------------------------------------------
void prcdInfoMessageLocal(const char* i_printMsg, va_list& arg_ptr);
void prcdWarnMessageLocal(const char* i_printMsg, va_list& arg_ptr);
void prcdErrorMessageLocal(const char* i_printMsg, va_list& arg_ptr);

//----------------------------------------------------------------------
//  Global Variables
//----------------------------------------------------------------------
// Global variable must be kept to an ABSOLUTE MINIMUM.
// Right now, only two global flags make sense.  One for sim mode, one for extra verification mode.
bool GLOBAL_SIM_MODE = false;
bool GLOBAL_VERIF_MODE = false;

// Output informational messages from the procedure
void prcdInfoMessage(const char* i_printMsg, ...)
{
    va_list arg_ptr;
    va_start(arg_ptr, i_printMsg);

    prcdInfoMessageLocal(i_printMsg, arg_ptr);

    va_end(arg_ptr);
}

void prcdInfoMessageLocal(const char* i_printMsg, va_list& arg_ptr)
{

    if (!ecmdGetGlobalVar(ECMD_GLOBALVAR_QUIETMODE))
    {

        // First, put the var messages into a string, before we add on the other stuff
        int numBytes;
        char expandedMessage[1000];
        numBytes = vsnprintf(expandedMessage, 1000, i_printMsg, arg_ptr);

        // Now create the full message - header + expanded
        char* fullMessage = new char[(40 + numBytes)];

        if (GLOBAL_SIM_MODE)
        {
            uint64_t currentCycle = 0;
            simgetcurrentcycle(currentCycle);
#ifdef _LP64
            sprintf(fullMessage, "PRCDINFO: (cyc: %10ld) %s", currentCycle, expandedMessage);
#else
            sprintf(fullMessage, "PRCDINFO: (cyc: %10lld) %s", currentCycle, expandedMessage);
#endif
        }
        else
        {
            sprintf(fullMessage, "PRCDINFO: %s", expandedMessage);
        }

        // Put it through the output facilities
        ecmdOutput(fullMessage);

        // Cleanup
        delete[] fullMessage;
    }
}

// Output warning messages from the procedure
void prcdWarnMessage(const char* i_printMsg, ...)
{
    va_list arg_ptr;
    va_start(arg_ptr, i_printMsg);

    prcdWarnMessageLocal(i_printMsg, arg_ptr);

    va_end(arg_ptr);
}

void prcdWarnMessageLocal(const char* i_printMsg, va_list& arg_ptr)
{

    if (!ecmdGetGlobalVar(ECMD_GLOBALVAR_QUIETMODE))
    {

        // First, put the var messages into a string, before we add on the other stuff
        int numBytes;
        char expandedMessage[1000];
        numBytes = vsnprintf(expandedMessage, 1000, i_printMsg, arg_ptr);

        // Now create the full message - header + expanded
        char* fullMessage = new char[(40 + numBytes)];

        if (GLOBAL_SIM_MODE)
        {
            uint64_t currentCycle = 0;
            simgetcurrentcycle(currentCycle);
#ifdef _LP64
            sprintf(fullMessage, "PRCDWARN: (cyc: %10ld) %s", currentCycle, expandedMessage);
#else
            sprintf(fullMessage, "PRCDWARN: (cyc: %10lld) %s", currentCycle, expandedMessage);
#endif
        }
        else
        {
            sprintf(fullMessage, "PRCDWARN: %s", expandedMessage);
        }

        // Put it through the output facilities
        ecmdOutputWarning(fullMessage);

        // Cleanup
        delete[] fullMessage;
    }
}

// Output error messages from the procedure
void prcdErrorMessage(const char* i_printMsg, ...)
{
    va_list arg_ptr;
    va_start(arg_ptr, i_printMsg);

    prcdErrorMessageLocal(i_printMsg, arg_ptr);

    va_end(arg_ptr);
}

void prcdErrorMessageLocal(const char* i_printMsg, va_list& arg_ptr)
{

    if (!ecmdGetGlobalVar(ECMD_GLOBALVAR_QUIETMODE))
    {

        // First, put the var messages into a string, before we add on the other stuff
        int numBytes;
        char expandedMessage[1000];
        numBytes = vsnprintf(expandedMessage, 1000, i_printMsg, arg_ptr);

        // Now create the full message - header + expanded
        char* fullMessage = new char[(40 + numBytes)];

        if (GLOBAL_SIM_MODE)
        {
            uint64_t currentCycle = 0;
            simgetcurrentcycle(currentCycle);
#ifdef _LP64
            sprintf(fullMessage, "PRCDERROR: (cyc: %10ld) %s", currentCycle, expandedMessage);
#else
            sprintf(fullMessage, "PRCDERROR: (cyc: %10lld) %s", currentCycle, expandedMessage);
#endif
        }
        else
        {
            sprintf(fullMessage, "PRCDERROR: %s", expandedMessage);
        }

        // Put it through the output facilities
        ecmdOutputError(fullMessage);

        // Cleanup
        delete[] fullMessage;
    }
}


// Checks if a given chip target is running in FSI mode
bool prcdChipInFsiMode(ecmdChipTarget& i_target)
{
    uint32_t rc = 0;
    ecmdChipData chipdata;
    rc = ecmdGetChipData(i_target, chipdata);

    if (rc)
    {
        ecmdOutputError("An error occurred in prcdChipInFsiMode trying to get chipData!  Return value can't be trusted!\n");
        return false;
    }

    bool fsimode = (chipdata.chipFlags & ECMD_CHIPFLAG_BUSMASK) == ECMD_CHIPFLAG_FSI;
    return fsimode;
}

// Checks if a given chip target is running in JTAG mode
bool prcdChipInJtagMode(ecmdChipTarget& i_target)
{
    uint32_t rc = 0;
    ecmdChipData chipdata;
    rc = ecmdGetChipData(i_target, chipdata);

    if (rc)
    {
        ecmdOutputError("An error occurred in prcdChipInJtagMode trying to get chipData!  Return value can't be trusted!\n");
        return false;
    }

    bool jtagmode = (chipdata.chipFlags & ECMD_CHIPFLAG_BUSMASK) == ECMD_CHIPFLAG_JTAG;
    return jtagmode;
}

// Retrieve the Hardware EC level of the target chip
uint32_t prcdGetChipHwEcLevel(ecmdChipTarget& i_target, uint32_t& io_chipHwEc)
{
    uint32_t rc = 0;
    ecmdChipData chipdata;
    rc = ecmdGetChipData(i_target, chipdata);
    io_chipHwEc = chipdata.chipEc;
    return rc;
}

// Retrieve the Sim Model EC level of the target chip
uint32_t prcdGetChipSimModelEcLevel(ecmdChipTarget& i_target, uint32_t& io_chipSimeModelEc)
{
    uint32_t rc = 0;
    ecmdChipData chipdata;
    rc = ecmdGetChipData(i_target, chipdata);
    io_chipSimeModelEc = chipdata.simModelEc;
    return rc;
}

// ****** Log various FFDC data ******

// Print out the results of a scom, store this data for field fails
// Note: This (and only this) is the data you will get from a mfg/test/field fail
uint32_t prcdLogScomData(ecmdChipTarget& i_target, uint32_t i_addr)
{
    uint32_t rc = ECMD_SUCCESS;
    ecmdDataBuffer data;
    char outstr[200];

    rc = getScom(i_target, i_addr, data);

    if (rc)
    {
        return rc;
    }

    sprintf(outstr, "(PRCD FFDC) target: %s, scom address: 0x%.8X, data: 0x%s\n", ecmdWriteTarget(i_target,
            ECMD_DISPLAY_TARGET_COMPRESSED).c_str(), i_addr, data.genHexLeftStr(0, data.getBitLength()).c_str());
    ecmdOutput(outstr);

    return rc;
}

// Print out rings to log, store this data for field fails
// Note: This (and only this) is the data you will get from a mfg/test/field fail
uint32_t prcdLogScanData(ecmdChipTarget& i_target, std::string i_ringName)
{
    uint32_t rc = ECMD_SUCCESS;
    ecmdDataBuffer data;
    char outstr[200];
    std::string printed;

    rc = getRing(i_target, i_ringName.c_str(), data);

    if (rc)
    {
        return rc;
    }

    sprintf(outstr, "(PRCD FFDC) target: %s, ring name: %s", ecmdWriteTarget(i_target,
            ECMD_DISPLAY_TARGET_COMPRESSED).c_str(), i_ringName.c_str());
    printed = outstr;
    printed += " data: " + data.genHexLeftStr(0, data.getBitLength());
    printed += "\n";
    ecmdOutput(printed.c_str());

    return rc;
}

// Print out the results of a scom, store this data for field fails
// Note: This (and only this) is the data you will get from a mfg/test/field fail
uint32_t prcdLogGPData(ecmdChipTarget& i_target, uint32_t i_gpNum)
{
    uint32_t rc = ECMD_SUCCESS;
    ecmdDataBuffer data;
    char outstr[200];

    rc = getGpRegister(i_target, i_gpNum, data);

    if (rc)
    {
        return rc;
    }

    sprintf(outstr, "(PRCD FFDC) target: %s, GP Register: %d, data: 0x%s\n", ecmdWriteTarget(i_target,
            ECMD_DISPLAY_TARGET_COMPRESSED).c_str(), i_gpNum, data.genHexLeftStr(0, data.getBitLength()).c_str());
    ecmdOutput(outstr);

    return rc;
}

// Direct the user to look for checkstops and gather all relevant FIR data
// Note: Firmware will attempt to utilize existing runtime error analysis code to find checkstops
uint32_t prcdFirCheck(ecmdChipTarget& i_target)
{
    uint32_t rc = ECMD_SUCCESS;

    ecmdOutput("(PRCD FFDC) Gather Fir Information!\n");

    return rc;
}

// ****** Callout a failing part ******
// Print out a failing part (priority is high/medium/low), callout this part for field fails
// Note: This is the part that will be replaced if this failure is seen in mfg/test/field
uint32_t prcdLogFailingPart(ecmdChipTarget& i_target, std::string i_priority)
{
    uint32_t rc = ECMD_SUCCESS;
    char outstr[200];

    sprintf(outstr, "(PRCD FFDC) Chip %s has failed with priority %s\n", ecmdWriteTarget(i_target,
            ECMD_DISPLAY_TARGET_COMPRESSED).c_str(), i_priority.c_str());
    ecmdOutput(outstr);

    return rc;
}

// Print out a failing part that is not represented by a simple chip target
// Note: This is the part that will be replaced if this failure is seen in mfg/test/field
uint32_t prcdLogFailingPart(std::string i_part, std::string i_priority)
{
    uint32_t rc = ECMD_SUCCESS;

    char outstr[200];

    sprintf(outstr, "(PRCD FFDC) Part %s has failed with priority %s\n", i_part.c_str(), i_priority.c_str());
    ecmdOutput(outstr);

    return rc;
}


uint32_t prcdGetCmdLineConnection(int* io_argc, char** io_argv[], bool& o_argsValid, ecmdChipTarget& o_dchip,
                                  std::string& o_dport, ecmdChipTarget& o_rchip, std::string& o_rport  )
{
    uint32_t rc = ECMD_SUCCESS;
    char* opt_string = NULL;
    ecmdDllInfo dllInfo;
    bool dChipFound = false, rChipFound = false, dPortFound = false, rPortFound = false;
    o_argsValid = false;

    rc = ecmdQueryDllInfo(dllInfo);

    if(rc)
    {
        return rc;
    }

    // Find P7 driver target
    opt_string = ecmdParseOptionWithArgs( io_argc, io_argv, "-dchip" );

    if (opt_string != NULL)
    {
        dChipFound = true;
        ecmdReadTarget( opt_string, o_dchip );
    }

    // Find P7 receiver target
    opt_string = ecmdParseOptionWithArgs( io_argc, io_argv, "-rchip" );

    if (opt_string != NULL)
    {
        rChipFound = true;
        ecmdReadTarget( opt_string, o_rchip );
    }

    // Find the driver's port
    opt_string = ecmdParseOptionWithArgs( io_argc, io_argv, "-dport" );

    if (opt_string != NULL)
    {
        dPortFound = true;
        o_dport = opt_string;
    }

    // Find the receiver's port
    opt_string = ecmdParseOptionWithArgs( io_argc, io_argv, "-rport" );

    if (opt_string != NULL)
    {
        rPortFound = true;
        o_rport = opt_string;
    }

    /* Error check */
    int numFound = dChipFound + rChipFound + dPortFound + rPortFound;

    if (numFound == 0 || numFound == 4)
    {
        // Only mark valid if they were given
        if (numFound == 4)
        {
            o_argsValid = true;
        }
    }
    else
    {
        if (!dChipFound)
        {
            ecmdOutputError("No Drive Chip given!\n");
        }

        if (!rChipFound)
        {
            ecmdOutputError("No Receive Chip given!\n");
        }

        if (!dPortFound)
        {
            ecmdOutputError("No Drive Port given!\n");
        }

        if (!rPortFound)
        {
            ecmdOutputError("No Receive Port given!\n");
        }

        return ECMD_INVALID_ARGS;
    }

    return rc;
}
