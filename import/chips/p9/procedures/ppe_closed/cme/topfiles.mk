
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/cme/topfiles.mk $
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


TOP-C-SOURCES    = p9_cme_main.c \
                   p9_cme_irq.c 
                   
UTILS-C-SOURCES  = utils/p9_putringutils.c \
		   utils/plat_ring_traverse.c				   

PSTATE-C-SOURCES = pstate_cme/p9_cme_pstate.c \
		   pstate_cme/p9_pstate_vpd.c

STOP-C-SOURCES   = stop_cme/p9_cme_stop_irq_handlers.c \
                   stop_cme/p9_cme_stop_enter_thread.c \
                   stop_cme/p9_cme_stop_exit_thread.c \
                   stop_cme/p9_cme_stop_entry.c \
                   stop_cme/p9_cme_stop_exit.c \
                   stop_cme/p9_hcd_core_scan0.c \
                   stop_cme/p9_hcd_core_poweron.c \
                   stop_cme/p9_hcd_core_chiplet_reset.c \
                   stop_cme/p9_hcd_core_gptr_time_initf.c \
                   stop_cme/p9_hcd_core_chiplet_init.c \
                   stop_cme/p9_hcd_core_repair_initf.c \
                   stop_cme/p9_hcd_core_arrayinit.c \
                   stop_cme/p9_hcd_core_initf.c \
                   stop_cme/p9_hcd_core_startclocks.c \
                   stop_cme/p9_hcd_core_scominit.c \
                   stop_cme/p9_hcd_core_scomcust.c \
                   stop_cme/p9_hcd_core_ras_runtime_scom.c \
                   stop_cme/p9_hcd_core_occ_runtime_scom.c \
                   stop_cme/p9_cme_copy_scan_ring.c

TOP-S-SOURCES  =   stop_cme/p9_cme_header.S

IMG-S-SOURCES  =   p9_cpmr_header.S

TOP_OBJECTS    = $(TOP-C-SOURCES:.c=.o) $(TOP-S-SOURCES:.S=.o) 
PSTATE_OBJECTS = $(PSTATE-C-SOURCES:.c=.o) 
STOP_OBJECTS   = $(STOP-C-SOURCES:.c=.o) 
UTILS_OBJECTS  = $(UTILS-C-SOURCES:.c=.o)
IMG_OBJECTS    = $(IMG-C-SOURCES:.c=.o) $(IMG-S-SOURCES:.S=.o)
