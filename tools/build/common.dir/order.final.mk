# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/order.final.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2019
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
#    		1. initfiles are transformed into .C/.H/.mk files
#    		2. ec specific ring generation wrapper .C/.mk files
#    		   are generated.
#    	    3. ec specific cmsk wrapper .C/.mk files are generated
#
#    * 'MODULE' where modules are built.
#    		1. hwp procedure code and files generaged in the
#    		   GEN phase are compiled into libraries (.a/.so)
#
#    * 'EXE' where executables are built.
#    		1. procedure wrappers are compiled into exe files.
#    		2. ring generation wrappers are compiled into exe files
#    		3. ring .bin.srd files are generated
#    		4. cmsk procedure .C/.H/.mk files are created by
#    		   create_stumped_ring.exe
#
#    * 'PRE_IMAGE' where cmsk rings are built.
#    		1. cmsk ring wrappers are compiled and
#    		   executed to generate cmsk rings
#
#    * 'IMAGE' where images are built.
#    		1. .rings section is created
#    		2. .overlays seciton is created
#    		3. ppe sub images are compiled and assembled into
#    		   xip sections
#    		4. hw images are created
#    * 'ALL' for everything else, like documentation.

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

.PHONY: _BUILD/PRE_IMAGE_TARGETS _BUILD/PRE_IMAGE_TARGETS/ACT
_BUILD/PRE_IMAGE_TARGETS: _BUILD/EXE_TARGETS
		@$(MAKE) _BUILD/PRE_IMAGE_TARGETS/ACT
_BUILD/PRE_IMAGE_TARGETS/ACT: $(PRE_IMAGE_TARGETS) suppress_nothing_to_do

.PHONY: _BUILD/IMAGE_TARGETS _BUILD/IMAGE_TARGETS/ACT
_BUILD/IMAGE_TARGETS: _BUILD/PRE_IMAGE_TARGETS
		@$(MAKE) _BUILD/IMAGE_TARGETS/ACT
_BUILD/IMAGE_TARGETS/ACT: $(IMAGE_TARGETS) suppress_nothing_to_do

.PHONY: all _BUILD/ALL_TARGETS/ACT
all: _BUILD/IMAGE_TARGETS
		@$(MAKE) _BUILD/ALL_TARGETS/ACT
_BUILD/ALL_TARGETS/ACT: $(ALL_TARGETS) suppress_nothing_to_do



