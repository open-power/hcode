/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/multicast.H $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
#ifndef __FAPI2_MULTICAST__
#define __FAPI2_MULTICAST__

//F2//#include <fapi2_multicast.H>
//PLAT NOTE// include above isnt correct as there isnt a file with such name

#include <multicast_defs.H>

namespace fapi2
{

template<MulticastType M, MulticastGroup G, typename V>
template<MulticastType O, MulticastGroup N>
inline void Multicast<M, G, V>::updateHandle(V& value)
{
    // Update handle only if multicast bit is set in handle, else we leave the
    // handle unchanged. This enables the same procedure to work with both
    // multicast and unicast targets
    if(value.fields.is_multicast)
    {
        // Update the handle to reflect the new multicast type and group
        value.fields.multicast_type = O;
    }
}

template<MulticastType M, MulticastGroup G, typename V>
inline bool Multicast<M, G, V>::isMulticast() const
{
    return iv_handle.fields.is_multicast;
}

} // fapi2 namespace

#endif
