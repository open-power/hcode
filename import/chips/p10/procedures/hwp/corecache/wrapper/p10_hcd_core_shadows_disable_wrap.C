/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/corecache/wrapper/p10_hcd_core_shadows_disable_wrap.C $ */
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
#include <multicast_group_defs.H>
#include <p10_hcd_core_shadows_disable.H>
#include <multicast_group_defs.H>

//------------------------------------------------------------------------------
// Function definitions
//------------------------------------------------------------------------------

// display help message
void help()
{
    // procedure constants
    const std::string PROCEDURE = "p10_hcd_core_shadows_disable_wrap";


    // build help message
    char outstr[256];
    snprintf(outstr, sizeof(outstr), "\nThis is the help text for the procedure %s\n", PROCEDURE.c_str());
    ecmdOutput(outstr);
    snprintf(outstr, sizeof(outstr), "Syntax: %s\n", PROCEDURE.c_str());
    ecmdOutput(outstr);
    ecmdOutput("        [-h] [-k#] [-n#] [-s#] [-p#] [-uincast] [-quiet] [-verif]\n");
    ecmdOutput("Additional options:\n");
    ecmdOutput("      -h                           Display this help message.\n");
    ecmdOutput("      -k#                          Specify which cage to act on (default = all).\n");
    ecmdOutput("      -n#                          Specify which node to act on (default = all).\n");
    ecmdOutput("      -s#                          Specify which slot to act on (default = all).\n");
    ecmdOutput("      -p#                          Specify which chip position to act on (default = all).\n");
    ecmdOutput("      -c#                          Specify which chip unit position to act on (default = all).\n");
    ecmdOutput("      -unicast                     Run in unicast mode (default = multicast).\n");
    ecmdOutput("      -quiet                       Suppress printing of eCMD DLL/procedure informational messages (default = false).\n");
    ecmdOutput("      -verif                       Run procedure in sim verification mode (default = false).\n");
    return;
}


// main function
int main(int argc, char* argv[])
{
    // procedure constants
    const std::string PROCEDURE = "p10_hcd_core_shadows_disable_wrap";


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
    bool b_unicast = false;

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

        // show help message
        if (ecmdParseOption(&argc, &argv, "-h"))
        {
            help();
            break;
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

        if (ecmdParseOption(&argc, &argv, "-unicast"))
        {
            ecmdOutput("Running in unicast mode\n");
            b_unicast = true;
        }

        // unsupported arguments left over?
        if (argc != 1)
        {
            ecmdOutputError("Unknown/unsupported arguments specified!\n");
            help();
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

        std::vector< fapi2::MulticastGroupMapping > l_mappings =
        {
            {fapi2::MCGROUP_GOOD, 0x0},
            {fapi2::MCGROUP_GOOD_NO_TP, 0x1},
            {fapi2::MCGROUP_GOOD_MC, 0x2},
            {fapi2::MCGROUP_GOOD_IOHS, 0x3},
            {fapi2::MCGROUP_GOOD_PAU, 0x4},
            {fapi2::MCGROUP_GOOD_PCI, 0x5},
            {fapi2::MCGROUP_GOOD_EQ, 0x6},
            {fapi2::MCGROUP_ALL, 0x7}
        };

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

            if (b_unicast)
            {
                pu_target.chipUnitType = "c";
                pu_target.chipUnitTypeState = ECMD_TARGET_FIELD_VALID;
                pu_target.chipUnitNumState = ECMD_TARGET_FIELD_WILDCARD;
            }
            else
            {
                pu_target.chipUnitTypeState = ECMD_TARGET_FIELD_UNUSED;
                pu_target.chipUnitNumState = ECMD_TARGET_FIELD_UNUSED;
            }

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

                // invoke FAPI procedure
                if (!ecmdGetGlobalVar(ECMD_GLOBALVAR_QUIETMODE))
                {
                    snprintf(outstr, sizeof(outstr), "Running %s on target %s\n",
                             PROCEDURE.c_str(),
                             ecmdWriteTarget(pu_target).c_str());
                    ecmdOutput(outstr);
                }

                fapi2::Target < fapi2::TARGET_TYPE_PROC_CHIP > chip_target;
                fapi2::Target < fapi2::TARGET_TYPE_CORE |
                fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > core_target;
                fapi2::Target < fapi2::TARGET_TYPE_CORE |
                fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > core_mc_target;

                if (b_unicast)
                {
                    // get FAPI2 core target from ecmd target
                    fapi2::Target < fapi2::TARGET_TYPE_CORE |
                    fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > l_core_target(&pu_target);
                    core_target = l_core_target;   // local scope to outer scope
                    chip_target = core_target.getParent<fapi2::TARGET_TYPE_PROC_CHIP>();
                }
                else
                {
                    // Get FAPI2 chip target from ecmd target
                    fapi2::Target < fapi2::TARGET_TYPE_PROC_CHIP >l_chip_target(&pu_target);
                    chip_target = l_chip_target;   // local scope to outer scope

                    // Create core multicast target from chip target
                    core_mc_target = chip_target.getMulticast(fapi2::MCGROUP_GOOD_EQ, fapi2::MCCORE_ALL);
                }

                rc_fapi = fapi2::setMulticastGroupMap(chip_target, l_mappings);
                rc = (uint64_t)rc_fapi;

                if (rc)
                {
                    snprintf(outstr, sizeof(outstr), "%s: Error calling setMulticastGroupMap.", PROCEDURE.c_str());
                    ecmdOutput(outstr);
                    ecmdUnloadDll();
                    return rc;
                }

                if (b_unicast)
                {
                    FAPI_EXEC_HWP(rc_fapi,
                                  p10_hcd_core_shadows_disable,
                                  core_target);
                }
                else
                {
                    FAPI_EXEC_HWP(rc_fapi,
                                  p10_hcd_core_shadows_disable,
                                  core_mc_target);
                }

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
                help();
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
