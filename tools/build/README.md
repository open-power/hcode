## Introduction ##

For the typical procedure, `p8_foo.[CH]`, you should make a corresponding
makefile: `p8_foo.mk`.  In most cases this can simply be two lines:

    PROCEDURE=p8_foo
    $(call BUILD_PROCEDURE)

If you need more advanced options, such as creating and linking against a
library of utilities see the broader details below.

## Typically Used Target Macros ##

### BUILD_PROCEDURE ###
This macro will automatically generate all the recipes for building a FAPI
procedure.  Requires that the following variables are defined prior to calling
this macro:

* `PROCEDURE=name` - Name of the procedure.  name.o is an implied
                     required object.
* `FAPI=version` - Optional method to specify the FAPI version.

Example:

    PROCEDURE=foo
    $(call BUILD_PROCEDURE)

Since BUILD_PROCEDURE is a special case of a 'module', you should see the
BUILD_MODULE macro for more advanced capabilities.  The most likely used
additional features are `OBJS+=` and `lib$(PROCEDURE)_DEPLIBS+=`.

### BUILD_WRAPPER ###
This macro will automatically generate all the recipes for building a FAPI
wrapper.  Requires that the following variables are defined prior to calling
this macro:

* `PROCEDURE=name` - Name of the wrapper.  name.o is an implied required
                     object.
* `FAPI=version` - Optional method to specify the FAPI version.
* `$(WRAPPER)_USELIBS` - Indicates that this wrapper needs include files
                         defined by a procedure or module.

Many wrappers will #include a header file defined by a procedure.  In order
for the build system to find this header file, the `$(WRAPPER)_USELIBS`
variable will need to be populated. Since procedures are loaded indirectly
in Cronus via `dlopen`, needed procedures should not be in the
`$(WRAPPER)_DEPLIBS` variable.

Example:

    WRAPPER=foo_wrap
    foo_wrap_USELIBS+=foo
    $(call BUILD_WRAPPER)

Since BUILD_WRAPPER is a special case of an 'executable', you should see the
BUILD_WRAPPER macro for more advanced capabilities.  The most likely used
additional features are `OBJS+=` and `$(WRAPPER)_DEPLIBS+=`.

### BUILD_MODULE ###
This macro will automatically generate all the recipes for building a shared
library.  Requires that the following variables are defined prior to calling
this macro:

* `MODULE=name` - Give a name to the module.
* `OBJS=list of objects` - Give a list of .o files required.

As a result, this macro will define how to build lib$(MODULE).so as well as
all necessary dependencies.

This macro can utilize these additional variables:

* `lib$(MODULE)_*FLAGS` - Extra compile / linker flags for the module.
* `lib$(MODULE)_DEPLIBS` - Local modules that this module depends on.
* `lib$(MODULE)_EXTRALIBS` - External shared libs that this module depends on.
* `lib$(MODULE)_PATH` - Optional alternate location to place library objects.
* `lib$(MODULE)_TARGET` - Optional mechanism to select between the 'host' or
                          'target' (default) cross-compiler set.
* `lib$(MODULE)_DEPSORDER - Order-only dependencies.
* `$(OBJ)_*FLAGS` - Extra compile / linker flags for a specific object.

Example:

    MODULE=foo
    OBJS+=foo.o
    libfoo_DEPLIBS+=bar
    $(call BUILD_MODULE)

### BUILD_EXE ###

This macro will automatically generate all the recipes for building an
executable.  Requires that the following variables are defined prior to
calling this macro:
* `EXE=name` - Give a name to the executable.
* `OBJS=list of objects` - Give a list of .o files required.

As a result, this macro will define how to build $(MODULE).exe as well as
all necessary dependencies.

This macro can utilize these additional variables:

* `$(EXE)_*FLAGS` - Extra compile / linker flags for a specific executable.
* `$(EXE)_DEPLIBS` - Local modules that this executable depends on.
* `$(EXE)_EXTRALIBS` - External shared libs that this executable depends on.
* `$(EXE)_PATH` - Optional alternate location to place executable objects.
* `$(EXE)_TARGET` - Optional mechanism to select between the 'host' or
                    'target' (default) cross-compiler set.
* `$(EXE)_DEPSORDER - Order-only dependencies.
* `$(OBJ)_*FLAGS` - Extra compile / linker flags for a specific object.

Example:

    EXE=foo
    OBJS+=foo.o
    foo_DEPLIBS+=bar
    $(call BUILD_EXE)

### BUILD_GENERATED ###
This macro will automatically generate all the recipes for running a tool that
generates other files.  Requires that the following variables are defined prior
to calling this macro:

* `GENERATED=name` - Give a name to this generator.
* `COMMAND=tool` - Name of the tool to run.
* `SOURCES=file1 file2` - List of files as 'input' to the tool.
* `TARGETS=file3 file4` - List of files that are created as 'output'.
* `$(GENERATED)_RUN` - A macro that identifies how to run this tool.

As a result, this macro will rerun the tool whenever the command or source
files change and will automatically add the targets to the 'clean' list.

This macro can utilize these additional variables:

* `$(GENERATED)_PATH` - Optional path to put output into.
* `$(GENERATED)_COMMAND_PATH` - Path to tool, assumed to be the current
                                directory of the .mk file if not given.

Example:

    GENERATED=foo2bar
    COMMAND=foo2bar
    SOURCES+=foo.xml
    TARGETS+=bar.xml
    define foo2bar_RUN
    \t\t$$< --input=$$(filter-out $$<,$$^) \
            --output=$$($(GENERATED)_PATH)/bar.xml
    endef

## Other Macros ##

### ADD_MODULE_SRCDIR ###
Adds a list of additional source paths to a module.  A call to
ADD_MODULE_INCDIR is also automatically implied.

Usage:

    $(call ADD_MODULE_SRCDIR,module,/path1 /path2)

### ADD_MODULE_INCDIR ###
Adds a list of additional include paths to a module.

Usage:

    $(call ADD_MODULE_INCDIR,module,/path1 /path2)

### ADD_MODULE_OBJ ###
Adds a list of objects to a module's dependency list.

Usage:

    $(call ADD_MODULE_OBJ,module,file1.o file2.o)

### ADD_EXE_SRCDIR ###
See ADD_MODULE_SRCDIR.

### ADD_EXE_INCDIR ###
See ADD_MODULE_INCDIR.

### ADD_EXE_OBJ ###
See ADD_MODULE_OBJ.

### CLEAN_TARGET ###

`CLEAN_TARGET` is used to identify a file to remove when the user performs
"make clean".

Usage:

    $(call CLEAN_TARGET,../path/to/removed/file)

## General / Global Variables ##

`BUILD_VERBOSE` - Can be set by the environment to establish verbose output.

`LOCALCOMMONFLAGS` - Flags to pass to `CC` and `CPP`.

`LOCALCFLAGS` - Flags to pass to `CC`.

`LOCALCXXFLAGS` - Flags to pass to `CPP`.

`LOCALLDFLAGS` - Flags to pass to `LD`

`GEN_TARGETS` - List of targets to build in the 'gen' pass.

`MODULE_TARGETS` - List of modules to build in the 'module' pass.

`EXE_TARGETS` - List of targets to build in the 'exe' pass.

`ALL_TARGETS` - List of targets to build in the 'all' pass.

