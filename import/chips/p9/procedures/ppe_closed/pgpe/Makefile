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
ifndef BASE_OBJDIR
BASE_OBJDIR = $(abspath ./obj/)
endif

ifndef BASE_SRCDIR
BASE_SRCDIR = $(abspath ./)
endif

#CME_OBJDIR = $(abspath ../cme/obj/)
#CME_SRCDIR = $(abspath ../cme/)
PGPE_OBJDIR = $(BASE_OBJDIR)
PGPE_SRCDIR = $(BASE_SRCDIR)

ifndef PPETRACEPP_DIR
export PPETRACEPP_DIR = $(abspath ../../ppe/tools/ppetracepp)
endif

THASH   = $(PPETRACEPP_DIR)/tracehash.pl

#CME_IMAGE_NAME = cme
GPE_IMAGE_NAME = pstate_gpe

#NEEDED_IMAGES = \
 #    $(CME_OBJDIR)/$(CME_IMAGE_NAME)/$(CME_IMAGE_NAME).out \
     $(PGPE_OBJDIR)/$(GPE_IMAGE_NAME)/$(GPE_IMAGE_NAME).out
NEEDED_IMAGES = \
     $(PGPE_OBJDIR)/$(GPE_IMAGE_NAME)/$(GPE_IMAGE_NAME).out


#default is to build images
needed_images: $(NEEDED_IMAGES)

#run: $(NEEDED_IMAGES)
#	$(SIMICS_WS)/simics \
#	           -e '$$cme_binary_to_load=$(CME_OBJDIR)/$(CME_IMAGE_NAME)/$(CME_IMAGE_NAME).out' \
#	           -e '$$gpe_binary_to_load=$(PGPE_OBJDIR)/$(GPE_IMAGE_NAME)/$(GPE_IMAGE_NAME).out' \
#	           modelsetup.simics



#clean the obj directory
clean:
#	rm -fr $(CME_OBJDIR)/$(CME_IMAGE_NAME)
	rm -fr $(PGPE_OBJDIR)/$(GPE_IMAGE_NAME)

#make binary application images
#$(CME_OBJDIR)/$(CME_IMAGE_NAME)/$(CME_IMAGE_NAME).out:
#	(cd $(CME_SRCDIR) && make && make fmode && make tracehash)

$(PGPE_OBJDIR)/$(GPE_IMAGE_NAME)/$(GPE_IMAGE_NAME).out:
	(cd $(PGPE_SRCDIR)/$(GPE_IMAGE_NAME) && make && make fmode && make tracehash)

# collect all of the trace hash files for all OCC images into a single trexStringFile
.PHONY : tracehash
tracehash:
	mkdir -p $(BASE_OBJDIR)
	$(THASH) -c -d $(BASE_OBJDIR) -s $(BASE_OBJDIR)/combStringFile
                 
