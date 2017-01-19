# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/ippe/ioa/topfiles.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2016,2017
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
# Source files depends on build target
TOP-C-SOURCES = p9_abus_main.c pk_app_irq_table.c
TOP-CXX-SOURCES =
TOP-S-SOURCES =

#TOP-C-SOURCES += pk_app_irq_table.c
#TOP-C-SOURCES += ipc_func_tables.c
#TOP-CXX-SOURCES += gpe_ks.C

TOP_OBJECTS = $(TOP-C-SOURCES:.c=.o) $(TOP-S-SOURCES:.S=.o) $(TOP-CXX-SOURCES:.C=.o)
