# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/modules.rules.mk $
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

# Makefile that defines how we build 'modules', which is another name for a
# shared library.
#
# Macros:
#     BUILD_MODULE - Macro to automatically generate all the recipes for
#                    building a shared library.
#     ADD_MODULE_OBJ - Macro to add additional objects to a module.
#     ADD_MODULE_SRCDIR - Macro to add additional source dirs to a module.
#     ADD_MODULE_INCDIR - Macro to add additional include dirs to a module.
# Special variables:
#     lib$(MODULE)_*FLAGS - Extra compile / linker flags for a specific module.
#     lib$(MODULE)_DEPLIBS - Local modules that this module depends on.
#     lib$(MODULE)_EXTRALIBS - External shared libs that this module depends on.
#     lib$(MODULE)_PATH - Optional alternate location to place library objects.
#     lib$(MODULE)_TARGET - Optional mechanism to select between the 'host' or
#                           'target' (default) cross-compiler set.
# Input:
#     Optional input to delay the running of BUILD_GENERATED macro to a
#     later phase.
#
# BUILD_MODULE
#     This macro will automatically generate all the recipes for building a
#     shared library.  Requires that the following variables are defined
#     prior to calling this macro:
#         * MODULE=name - Give a name to the module.
#         * OBJS=list of objects - Give a list of .o files required.
#
#     As a result, this macro will define how to build lib$(MODULE).so as well
#     as all necessary dependencies.
BUILD_MODULE = $(eval $(call __BUILD_MODULE,$1))

# Order of operations:
#   * Define default module object PATH.
#   * Add all OBJ to module objects.
#   * Add directory of the defining .mk file to the source path for this module.
#   * Set up LOCAL*FLAGS variables for the module.
#   * Define dependencies for the module:
#       - lib$(MODULE).a
#       - All lib$(MODULE)_DEPLIB modules.
#       - All lib$(MODULE)_EXTRALIBS shared libraries
#       - Call environment's __CALL_LDSO macro to link module.
#   * Define dependencies for the lib$(MODULE).a archive.
#       - All lib$(MODULE)_OBJS.
#       - Call environment's __CALL_AR macro to create archive.
#   * Add module and archive to 'clean' target list.
#   * Create helper target for 'make $(MODULE)'.
#   * Erase MODULE and OBJS variables.
#
# Input:
#     Optional input to delay the running of BUILD_GENERATED macro to a
#     later phase.

define __BUILD_MODULE
lib$(MODULE)_PATH ?= $(OBJPATH)/$(MODULE)
lib$(MODULE)_LIBPATH ?= $(LIBPATH)
$(call __ADD_MODULE_OBJ,$(MODULE),$(OBJS))
$(call __ADD_MODULE_SRCDIR,$(MODULE),$(dir $(lastword $(MAKEFILE_LIST))))
$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).so: LOCALCOMMONFLAGS += $$(lib$(MODULE)_COMMONFLAGS)
$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).so: LOCALCFLAGS += $$(lib$(MODULE)_CFLAGS)
$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).so: LOCALCXXFLAGS += $$(lib$(MODULE)_CXXFLAGS)
$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).so: LOCALLDFLAGS += $$(lib$(MODULE)_LDFLAGS)
$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).so: $$(lib$(MODULE)_LIBPATH)/lib$(MODULE).a \
	$$(foreach lib,$$(lib$(MODULE)_DEPLIBS),$$$$(lib$(MODULE)_LIBPATH)/lib$$(lib).a ) \
	$$(lib$(MODULE)_EXTRALIBS) | $$(lib$(MODULE)_DEPSORDER)
$(call __CALL_LDSO,$$(or $$(lib$(MODULE)_TARGET),TARGET))

$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).a: LOCALCOMMONFLAGS += $$(lib$(MODULE)_COMMONFLAGS)
$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).a: LOCALCFLAGS += $$(lib$(MODULE)_CFLAGS)
$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).a: LOCALCXXFLAGS += $$(lib$(MODULE)_CXXFLAGS)
$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).a: LOCALLDFLAGS += $$(lib$(MODULE)_LDFLAGS)


$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).a: $$(lib$(MODULE)_OBJS)
$(call __CALL_AR,$$(or $$(lib$(MODULE)_TARGET),TARGET))

$(call __CLEAN_TARGET,$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).so)
$(call __CLEAN_TARGET,$$(lib$(MODULE)_LIBPATH)/lib$(MODULE).a)
$(call __CLEAN_TARGET,$$(lib$(MODULE)_LIBPATH)/$(MODULE)_x86_64.so)

.PHONY: $(MODULE)
$(MODULE) : _BUILD/GEN_TARGETS
		@$$(MAKE) $$(lib$(MODULE)_LIBPATH)/lib$(MODULE).so
$(or $(strip $1),MODULE)_TARGETS += $$(lib$(MODULE)_LIBPATH)/lib$(MODULE).so

MODULE:=
OBJS:=

endef

# ADD_MODULE_OBJ
#    This macro will add additional objects to a module's dependency list.
# Usage:
#    $(call ADD_MODULE_OBJ,module,file1.o file2.o)
ADD_MODULE_OBJ = $(eval $(call __ADD_MODULE_OBJ,$(1),$(2)))
# Order of operations:
#    * Prepend lib$(MODULE)_PATH to the path for the object.
#    * Add object and corresponding .dep file to the 'clean' target list.
#    * Add generated .dep file for header-file dependencies to __DEP_INCLUDES.
define __ADD_MODULE_OBJ
lib$(1)_OBJS += $$(addprefix $$(lib$(1)_PATH)/,$(2))
$(foreach obj,$(2),$(call CLEAN_TARGET,$$(lib$(1)_PATH)/$(obj))
	$(call CLEAN_TARGET,$$(lib$(1)_PATH)/$(obj:.o=.dep)))

__DEP_INCLUDES += $$(wildcard $$(addprefix $$(lib$(1)_PATH)/,$(2:.o=.dep)))
endef

# ADD_MODULE_SRCDIR
#     This macro will add additional source paths to a module.
# Usage:
#    $(call ADD_MODULE_SRCDIR,module,/path1 /path2)
ADD_MODULE_SRCDIR = $(eval $(call __ADD_MODULE_SRCDIR,$(1),$(2)))
__ADD_MODULE_SRCDIR = \
	$(foreach path,$(2),$(call ___ADD_MODULE_SRCDIR,$(1),$(2)))
# Order of operations:
#    * Add the path to the include list.
#    * Generate all the possible .C->.o, .c->.o, etc. pattern recipes.
define ___ADD_MODULE_SRCDIR
$(call __ADD_MODULE_INCDIR,$(1),$(2))
$(call __GENERATE_OBJECTRULES,$(OBJPATH)/$(1),$(2),$$(or $$(lib$(1)_TARGET),TARGET))
endef

# ADD_MODULE_INCDIR
#     This macro will add additional include paths to a module.
ADD_MODULE_INCDIR = $(eval $(call __ADD_MODULE_INCDIR,$(1),$(2)))
__ADD_MODULE_INCDIR = \
	$(foreach path,$(2),$(call ___ADD_MODULE_INCDIR,$(1),$(path)))
# Order of operations:
#    * Add path to -iquote COMMON flags for #include "" style include.
#    * Add path to -I COMMON flags for #include <> style include.
#    * Add path to lib$(module)_INCDIRS for use by other targets.
define ___ADD_MODULE_INCDIR

lib$(1)_COMMONFLAGS += -iquote$(2)
lib$(1)_COMMONFLAGS += -I$(2)
lib$(1)_INCDIRS += $(2)

endef
