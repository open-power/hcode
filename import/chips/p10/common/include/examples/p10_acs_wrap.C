/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/examples/p10_acs_wrap.C $     */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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
///
/// @file p10_acs_wrap.C
/// @brief Generated test of accessors and scom constants.
///        Not for use with real models or hw.
///

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
#include <prcdUtils.H>
#include <croClientCapi.H>
#include <ecmdClientCapi.H>
#include <ecmdDataBuffer.H>
#include <ecmdUtils.H>
#include <ecmdSharedUtils.H>

#include <fapi2.H>
#include <p10_acs.H>


//------------------------------------------------------------------------------
// Function definitions
//------------------------------------------------------------------------------

// main function
int main(int argc, char* argv[])
{
    // procedure constants
    const std::string PROCEDURE = "p10_acs_wrap";

    // from prcdUtils
    extern bool GLOBAL_SIM_MODE;
    extern bool GLOBAL_VERIF_MODE;

    // flow/control variables
    uint32_t rc = ECMD_SUCCESS;
    fapi2::ReturnCode rc_fapi(fapi2::FAPI2_RC_SUCCESS);
    ecmdDllInfo DLLINFO;
    ecmdLooperData drawer_looper;
    ecmdChipTarget drawer_target;
    char outstr[256];

    // load and initialize the eCMD Dll
    // if left NULL, which DLL to load is determined by the ECMD_DLL_FILE
    // environment variable if set to a specific value, the specified DLL
    // will be loaded
    rc = ecmdLoadDll("");

    if (rc)
    {
        return rc;
    }

    do
    {
        // initalize FAPI extension
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
            ecmdOutput("Error querying DLL!\n");
            break;
        }

        if (DLLINFO.dllEnv == ECMD_DLL_ENV_SIM)
        {
            GLOBAL_SIM_MODE = true;
        }

        // run procedure in sim verification mode
        if (ecmdParseOption(&argc, &argv, "-verif"))
        {
            GLOBAL_VERIF_MODE = true;
        }

        // parse out common eCMD args like -p0, -c0, -coe, etc..
        // any found args will be removed from arg list upon return
        rc = ecmdCommandArgs(&argc, &argv);

        if (rc)
        {
            ecmdOutputError("Error parsing eCMD arguments\n");
            break;
        }

        // unsupported arguments left over?
        if (argc != 1)
        {
            ecmdOutputError("Unknown/unsupported arguments specified!\n");
            rc = ECMD_INVALID_ARGS;
            break;
        }

        // print procedure information header
        if (!ecmdGetGlobalVar(ECMD_GLOBALVAR_QUIETMODE))
        {
            // print informational message
            snprintf(outstr, sizeof(outstr), "Procedure %s\n",
                     PROCEDURE.c_str());
            ecmdOutput(outstr);

            // always print the DLL info to the screen, unless in quiet mode
            rc = ecmdDisplayDllInfo();

            if (rc)
            {
                ecmdOutputError("Error displaying DLL info!");
                break;
            }
        }

        // configure looper to iterate over all drawer
        drawer_target.cageState   = ECMD_TARGET_FIELD_WILDCARD;
        drawer_target.nodeState   = ECMD_TARGET_FIELD_WILDCARD;
        drawer_target.slotState   = ECMD_TARGET_FIELD_UNUSED;
        drawer_target.posState    = ECMD_TARGET_FIELD_UNUSED;
        drawer_target.coreState   = ECMD_TARGET_FIELD_UNUSED;
        drawer_target.threadState = ECMD_TARGET_FIELD_UNUSED;
        rc = ecmdConfigLooperInit(drawer_target, ECMD_SELECTED_TARGETS_LOOP_DEFALL, drawer_looper);

        if (rc)
        {
            ecmdOutputError("Error initializing drawer looper!\n");
            break;
        }

        // loop over specified configured drawers
        while (ecmdConfigLooperNext(drawer_target, drawer_looper))
        {
            ecmdLooperData pu_looper;
            ecmdChipTarget pu_target;
            bool valid_pos_found = false;

            if (!ecmdGetGlobalVar(ECMD_GLOBALVAR_QUIETMODE))
            {
                snprintf(outstr, sizeof(outstr), "Processing %s\n",
                         ecmdWriteTarget(drawer_target).c_str());
                ecmdOutput(outstr);
            }

            pu_target.chipType = "pu";
            pu_target.chipTypeState = ECMD_TARGET_FIELD_VALID;

            pu_target.cage = drawer_target.cage;
            pu_target.node = drawer_target.node;

            pu_target.cageState   = ECMD_TARGET_FIELD_VALID;
            pu_target.nodeState   = ECMD_TARGET_FIELD_VALID;
            pu_target.slotState   = ECMD_TARGET_FIELD_WILDCARD;
            pu_target.posState    = ECMD_TARGET_FIELD_WILDCARD;
            pu_target.coreState   = ECMD_TARGET_FIELD_UNUSED;
            pu_target.threadState = ECMD_TARGET_FIELD_UNUSED;

            rc = ecmdConfigLooperInit(pu_target, ECMD_SELECTED_TARGETS_LOOP_DEFALL, pu_looper);

            if (rc)
            {
                ecmdOutputError("Error initializing chip looper!\n");
                break;
            }

            // loop over configured positions inside current drawer
            while(ecmdConfigLooperNext(pu_target, pu_looper))
            {
                // mark that valid position has been found
                valid_pos_found = true;

                // invoke FAPI procedure core
                if (!ecmdGetGlobalVar(ECMD_GLOBALVAR_QUIETMODE))
                {
                    snprintf(outstr, sizeof(outstr), "Going to call %s on %s\n",
                             PROCEDURE.c_str(),
                             ecmdWriteTarget(pu_target).c_str());
                    ecmdOutput(outstr);
                }

                // invoke FAPI procedure core
                fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP> fapi_target(&pu_target);

                FAPI_EXEC_HWP(rc_fapi,
                              p10_acs,
                              fapi_target);
                rc = (uint64_t) rc_fapi;

                if (rc)
                {
                    snprintf(outstr, sizeof(outstr), "ERROR: %s FAPI call exited with bad return code = %s 0x%08x\n",
                             PROCEDURE.c_str(),
                             ecmdParseReturnCode(rc).c_str(), rc);
                    ecmdOutputError(outstr);
                    break;
                }
            }

            // check that a valid target was found
            if (rc == ECMD_SUCCESS && !valid_pos_found)
            {
                ecmdOutputError("No valid targets found!\n");
                rc = ECMD_TARGET_NOT_CONFIGURED;
                break;
            }
            else if (rc)
            {
                break;
            }
        }

        // error occurred in loop, exit
        if (rc)
        {
            break;
        }
    }
    while(0);

    ecmdUnloadDll();
    return rc;
}
