/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/scominfo/wrapper/p10_scan_xlate.C $   */
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
/// @file p10_scan_xlate.C
/// @brief P10 SCAN address translation test utility
///
/// HWP HWP Owner: jmcgill@us.ibm.com
/// HWP Team: Nest
/// HWP Level: N/A
/// HWP Consumed by: N/A
///


// includes
#include <string>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>

#include "p10_scaninfo.H"
#include "p10_cu_utils.H"
#include "p10_scan_addr.H"

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
    0x13;        ///< Target type/address matched a chip unit type, but not instance zero


/// @brief Usage/help function
/// @param[in] i_prg_name String containing program/executable name
/// @retval None
void
usage(const std::string& i_prg_name)
{
    std::vector<char> l_char_array(i_prg_name.begin(), i_prg_name.end());
    l_char_array.push_back(0);

    printf("USAGE: %s <target> <address> [<chip unit #>]\n\n", basename(&l_char_array[0]));
    printf("Required parameters:\n");
    printf("  <target> = P10 target type\n");
    printf("    Supported values:\n");
    printf("      p10\n");
    printf("      p10.c, p10.eq\n");
    printf("      p10.iohs\n");
    printf("      p10.pec\n");
    printf("      p10.mc\n");
    printf("\n");
    printf("  <address> = Chip-unit relative SCAN address\n\n");
    printf("Optional parameter:\n");
    printf("  <chip unit #> = Chip unit instance number\n");
    printf("    Valid for chip unit targets only (default = 0)\n");
    return;
}


/// @brief P10 SCAN address translation utility/test program
/// @param[in] i_argc Argument count
/// @param[in] i_argv Argument character strings
/// @retval int Non-zero indicates error
int main(int i_argc, char** i_argv)
{
    int l_rc = 0;

    do
    {
        // check command line argument count
        if ((i_argc != 3) && (i_argc != 4))
        {
            if (i_argc != 1)
            {
                printf("ERROR: Invalid arguments!\n\n");
                l_rc = E_ARGS_BAD_ARG_COUNT;
            }

            usage(i_argv[0]);
            break;
        }

        // parse target type argument
        std::string l_target_str(i_argv[1]);
        std::string l_chip_str;
        std::string l_chip_unit_str;
        p10ChipUnits_t l_chip_unit_target_type;
        p10ChipUnits_t l_chip_target_type;
        uint8_t l_max_unit_target_num = 0;
        bool l_target_is_chip = true;

        std::size_t l_dot_pos = l_target_str.find_first_of(".");

        if (l_dot_pos == std::string::npos)
        {
            l_chip_str = l_target_str;
            l_target_is_chip = true;
        }
        else
        {
            l_chip_str = l_target_str.substr(0, l_dot_pos);
            l_chip_unit_str = l_target_str.substr(l_dot_pos + 1, std::string::npos);
            l_target_is_chip = false;
        }

        // parse chip type
        if (l_chip_str.compare("p10") == 0)
        {
            l_chip_target_type = P10_NO_CU;
        }
        else
        {
            printf("ERROR: Unsupported chip target type: '%s'!\n\n", l_chip_str.c_str());
            usage(i_argv[0]);
            l_rc = E_ARGS_BAD_TARGET_TYPE;
            break;
        }

        (void) l_chip_target_type;

        // parse chip unit target type
        if (!l_target_is_chip)
        {
            l_rc = pu_convertCUString_to_enum(l_chip_unit_str, l_chip_unit_target_type);

            if (l_rc)
            {
                printf("ERROR: Error from pu_convertCUString_to_enum (chip unit='%s')!\n", l_chip_unit_str.c_str());
                break;
            }

            switch (l_chip_unit_target_type)
            {
                case PU_C_CHIPUNIT:
                    l_max_unit_target_num = 32;
                    break;

                case PU_EQ_CHIPUNIT:
                    l_max_unit_target_num = 8;
                    break;

                case PU_IOHS_CHIPUNIT:
                    l_max_unit_target_num = 8;
                    break;

                case PU_PEC_CHIPUNIT:
                    l_max_unit_target_num = 2;
                    break;

                case PU_MC_CHIPUNIT:
                    l_max_unit_target_num = 4;
                    break;

                default:
                    printf("ERROR: Unsupported chip unit target type: '%s'!\n\n", l_chip_unit_str.c_str());
                    usage(i_argv[0]);
                    l_rc = E_ARGS_BAD_TARGET_TYPE;
                    break;
            }

            if (l_rc)
            {
                break;
            }
        }

        // parse target unit instance number
        uint32_t l_unit_target_num = 0;

        if (l_target_is_chip)
        {
            if (i_argc != 3)
            {
                printf("ERROR: Too many arguments specified, chip unit number is not supported for chip targets!\n\n");
                usage(i_argv[0]);
                l_rc = E_ARGS_BAD_ARG_COUNT;
                break;
            }
        }
        else
        {
            if (i_argc == 4)
            {
                l_unit_target_num = strtoul(i_argv[3], NULL, 10);
            }

            if (l_unit_target_num >= l_max_unit_target_num)
            {
                printf("ERROR: Chip unit instance number '%d' is out-of-range for target type '%s' (expected 0-%d)!\n\n",
                       l_unit_target_num, l_target_str.c_str(), l_max_unit_target_num - 1);
                usage(i_argv[0]);
                l_rc = E_ARGS_BAD_CHIP_UNIT_NUM;
                break;
            }
        }

        // parse SCAN address argument
        uint32_t l_addr = strtoul(i_argv[2], NULL, 16);
        printf("INPUT:\n");
        printf("-----------------------------------\n");
        printf("(i)     target: %s\n", l_target_str.c_str());
        printf("(i)       unit: %d\n", l_unit_target_num);
        printf("(i)       addr: 0x%08X\n", l_addr);
        printf("(i)       cplt: 0x%02X\n", p10_scan_addr::getChiplet(l_addr));
        printf("(i) ext region: 0x%X\n", p10_scan_addr::getExtendedRegion(l_addr));
        printf("(i)       vitl: %d\n", p10_scan_addr::isVitlRing(l_addr) ? (1) : (0));
        printf("(i)     region: %03X\n", p10_scan_addr::getRegion(l_addr));
        printf("(i)  scan type: %X\n", p10_scan_addr::getScanType(l_addr));

        // check for valid address format, find list of any chip unit targets
        bool l_unit_target_related = false;
        std::vector<p10_chipUnitPairing_t> l_unit_target_matches;

        l_rc = p10_scaninfo_isChipUnitScanRing(l_addr, l_unit_target_related, l_unit_target_matches);

        if (l_rc)
        {
            printf("ERROR: Error from p10_scaninfo_isChipUnitScanRing!\n");
            break;
        }

        printf("\nCANDIDATES:\n");
        printf("-----------------------------------\n");

        // confirm that address specified is associated with 0th chip unit instance of specified unit target type
        uint8_t l_unit_target_match_count = 0;

        // if no candidates are found, throw an error -- user specified an address which was not associated with *any* chip unit
        if (!l_target_is_chip && !l_unit_target_related)
        {
            printf("ERROR: A chipUnit '%s' was given on a non chipUnit SCAN address!\n", l_chip_unit_str.c_str());
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

                if (l_iter->chipUnitNum != 0)
                {
                    printf("ERROR: Address specified for chipUnit '%s' does not match form expected for chipUnit instance 0 (matches instance = '%d')!\n",
                           l_chip_unit_str.c_str(), l_iter->chipUnitNum);
                    l_rc = E_ADDR_IS_NOT_UNIT_ZERO;
                    break;
                }
            }
        }

        if (l_rc)
        {
            break;
        }

        uint32_t l_addr_abs = l_addr;

        if (!l_target_is_chip)
        {
            // user type did not match any of the candidate types
            if (!l_target_is_chip && !l_unit_target_match_count)
            {
                printf("ERROR: Provided chipUnit '%s' doesn't match any chipUnit returned by p10_scaninfo_isChipUnitScan!\n",
                       l_chip_unit_str.c_str());
                l_rc = E_TYPE_MATCHES_NO_CANDIDATES;
                break;
            }

            // user type matched more than one of the candidate types
            if (l_unit_target_match_count != 1)
            {
                printf("ERROR: Provided chipUnit '%s' matches more than one chipUnit returned by p10_scaninfo_isChipUnitScan!\n",
                       l_chip_unit_str.c_str());
                l_rc = E_TYPE_MATCHES_GT1_CANDIDATES;
                break;
            }

            l_addr_abs = p10_scaninfo_createChipUnitScanAddr(l_chip_unit_target_type, l_unit_target_num, l_addr);
        }

        printf("OUTPUT:\n");
        printf("-----------------------------------\n");
        printf("(o)       addr: 0x%08X\n", l_addr_abs);
        printf("(o)       cplt: 0x%02X\n", p10_scan_addr::getChiplet(l_addr_abs));
        printf("(o) ext region: 0x%X\n", p10_scan_addr::getExtendedRegion(l_addr_abs));
        printf("(o)       vitl: %d\n", p10_scan_addr::isVitlRing(l_addr_abs) ? (1) : (0));
        printf("(o)     region: %03X\n", p10_scan_addr::getRegion(l_addr_abs));
        printf("(o)  scan type: %X\n", p10_scan_addr::getScanType(l_addr_abs));

    }
    while(0);

    return l_rc;
}
