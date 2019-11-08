# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_files.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2019
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

# The following ifdef prevents this file from being included more than once
# during ekb build
ifdef IMAGE
IMG-S-SOURCES  = ppmr_header.S
PGPE-C-SOURCES = pgpe_main.c \
				pgpe_irq_priority_table.c \
				pgpe_uih.c \
				pgpe_event_manager.c \
				pgpe_event_table.c \
				pgpe_event_process.c \
				pgpe_irq_handlers.c \
				pgpe_occ.c \
				pgpe_header.c \
				pgpe_fake_boot.c \
				pgpe_pstate.c \
				pgpe_avsbus_driver.c \
				pgpe_irq_handlers_fit.c \
				pgpe_irq_handlers_ipc.c \
				pgpe_gppb.c \
				pgpe_dpll.c \
				pgpe_dds.c \
				pgpe_resclk.c \
				pgpe_thr_ctrl.c 

PGPE-CXX-SOURCES = pgpe_opCodes.C

PGPE_OBJECTS = $(PGPE-C-SOURCES:.c=.o) 
PGPE_OBJECTS += $(PGPE-CXX-SOURCES:.C=.o)
IMG_OBJECTS  = $(IMG-C-SOURCES:.c=.o) $(IMG-S-SOURCES:.S=.o)
endif

