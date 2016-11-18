# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/topfiles.mk $
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
TOP-C-SOURCES = p9_pgpe_pstate.c \
				p9_pgpe_main.c \
				p9_pgpe_irq.c \
				p9_pgpe_fit.c \
				avs_driver.c \
				p9_pgpe_boot_temp.c \
				p9_pgpe_gppb.c \
				p9_pgpe_gen_pstate_info.c \
				p9_pgpe_header.c \
				ipc_func_tables.c \
				p9_pgpe_thread_actuate_pstates.c \
				p9_pgpe_thread_process_requests.c \
				p9_pgpe_ipc_handlers.c \
				p9_pgpe_irq_handlers.c 

TOP-S-SOURCES =

TOP_OBJECTS = $(TOP-C-SOURCES:.c=.o) $(TOP-S-SOURCES:.S=.o)
