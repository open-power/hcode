/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_temp_structs.h $    */
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
#ifndef __PGPE_TEMP_STRUCTS_H__
#define __PGPE_TEMP_STRUCTS_H__

typedef union dpll_stat
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t reserved1 : 1;
        uint64_t freqout : 11;
        uint64_t hires_freqout : 5;
        uint64_t reserved2 : 43;
        uint64_t update_complete : 1;
        uint64_t freq_change : 1;
        uint64_t block_active : 1;
        uint64_t lock : 1;
#else
        uint64_t lock : 1;
        uint64_t block_active : 1;
        uint64_t freq_change : 1;
        uint64_t update_complete : 1;
        uint64_t reserved2 : 43;
        uint64_t hires_freqout : 5;
        uint64_t freqout : 11;
        uint64_t reserved1 : 1;
#endif // _BIG_ENDIAN
    } fields;
} dpll_stat_t;

typedef union dpll_freq
{

    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t reserved1 : 1;
        uint64_t fmax : 11;
        uint64_t hires_fmax : 4;
        uint64_t max_mult_frac7: 1;
        uint64_t fmult : 11;
        uint64_t hires_fmult : 4;
        uint64_t mult_frac7: 1;
        uint64_t fmin : 11;
        uint64_t hires_fmin : 4;
        uint64_t min_mult_frac7: 1;
        uint64_t reserved4 : 15;
#else
        uint64_t reserved4 : 15;
        uint64_t min_mult_frac7: 1;
        uint64_t hires_fmin : 4;
        uint64_t fmin : 11;
        uint64_t mult_frac7: 1;
        uint64_t hires_fmult : 4;
        uint64_t fmult : 11;
        uint64_t max_mult_frac7: 1;
        uint64_t hires_fmax : 4;
        uint64_t fmax : 11;
        uint64_t reserved1 : 1;
#endif // _BIG_ENDIAN
    } fields;
} dpll_freq_t;

typedef union dpll_ctrl
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t dpll_lock_sel : 1;
        uint64_t enable_jump_protect : 1;
        uint64_t ff_bypass : 1;
        uint64_t dco_override : 1;
        uint64_t dco_incr : 1;
        uint64_t dco_decr : 1;
        uint64_t spare : 2;
        uint64_t ff_slewrate_up : 8;
        uint64_t ff_slewrate_dn : 8;
        uint64_t spare2 : 1;
        uint64_t dynamic_slew_mode : 1;
        uint64_t fast_fmax_disable : 1;
        uint64_t fast_fmin_disable : 1;
        uint64_t ro: 5;
        uint64_t jump_value_n_l : 3;
        uint64_t ro1: 1;
        uint64_t jump_value_n_s : 3;
        uint64_t ro2: 1;
        uint64_t jump_values_l_s : 3;
        uint64_t ro3: 1;
        uint64_t jump_value_s_n : 3;
        uint64_t ro4 : 16;
#else
        uint64_t ro4 : 16;
        uint64_t jump_value_s_n : 3;
        uint64_t ro3: 1;
        uint64_t jump_values_l_s : 3;
        uint64_t ro2: 1;
        uint64_t jump_value_n_s : 3;
        uint64_t ro1: 1;
        uint64_t jump_value_n_l : 3;
        uint64_t ro: 5;
        uint64_t fast_fmin_disable : 1;
        uint64_t fast_fmax_disable : 1;
        uint64_t dynamic_slew_mode : 1;
        uint64_t spare2 : 1;
        uint64_t ff_slewrate_dn : 8;
        uint64_t ff_slewrate_up : 8;
        uint64_t spare : 2;
        uint64_t dco_decr : 1;
        uint64_t dco_incr : 1;
        uint64_t dco_override : 1;
        uint64_t ff_bypass : 1;
        uint64_t enable_jump_protect : 1;
        uint64_t dpll_lock_sel : 1;
#endif // _BIG_ENDIAN
    } fields;
} dpll_ctrl_t;

typedef union pmsr
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif // _BIG_ENDIAN
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t pstate_data : 36;
        uint64_t reserved    : 23;
        uint64_t version     : 5;
#else
        uint64_t version     : 5;
        uint64_t reserved    : 23;
        uint64_t pstate_data : 36;
#endif
    } hw_fields;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t global_actual : 8;
        uint64_t local_actual : 8;
        uint64_t pmin : 8;
        uint64_t pmax : 8;
        uint64_t pmcr_disabled : 1;
        uint64_t safe_mode : 1;
        uint64_t reserved : 1;
        uint64_t pstates_suspended : 1;
        uint64_t reserved1  : 22;
        uint64_t upd_in_prog : 1;
        uint64_t invalid_pmcr_version : 1;
        uint64_t version : 4;
#else
        uint64_t version : 4;
        uint64_t invalid_pmcr_version : 1;
        uint64_t upd_in_prog : 1;
        uint64_t reserved1  : 22;
        uint64_t pstates_suspended : 1;
        uint64_t reserved : 1;
        uint64_t safe_mode : 1;
        uint64_t pmcr_disabled : 1;
        uint64_t pmax : 8;
        uint64_t pmin : 8;
        uint64_t local_actual : 8;
        uint64_t global_actual : 8;
#endif
    } fields;
} pmsr_t;


typedef union rcimr
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif
    } words;

    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t rp0        : 8;
        uint64_t reserved0  : 3;
        uint64_t rx0        : 5;
        uint64_t rp1        : 8;
        uint64_t reserved1  : 3;
        uint64_t rx1        : 5;
        uint64_t rp2        : 8;
        uint64_t reserved2  : 3;
        uint64_t rx2        : 5;
        uint64_t rp3        : 8;
        uint64_t reserved3  : 3;
        uint64_t rx3        : 5;
#else
        uint64_t rx3        : 5;
        uint64_t reserved3  : 3;
        uint64_t rp3        : 8;
        uint64_t rx2        : 5;
        uint64_t reserved2  : 3;
        uint64_t rp2        : 8;
        uint64_t rx1        : 5;
        uint64_t reserved1  : 3;
        uint64_t rp1        : 8;
        uint64_t rx0        : 5;
        uint64_t reserved0  : 3;
        uint64_t rp0        : 8;
#endif
    } fields;
} rcimr_t;

typedef union rctar
{
    uint64_t value;
    uint8_t resclk_entry[8];
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif
    } words;

} rctar_t;

typedef union rcptr
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t target_pstate      : 8;
        uint64_t pstate_ack_pending : 1;
        uint64_t reserved           : 55;
#else
        uint64_t reserved           : 55;
        uint64_t pstate_ack_pending : 1;
        uint64_t target_pstate      : 8;
#endif
    } fields;
} rcptr_t;

typedef union rcmr
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t step_enable            : 1;
        uint64_t auto_ack_enable        : 1;
        uint64_t auto_target_disable    : 1;
        uint64_t auto_done_disable      : 1;
        uint64_t step_delay             : 4;
        uint64_t reserved0              : 27;
        uint64_t core0_control_idx      : 5;
        uint64_t reserved1              : 3;
        uint64_t core1_control_idx      : 5;
        uint64_t reserved2              : 3;
        uint64_t core2_control_idx      : 5;
        uint64_t reserved3              : 3;
        uint64_t core3_control_idx      : 5;
#else
        uint64_t core3_control_idx      : 5;
        uint64_t reserved3              : 3;
        uint64_t core2_control_idx      : 5;
        uint64_t reserved2              : 3;
        uint64_t core1_control_idx      : 5;
        uint64_t reserved1              : 3;
        uint64_t core0_control_idx      : 5;
        uint64_t reserved0              : 27;
        uint64_t step_delay             : 4;
        uint64_t auto_done_disable      : 1;
        uint64_t auto_target_disable    : 1;
        uint64_t auto_ack_enable        : 1;
        uint64_t step_enable            : 1;
#endif
    } fields;
} rcmr_t;

typedef union opitnqa
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t reserved0          : 13;
        uint64_t pcb_intr_payload   : 18;
        uint64_t reserved1          : 32;
#else
        uint64_t reserved1          : 32;
        uint64_t pcb_intr_payload   : 18;
        uint64_t reserved0          : 13;
#endif
    } fields;
} opitnqa_t;

typedef union opitnpra
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t pcb_intr_type_pending0 : 1;
        uint64_t pcb_intr_type_pending1 : 1;
        uint64_t pcb_intr_type_pending2 : 1;
        uint64_t pcb_intr_type_pending3 : 1;
        uint64_t pcb_intr_type_pending4 : 1;
        uint64_t pcb_intr_type_pending5 : 1;
        uint64_t pcb_intr_type_pending6 : 1;
        uint64_t pcb_intr_type_pending7 : 1;
        uint64_t reserved               : 56;
#else
        uint64_t reserved               : 56;
        uint64_t pcb_intr_type_pending7 : 1;
        uint64_t pcb_intr_type_pending6 : 1;
        uint64_t pcb_intr_type_pending5 : 1;
        uint64_t pcb_intr_type_pending4 : 1;
        uint64_t pcb_intr_type_pending3 : 1;
        uint64_t pcb_intr_type_pending2 : 1;
        uint64_t pcb_intr_type_pending1 : 1;
        uint64_t pcb_intr_type_pending0 : 1;
#endif
    } fields;
} opitnpra_t;

typedef union qme_wcor
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t reserved0: 1;
        uint64_t c0_ovr_throttled: 1;
        uint64_t c0_thr_idx: 6;
        uint64_t reserved1: 1;
        uint64_t c1_ovr_throttled: 1;
        uint64_t c1_thr_idx: 6;
        uint64_t reserved2: 1;
        uint64_t c2_ovr_throttled: 1;
        uint64_t c2_thr_idx: 6;
        uint64_t reserved3: 1;
        uint64_t c3_ovr_throttled: 1;
        uint64_t c3_thr_idx: 6;
        uint64_t reserved4 : 32;
#else
        uint64_t reserved4 : 32;
        uint64_t c3_thr_idx: 6;
        uint64_t c3_ovr_throttled: 1;
        uint64_t reserved3: 1;
        uint64_t c2_thr_idx: 6;
        uint64_t c2_ovr_throttled: 1;
        uint64_t reserved2: 1;
        uint64_t c1_thr_idx: 6;
        uint64_t c1_ovr_throttled: 1;
        uint64_t reserved1: 1;
        uint64_t c0_thr_idx: 6;
        uint64_t c0_ovr_throttled: 1;
        uint64_t reserved0: 1;
#endif
    } fields;

} qme_wcor_t;

typedef union cpms_dpcr
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t proxy_scale_factor: 12;
        uint64_t proxy_leakage_constant: 8;
        uint64_t ddp_recharge_value: 7;
        uint64_t reserved: 37;
#else
        uint64_t reserved: 37;
        uint64_t ddp_recharge_value: 7;
        uint64_t proxy_leakage_constant: 8;
        uint64_t proxy_scale_factor: 12;
#endif
    } fields;
} cpms_dpcr;

typedef union qme_fdcr
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t disable: 1;
        uint64_t force_sample: 1;
        uint64_t sticky_control: 2;
        uint64_t control_update_disable: 1;
        uint64_t suppress_ftc_update: 1;
        uint64_t cal_adjust: 2;
        uint64_t delay: 8;
        uint64_t threshold_update_disable: 1;
        uint64_t trip_offset: 3;
        uint64_t data0_detect: 4;
        uint64_t data1_detect: 4;
        uint64_t data2_detect: 4;
        uint64_t large_droop_detect: 4;
        uint64_t small_droop_detect: 4;
        uint64_t slopeA_start_detect: 4;
        uint64_t slopeA_end_detect: 4;
        uint64_t slopeB_start_detect: 4;
        uint64_t slopeB_end_detect: 4;
        uint64_t slopeA_cycles: 4;
        uint64_t slopeB_cycles: 4;
#else
        uint64_t slopeB_cycles: 4;
        uint64_t slopeA_cycles: 4;
        uint64_t slopeB_end_detect: 4;
        uint64_t slopeB_start_detect: 4;
        uint64_t slopeA_end_detect: 4;
        uint64_t slopeA_start_detect: 4;
        uint64_t small_droop_detect: 4;
        uint64_t large_droop_detect: 4;
        uint64_t data2_detect: 4;
        uint64_t data1_detect: 4;
        uint64_t data0_detect: 4;
        uint64_t trip_offset: 3;
        uint64_t threshold_update_disable: 1;
        uint64_t delay: 8;
        uint64_t cal_adjust: 2;
        uint64_t suppress_ftc_update: 1;
        uint64_t control_update_disable: 1;
        uint64_t sticky_control: 2;
        uint64_t force_sample: 1;
        uint64_t disable: 1;
#endif
    } fields;
} qme_fdcr_t;

typedef union qme_ducr
{
    uint64_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t high_order;
        uint32_t low_order;
#else
        uint32_t low_order;
        uint32_t high_order;
#endif
    } words;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t fdcr_delay_c0 : 8;
        uint64_t fdcr_delay_c1 : 8;
        uint64_t fdcr_delay_c2 : 8;
        uint64_t fdcr_delay_c3 : 8;
        uint64_t fdcr_cal_adjust_c0: 2;
        uint64_t fdcr_cal_adjust_c1: 2;
        uint64_t fdcr_cal_adjust_c2: 2;
        uint64_t fdcr_cal_adjust_c3: 2;
        uint64_t core_update_enable: 4;
        uint64_t reserved: 20;
#else
        uint64_t reserved: 20;
        uint64_t core_update_enable: 4;
        uint64_t fdcr_cal_adjust_c3: 2;
        uint64_t fdcr_cal_adjust_c2: 2;
        uint64_t fdcr_cal_adjust_c1: 2;
        uint64_t fdcr_cal_adjust_c0: 2;
        uint64_t fdcr_delay_c3 : 8;
        uint64_t fdcr_delay_c2 : 8;
        uint64_t fdcr_delay_c1 : 8;
        uint64_t fdcr_delay_c0 : 8;
#endif
    } fields;
} qme_ducr_t;

#endif
