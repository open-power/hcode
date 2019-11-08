/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/hwpf/prcd/prcdUtils.H $                                */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
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
//------------------------------------------------------------------------------
// *! FILENAME : prcdUtils.H
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
#include <ecmdDataBuffer.H>
#include <ecmdUtils.H>
#include <ecmdSharedUtils.H>

// Output informational essages from the procedure
// The advantage of using this function is in simulation it will fill in the cycle count information for you
void prcdInfoMessage(const char* i_printMsg, ...);
void prcdWarnMessage(const char* i_printMsg, ...);
void prcdErrorMessage(const char* i_printMsg, ...);

// Checks if a given chip target is running in FSI mode
bool prcdChipInFsiMode(ecmdChipTarget& i_target);
// Checks if a given chip target is running in JTAG mode
bool prcdChipInJtagMode(ecmdChipTarget& i_target);

// Retrieve the Hardware EC level of the target chip
uint32_t prcdGetChipHwEcLevel(ecmdChipTarget& i_target, uint32_t& io_chipHwEc);
// Retrieve the Sim Model EC level of the target chip
uint32_t prcdGetChipSimModelEcLevel(ecmdChipTarget& i_target, uint32_t& io_chipSimeModelEc);

// ****** Log various FFDC data ******
// Print out the results of a scom, store this data for field fails
// Note: This (and only this) is the data you will get from a mfg/test/field fail
uint32_t prcdLogScomData(ecmdChipTarget& i_target, uint32_t i_addr);

// Print out the results of a scom, store this data for field fails
// Note: This (and only this) is the data you will get from a mfg/test/field fail
uint32_t prcdLogScanData(ecmdChipTarget& i_target, std::string i_ringName);

// Print out the results of a scom, store this data for field fails
// Note: This (and only this) is the data you will get from a mfg/test/field fail
uint32_t prcdLogGPData(ecmdChipTarget& i_target, uint32_t i_gpNum);

// Direct the user to look for checkstops and gather all relevant FIR data
// Note: Firmware will attempt to utilize existing runtime error analysis code to find checkstops
uint32_t prcdFirCheck(ecmdChipTarget& i_target);

// ****** Callout a failing part ******
// Print out a failing part (priority is high/medium/low), callout this part for field fails
// Note: This is the part that will be replaced if this failure is seen in mfg/test/field
uint32_t prcdLogFailingPart(ecmdChipTarget& i_target, std::string i_priority);

// Print out a failing part that is not represented by a simple chip target
// Note: This is the part that will be replaced if this failure is seen in mfg/test/field
uint32_t prcdLogFailingPart(std::string i_part, std::string i_priority);

// Parses the command line for the options to fill in the for o_* variables that represent a single chip to chip connection
// Sets o_argsValid if the other 4 args are valid.  Returns an rc if all 4 args aren't present
uint32_t prcdGetCmdLineConnection(int* io_argc, char** io_argv[], bool& o_argsValid, ecmdChipTarget& o_dchip,
                                  std::string& o_dport, ecmdChipTarget& o_rchip, std::string& o_rport);
