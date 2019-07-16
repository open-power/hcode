/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/target.H $               */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2012,2019                                                    */
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
 * @file target.H
 * @brief platform specializations for fapi2 targets
 */

#ifndef __FAPI2_TARGET__
#define __FAPI2_TARGET__

#include <plat_target.H>
#include <fapi2_target.H>
//F2//#include <stdio.h>

//PLAT EXTRA//
#include <return_code.H>
#include <stdint.h>
#include <vector>

extern "C"
{
    extern std::vector<fapi2::plat_target_handle_t> G_vec_targets;
}

namespace fapi2
{

//PLAT EXTRA//

//PLAT NOTE// prototypes in target.C listed here
/// @brief Function to initialize the G_targets vector
///        based on partial good attributes
ReturnCode                    plat_TargetsInit();
Target<TARGET_TYPE_PROC_CHIP> plat_getChipTarget();

//PLAT END//


//PLAT NOTE//
//To create a target with plat argument in target.C,
// not really convenient to just implement and use
// the following two functions with their caller,
// the given target class constructor provided
// by the base fapi2_target.H target class definition.
// User should use plat_target.H createPlatTargetHandle()
// to prepare the iv_handle before instantiate class
// Here only mcUpdateHandle() is used to initialize multicast.

template<TargetType K, MulticastType M, typename V>
static constexpr void plat_apply_target_limits(void)
{
    static_assert( !( (K & TARGET_TYPE_MULTICAST) &&
                      (K & TARGET_TYPE_PROC_CHIP) ),
                   "PROC_CHIP type cannot be multicast");
}

template<TargetType T, MulticastType M, typename V>
inline void Target<T, M, V>::mcUpdateHandle()
{
    this->iv_handle.fields.is_multicast   = 1;
    this->iv_handle.fields.multicast_type = (uint32_t)M;
    this->iv_handle.fields.target_type |= PPE_TARGET_TYPE_MULTICAST;
};

///
/// @brief Assignment Operator.
/// @param[in] i_right Reference to Target to assign from.
/// @return Reference to 'this' Target
///
template<TargetType K, MulticastType M, typename V>
Target<K, M, V>& Target<K, M, V>::operator=(const Target& i_right)
{
    iv_handle = i_right.iv_handle;
    return *this;
}

///
/// @brief Equality Comparison Operator
/// @param[in] i_right Reference to Target to compare.
/// @return bool. True if equal.
/// @note Platforms need to define this so that the physical
/// targets are determined to be equivilent rather than just the handles
///
//F2//template<TargetType K, MulticastType M, typename V>
//F2//bool Target<K, M, V>::operator==(const Target& i_right) const
//F2//{
//F2//    return i_right.iv_handle == iv_handle;
//F2//}

///
/// @brief Inquality Comparison Operator
/// @param[in] i_right Reference to Target to compare.
/// @return bool. True if not equal.
/// @note Platforms need to define this so that the physical
/// targets are determined to be equivilent rather than just the handles
///
//F2//template<TargetType K, MulticastType M, typename V>
//F2//bool Target<K, M, V>::operator!=(const Target& i_right) const
//F2//{
//F2//    return i_right.iv_handle != iv_handle;
//F2//}

///
/// @brief Less Than Comparison Operator
/// @param[in] i_right Reference to Target to compare.
/// @return bool. True if less than i_right.
/// @note Platforms need to define this so that the physical
/// targets are determined to be less than rather than just the handles
///
//F2//template<TargetType K, MulticastType M, typename V>
//F2//bool Target<K, M, V>::operator<(const Target& i_right) const
//F2//{
//F2//    return i_right.iv_handle < iv_handle;
//F2//}

///
/// @brief Get this target's immediate parent
/// @tparam T The type of the parent
/// @return Target<T> a target representing the parent
///
template<TargetType K, MulticastType M, typename V>
template<TargetType T>
inline Target<T, M, V> Target<K, M, V>::getParent(void) const
{
    // It's forbidden to strip multicast from a target below PROC_CHIP level:
    // Since a multicast might end up expanding to more than one unicast target,
    // users are required to use getChildren if they want to map back to unicast.
    static_assert( !( ( (K ^ T) & TARGET_TYPE_MULTICAST ) &&
                      ( (T & TARGET_TYPE_CHIPLETS) != TARGET_TYPE_NONE ) ),
                   "Parent target for a multicast target must also be multicast or PROC_CHIP");

    static_assert( ( (K & TARGET_TYPE_CORE)   ||
                     (K & TARGET_TYPE_EQ)     ||
                     (K & TARGET_TYPE_PERV) ) &&
                   ( (T & TARGET_TYPE_EQ)     ||
                     (T & TARGET_TYPE_PERV)   ||
                     (T == TARGET_TYPE_PROC_CHIP) ),
                   "Invalid parent/child target type passed");

    static_assert( ( !(K & TARGET_TYPE_EQ) ) ||
                   (T & TARGET_TYPE_PERV) ||
                   (T == TARGET_TYPE_PROC_CHIP),
                   "Invalid parent for EQ target, must be PERV or PROC_CHIP");

    static_assert( ( !(K & TARGET_TYPE_CORE) ) ||
                   (T & TARGET_TYPE_EQ)     ||
                   (T & TARGET_TYPE_PERV)   ||
                   (T == TARGET_TYPE_PROC_CHIP),
                   "Invalid parent for CORE target, must be EQ/PERV/PROC_CHIP");

    static_assert( ( !(K & TARGET_TYPE_PERV) ) ||
                   (T & TARGET_TYPE_PERV)   ||
                   (T == TARGET_TYPE_PROC_CHIP),
                   "Invalid parent for PERV target, must be PERV or PROC_CHIP");

    Target<T>* l_temp;

    if( TARGET_TYPE_PROC_CHIP == T ) // EQ/EC/PERV ===> PROC
    {
        l_temp = reinterpret_cast< Target<T>* >(&G_vec_targets.at(PPE_CHIP_TARGET_OFFSET));
    }

    if( TARGET_TYPE_PERV & T )      // EQ/EC/PERV ===> PERV
    {
        l_temp = reinterpret_cast< Target<T>* >(&G_vec_targets.at(PPE_PERV_TARGET_OFFSET));
    }

    if( (TARGET_TYPE_EQ & T) && (TARGET_TYPE_CORE & K) ) // EC ===> EQ
    {
        l_temp = reinterpret_cast< Target<T>* >(&G_vec_targets.at(PPE_EQ_TARGET_OFFSET));
    }

    /*
        if( TARGET_TYPE_MULTICAST & K )
        {
            //HAD to do this due to mcUpdateHandle and iv_handle is private
            l_temp->get().fields.is_multicast   = 1;
            l_temp->get().fields.multicast_type = M;
            l_temp->get().fields.target_type |= PPE_TARGET_TYPE_MULTICAST;
        }
    */
    return (*l_temp);
}

///
/// @brief Get this target's children
/// @tparam T The type of the parent
/// @param[in] i_state The desired TargetState of the children
/// @return std::vector<Target<T> > a vector of present/functional
/// children
/// @warning The children of EX's (cores) are expected to be returned
/// in order. That is, core 0 is std::vector[0].
///
template<TargetType K, MulticastType M, typename V>
template<TargetType T>
inline std::vector<Target<T, M, V> >
Target<K, M, V>::getChildren(const TargetState i_state) const
{
    // valid children for multicast targets are the same with multicast stripped
    static_assert( !( (K & TARGET_TYPE_MULTICAST) &&
                      (K != (T | TARGET_TYPE_MULTICAST) ) ),
                   "improper child of fapi2::TARGET_TYPE_MULTICAST");

    static_assert( (T & TARGET_TYPE_CORE),
                   "Invalid parent/child passed to getChildren");

    std::vector<Target<T> > l_children;

    // < EQ or Core | MC > ==> Cores
    uint32_t l_childrenPerParent = PPE_CORE_TARGET_COUNT;
    uint32_t l_childTargetOffset = PPE_CORE_TARGET_OFFSET;
    uint32_t l_core_select       = 0;

    if ( K & TARGET_TYPE_CORE )
    {
        l_core_select = this->iv_handle.getCoreSelect();
    }

    for(uint32_t i = 0; i < l_childrenPerParent; ++i)
    {
        Target<T>* l_temp =
            reinterpret_cast< Target<T>* >(&G_vec_targets.at(l_childTargetOffset + i));

        if ( ( K & TARGET_TYPE_CORE ) &&
             (! ( l_core_select & ( 0x8 >> i ) ) ) )
        {
            continue;
        }

        switch (i_state)
        {
            //PLAT NOTE//
            // combine present with functional
            // in qme case, if unit is present but not functional
            // we wont operate on it in any case anyways
            case TARGET_STATE_PRESENT:
            case TARGET_STATE_FUNCTIONAL:
            default:
                if ((*l_temp).isFunctional())
                {
                    l_children.push_back((*l_temp));
                }

                break;
        }
    }

    return l_children;
}

// Specialization of getChildren, filtered for pervasive targets.
//F2//template<>
//F2//template<>
//F2//inline std::vector<Target<TARGET_TYPE_PERV> >
//F2//Target<TARGET_TYPE_PERV>::getChildren(const TargetFilter i_filter,
//F2//                                      const TargetState i_state ) const
//F2//{
//F2//    // To keep the compiler quiet about unused variables
//F2//    static_cast<void>(i_state);
//F2//    static_cast<void>(i_filter);
//F2//
//F2//    // For testing
//F2//    return {Target<TARGET_TYPE_PERV>(i_filter), Target<TARGET_TYPE_PERV>(i_filter)};
//F2//}

//F2//template<TargetType K, MulticastType M, typename V>
//F2//template< TargetType T, MulticastType O >
//F2//inline Target < T | TARGET_TYPE_MULTICAST, O, V >
//F2//Target<K, M, V>::getMulticast(const MulticastGroup i_group) const
//F2//{
//F2//    // C++ does not allow partial specialization of class member functions (please prove me wrong!),
//F2//    // so we need to use this static assertion instead. On the upside, the error message is much clearer ;)
//F2//    static_assert((K == TARGET_TYPE_PROC_CHIP), "Parent target must be the proc chip");
//F2//    static_assert((T & TARGET_TYPE_MULTICASTABLE) != 0,
//F2//                  "Requested target type must be part of TARGET_TYPE_MULTICASTABLE");
//F2//    static_assert(bitCount<T>::count == 1,
//F2//                  "Requested target type must be a single type, TARGET_TYPE_MULTICAST will be added automatically");
//F2//
//F2//    return Target < T | TARGET_TYPE_MULTICAST, O, V > ();
//F2//}

template<TargetType K, MulticastType M, typename V>
template< MulticastType O >
inline Target < TARGET_TYPE_CORE | TARGET_TYPE_MULTICAST, O, V >
Target<K, M, V>::getMulticast(const MulticastGroup i_group, const MulticastCoreSelect i_cores) const
{
    // C++ does not allow partial specialization of class member functions (please prove me wrong!),
    // so we need to use this static assertion instead. On the upside, the error message is much clearer ;)
    static_assert((K == TARGET_TYPE_PROC_CHIP), "Parent target must be the proc chip");
    return Target < TARGET_TYPE_CORE | TARGET_TYPE_MULTICAST, O, V > (
               createPlatTargetHandle < TARGET_TYPE_CORE | TARGET_TYPE_MULTICAST > (i_cores));
}


///
/// @brief Get the target at the other end of a bus
/// @tparam T The type of the target on the other end
/// @param[out] o_target A target representing the thing on the other end
/// @param[in] i_state The desired TargetState of the other end
/// @return FAPI2_RC_SUCCESS if OK, platforms will return a non-success
/// ReturnCode in the event of failure
/// @note o_target is only valid if return is FAPI2_RC_SUCCESS
///

//F2//template<TargetType K, MulticastType M, typename V>
//F2//template<TargetType T>
//F2//inline fapi2::ReturnCodes
//F2//Target<K, M, V>::getOtherEnd(Target<T, M, V>& o_target,
//F2//                             const TargetState i_state) const
//F2//{
//F2//    // To keep the compiler quiet about unused variables
//F2//    static_cast<void>(i_state);
//F2//
//F2//    o_target = Target<T, M, V>();
//F2//
//F2//    return FAPI2_RC_SUCCESS;
//F2//}

///
/// @brief Is the target functional?
/// @return true if target is functional, false if non-functional
///

template<TargetType K, MulticastType M, typename V>
inline bool
Target<K, M, V>::isFunctional(void) const
{
    return this->iv_handle.getFunctional();
}

///
/// @brief Returns the chiplet number associated with the Target
/// @return The chiplet number for the Target. 0 is returned if the
/// Target does not have a chiplet number (for ex, the PROC_CHIP Target)
/// @note For logical targets such as the EX, the chiplet number of
/// their immediate parent chiplet is returned
///
template<TargetType K, MulticastType M, typename V>
inline uint8_t
Target<K, M, V>::getChipletNumber(void) const
{
    static_assert((K & TARGET_TYPE_MULTICAST) == 0, "getChipletNumber is not supported for multicast targets");
    return static_cast<plat_target_handle_t>(iv_handle).fields.target_num;
}

template<TargetType K, MulticastType M, typename V>
inline MulticastCoreSelect
Target<K, M, V>::_getCoreSelect(void) const
{
    // Platform can return the core select value stored in it's Target handle
    return (MulticastCoreSelect)this->iv_handle.getCoreSelect();
}


///
/// @brief Return the string interpretation of this target
/// @tparam T The type of the target
/// @param[in] i_target Target<T>
/// @param[in] i_buffer buffer to write in to
/// @param[in] i_bsize size of the buffer
/// @return void
/// @post The contents of the buffer is replaced with the string
/// representation of the target
///
//F2//template<TargetType T, MulticastType M, typename V >
//F2//inline void toString(const Target<T, M, V>& i_target,
//F2//                     char* i_buffer, size_t i_bsize)
//F2//{
//F2//    snprintf(i_buffer, i_bsize, "Target 0x%lX/0x%.16lX/0x%X", i_target.get(), T, M);
//F2//}

///
/// @brief Return the string interpretation of this target
/// @tparam T The type of the target
/// @tparam B The type of the buffer
/// @param[in] i_target A pointer to the Target<T>
/// @param[in] i_buffer buffer to write in to
/// @param[in] i_bsize  size of the buffer
/// @return void
/// @post The contents of the buffer is replaced with the string
/// representation of the target
///
//F2//template< TargetType T, MulticastType M, typename V >
//F2//inline void toString(const Target<T, M, V>* i_target,
//F2//                     char* i_buffer, size_t i_bsize)
//F2//{
//F2//    toString(*i_target, i_buffer, i_bsize);
//F2//}

///
/// @brief Get an enumerated target of a specific type
/// @tparam T The type of the target
/// @param[in] Ordinal representing the ordinal number of
/// the desired target
/// @return Target<T> the target requested
///
//F2//template<TargetType T, MulticastType M, typename V>
//F2//inline Target<T, M, V> getTarget(uint64_t Ordinal)
//F2//{
//F2//    // For testing
//F2//    return Target<T, M, V>(Ordinal);
//F2//}

} // fapi2 namespace

#endif
