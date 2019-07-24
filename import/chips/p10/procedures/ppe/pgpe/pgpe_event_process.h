/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_event_process.h $   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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
#ifndef __PGPE_PROCESS_EVENT_H__
#define __PGPE_PROCESS_EVENT_H__


void pgpe_process_pstate_start_stop(void* args);
void pgpe_process_clip_update(void* args);
void pgpe_process_clip_update_w_ack(void* args);
void pgpe_process_clip_update_post_actuate();
void pgpe_process_pmcr_request(void* args);
void pgpe_process_wof_ctrl(void* args);
void pgpe_process_wof_ctrl_post_actuate();
void pgpe_process_wof_vrt(void* args);
void pgpe_process_wof_vrt_post_actuate();
void pgpe_process_safe_mode(void* args);
void pgpe_process_complex_suspend(void* args);
void pgpe_process_occ_fault();
void pgpe_process_qme_fault();
void pgpe_process_xgpe_fault();
void pgpe_process_pvref_fault();


#endif
