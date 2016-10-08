/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_irq_handlers.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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

#include "p9_cme_stop.h"
#include "p9_cme_stop_enter_marks.h"
#include "p9_cme_irq.h"

extern CmeStopRecord G_cme_stop_record;

void
p9_cme_stop_exit_handler(void* arg, PkIrqId irq)
{
    MARK_TRAP(STOP_EXIT_HANDLER)
    PK_TRACE_INF("SX-IRQ: %d", irq);
    out32(CME_LCL_EIMR_OR, BITS32(12, 6) | BITS32(20, 2));
    pk_semaphore_post((PkSemaphore*)arg);
}

void
p9_cme_stop_enter_handler(void* arg, PkIrqId irq)
{
    MARK_TRAP(STOP_ENTER_HANDLER)
    PK_TRACE_INF("SE-IRQ: %d", irq);
    out32(CME_LCL_EIMR_OR, BITS32(12, 6) | BITS32(20, 2));
    pk_semaphore_post((PkSemaphore*)arg);
}

void
p9_cme_stop_db1_handler(void* arg, PkIrqId irq)
{
    PkMachineContext ctx;
    MARK_TRAP(STOP_DB1_HANDLER)
    PK_TRACE_INF("DB1-IRQ: %d", irq);
    pk_irq_vec_restore(&ctx);
}

void
p9_cme_stop_db2_handler(void* arg, PkIrqId irq)
{
    PkMachineContext ctx;
    cppm_cmedb2_t    db2c0, db2c1;

    MARK_TRAP(STOP_DB2_HANDLER)
    PK_TRACE("DB2-IRQ: %d", irq);

    CME_GETSCOM(CPPM_CMEDB2, CME_MASK_C0, CME_SCOM_AND, db2c0.value);
    CME_GETSCOM(CPPM_CMEDB2, CME_MASK_C1, CME_SCOM_AND, db2c1.value);
    CME_PUTSCOM(CPPM_CMEDB2, CME_MASK_BC, 0);
    out32(CME_LCL_EISR_CLR,  BITS32(18, 2));

    if (db2c0.fields.cme_message_numbern == DB2_BLOCK_WKUP_ENTRY)
    {
        G_cme_stop_record.core_blockwu |= CME_MASK_C0;
        g_eimr_override                |= IRQ_VEC_PCWU_C0;
    }
    else if (db2c0.fields.cme_message_numbern == DB2_BLOCK_WKUP_EXIT)
    {
        G_cme_stop_record.core_blockwu &= ~CME_MASK_C0;
        g_eimr_override                &= ~IRQ_VEC_PCWU_C0;
    }

    if (db2c1.fields.cme_message_numbern == DB2_BLOCK_WKUP_ENTRY)
    {
        G_cme_stop_record.core_blockwu |= CME_MASK_C1;
        g_eimr_override                |= IRQ_VEC_PCWU_C1;
    }
    else if (db2c1.fields.cme_message_numbern == DB2_BLOCK_WKUP_EXIT)
    {
        G_cme_stop_record.core_blockwu &= ~CME_MASK_C1;
        g_eimr_override                &= ~IRQ_VEC_PCWU_C1;
    }

    out32(CME_LCL_SICR_OR,  G_cme_stop_record.core_blockwu << SHIFT32(3));
    out32(CME_LCL_SICR_CLR,
          (~G_cme_stop_record.core_blockwu & CME_MASK_BC) << SHIFT32(3));

    out32(CME_LCL_FLAGS_OR, G_cme_stop_record.core_blockwu << SHIFT32(9));
    out32(CME_LCL_FLAGS_CLR,
          (~G_cme_stop_record.core_blockwu & CME_MASK_BC) << SHIFT32(9));

    pk_irq_vec_restore(&ctx);
}
