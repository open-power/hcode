/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/target.C $               */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2012,2020                                                    */
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

//PLAT EXTRA//

#include <fapi2.H>
#include <fapi2_target.H>

#include <ppe_attribute_struct.H>

fapi2attr::SystemAttributes_t*    G_system_attributes_ptr;
fapi2attr::ProcChipAttributes_t*  G_proc_chip_attributes_ptr;
fapi2attr::PervAttributes_t*      G_perv_attributes_ptr;
fapi2attr::CoreAttributes_t*      G_core_attributes_ptr;
fapi2attr::EQAttributes_t*        G_eq_attributes_ptr;
fapi2attr::EXAttributes_t*        G_ex_attributes_ptr;

using namespace fapi2;

// Global Vector containing ALL targets.
// This structure is referenced by getChildren to
// produce the resultant returned vector from that call.
std::vector<plat_target_handle_t> G_vec_targets;

namespace fapi2
{

///Global current_err for hwp assumes its define
#ifndef __noRC__
    ReturnCode current_err;
#endif


/// @brief Function to initialize the G_targets vector
///        based on partial good attributes
///  this will move to plat_target.H formally
ReturnCode plat_TargetsInit(uint32_t i_quad_id)
{
    // Initialise global attribute pointers
    G_system_attributes_ptr    = &(G_system_attributes);
    G_proc_chip_attributes_ptr = &(G_proc_chip_attributes);
    G_perv_attributes_ptr      = &(G_perv_attributes);
    G_core_attributes_ptr      = &(G_core_attributes);
    G_eq_attributes_ptr        = &(G_eq_attributes);
    G_ex_attributes_ptr        = &(G_ex_attributes);

    // Avoid -gc-sections removes global class constructor from default declaration
    // thus explictly calling constructor here.
    G_vec_targets              = std::vector<plat_target_handle_t>();

    uint32_t l_core_index = 0;
    uint32_t l_core_mask = 0;
    uint32_t l_pg_cores = 0;

    // Read the QMCR registers (last 4 bits is partial good)
    // to set the functional state of EC, EQ and EX targets.
    l_pg_cores = (*(volatile uint32_t*)(0xC0000884)) & 0xF;

    for (uint32_t i = 0; i < PPE_TOTAL_TARGET_COUNT; i++)
    {
        G_vec_targets.push_back((plat_target_handle_t)0x0);
    }

    // Chip Target is the first one
    Target<TARGET_TYPE_PROC_CHIP> chip_target(createPlatTargetHandle<TARGET_TYPE_PROC_CHIP>(0));
    G_vec_targets.at(PPE_CHIP_TARGET_OFFSET) =
        revle32((plat_target_handle_t)(chip_target.get()));

    // Perv Target, only one for one qme
    Target<TARGET_TYPE_PERV> perv_target(createPlatTargetHandle<TARGET_TYPE_PERV>(0));
    G_vec_targets.at(PPE_PERV_TARGET_OFFSET) =
        revle32((plat_target_handle_t)(perv_target.get()));

    // Cache (EQ) Target, again only one for one qme
    Target<TARGET_TYPE_EQ> eq_target(createPlatTargetHandle<TARGET_TYPE_EQ>(i_quad_id));
    G_vec_targets.at(PPE_EQ_TARGET_OFFSET) =
        revle32((plat_target_handle_t)(eq_target.get()));

    // Core (EC) Targets
    for (l_core_mask = 0x8,
         l_core_index = 0; l_core_index < PPE_CORE_TARGET_COUNT; l_core_index++,
         l_core_mask = l_core_mask >> 1)
    {
        Target<TARGET_TYPE_CORE> core_target(createPlatTargetHandle<TARGET_TYPE_CORE>(l_core_index));
        plat_target_handle_t l_handle = core_target.get();
        // DO so ATTR_CHIP_UNIT_POS returns global core id
        l_handle.setTargetInstance((i_quad_id * 4 + l_core_index));

        // Check partial goodness
        if(l_pg_cores & l_core_mask)
        {
            l_handle.setFunctional(true);
        }

        G_vec_targets.at(PPE_CORE_TARGET_OFFSET + l_core_index) =
            revle32(l_handle);
    }

fapi_try_exit:
    return FAPI2_RC_SUCCESS;
}

/// @brief Function to get chip target
Target<TARGET_TYPE_PROC_CHIP> plat_getChipTarget()
{
    return ((Target<TARGET_TYPE_PROC_CHIP>)G_vec_targets.at(0));
}

TargetType plat_target_handle_t::getFapiTargetType() const
{
    TargetType l_targetType = TARGET_TYPE_NONE;

    switch(fields.target_type)
    {
        case PPE_TARGET_TYPE_PROC_CHIP:
            l_targetType = TARGET_TYPE_PROC_CHIP;
            break;

        case PPE_TARGET_TYPE_CORE:
            l_targetType = TARGET_TYPE_CORE;
            break;

        case PPE_TARGET_TYPE_EQ:
            l_targetType = TARGET_TYPE_EQ;
            break;

        case PPE_TARGET_TYPE_PERV:
            l_targetType = TARGET_TYPE_PERV;
            break;

        case PPE_TARGET_TYPE_SYSTEM:
            l_targetType = TARGET_TYPE_SYSTEM;
            break;

        case PPE_TARGET_TYPE_NONE:
        case PPE_TARGET_TYPE_ALL:
        default:
            assert(false);
            break;
    }

    return l_targetType;
}


} // fapi2 namespace


//PLAT END//
