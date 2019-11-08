# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/ddco.rules.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2017,2019
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

DDCO_TOOL = $(eval $(call _DDCO_TOOL,$1,$2,$3))

# call ddco_tool.exe to create specified container
#
# outdated container is always removed first, because the tool
# retains an existing container, and hence it complains about
# duplicate dd levels being added to an existing container
#
# $1 dependencies (usually blocks to be added)
# $2 container to be created
# $3 blocks and DD levels to be added
define _DDCO_TOOL
$2 : $(EXEPATH)/ddco_tool.exe $1
	$(C2) "    GEN        $$(@F)"
	$(C1) rm -f $2
	$(C1) $(EXEPATH)/ddco_tool.exe --cont $2 --command add $3

$(call __CLEAN_TARGET,$2)
endef

# creates parameters for ddco_tool command line, e.g.
#
# $(IMAGE)_DD_CONT = --cont output/images/sgpe_image/p9n.stop_gpe.bin
# $(IMAGE)_DD_ADD  = --dd 10 --block output/images/stop_gpe_p9n10/stop_gpe_p9n10.bin \
#                    --dd 20 --block output/images/stop_gpe_p9n20/stop_gpe_p9n20.bin
#
# assuming this directory structure and these file names:
#
# output/images/<base file name>_<chip id><ec level>/<base file name>_<chip id><ec level>.bin
#
# $1 == chipId
# $2 == type (hw/sim/<none>) // <none> is there to allow a non-type specific call
# $3 == base name of file without chipid/dd suffix
#
BUILD_DD_LEVEL_CONTAINER = $(eval $(call _BUILD_DD_LEVEL_CONTAINER,$1,$2,$3))

define _BUILD_DD_LEVEL_CONTAINER
$(if $(strip $(2)),
	$(eval $(IMAGE)_DD_CONT_$3?=$$($(IMAGE)_PATH)/$1.$2.$3.bin),
	$(eval $(IMAGE)_DD_CONT_$3?=$$($(IMAGE)_PATH)/$1.$3.bin))
$(eval $(IMAGE)_DD_ADD_$3?=)
$(eval $(IMAGE)_DD_DEPS_$3?=)

$(foreach ec, $($(1)_EC),\
	$(eval $(IMAGE)_DD_FILE_$3_$(ec)=$(IMAGEPATH)/$3_$1dd$(ec)/$3_$1dd$(ec).bin)\
	$(eval $(IMAGE)_DD_DEPS_$3+= $$($(IMAGE)_DD_FILE_$3_$(ec)))\
	$(eval $(IMAGE)_DD_ADD_$3+= --dd 0x$(ec) --block $$($(IMAGE)_DD_FILE_$3_$(ec))))

$(eval $(call DDCO_TOOL,$$($(IMAGE)_DD_DEPS_$3),$$($(IMAGE)_DD_CONT_$3),$$($(IMAGE)_DD_ADD_$3)))
endef

