# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/cc.rules.mk $
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

# Makefile that defines macros for calling various compiler tools:
#    * __CALL_CXX for C++ compiler.
#    * __CALL_CC for C compiler.
#    * __CALL_LDSO for the .so linker.
#    * __CALL_LD for the .exe linker.
#    * __CALL_AR for the archiver.
#    * __CALL_CXX_DEP for generating an include dependency via CXX.
#    * __CALL_CC_DEP for generating an include dependency via CC.
#
# See the manpage if you want to understand these incantations more.

define __CALL_CXX
ifeq "TARGET" "$(1)"
		$(C2) "    C++        $$(@F)"
else
		$(C2) "    C++$(1)    $$(@F)"
endif
		$(C1) mkdir -p $$(@D)
		$(C1) $$($(1)_PREFIX)$$(CXX) $$(COMMONFLAGS) $$(CXXFLAGS) \
			$$(LOCALCOMMONFLAGS) $$(LOCALCXXFLAGS) \
			$$< -c -o $$@
endef

define __CALL_CC
ifeq "TARGET" "$(1)"
		$(C2) "    CC         $$(@F)"
else
		$(C2) "    CC$(1)     $$(@F)"
endif
		$(C1) mkdir -p $$(@D)
		$(C1) $$($(1)_PREFIX)$$(CC) $$(COMMONFLAGS) $$(CFLAGS) \
			$$(LOCALCOMMONFLAGS) $$(LOCALCFLAGS) \
			$$< -c -o $$@
endef

define __CALL_LDSO
ifeq "TARGET" "$(1)"
		$(C2) "    LDSO       $$(@F)"
else
		$(C2) "    LDSO$(1)   $$(@F)"
endif
		$(C1) mkdir -p $$(@D)
		$(C1) $$($(1)_PREFIX)$$(CXX) $$(LDFLAGS) \
			-shared  $$(addprefix -L,$(FAPI2_PLAT_LIB)) $$(LOCALLDFLAGS) \
			$$(patsubst lib%.so,-l%, $$(notdir $$(filter %.so, $$^))) \
			-Wl,--whole-archive \
			$$(filter-out $$(CTEPATH)%, $$(filter %.a,$$^)) \
			-Wl,--no-whole-archive \
			$$(filter $$(CTEPATH)%, $$(filter %.a,$$^)) -o $$@
		$(C1) ln -sf  $$@  \
		$$(addprefix $$(dir $$@),$$(patsubst lib%.so, %_x86_64.so,$$(notdir $$@)))
endef

define __CALL_LD
ifeq "TARGET" "$(1)"
		$(C2) "    LD         $$(@F)"
else
		$(C2) "    LD$(1)     $$(@F)"
endif
		$(C1) mkdir -p $$(@D)
		$(C1) $$($(1)_PREFIX)$$(CXX) $$(LDFLAGS)  \
			$$(addprefix -L,$(FAPI2_PLAT_LIB)) $$(LOCALLDFLAGS) \
			$$(patsubst lib%.so,-l%, $$(notdir $$(filter %.so, $$^))) \
			-Wl,--whole-archive \
			$$(filter-out $$(CTEPATH)%, $$(filter %.a,$$^)) \
			-Wl,--no-whole-archive \
			$$(filter $$(CTEPATH)%, $$(filter %.a,$$^)) \
		        -o $$@
endef

define __CALL_AR
ifeq "TARGET" "$(1)"
		$(C2) "    AR         $$(@F)"
else
		$(C2) "    AR$(1)     $$(@F)"
endif
		$(C1) mkdir -p $$(@D)
		$(C1) rm -f $$@
		$(C1) $$($(1)_PREFIX)$$(AR) rcs $$@ $$^
endef

define __CALL_CXX_DEP
ifeq "TARGET" "$(1)"
		$(C2) "    DEP        $$(@F:.o=.dep)"
else
		$(C2) "    DEP$(1)    $$(@F:.o=.dep)"
endif
		$(C1) mkdir -p $$(@D)
		$(C1) $$($(1)_PREFIX)$$(CXX) -M -MP -MT $$@ \
			$$(COMMONFLAGS) $$(CXXFLAGS) \
			$$(LOCALCOMMONFLAGS) $$(LOCALCXXFLAGS) \
			$$< -o $$(subst .o,.dep,$$@)
endef

define __CALL_CC_DEP
ifeq "TARGET" "$(1)"
		$(C2) "    DEP        $$(@F:.o=.dep)"
else
		$(C2) "    DEP$(1)    $$(@F:.o=.dep)"
endif
		$(C1) mkdir -p $$(@D)
		$(C1) $$($(1)_PREFIX)$$(CC) -M -MP -MT $$@ \
			$$(COMMONFLAGS) $$(CFLAGS) \
			$$(LOCALCOMMONFLAGS) $$(LOCALCFLAGS) \
			$$< -o $$(subst .o,.dep,$$@)

endef
