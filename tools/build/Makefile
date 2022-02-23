# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/Makefile $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2022
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

# Root makefile for the build system.
# Includes subdirectory makefiles in a specific order:
#       * Build system 'environment' files (*.env.mk).
#       * Build system 'rule' files (*.rules.mk).
#       * Global make files (from $(MAKEFILE_PATH).
#       * All dependency include files from $(__DEP_INCLUDES).
#       * Build system 'final' files (*.final.mk).

CTEPATH ?=  $(CROSS_COMPILER_PATH)
GCC-TOOL-PREFIX ?= $(CROSS_COMPILER_PATH)/bin/powerpc-eabi-
BINUTILS-TOOL-PREFIX ?= $(CROSS_COMPILER_PATH)/powerpc-eabi/bin/

.SECONDEXPANSION:
.DEFAULT_GOAL = all

-include $(sort $(wildcard $(addsuffix /*.env.mk,$(wildcard *.dir))))
-include $(sort $(wildcard $(addsuffix /*.rules.mk,$(wildcard *.dir))))
-include $(sort $(wildcard $(addsuffix /*.mk,$(MAKEFILE_PATH))))
-include $(__DEP_INCLUDES)
-include $(wildcard $(addsuffix /*.final.mk,$(wildcard *.dir)))
