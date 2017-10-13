# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/order.final.mk $
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

# Makefile to define the order of all the 'passes':
#    * 'GEN' where files are generated.
#    * 'MODULE' where modules are built.
#    * 'EXE' where executables are built.
#    * 'IMAGE' where images are built.
#    * 'ALL' for everything else, like documentation.

HW_IMAGE_VERSION = $(shell cat $(ROOTPATH)/../tools/build/release_tag.txt)

.PHONY: _BUILD/GEN_TARGETS _BUILD/GEN_TARGETS/ACT
_BUILD/GEN_TARGETS:
		@$(MAKE) _BUILD/GEN_TARGETS/ACT
_BUILD/GEN_TARGETS/ACT: $(GEN_TARGETS) suppress_nothing_to_do

.PHONY: _BUILD/MODULE_TARGETS _BUILD/MODULE_TARGETS/ACT
_BUILD/MODULE_TARGETS: _BUILD/GEN_TARGETS
		@$(MAKE) _BUILD/MODULE_TARGETS/ACT
_BUILD/MODULE_TARGETS/ACT: $(MODULE_TARGETS) suppress_nothing_to_do

.PHONY: _BUILD/EXE_TARGETS _BUILD/EXE_TARGETS/ACT
_BUILD/EXE_TARGETS: _BUILD/MODULE_TARGETS
		@$(MAKE) _BUILD/EXE_TARGETS/ACT
_BUILD/EXE_TARGETS/ACT: $(EXE_TARGETS) suppress_nothing_to_do

.PHONY: _BUILD/IMAGE_TARGETS _BUILD/IMAGE_TARGETS/ACT
_BUILD/IMAGE_TARGETS: _BUILD/EXE_TARGETS | $(IMAGE_DEPS)
		@$(MAKE) _BUILD/IMAGE_TARGETS/ACT
_BUILD/IMAGE_TARGETS/ACT: $(IMAGE_TARGETS) suppress_nothing_to_do

.PHONY: all _BUILD/ALL_TARGETS/ACT
all: _BUILD/IMAGE_TARGETS install_rings
		@$(MAKE) _BUILD/ALL_TARGETS/ACT
		$(EXEPATH)/p9_xip_tool.exe $(IMAGEPATH)/hw_image/p9n.hw_image.bin set build_tag $(HW_IMAGE_VERSION)
_BUILD/ALL_TARGETS/ACT: $(ALL_TARGETS) suppress_nothing_to_do


.PHONY: install_rings

install_rings:
	@mkdir -p $(GENPATH)/rings/hw/
	@cp $(BASEPATH)/rings/* $(GENPATH)/rings/hw/
