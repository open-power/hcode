/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/wrapper/p10_scom_xlate.C $   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2019                                                    */
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
/// @file p10_scom_xlate.C
/// @brief P10 SCOM address translation test utility
///
/// HWP HW Maintainer: Thi Tran <thi@us.ibm.com>
/// HWP FW Maintainer:
/// HWP Consumed by: N/A
///


// includes
#include <string>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>

#include <p10_scominfo.H>
#include <p10_cu_utils.H>
#include <p10_scom_addr.H>
#include <ClockDomains.H>
#include <p10_clockcntl.H>

// DEBUG:
// DEBUG_PRINT is set in chips/p10/common/scominfo/wrapper/p10_scom_xlate.mk

// return codes
const int E_ARGS_BAD_ARG_COUNT = 0x1;            ///< Invalid argument count
const int E_ARGS_BAD_TARGET_TYPE = 0x2;          ///< Invalid target type argument value
const int E_ARGS_BAD_CHIP_UNIT_NUM = 0x3;        ///< Invalid chip unit number argument value
const int E_ADDR_PRODUCED_NO_CANDIDATES =
    0x10;  ///< Target type/address matched no chip unit types (no candidates found)
const int E_TYPE_MATCHES_NO_CANDIDATES =
    0x11;   ///< Target type/address matched no chip unit types (one or more candidates found)
const int E_TYPE_MATCHES_GT1_CANDIDATES =
    0x12;  ///< Target type/address matched more than one chip unit types (one or more candidates found)
const int E_ADDR_IS_NOT_UNIT_ZERO =
    0x13;  ///< Target type/address matched a chip unit type, but not instance zero

// *********************************************
// Functions
// *********************************************
/// @brief Validate and load input arguments into
///        variables to be used by main function.
/// @param[in] i_argc          Number of input arguments
/// @param[in] i_argv          Argument array data
/// @param[out] o_targetStr    Target string
/// @param[out] o_targetIsChip True if target is a chip; False otherwise.
/// @param[out] o_addr         SCOM addr
/// @param[out] o_chipUnitNum  Chip Unit Number (0 if not specified)
/// @param[out] o_chipEcLevel  Chip EC level (0 if not specified)
/// @retval uint8_t Return non-zero for error
uint8_t loadInputArguments(int i_argc,
                           char** i_argv,
                           std::string& o_targetStr,
                           bool& o_targetIsChip,
                           uint64_t& o_addr,
                           uint32_t& o_chipUnitNum,
                           uint32_t& o_chipEcLevel)
{
    uint8_t l_rc = 0;
    uint8_t l_minArgCount = 3; // default i_argv[0] + target + address
    uint8_t l_maxArgCount = 6; // default i_argv[0] + target + address + chipUnitNum + '-ec' + chipEC level
    uint8_t l_ecArgIdx = 0;

    do
    {

        // ------------------------------
        // Validate input arguments
        // ------------------------------
        // Number of arguments must be in range
        if ( (i_argc < l_minArgCount) || (i_argc > l_maxArgCount) )
        {
            printf("\nERROR: Number of input arguments (%d) is out of range.!\n\n", i_argc);
            l_rc = E_ARGS_BAD_ARG_COUNT;
            break;
        }

        // Get '-ec' index, if specified
        for (uint8_t ii = 1; ii < i_argc; ii++)
        {
            std::string l_argStr(i_argv[ii]);

            if (l_argStr.compare("-ec") == 0)
            {
                l_ecArgIdx = ii;
                break;
            }
        }

        // If there's '-ec' option, expect one more argument after
        if ( l_ecArgIdx && (i_argc < (l_ecArgIdx + 2)) )
        {
            printf("\nERROR: Not enough number of arguments (%d) for -ec option!\n\n", i_argc);
            l_rc = E_ARGS_BAD_ARG_COUNT;
            break;
        }

        // Get target string and address
        o_targetStr = i_argv[1];                // Target string is always idx 1
        o_addr = strtoull(i_argv[2], NULL, 16); // Address is always idx 2

        // Get Chip unit instance
        o_chipUnitNum = 0;
        // Determine if target string is of a chip or chiplet
        std::size_t l_dot_pos = o_targetStr.find_first_of(".");

        if (l_dot_pos == std::string::npos)
        {
            o_targetIsChip = true;

            // If target is a chip, there shouldn't be a Chip unit instance argument.
            // Expect no argument left or the next argument must be '-ec'
            if (i_argc > 3)
            {
                if (l_ecArgIdx != 3)
                {
                    printf("\nERROR: Chip unit number is not supported for Chip target! l_ecArgIdx = %d\n\n", l_ecArgIdx);
                    l_rc = E_ARGS_BAD_ARG_COUNT;
                    break;
                }
            }
        }
        // Target string is of a chiplet
        else
        {
            o_targetIsChip = false;

            // If i_argc > 3, there is Chip Unit num or chipEC, or both
            if (i_argc > 3)
            {
                // No EC level specified, i_argc must be 4
                if ( (l_ecArgIdx == 0) && (i_argc != 4) )
                {
                    printf("\nERROR: Invalid number of arguments (%d) for non-EC level entry!\n\n", i_argc);
                    l_rc = E_ARGS_BAD_ARG_COUNT;
                    break;
                }
                else
                {
                    o_chipUnitNum = strtoul(i_argv[3], NULL, 10); // Chip Unit Num is idx 3
                }
            }
        }

        // Get chip EC level
        o_chipEcLevel = 0;

        if (l_ecArgIdx)
        {
            sscanf(i_argv[l_ecArgIdx + 1], "%X", &o_chipEcLevel);
        }

    }
    while (0);

#ifdef DEBUG_PRINT
    printf("\n Num of arguments: %d\n", i_argc);

    for (uint8_t ii = 0; ii < i_argc; ii++)
    {
        printf("    i_argv[%d] = %s\n", ii, i_argv[ii]);
    }

    printf("    l_ecArgIdx = %d\n", l_ecArgIdx);

    if (!l_rc)
    {
        printf(" Command line input values\n");
        printf("    i_targetStr   %s\n", o_targetStr.c_str());
        printf("    Chip target   %d\n", o_targetIsChip);
        printf("    i_addr        0x%08lx_%08llx\n", (o_addr >> 32), (o_addr & 0xFFFFFFFFULL));
        printf("    i_chipUnitNum %d\n", o_chipUnitNum);
        printf("    i_chipEcLevel 0x%.2X\n", o_chipEcLevel);
    }
    else
    {
        printf("\n loadInputArguments encounters error %d\n", l_rc);
    }

#endif

    return l_rc;
}

/// @brief Get the chip type from input chip string
/// @param[in] i_chipStr String containing chip type
/// @retval p10ChipUnits_t (Chip type)
p10ChipUnits_t getChipTargetType(std::string& i_chipStr)
{
    p10ChipUnits_t l_chipTargetType;

    if (i_chipStr.compare("p10") == 0)
    {
        l_chipTargetType = P10_NO_CU;
    }
    else
    {
        l_chipTargetType = NONE;
    }

    return l_chipTargetType;
}

/// @brief Usage/help function
/// @param[in] i_prg_name String containing program/executable name
/// @retval None
void
usage(const std::string& i_prg_name)
{
    std::vector<char> l_char_array(i_prg_name.begin(), i_prg_name.end());
    l_char_array.push_back(0);

    printf("USAGE: %s <target> <address> [<chip unit #>] [-ec <chip EC level>]\n\n", basename(&l_char_array[0]));
    printf("  Input arguments must be in given order, with optional parameters omitted.\n");
    printf("  Example: p10_scom_xlate.exe p10.phb 8010C00 3 -ec 1.2\n");
    printf("           Target: p10.phb; Addr: 8010C00; ChipUnitNum: 3; ChipEC: 1.2\n\n");
    printf("Required parameters:\n");
    printf("  <target> = P10 target type\n");
    printf("    Supported values:\n");
    printf("      p10\n");
    printf("      p10.perv\n");
    printf("      p10.eq, p10.c\n");
    printf("      p10.pec, p10.phb\n");
    printf("      p10.nmmu\n");
    printf("      p10.pau, p10.pauc, p10.iohs\n");
    printf("      p10.mc, p10.mi, p10.mcc, p10.omic, p10.omi\n");
    printf("  <address> = SCOM address\n\n");
    printf("Optional parameter:\n");
    printf("  <chip unit #> = Chip unit instance number\n");
    printf("    Valid for chip unit targets only (default = 0)\n");
    printf("  <chip EC level> = Chip EC level, two HEX digits.\n");
    printf("    Example: 12 --> EC level 1.2\n");
    return;
}

/// @brief P10 SCOM address translation utility/test program
/// @param[in] i_argc Argument count
/// @param[in] i_argv Argument character strings
/// @retval int Non-zero indicates error
int main(int i_argc, char** i_argv)
{
    int l_rc = 0;

    do
    {
        // parse target type argument (i_argv[1])
        std::string l_target_str;
        uint64_t l_addr = 0;
        uint32_t l_unit_target_num = 0;
        uint32_t l_EcLevel = 0;
        bool l_target_is_chip = true;

        std::string l_chip_str;
        std::string l_chip_unit_str;
        p10ChipUnits_t l_chip_target_type = P10_NO_CU;
        p10ChipUnits_t l_chip_unit_target_type = P10_NO_CU;
        p10TranslationMode_t l_tx_mode = P10_DEFAULT_MODE;

        // Get the arguments
        l_rc = loadInputArguments(i_argc,
                                  i_argv,
                                  l_target_str,
                                  l_target_is_chip,
                                  l_addr,
                                  l_unit_target_num,
                                  l_EcLevel);

        if (l_rc)
        {
            printf("\nERROR: loadInputArguments returns error l_rc %d!\n\n", l_rc);
            usage(i_argv[0]);
            break;
        }

        // -------------------
        // Parse target string
        // -------------------
        if (l_target_is_chip)
        {
            l_chip_str = l_target_str;

            // If target is a chip (i.e. p10, p10x), get the chip type
            if (l_target_is_chip)
            {
                l_chip_target_type = getChipTargetType(l_chip_str);

                if (l_chip_target_type == NONE) // Unrecognized chip type
                {
                    printf("ERROR: Unsupported chip target type: '%s'!\n\n", l_chip_str.c_str());
                    usage(i_argv[0]);
                    l_rc = E_ARGS_BAD_TARGET_TYPE;
                    break;
                }
            }
        }
        else
        {
            // Target is a chip unit (chiplet target)
            std::size_t l_dot_pos = l_target_str.find_first_of(".");
            l_chip_str = l_target_str.substr(0, l_dot_pos);
            l_chip_unit_str = l_target_str.substr(l_dot_pos + 1, std::string::npos);

            // Get chip unit target type
            // Convert chip unit string to chip unit type enum
            l_rc = pu_convertCUString_to_enum(l_chip_unit_str, l_chip_unit_target_type);

            if (l_rc)
            {
                printf("ERROR: Error from pu_convertCUString_to_enum (chip unit='%s')!\n", l_chip_unit_str.c_str());
                break;
            }

            // Verify Chip Unit num is within range
            l_rc = validateChipUnitNum(l_unit_target_num, l_chip_unit_target_type);

            if (l_rc)
            {
                printf("ERROR: Chip unit instance number '%d' is invalid for target type '%s'!\n\n",
                       l_unit_target_num, l_target_str.c_str());
                usage(i_argv[0]);
                l_rc = E_ARGS_BAD_CHIP_UNIT_NUM;
                break;
            }
        }

#ifdef DEBUG_PRINT
        printf("    l_chip_str        %s\n", l_chip_str.c_str());
        printf("    l_chip_unit_str   %s\n", l_chip_unit_str.c_str());
#endif

        // Print input address fields
        printf("\n-------------------------------------\n");
        printf("              INPUT                    \n");
        printf("-------------------------------------\n");
        printf("      Target: %s\n", l_target_str.c_str());
        printf("        Unit: %d", l_unit_target_num);
        displayAddrFields(l_addr, l_chip_unit_target_type, l_EcLevel);

        // check for valid address format, find list of any chip unit targets
        bool l_unit_target_related = false;
        std::vector<p10_chipUnitPairing_t> l_unit_target_matches;

        l_rc = p10_scominfo_isChipUnitScom(l_chip_unit_target_type,
                                           l_EcLevel,
                                           l_addr,
                                           l_unit_target_related,
                                           l_unit_target_matches,
                                           l_tx_mode);

        if (l_rc)
        {
            printf("ERROR: Error from p10_scominfo_isChipUnitScom!\n");
            break;
        }

        printf("\nCANDIDATES:\n");
        printf("-------------------------------------\n");

        // Initialize counter
        uint8_t l_unit_target_match_count = 0;

        // if no candidates are found, throw an error -- user specified an address which was not associated with *any* chip unit
        if (!l_target_is_chip && !l_unit_target_related)
        {
            printf("ERROR: A chipUnit '%s' was given on a non chipUnit SCOM address!\n", l_chip_unit_str.c_str());
            l_rc = E_ADDR_PRODUCED_NO_CANDIDATES;
            break;
        }

        // check all candidates
        for (auto l_iter = l_unit_target_matches.cbegin();
             l_iter != l_unit_target_matches.cend();
             l_iter++)
        {
            std::string l_candidate_str;
            l_rc = pu_convertCUEnum_to_String(l_iter->chipUnitType, l_candidate_str);

            if (l_rc)
            {
                printf("ERROR: Error from pu_convertCUEnum_to_String ('0x%x')!\n", l_iter->chipUnitType);
                break;
            }

            printf("(c)    type: %s (%d)\n", l_candidate_str.c_str(), l_iter->chipUnitNum);

            if (l_chip_unit_target_type == l_iter->chipUnitType)
            {
                l_unit_target_match_count++;
            }
        }

        if (l_rc)
        {
            break;
        }

        uint64_t l_addr_abs = l_addr;

        if (!l_target_is_chip)
        {
            // user type did not match any of the candidate types
            if (!l_unit_target_match_count)
            {
                printf("ERROR: Provided chipUnit '%s' doesn't match any chipUnit returned by p10_scominfo_isChipUnitScom!\n",
                       l_chip_unit_str.c_str());
                l_rc = E_TYPE_MATCHES_NO_CANDIDATES;
                break;
            }

            // user type matched more than one of the candidate types
            if (l_unit_target_match_count != 1)
            {
                printf("ERROR: Provided chipUnit '%s' matches more than one chipUnit returned by p10_scominfo_isChipUnitScom!\n",
                       l_chip_unit_str.c_str());
                l_rc = E_TYPE_MATCHES_GT1_CANDIDATES;
                break;
            }

            l_addr_abs = p10_scominfo_createChipUnitScomAddr(l_chip_unit_target_type,
                         l_EcLevel,
                         l_unit_target_num,
                         l_addr,
                         l_tx_mode);
        }

        // Print output address fields
        printf("\n-------------------------------------\n");
        printf("              OUTPUT                   \n");
        printf("-------------------------------------");
        displayAddrFields(l_addr_abs, l_chip_unit_target_type, l_EcLevel);

        printf("\n\n");
        printf("----------------------------------------\n");
        printf("            Clock Domains               \n");
        printf("----------------------------------------\n");

        // Get clock domain
        CLOCK_DOMAIN l_domain = P10_FAKE_DOMAIN;
        l_rc = p10_clockcntl_getScomClockDomain(l_chip_unit_target_type,
                                                l_unit_target_num,
                                                l_addr_abs,
                                                l_domain,
                                                P10_DEFAULT_MODE);

        if (l_rc)
        {
            printf("ERROR: p10_clockcntl_getScomClockDomain returns an error."
                   " Address 0x%08lx_%08llx, UnitType %s, Instance %d\n",
                   l_addr_abs >> 32, l_addr_abs & 0xFFFFFFFFULL,
                   l_chip_str.c_str(), l_unit_target_num);
        }
        else
        {
            // Convert output domain to string
            std::string l_domainStr = p10_clockcntl_convertClockDomainEnum(l_domain);
            printf("(i)      Addr                     : 0x%08lx_%08llx\n", (l_addr_abs >> 32), (l_addr_abs & 0xFFFFFFFFULL));
            printf("(i)      Chip Unit Type           : %d\n", l_chip_unit_target_type);
            printf("(i)      Chip Unit Num            : %d\n", l_unit_target_num);
            printf("(o)      Clock domain             : %d (%s)\n", l_domain, l_domainStr.c_str());
            printf("(o)      Possible domains altered : ");
            std::list<CLOCK_DOMAIN> l_domains;
            l_rc = p10_clockcntl_clockStateRegisterScreen(l_chip_unit_target_type,
                    l_unit_target_num,
                    l_addr_abs,
                    l_domains,
                    P10_DEFAULT_MODE);

            if (l_rc)
            {
                printf("ERROR: p10_clockcntl_clockStateRegisterScreen returns an error."
                       " Address 0x%08lx_%08llx, UnitType %s, Instance %d\n",
                       l_addr_abs >> 32, l_addr_abs & 0xFFFFFFFFULL,
                       l_chip_str.c_str(), l_unit_target_num);
            }
            else if (l_domains.size() != 0)
            {
                for (CLOCK_DOMAIN domain : l_domains)
                {
                    l_domainStr = p10_clockcntl_convertClockDomainEnum(domain);
                    printf("%d (%s), ", domain, l_domainStr.c_str());
                }

                printf("\n");
            }
            else
            {
                printf("N/A\n");
            }
        }

        printf("\n");
    }
    while(0);

    return l_rc;
}
