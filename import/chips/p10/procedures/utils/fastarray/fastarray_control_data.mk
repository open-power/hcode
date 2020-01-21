# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/utils/fastarray/fastarray_control_data.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2020
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
######################################################################################
# Makefile to build fast array access control files
# This makefile invokes chips/p10/procedures/utils/fastarray/fastarray.py to build the
# output control data files.
# Input files: chips/p10/procedures/utils/fastarray/<dd level>/*.fad
# Output files: output/images/<fastarray name><chipid><dd level>/*.bin
#
define BUILD_FASTARRAY_CONTROL_DATA
$(eval FILENAME= $(1))
$(eval DD_LEVEL=$(lastword $(subst /, ,$(dir $(FILENAME)))))
$(eval CONTROL_DD_LEVEL_DIR=$(addprefix fa_,$(notdir $(FILENAME:.fad=)))_p10$(DD_LEVEL))
$(eval CONTROL_FILE=$(CONTROL_DD_LEVEL_DIR).bin)
$(eval GENERATED=$(CONTROL_FILE))
$(eval $(GENERATED)_COMMAND_PATH=$(ROOTPATH)/chips/p10/procedures/utils/fastarray/)
$(eval COMMAND=fastarray.py)
$(eval $(GENERATED)_PATH=$(OUTPUTPATH)/images/$(CONTROL_DD_LEVEL_DIR))
$(eval TARGETS+=$(GENERATED))
$(eval $(GENERATED)_RUN=$(call RUN_FASTARRAY,$(1),$($(GENERATED)_PATH)/$(CONTROL_FILE)))
$(call BUILD_GENERATED)
endef
define RUN_FASTARRAY
     $(C1) $$$$< setup $(1) -o $(2)
endef

######################################################################################
FASTARRAY_EC_DIRS=$(wildcard $(ROOTPATH)/chips/p10/procedures/utils/fastarray/dd*)
FASTARRAY_EC_FILES=$(foreach ec_dir,$(FASTARRAY_EC_DIRS),$(wildcard $(ec_dir)/*.fad))

$(foreach file,$(FASTARRAY_EC_FILES),\
        $(eval $(call BUILD_FASTARRAY_CONTROL_DATA,$(file))))
