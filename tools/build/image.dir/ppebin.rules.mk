# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/ppebin.rules.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2016,2021
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
# Makefile that defines how we generate binaries for a specific source
#
# Macros:
#    GEN_PPEIMAGE_BINARY: Macro to generate a PPE image binary and disassembly
#                         from an elf output.
# Input:
#    $1 == IMAGE
#    $2 == OUTPUT PATH
#    $3 == TARGET toolchain
#
# Order Of Operation:
#    Run objcopy to generate the binary
#    If ImgEditor exists then run ImgEditor to add timestamp & version info
#       to the binary
#    Run objdump to generate an assembler listing
#    Run trace hash to generate the trexStringFile

define GEN_PPEIMAGE_BINARY
$2/$1.bin : $2/$1.out | $(IMAGE_DEPS)
		$(C2) "    GEN        $$(@F)"
		$(C1) mkdir -p $$(@D)
ifdef IMAGE_EDITOR
		$(C1) $$($(3)_PREFIX)$$(OBJCOPY) -O binary $$^ $2/$1_temp.bin && \
		$(EXEPATH)/$(IMAGE_EDITOR) $2/$1_temp.bin 1
else
		$(C1) $$($(3)_PREFIX)$$(OBJCOPY) -O binary $$^ $2/$1_temp.bin
endif
		$(C1) mv $2/$1_temp.bin $$@
		$(C2) "    GEN        $$(@F).dis"
		$(C1) $$($(3)_PREFIX)$$(OBJDUMP) -S $$^ > $2/$1.dis
		$(C2) "    GEN        trexStringFile"
		$(C1) $$(THASH) -c -d $(OBJPATH)/$(1) \
			-s $(OBJPATH)/$(1)/trexStringFile > /dev/null
		$(C1) cp $(OBJPATH)/$(1)/trexStringFile $2/trexStringFile

$2/$1.dis : $2/$1.bin

$(call __CLEAN_TARGET,$2/$1.bin)
$(call __CLEAN_TARGET,$2/$1.dis)
$(call __CLEAN_TARGET,$2/trexStringFile)
$(call __CLEAN_TARGET,$(OBJPATH)/$(1)/trexStringFile)
IMAGE_EDITOR=
endef
