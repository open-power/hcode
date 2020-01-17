/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/plat_target.H $          */
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
/**
 * @file plat_target.H
 * @brief platform definitions for fapi2 targets
 */

#ifndef __FAPI2_PLAT_TARGET__
#define __FAPI2_PLAT_TARGET__

#include <stdint.h>
#include <target_types.H>
//
// Define what a platform handle looks like. For Hostboot,
// for example, this might be a void*. For the SBE, this
// will be a uint64_t ...
//

namespace fapi2
{

//PLAT EXTRA//

enum MulticastGroup : uint32_t
{
    MCGROUP_GOOD_EQ                   = 7
};

// index in the global target vector variable
enum PlatTargetOffset
{
    PPE_CHIP_TARGET_OFFSET            = 0,
    PPE_PERV_TARGET_OFFSET            = 1,
    PPE_EQ_TARGET_OFFSET              = 2,
    PPE_CORE_TARGET_OFFSET            = 3,
    PPE_CORE_TARGET_COUNT             = 4,
    PPE_TOTAL_TARGET_COUNT            = 7
};

typedef enum plat_target_type
{
    PPE_TARGET_TYPE_NONE              = 0x00,
    PPE_TARGET_TYPE_SYSTEM            = 0x01,
    PPE_TARGET_TYPE_PROC_CHIP         = 0x02,
    PPE_TARGET_TYPE_PERV              = 0x04,
    PPE_TARGET_TYPE_EQ                = 0x08,
    PPE_TARGET_TYPE_CORE              = 0x10,
    PPE_TARGET_TYPE_MULTICAST         = 0x80,
    PPE_TARGET_TYPE_ALL               = 0xFF
} plat_target_type_t;

typedef union plat_target_handle
{
    //PLAT NOTE//
    // Platform: P10 QME
    // The fields are layout in the way that
    // aligns with the need of address overlay

    // <functional>
    // 1bit
    // internal target info
    // take dont care place in scom address location
    //
    // used for partial good indicator of core targets
    // obviously, perv/eq/core|mc target would always be
    // functional as the local quad would be partial good
    // Btw, previous present indicator is depricated on this plat
    // as only functional indicator has ever been used.
    // all present behavior is now identical as functional

    // <is_multicast>
    // 1bit
    // Multicast indicator to overlay with scom address[1]
    // or local address[4]

    // <multicast_type>
    // 3bits to support 4 types defined in multicast_defs.H in fapi2
    // Multicast type as OR/AND to overlay with scom address[2-4]
    // or local address[5-7]

    // <core_select>
    // having duplicate fields for local and scom address
    // to align with same field location in respective addresses
    // in order to save instruction cost of targeting/addressing.
    //
    // Newly added in p10, used to select core within core target
    // either multicast or unicast overlays to scom address[16-19]
    // or local address[12-15]
    // 4bits, it is a bit mask

    // <target_num>
    // internal target info
    // take dont care place in scom address location
    // doesnt overlay with any part of scom address
    //
    // Note only core target type may have multiple units.
    // Otherwise only one perv/eq/core|mc target per quad,
    // Therefore no need to count their numbers of target
    // then this field is really just core_id on this plat
    // range[0-3], 4bits

    // <target_type>
    // internal target info
    // take dont care place in scom address location
    // doesnt overlay with any part of scom address
    // 8bits which is enough to support all types qme ever needs
    // Encoding defined in the enum above
    //
    // Note formally fapi2 target type has 64 bits,
    // but obviously we wont support all the types.
    // Also previous valid bit is depreciated
    // as TARGET_TYPE_NONE would serve the purpose

    // 0 | 1  | 2 | 3 | 4  | 5 | 6 | 7 | 12-15 | 16-19
    //   | mc | mtype      | 7         |         core  | scom
    //                | mc | mtype     | core          | local

    uint32_t target_info;
    struct
    {
        uint32_t functional        : 1;
        uint32_t reserved          : 3;
        uint32_t is_multicast      : 1;
        uint32_t multicast_type    : 3;
        uint32_t keep_zeros        : 4;
        uint32_t core_select_l     : 4;
        uint32_t core_select_s     : 4;
        uint32_t target_num        : 4;
        uint32_t target_type       : 8;
    } fields;

    //PLAT NOTE//
    //any of the these methods below
    //is a formal fapi2 declared method
    //therefore cannot be used directly in hwp code
    //but only within plat code if needed

    ///
    /// @brief Plat target handle constructor
    ///
    /// @param  i_info target_info to instantiate handle with
    ///
    explicit plat_target_handle(uint32_t i_info = 0): target_info(i_info) {}

    ///
    /// @brief Get the fapi2::TargetType for this target
    ///
    /// @par Converts the internal PPE type for this target to fapi2 enum
    ///
    /// @return The fapi2::TargetType for this target
    ///
    TargetType getFapiTargetType() const;

    //PLAT NOTE//
    //Only three reason to overlay an address
    //1) Plain per-core address needs to add core_select when unicast
    //2) Plain per-core address needs to add core_select
    //   and multcast info when multicast
    //3) In addition, the scom may be queued
    //
    //Note for any non-per-core address
    //a) chiplet_id, should be given by default address
    //b) core_select remains 0 but that should be
    //   default with given address
    //c) isPerCore bit should be off also defaultly given
    //Therefore, no need to overlay anything except queued scom
    //for non-per-core address with probably given eq target
    //on this platform that is, other plat will properly
    //handle with eq target
    //
    //fields that needs to be overlayed
    //multicast[1]     : from iv_handle.fields.is_multicast
    //mc_type[2-4]     : from iv_handle.fields.multicast_type
    //mc_group[5-7]    : always 7 for qme or iv_handle.fields.multicast_group
    //pibMaster[8]     : typically 0s except bit8 is queued scom
    //coreSelect[16-19]: from iv_handle.fields.core_select

    ///
    /// @brief Get the scom address overlay for this target
    ///
    /// @return Address overlay
    ///
    __attribute__((always_inline))
    inline uint32_t getLocalAddressOverlay(const uint32_t addr) const
    {
        return (target_info & 0x0FFF0000) | (addr);
    }

    __attribute__((always_inline))
    inline uint32_t getScomAddressOverlay(const uint32_t addr) const
    {
        return ((target_info & 0x0F000000) << 3) |
               (target_info & 0x0000F000)       |
#ifdef USE_QME_QUEUED_SCOM
               ((addr | 0x07800000) & 0x0FFFFFFF);
#else
               ((addr | 0x07000000) & 0x0FFFFFFF);
#endif
    }

    ///
    /// @brief Get the plat target type
    ///
    /// @return The plat target type as a fapi2::TargetType
    ///
    plat_target_type_t getPlatTargetType() const
    {
        return static_cast<plat_target_type_t>(fields.target_type);
    }

    ///
    /// @brief Get the instance number for this target
    ///
    /// @return The instance number for this target
    ///
    uint32_t getTargetInstance() const
    {
        return fields.target_num;
    }

    ///
    /// @brief Returns whether this target is functional
    ///
    /// @return true if Target is functional
    ///
    bool getFunctional() const
    {
        return fields.functional;
    }

    ///
    /// @brief Set functional state of the Target
    ///
    /// @param [in] i_state Functional state to set
    ///
    void setFunctional(const bool& i_state)
    {
        fields.functional = i_state;
    }

    ///
    /// @brief Returns whether this target is present
    ///
    /// @return true if Target is present
    ///
    bool getPresent() const
    {
        //PLAT NOTE//
        // combine present with functional
        // in qme case, if unit is present but not functional
        // we wont operate on it in any case anyways
        return fields.functional;
    }

    ///
    /// @brief Set Target as present
    ///
    void setPresent()
    {
        return;
        //F2//fields.present = true;
    }

    ///
    /// @brief Get Core Select field
    ///
    uint32_t getCoreSelect(void) const
    {
        return fields.core_select_l;
    }

    ///
    /// @brief Set Core Select field
    ///
    void setCoreSelect(const uint32_t& core_select)
    {
        fields.core_select_l = core_select;
        fields.core_select_s = core_select;
    }

    ///
    /// @brief Gets the plat target handle as a uint32
    ///
    /// @return Plat target handle as a uint32_t
    ///
    operator uint32_t() const
    {
        return target_info;
    }

} plat_target_handle_t;


//PLAT NOTE//
//Due to inconvenient of using target class constructor
//Using this function instead to prepare iv_hanle value
//then let class constructor just instantiate on it.
//Note multicast is further handled in mcUpdateHandle()
template<TargetType K>
plat_target_handle_t
createPlatTargetHandle(const uint32_t i_plat_argument)
{
    plat_target_handle_t l_handle;

    // Already formed target handle?
    // note i_plat_argument may have any meaningful data at lower bits
    // therefore, use functional bit at upper bits as valid check,
    l_handle.target_info = i_plat_argument;

    if( l_handle.fields.functional )
    {
        return l_handle;
    }

    l_handle.target_info = 0;

    if( K & TARGET_TYPE_PROC_CHIP )
    {
        l_handle.fields.target_type = PPE_TARGET_TYPE_PROC_CHIP;
    }
    else if( K & TARGET_TYPE_PERV )
    {
        l_handle.fields.functional = 1;
        l_handle.fields.target_type = PPE_TARGET_TYPE_PERV;
    }
    else if( K & TARGET_TYPE_EQ )
    {
        l_handle.fields.functional = 1;
        l_handle.fields.target_num = i_plat_argument;
        l_handle.fields.target_type = PPE_TARGET_TYPE_EQ;
    }
    else if( K & TARGET_TYPE_CORE )
    {
        // functional bit is set by caller based on partial good
        l_handle.fields.target_type = PPE_TARGET_TYPE_CORE;

        if( K & TARGET_TYPE_MULTICAST )
        {
            // this would be multi-hot select
            l_handle.fields.core_select_l = i_plat_argument;
            l_handle.fields.core_select_s = i_plat_argument;
        }
        else
        {
            //only single core target would have meaningful target_num as core_id
            l_handle.fields.target_num = i_plat_argument;
            l_handle.fields.core_select_l = (0x8 >> i_plat_argument);
            l_handle.fields.core_select_s = (0x8 >> i_plat_argument);
        }
    }

    return l_handle;
}

//PLAT END//

} // fapi2 namespace

#endif
