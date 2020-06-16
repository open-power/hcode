# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/iohs/nv/topfiles.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019,2020
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
TOP-C-SOURCES = io_lib.c pk_app_irq_table.c io_irq_handlers.c io_logger.c
TOP-C-SOURCES += nv_main.c
TOP-CXX-SOURCES =
TOP-S-SOURCES =

TOP_OBJECTS = $(TOP-C-SOURCES:.c=.o) $(TOP-S-SOURCES:.S=.o) $(TOP-CXX-SOURCES:.C=.o)
