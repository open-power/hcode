# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_files.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019,2021
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
XGPE-C-SOURCES = xgpe_main.c \
    xgpe_irq_priority_table.c \
				xgpe_uih.c \
				xgpe_header.c         \
				xgpe_irq_handlers.c  \
				xgpe_irq_handlers_fit.c \
				xgpe_irq_handlers_ipc.c \

XGPE-CPP-SOURCES =
                  

XGPE_OBJECTS = $(XGPE-C-SOURCES:.c=.o) $(XGPE-CPP-SOURCES:.C=.o)
endif
