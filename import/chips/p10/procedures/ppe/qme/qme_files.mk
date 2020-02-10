# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/qme/qme_files.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2020
# [+] International Business Machines Corp.
#
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing
# permissions and limitations under the License.
#
# IBM_PROLOG_END_TAG

ifdef IMAGE


IMG-S-SOURCES   = cpmr_header.S

QME-S-SOURCES   = qme_header.S

QME-CPP-SOURCES = qme_main.C       \
                  qme_stop_entry.C \
                  qme_stop_exit.C  
         
QME-C-SOURCES   = qme_addresses.c           \
                  qme_init.c                \
                  qme_irq_timer_events.c    \
                  qme_irq_doorbell_events.c \
                  qme_irq_stop_events.c     \
                  qme_block_copy.c          \
                  qme_stop_self_execute.c

SUBMODULE-CPP-SOURCES = p10_hcd_corecache_clock_control.C \
                        p10_hcd_corecache_power_control.C \
                        p10_fbc_utils.C                   \
                        p10_perv_sbe_cmn.C

SCAN-CPP-SOURCES  = p10_qme_putringutils.C \
                    p10_qme_ring_traverse.C

CACHE-CPP-SOURCES = p10_hcd_l3_purge.C              \
                    p10_hcd_chtm_purge.C            \
                    p10_hcd_powerbus_purge.C        \
                    p10_hcd_cache_stopclocks.C      \
                    p10_hcd_cache_stopgrid.C        \
                    p10_hcd_cache_poweroff.C        \
                    p10_hcd_cache_poweron.C         \
                    p10_hcd_cache_reset.C           \
                    p10_hcd_cache_gptr_time_initf.C \
                    p10_hcd_cache_repair_initf.C    \
                    p10_hcd_cache_arrayinit.C       \
                    p10_hcd_cache_initf.C           \
                    p10_hcd_cache_startclocks.C     \
                    p10_hcd_cache_scominit.C        \
                    p10_hcd_cache_scom_customize.C 
                    
CORE-CPP-SOURCES  = p10_hcd_l2_purge.C             \
                    p10_hcd_l2_tlbie_quiesce.C     \
                    p10_hcd_ncu_purge.C            \
                    p10_hcd_core_shadows_disable.C \
                    p10_hcd_core_stopclocks.C      \
                    p10_hcd_core_stopgrid.C        \
                    p10_hcd_core_vmin_enable.C     \
                    p10_hcd_core_poweroff.C        \
                    p10_hcd_core_poweron.C         \
                    p10_hcd_core_reset.C           \
                    p10_hcd_core_gptr_time_initf.C \
                    p10_hcd_core_repair_initf.C    \
                    p10_hcd_core_arrayinit.C       \
                    p10_hcd_core_initf.C           \
                    p10_hcd_core_vmin_disable.C    \
                    p10_hcd_core_startgrid.C       \
                    p10_hcd_core_startclocks.C     \
                    p10_hcd_core_shadows_enable.C  \
                    p10_hcd_core_scominit.C        \
                    p10_hcd_core_scom_customize.C  

MMA-CPP-SOURCES = p10_hcd_mma_poweroff.C           \
                  p10_hcd_mma_poweron.C            \
                  p10_hcd_mma_stopclocks.C         \
                  p10_hcd_mma_startclocks.C        \
                  p10_hcd_mma_scaninit.C           


QME_OBJECTS    = $(QME-CPP-SOURCES:.C=.o) \
                 $(QME-C-SOURCES:.c=.o)   \
                 $(QME-S-SOURCES:.S=.o)   \
                 $(IMG-S-SOURCES:.S=.o) 

HWP_OBJECTS    = $(SUBMODULE-CPP-SOURCES:.C=.o) \
                 $(SCAN-CPP-SOURCES:.C=.o)      \
                 $(CACHE-CPP-SOURCES:.C=.o)     \
                 $(CORE-CPP-SOURCES:.C=.o)      \
                 $(MMA-CPP-SOURCES:.C=.o) 

endif
