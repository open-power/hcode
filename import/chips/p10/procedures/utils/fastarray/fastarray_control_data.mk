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
# This makefile generates fastarray control data bin files for each defined
# fastarray of each EC level.  The output bin files are located in output/images dir
# and are to be added to the SBE image.
######################################################################################

#####################################################################################
# Generate control data bin files
# Note: <fastarray> = ec_cl2, ec_mma, etc...
#
# Run fastarray.py script to generate fastarray control data files
# Command: fastarray.py setup <fastarray>.fad -o <fastarray>.bin <fastarray ring override file>
#      Ex: fastarray.py setup ec_cl2_far.fad -o fa_<fastarray>_far_<chipid><dd level>.bin ec_cl2.txt
#
# Input: $1 = chips/p10/procedures/utils/fastarray/<dd level>/<fastarray>.fad
# Output: output/images/fa_<fastarray>_far_<chipid><dd level>/*.bin
#####################################################################################
define BUILD_FASTARRAY_CONTROL_DATA
# Set dir and file names
$(eval FAD_FILE=$(1))
$(eval MY_FA=$(notdir $(FAD_FILE:_far.fad=)))
$(eval DD_LEVEL=$(lastword $(subst /, ,$(dir $(FAD_FILE)))))
$(eval CONTROL_DD_LEVEL_DIR=$(addprefix fa_,$(notdir $(FAD_FILE:.fad=)))_p10$(DD_LEVEL))
$(eval FA_RING_OVRD_FILE=$(OUTPUTPATH)/images/$(CONTROL_DD_LEVEL_DIR)/$(MY_FA).txt)
$(eval CONTROL_FILE=$(CONTROL_DD_LEVEL_DIR).bin)
# Generate
$(eval SOURCES+=$(OUTPUTPATH)/images/$(CONTROL_DD_LEVEL_DIR)/.$(MY_FA).txt.built)
$(eval GENERATED=$(CONTROL_FILE))
$(eval $(GENERATED)_COMMAND_PATH=$(ROOTPATH)/chips/p10/procedures/utils/fastarray/)
$(eval COMMAND=fastarray.py)
$(eval $(GENERATED)_PATH=$(OUTPUTPATH)/images/$(CONTROL_DD_LEVEL_DIR))
$(eval TARGETS+=$(GENERATED))
$(eval $(GENERATED)_RUN=$(call RUN_FASTARRAY,$(1),$($(GENERATED)_PATH)/$(CONTROL_FILE),$(FA_RING_OVRD_FILE)))
$(call BUILD_GENERATED,EXE)
endef
define RUN_FASTARRAY
    $(C1) xargs -a $(3)  $(PATH_PYTHON3) $$$$< setup $(1) -o $(2)
endef

######################################################################################
# Generate fastarray ring override files
# Note: <fastarray> = ec_cl2, ec_mma, etc...
#
# Run ipl_image_tool.exe on given fastarray overrides.bin file to generate override ring id files
# Command: ipl_image_tool.exe overrides.bin dissect | get_tor_ringids.py <fastarray> > <fastarray>.txt
#      Ex: ipl_image_tool.exe overrides.bin dissect | get_tor_ringids.py ec_cl2 > ec_cl2.txt
#
# Input: $1 = chips/p10/procedures/utils/fastarray/<dd level>/<fastarray>.fad
# Output files: output/images/<fastarray name><chipid><dd level>/*.txt
######################################################################################
define BUILD_FA_OVERRIDE_FILES
# Setup dir and file names
$(eval FAD_FILE=$(1))
$(eval OVERRIDES_BIN_FILE=$(dir $(FAD_FILE))/overrides.bin)
$(eval GET_TOR_RINGIDS_SCRIPT=$(ROOTPATH)/chips/p10/procedures/utils/fastarray/get_tor_ringids.py)
$(eval MY_FA=$(notdir $(FAD_FILE:_far.fad=)))
$(eval DD_LEVEL=$(lastword $(subst /, ,$(dir $(FAD_FILE)))))
$(eval CONTROL_DD_LEVEL_DIR=$(addprefix fa_,$(notdir $(FAD_FILE:.fad=)))_p10$(DD_LEVEL))
$(eval FA_RING_OVRD_FILE=$(MY_FA).txt)
# Generate
$(eval SOURCES+= $(EXEPATH)/ipl_image_tool.exe)
$(eval GENERATED=$(FA_RING_OVRD_FILE))
$(eval $(GENERATED)_COMMAND_PATH=$(EXEPATH)/)
$(eval COMMAND=ipl_image_tool.exe)
$(eval $(GENERATED)_PATH=$(OUTPUTPATH)/images/$(CONTROL_DD_LEVEL_DIR))
$(eval TARGETS+=$(GENERATED))
$(eval $(GENERATED)_RUN=$(call GEN_RING_OVERRIDE,$(OVERRIDES_BIN_FILE),$(GET_TOR_RINGIDS_SCRIPT),$(MY_FA),$(FA_RING_OVRD_FILE)))
$(call BUILD_GENERATED,EXE)
endef
define GEN_RING_OVERRIDE
			  $(shell mkdir -p $(OUTPUTPATH)/images/$(CONTROL_DD_LEVEL_DIR))\
        $$$$< $(1) dissect | $(PATH_PYTHON3) $(2) $(3) > $(OUTPUTPATH)/images/$(CONTROL_DD_LEVEL_DIR)/$(4)
endef

#####################################################################################
# Generate fastarray ring override (bin) files
# Copy from chips/p10/procedures/utils/fastarray/<dd level>/overrides.bin
#      to   output/images/fa_ring_ovrd_<chipid><dd level>.bin
#   in order for build process to pick-up and put into SBE image
# Input: $1 = chips/p10/procedures/utils/fastarray/<dd level>
#####################################################################################
define BUILD_FASTARRAY_OVERRIDE_FILES
$(eval SRC=$(1)/overrides.bin)
$(eval DD_LEVEL=$(lastword $(subst /, ,$(1))))
$(eval DEST_DIR=$(addprefix fa_ring_ovrd_p10,$(DD_LEVEL)))
$(eval DEST_FILE=$(DEST_DIR).bin)
$(eval DEST=$(OUTPUTPATH)/images/$(OVERRIDE_DD_LEVEL_DIR)/$(OVERRIDE_DD_LEVEL_DIR).bin)
$(eval $(call COPY_FILES,$(OUTPUTPATH)/images/$(DEST_DIR),$(SRC),$(DEST_FILE)))
endef
define COPY_FILES
	$(shell mkdir -p $(1) && cp -f $(2) $(1)/$(3))
$(call __CLEAN_TARGET,$(1)/$(3))
endef

######################################################################################
# Main
######################################################################################
# Gather ec levels of fastarray
FASTARRAY_EC_DIRS=$(wildcard $(ROOTPATH)/chips/p10/procedures/utils/fastarray/dd*)
# Copy overrides.bin file to output/images for SBE build
$(foreach ec_dir,$(FASTARRAY_EC_DIRS),\
        $(eval $(call BUILD_FASTARRAY_OVERRIDE_FILES,$(ec_dir)))\
				$(eval FASTARRAY_EC_FILES+=$(wildcard $(ec_dir)/*.fad)))
# Build fastarray override ring id and control data files
$(foreach file,$(FASTARRAY_EC_FILES),\
        $(eval $(call BUILD_FA_OVERRIDE_FILES,$(file)))\
        $(eval $(call BUILD_FASTARRAY_CONTROL_DATA,$(file))))
