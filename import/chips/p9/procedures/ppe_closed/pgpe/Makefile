# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/pgpe/Makefile $
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
include img_defs.mk

#Pull in object file names for the top directory
include topfiles.mk

OBJS := $(addprefix $(OBJDIR)/, $(TOP_OBJECTS))
LINK_OBJS = $(OBJS)
LINK_SCRIPT = pstate_gpe/linkppmr.cmd

lib_pstate_gpe    := pstate_gpe
lib_boot_loader := boot
libraries       := $(lib_boot_loader) $(lib_pstate_gpe)

.PHONY: all $(libraries) ppmr_header
all: $(libraries) ppmr_header
	make qpmr_header

$(libraries) :
	$(MAKE) --directory=$@ $(TARGET)
	@echo 'Directory $(TARGET)'
	$(if $(TARGET), $(MAKE) $(TARGET))

ppmr_header: p9_pgpe_img_edit.c $(LINK_OBJS) pstate_gpe/linkqpmr.cmd
	g++ p9_pgpe_img_edit.c -o $(OBJDIR)/pgpeImgEdit $(INCLUDES)
	$(LD) -T$(LINK_SCRIPT) -o $(OBJDIR)/ppmr_header.bin -Map $(OBJDIR)/ppmr.map -s $(OBJDIR)/p9_pgpe_qpmr.o
	$(OBJDIR)/pgpeImgEdit $(OBJDIR)/pstate_gpe/pstate_gpe.bin $(OBJDIR)/pstate_gpe/pstate_gpe.bin
	@echo "Done editing pgpe image....."
	$(OBJDIR)/pgpeImgEdit $(OBJDIR)/ppmr_header.bin $(OBJDIR)/pstate_gpe/pstate_gpe.bin
	@echo "Done editing ppmr images....."

clean:
	rm -fr $(OBJDIR)
