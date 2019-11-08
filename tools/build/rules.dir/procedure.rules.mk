# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/procedure.rules.mk $
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

# Makefile that defines how we build 'procedures', which are a special kind of
# module recognized by Cronus.

# BUILD_PROCEDURE
#    This macro will automatically generate all the recipes for building a
#    procedure.  Requires that the following variables are defined prior to
#    calling this macro:
#        * PROCEDURE=name - Name of the procedure.  name.o is an implied
#                           required object.
#        * FAPI=version - Optional method to specify the FAPI version.
#
#    Input: $1
#       * Optional input to delay the running of BUILD_MODULE macro to a
#         later phase
#
define BUILD_PROCEDURE
$(eval $(call __BUILD_PROCEDURE)) \
$(call BUILD_MODULE,$1) \
$(eval PROCEDURE:=) \
$(eval FAPI:=)
endef

# Order of operations:
#    * Assign MODULE=$(PROCEDURE)
#    * Add $(PROCEDURE).o to the required objects.
#    * Call the macro for the FAPI1, FAPI2, or FAPI2_IFCOMPILER specific flags.
define __BUILD_PROCEDURE
MODULE = $(PROCEDURE)
OBJS += $(if $(filter $(FAPI),2_IFCOMPILER),,$(PROCEDURE).o)
$(if $(FAPI),$(call FAPI$(FAPI)_PROCEDURE),$(call FAPI2_PROCEDURE))
endef


# Settings needed for FAPI1 procedures.
define FAPI1_PROCEDURE
$(warning "WARNING: We don't know how to build FAPI1 yet for $(PROCEDURE)")
endef

# Settings needed for FAPI2 rocedures.
#    * Add the $(GENPATH) to the source directory.
#    * Add fapi2 framework include path.
#    * Add Cronus inclue paths.
#    * Add dependency for fapi2 module.
#    * Add dependency on Cronus libraries.
#    * Add dependency on libdl.so.
define FAPI2_PROCEDURE
$(call ADD_MODULE_SRCDIR,$(PROCEDURE),$(GENPATH))
$(call __ADD_MODULE_INCDIR,$(PROCEDURE),$(FAPI2_PATH)/include)
$(call __ADD_MODULE_INCDIR,$(PROCEDURE),$(FAPI2_PLAT_INCLUDE))
$(call __ADD_MODULE_INCDIR,$(PROCEDURE),$(SCOMT_INCLUDE))
lib$(PROCEDURE)_EXTRALIBS += $(FAPI2_REQUIRED_LIBS)
lib$(PROCEDURE)_DEPLIBS += fapi2_utils
lib$(PROCEDURE)_LDFLAGS += -ldl
lib$(PROCEDURE)_COMMONFLAGS+=-DFAPI2_ENABLE_PLATFORM_GET_TARGET=1
lib$(PROCEDURE)_COMMONFLAGS+=-DFAPI2_ENABLE_PLATFORM_GET_CORE_SELECT=1
endef
