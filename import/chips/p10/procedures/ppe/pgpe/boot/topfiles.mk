# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/pgpe/boot/topfiles.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019
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
TOP-C-SOURCES = 
TOP-S-SOURCES =  pgpe_boot_loader.S pgpe_boot_copier.S

TOP_OBJECTS = $(TOP-C-SOURCES:.c=.o) $(TOP-S-SOURCES:.S=.o)

BOOT-LOADER-C-SOURCES = 
BOOT-LOADER-S-SOURCES =  pgpe_boot_loader.S 

BOOT_LOADER_OBJECTS = $(BOOT-LOADER-C-SOURCES:.c=.o) $(BOOT-LOADER-S-SOURCES:.S=.o)


BOOT-COPIER-C-SOURCES = 
BOOT-COPIER-S-SOURCES =  pgpe_boot_copier.S 

BOOT_COPIER_OBJECTS = $(BOOT-COPIER-C-SOURCES:.c=.o) $(BOOT-COPIER-S-SOURCES:.S=.o)
