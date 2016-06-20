# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/sgpe/Makefile $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2016,2017
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

#Pull in the definitions that affect all makefiles for this image
include img_defs.mk

#Pull in object file names for the top directory
include topfiles.mk

OBJS := $(addprefix $(OBJDIR)/, $(TOP_OBJECTS))
LINK_OBJS = $(OBJS)
LINK_SCRIPT = stop_gpe/linkqpmr.cmd

lib_stop_gpe    := stop_gpe
lib_boot_loader := boot
libraries       := $(lib_boot_loader) $(lib_stop_gpe)

.PHONY: all $(libraries) qpmr_header
all: $(libraries) qpmr_header
	make qpmr_header

$(libraries) :
	$(MAKE) --directory=$@ $(TARGET)
	@echo 'Directory $(TARGET)'
	$(if $(TARGET), $(MAKE) $(TARGET))

qpmr_header: p9_sgpe_img_edit.c $(LINK_OBJS) stop_gpe/linkqpmr.cmd
	g++ p9_sgpe_img_edit.c -o $(OBJDIR)/sgpeImgEdit $(INCLUDES)
	$(LD) -T$(LINK_SCRIPT) -o $(OBJDIR)/qpmr_header.bin -Map $(OBJDIR)/qpmr.map -s $(OBJDIR)/p9_sgpe_qpmr.o
	#$(OBJDIR)/sgpeImgEdit $(OBJDIR)/stop_gpe/$(IMAGE_NAME).bin
	$(OBJDIR)/sgpeImgEdit $(OBJDIR)/stop_gpe/stop_gpe.bin $(OBJDIR)/stop_gpe/stop_gpe.bin
	@echo "Done editing sgpe image....."
	$(OBJDIR)/sgpeImgEdit $(OBJDIR)/qpmr_header.bin $(OBJDIR)/stop_gpe/stop_gpe.bin
	@echo "Done editing qpmr images....."

clean:
	rm -fr $(OBJDIR)
