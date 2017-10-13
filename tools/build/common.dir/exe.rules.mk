# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/exe.rules.mk $
#
# IBM CONFIDENTIAL
#
# EKB Project
#
# COPYRIGHT 2015,2017
# [+] International Business Machines Corp.
#
#
# The source code for this program is not published or otherwise
# divested of its trade secrets, irrespective of what has been
# deposited with the U.S. Copyright Office.
#
# IBM_PROLOG_END_TAG

# Makefile that defines how we build executables.
#
# Macros:
#     BUILD_EXE - Macro to automatically generate all the recipes for
#                 building an executable.
#     ADD_EXE_OBJ - Macro to add additional objects to an executable.
#     ADD_EXE_SRCDIR - Macro to add additional source dirs to an executable.
#     ADD_EXE_INCDIR - Macro to add additional include dirs to an executable.
# Special variables:
#     $(EXE)_*FLAGS - Extra compile / linker flags for a specific executable.
#     $(EXE)_DEPLIBS - Local modules that this executable depends on.
#     $(EXE)_EXTRALIBS - External shared libs that this executable depends on.
#     $(EXE)_PATH - Optional alternate location to place executable objects.
#     $(EXE)_TARGET - Optional mechanism to select between the 'host' or
#                     'target' (default) cross-compiler set.
# Input:
#     Optional input to delay the running of BUILD_GENERATED macro to a
#     later phase.
#
# BUILD_EXE
#     This macro will automatically generate all the recipes for building an
#     executable.  Requires that the following variables are defined
#     prior to calling this macro:
#         * EXE=name - Give a name to the executable.
#         * OBJS=list of objects - Give a list of .o files required.
#
#     As a result, this macro will define how to build $(MODULE).exe as well
#     as all necessary dependencies.
BUILD_EXE = $(eval $(call __BUILD_EXE, $1))

# Order of operations:
#   * Define default exe object PATH.
#   * Add all OBJ to exe objects.
#   * Add directory of the defining .mk file to the source path for this exe.
#   * Set up LOCAL*FLAGS variables for the exe.
#   * Define dependencies for the exe:
#       - lib$(EXE).a
#       - All $(EXE)_DEPLIB modules.
#       - All $(EXE)_EXTRALIBS shared libraries
#       - Call environment's __CALL_LD macro to link exe.
#   * Define dependencies for the lib$(EXE).a archive.
#       - All lib$(EXE)_OBJS.
#       - Call environment's __CALL_AR macro to create archive.
#   * Add exe and archive to 'clean' target list.
#   * Create helper target for 'make $(EXE)'.
#   * Erase EXE and OBJS variables.
#
# Input:
#     Optional input to delay the running of BUILD_GENERATED macro to a
#     later phase.

define __BUILD_EXE
$(EXE)_PATH ?= $(OBJPATH)/$(EXE)
$(EXE)_LIBPATH ?= $(LIBPATH)
$(call __ADD_EXE_OBJ,$(EXE),$(OBJS))
$(call __ADD_EXE_SRCDIR,$(EXE),$(dir $(lastword $(MAKEFILE_LIST))))

$(EXEPATH)/$(EXE).exe: LOCALCOMMONFLAGS += $$($(EXE)_COMMONFLAGS)
$(EXEPATH)/$(EXE).exe: LOCALCFLAGS += $$($(EXE)_CFLAGS)
$(EXEPATH)/$(EXE).exe: LOCALCXXFLAGS += $$($(EXE)_CXXFLAGS)
$(EXEPATH)/$(EXE).exe: LOCALLDFLAGS += $$($(EXE)_LDFLAGS)
$(EXEPATH)/$(EXE).exe: $$($(EXE)_PATH)/lib$(EXE).a \
	$$(foreach lib,$$($(EXE)_DEPLIBS),$$($(EXE)_LIBPATH)/lib$$(lib).a) \
	$$($(EXE)_EXTRALIBS) $$($(EXE)_DEPS) | $$($(EXE)_DEPSORDER)
$(call __CALL_LD,$$(or $$($(EXE)_TARGET),TARGET))

$$($(EXE)_PATH)/lib$(EXE).a: $$($(EXE)_OBJS)
$(call __CALL_AR,$$(or $$($(EXE)_TARGET),TARGET))

$(call __CLEAN_TARGET,$(EXEPATH)/$(EXE).exe)
$(call __CLEAN_TARGET,$$($(EXE)_PATH)/lib$(EXE).a)

.PHONY: $(EXE)
$(EXE) : _BUILD/GEN_TARGETS
		@$$(MAKE) $(EXEPATH)/$(EXE).exe
$(or $(strip $1),EXE)_TARGETS += $(EXEPATH)/$(EXE).exe

EXE:=
OBJS:=

endef

# ADD_EXE_OBJ
#    This macro will add additional objects to an executable's dependency list.
# Usage:
#    $(call ADD_EXE_OBJ,exe,file1.o file2.o)
ADD_EXE_OBJ = $(eval $(call __ADD_EXE_OBJ,$(1),$(2)))
# Order of operations:
#    * Prepend $(EXE)_PATH to the path for the object.
#    * Add object and corresponding .dep file to the 'clean' target list.
#    * Add generated .dep file for header-file dependencies to __DEP_INCLUDES.
define __ADD_EXE_OBJ
$(1)_OBJS += $$(addprefix $$($(1)_PATH)/,$(2))
$(foreach obj,$(2),$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj))
	$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj:.o=.dep)))

__DEP_INCLUDES += $$(wildcard $$(addprefix $$($(1)_PATH)/,$(2:.o=.dep)))
endef

# ADD_EXE_SRCDIR
#     This macro will add additional source paths to an executable.
# Usage:
#    $(call ADD_EXE_SRCDIR,exe,/path1 /path2)
ADD_EXE_SRCDIR = $(eval $(call __ADD_EXE_SRCDIR,$(1),$(2)))
__ADD_EXE_SRCDIR = \
	$(foreach path,$(2),$(call ___ADD_EXE_SRCDIR,$(1),$(2)))
# Order of operations:
#    * Add the path to the include list.
#    * Generate all the possible .C->.o, .c->.o, etc. pattern recipes.
define ___ADD_EXE_SRCDIR
$(call __ADD_EXE_INCDIR,$(1),$(2))
$(call __GENERATE_OBJECTRULES,$(OBJPATH)/$(1),$(2),$$(or $$($(1)_TARGET),TARGET))
endef

# ADD_EXE_INCDIR
#     This macro will add additional include paths to a module.
ADD_EXE_INCDIR = $(eval $(call __ADD_EXE_INCDIR,$(1),$(2)))
__ADD_EXE_INCDIR = \
	$(foreach path,$(2),$(call ___ADD_EXE_INCDIR,$(1),$(path)))
# Order of operations:
#    * Add path to -iquote COMMON flags for #include "" style include.
#    * Add path to -I COMMON flags for #include <> style include.
#    * Add path to $(exe)_INCDIRS for use by other targets.
define ___ADD_EXE_INCDIR

$(1)_COMMONFLAGS += -iquote$(2)
$(1)_COMMONFLAGS += -I$(2)
$(1)_INCDIRS += $(2)

endef
