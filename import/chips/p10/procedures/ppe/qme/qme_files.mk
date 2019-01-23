# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/qme/qme_files.mk $
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

ifdef IMAGE


#IMG-S-SOURCES   = cpmr_header.S
#QME-S-SOURCES   = qme_header.S
QME-C-SOURCES   = qme_addresses.c \
                  qme_main.c \
                  qme_init.c \
                  qme_irq_ppe_events.c

WOF-C-SOURCES   = qme_irq_wof_events.c

STOP-C-SOURCES  = qme_irq_stop_events.c \
                  qme_stop_exit.c \
                  qme_stop_entry.c \
                  qme_stop_entry_hwp.c \
                  qme_stop_exit_hwp.c 
                   

#UTILS-C-SOURCES  = utils/p9_putringutils.c \
		   utils/plat_ring_traverse.c

QME_OBJECTS    = $(QME-C-SOURCES:.c=.o) $(QME-S-SOURCES:.S=.o)
WOF_OBJECTS    = $(WOF-C-SOURCES:.c=.o)
STOP_OBJECTS   = $(STOP-C-SOURCES:.c=.o)
UTILS_OBJECTS  = $(UTILS-C-SOURCES:.c=.o)
IMG_OBJECTS    = $(IMG-C-SOURCES:.c=.o) $(IMG-S-SOURCES:.S=.o)

endif
