/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/pool.C $                 */
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
#include <stdint.h>
#include <stddef.h>
#include <pool.H>
#include "assert.h"

namespace SBEVECTORPOOL
{

vectorMemPool_t g_pool[G_POOLSIZE];

vectorMemPool_t* allocMem()
{
    vectorMemPool_t* pool = NULL;
    size_t idx;

    for( idx = 0; idx < G_POOLSIZE; idx++ )
    {
        if( 0 == g_pool[idx].refCount )
        {
            pool = g_pool + idx;
            g_pool[idx].refCount++;
            break;
        }
    }

    if(NULL == pool )
    {
        PKTRACE("NULL pool idx:%u", idx);
        iota_halt();
    }

    return pool;
}

void releaseMem( vectorMemPool_t* i_pool )
{
    do
    {
        if ( NULL == i_pool )
        {
            break;
        }

        // Assert here.  This pool was not supposed to be in use.
        assert( 0 != i_pool->refCount )
        PK_TRACE(" Releasing pool 0x%08X", i_pool);
        i_pool->refCount--;
        PK_TRACE(" In releaseMem() RefCount:%u", i_pool->refCount);
    }
    while(0);
}

} // namesspace SBEVECTORPOOL
