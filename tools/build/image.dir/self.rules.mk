# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/self.rules.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2018,2019
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
#
BUILD_SELF_PROCEDURE = $(eval $(call __BUILD_SELF_PROCEDURE))

#Makefile that defines how we build .S files
# Macros:
#    __SELF_ASM_OBJECTRULES: Macro to compiler .S into .o
# Inputs:
#    $1 == output path
#    $2 == src path
#    $3 == target toolchain
#
define SELF_ASM_OBJECTRULES
.PRECIOUS: $1/%.o

$1/%.o: private LOCALCOMMONFLAGS = $$(basename $($$(@F))_COMMONFLAGS)

$1/%.o : $(2)/%.S
		$(C2) "    ASM        $$(@F)"
		$(C1) mkdir -p $1 && $$($(3)_PREFIX)$$(CC) $$^ $$(SELF_ASFLAGS) -o $$@
endef

define __BUILD_SELF_PROCEDURE
$(eval SRCS:= $(ROOTPATH)/chips/p10/procedures/utils/stopreg)
$(eval SELF_REST_IMG_PATH := $(addprefix $(OUTPUTPATH)/images/, self_save_restore))
$(eval SELF_REST_IMG := $(OUTPUTPATH)/images/self_save_restore)
$(eval SELF_LINK := $(SRCS)/link.c)
$(eval LINK_SCRIPT := $(SELF_REST_IMG_PATH)/selfLink)
$(eval SELF_ASFLAGS := -std=c99 -c -O3 -nostdlib -mcpu=power7 -mbig-endian -ffreestanding -mabi=elfv1)
$(eval SELF_REST_PREFIX := $(CTEPATH)/tools/p9_ppc64/prod/bin/powerpc64le-buildroot-linux-gnu-)
$(eval SELF_PROCEDURE_OBJ_PATH := $(addprefix $(OUTPUTPATH)/obj/, self_save_restore))
$(eval $(call __CLEAN_TARGET, $(SELF_PROCEDURE_OBJ_PATH)))
$(eval $(call __CLEAN_TARGET, $(SELF_REST_IMG_PATH)))
$(call SELF_ASM_OBJECTRULES,$(SELF_PROCEDURE_OBJ_PATH),$(SRCS),SELF_REST)

.PHONY:$(LINK_SCRIPT)

$(LINK_SCRIPT) :
		$(C2) "    DEP        $$(@F:.o=.dep)"
		$(C1)mkdir -p $(SELF_REST_IMG_PATH) && $(SELF_REST_PREFIX)$(CC) -E -c -P $(SELF_LINK) -o $(LINK_SCRIPT)		
.PHONY: $(SELF_PROCEDURE)

$(SELF_PROCEDURE) :
	$(C1)mkdir -p $(SELF_REST_IMG_PATH)
	$(C1)$$(MAKE) $(SELF_REST_IMG_PATH)/self_save_restore.bin

$(SELF_REST_IMG_PATH)/self_save_restore.bin:  $(SELF_PROCEDURE_OBJ_PATH)/p10_core_save_restore_routines.o $(LINK_SCRIPT)
	$(C1)mkdir -p $(SELF_REST_IMG_PATH) && $(SELF_REST_PREFIX)ld -T$(LINK_SCRIPT) -Map $(SELF_REST_IMG_PATH)/self_save_restore.map \
		-Bstatic -o $(SELF_REST_IMG_PATH)/self_save_restore.bin $(SELF_PROCEDURE_OBJ_PATH)/p10_core_save_restore_routines.o\
		&& $(SELF_REST_PREFIX)$(OBJDUMP) -d $(SELF_PROCEDURE_OBJ_PATH)/p10_core_save_restore_routines.o > $(SELF_REST_IMG_PATH)/self_save_restore.list
SELF_PROCEDURE:=
endef
