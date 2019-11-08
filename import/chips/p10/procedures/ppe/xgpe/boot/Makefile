# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/xgpe/boot/Makefile $
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
#remove this once we have a real compiler
export P2P_ENABLE = 1

#Pull in the definitions that affect all makefiles for this image
include img_defs.mk

#Pull in object file names for the top directory
include topfiles.mk

ifdef P2P_ENABLE
include $(P2P_SRCDIR)/p2pfiles.mk
endif

OBJS := $(addprefix $(OBJDIR)/, $(TOP_OBJECTS))
# Boot Loader Objects:
BOOT_LOADER_OBJS :=  $(addprefix $(OBJDIR)/, $(BOOT_LOADER_OBJECTS))
# Boot Loader Objects:
BOOT_COPIER_OBJS :=  $(addprefix $(OBJDIR)/, $(BOOT_COPIER_OBJECTS))

LIB_DIRS =
LINK_OBJS = $(OBJS)
LINK_SCRIPT_BOOTCOPIER = $(addprefix $(OBJDIR)/, linkscriptbootcopier)
LINK_SCRIPT_BOOTLOADER = $(addprefix $(OBJDIR)/, linkscriptbootloader)

ifdef P2P_ENABLE
P2PLIB := $(OBJDIR)/p2p/libp2p.a
LIB_DIRS += -L$(OBJDIR)/p2p
LINK_OBJS += $(P2PLIB)
endif

####################################
#### Bootcopier Image creation:
####################################
  $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).bin $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).dis: $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).out
	$(OBJCOPY) -O binary  $< $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).bin
	$(OBJDUMP) -S $< > $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).dis

  #create a linked ELF executable
  $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).out: $(LINK_OBJS) $(LINK_SCRIPT_BOOTCOPIER)
	$(LD) -e __system_reset -N -T$(LINK_SCRIPT_BOOTCOPIER) -Map $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).map -Bstatic -o $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).out $(LIB_DIRS) $(BOOT_COPIER_OBJS) -lp2p

  #pass the link command file through the C preprocessor to evaluate macros and remove comments
  $(LINK_SCRIPT_BOOTCOPIER): linkcopier.cmd
	$(CPP) -E -x c -P $(DEFS) linkcopier.cmd -o $(LINK_SCRIPT_BOOTCOPIER)

#####################################
#### Bootloader Image creation:
#####################################
$(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).bin $(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).dis: $(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).out
	$(OBJCOPY) -O binary  $< $(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).bin
	$(OBJDUMP) -S $< > $(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).dis

#create a linked ELF executable
$(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).out: $(LINK_OBJS) $(LINK_SCRIPT_BOOTLOADER)
	$(LD) -e __system_reset -N -T$(LINK_SCRIPT_BOOTLOADER) -Map $(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).map -Bstatic -o $(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).out $(LIB_DIRS) $(BOOT_LOADER_OBJS) -lp2p

#pass the link command file through the C preprocessor to evaluate macros and remove comments
$(LINK_SCRIPT_BOOTLOADER): linkloader.cmd
	$(CPP) -E -x c -P $(DEFS) linkloader.cmd -o $(LINK_SCRIPT_BOOTLOADER)


#Create an obj directory if needed
$(LINK_OBJS) $(OBJS) $(OBJS:.o=.d): | $(OBJDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

.PHONY: clean  $(P2PLIB)


ifdef P2P_ENABLE
$(P2PLIB):
	$(MAKE) -I $(IMAGE_SRCDIR) -C $(P2P_SRCDIR)
endif

# collect all of the trace hash files for this image into a single trexStringFile
.PHONY : tracehash
tracehash:
	mkdir -p $(OBJDIR)
	$(THASH) -c -d $(OBJDIR) -s $(OBJDIR)/trexStringFile


bootCopier: $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).bin $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).dis $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).out $(LINK_SCRIPT_BOOTCOPIER)

bootLoader: $(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).bin $(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).dis $(OBJDIR)/$(IMAGE_BOOTLOADER_NAME).out $(LINK_SCRIPT_BOOTLOADER)

all: bootCopier bootLoader

# load and run the gpe image in simics
run: $(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).out
	$(SIMICS_WS)/simics \
		-e '$$occ_gpe0_binary_to_load=$(OBJDIR)/$(IMAGE_BOOTCOPIER_NAME).out' modelsetup.simics

#clean out all generated files
clean:
	rm -fr $(OBJDIR)

#Add dependencies to header files
ifneq ($(MAKECMDGOALS),clean)
include $(OBJS:.o=.d)
endif
