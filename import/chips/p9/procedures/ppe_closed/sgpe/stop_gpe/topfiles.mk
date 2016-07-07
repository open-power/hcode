# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/topfiles.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2015,2017
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
TOP-C-SOURCES = p9_sgpe_main.c \
                p9_sgpe_stop_entry.c \
                p9_sgpe_stop_exit.c \
                p9_sgpe_stop_irq_handlers.c \
                p9_sgpe_stop_enter_thread.c \
                p9_sgpe_stop_exit_thread.c \
                p9_hcd_cache_scan0.c \
                p9_hcd_cache_poweron.c \
                p9_hcd_cache_chiplet_reset.c \
                p9_hcd_cache_gptr_time_initf.c \
                p9_hcd_cache_dpll_setup.c \
                p9_hcd_cache_chiplet_init.c \
                p9_hcd_cache_repair_initf.c \
                p9_hcd_cache_arrayinit.c \
                p9_hcd_cache_startclocks.c \
                p9_hcd_cache_l2_startclocks.c \
                p9_hcd_cache_scominit.c \
                p9_hcd_cache_scomcust.c \
                p9_hcd_cache_occ_runtime_scom.c \
                p9_hcd_cache_ras_runtime_scom.c \
                p9_hcd_sgpe_boot_cme.c

UTILS-SRC  = utils/p9_putringutils.C \
				   utils/plat_ring_traverse.C

TOP-S-SOURCES =  p9_sgpe_image_header.S
TOP-SRC = p9_hcd_cache_initf.C

UTILS_OBJECTS  = $(UTILS-SRC:.C=.o)
TOP_OBJECTS = $(TOP-C-SOURCES:.c=.o) $(TOP-S-SOURCES:.S=.o) $(TOP-SRC:.C=.o)
