# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/linkScript.rules.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2016,2019
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

# Makefile that defines how we process a linker script
#
# Macro:
#    PROCESS_LINK_SCRIPT: Runs gcc pre-processor on link script
# Inputs:
#    $1 = IMAGE
#    $2 = OUTPUTPATH
#    $3 = <image>.cmd
#    $4 = TARGET toolchain
# Usage:
#   $(call PROCESS_LINK_SCRIPT,$(IMAGE),$$($(IMAGE)_PATH,$(IMAGE).cmd)
define PROCESS_LINK_SCRIPT
$2/link_$1_script : $(addprefix $(dir $(lastword $(MAKEFILE_LIST))),$3)
		$(C2) "    GEN        link_$1_script"
		$(C1) mkdir -p $2
		$(C1) $$($(4)_PREFIX)$$(CPP) -E -x c++ -P $$($1_COMMONFLAGS) -Upowerpc $$< -o $2/link_$1_script_temp.cmd
		$(C1) $$($(4)_PREFIX)$$(CPP) -E -x c++ -P $$($1_COMMONFLAGS) -Upowerpc $2/link_$1_script_temp.cmd -o $$@
 
$(call __CLEAN_TARGET,$2/link_$1_script)
$(call __CLEAN_TARGET,$2/link_$1_script_temp.cmd)

endef

