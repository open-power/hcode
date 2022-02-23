# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/clean.rules.mk $
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

# Makefile that defines a special target to remove files.

## $(call CLEAN_TARGET,/path/to/file)
## Adds target to the __CLEAN_TARGETS variable.
CLEAN_TARGET = $(eval $(call __CLEAN_TARGET,$(1)))
__CLEAN_TARGET = __CLEAN_TARGETS += $(1)


# Special rule for CLEAN pass that will delete a file (path/to/file) from
# a rule _BUILD/CLEAN/path/to/file.
.PHONY: _BUILD/CLEAN/%
_BUILD/CLEAN/% :
		$(C2) "    RM         $(notdir $@)"
		$(C1) rm -rf $(subst _BUILD/CLEAN/,,$@)
		$(C1) rm -rf $(subst .so,_$(ECMD_ARCH).so,$(subst libp,p, $(subst _BUILD/CLEAN/,,$@)))

