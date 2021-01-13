# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: env.bash $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2021
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

ROOTDIR=.

if [ -e ./customrc ]; then
    source ./customrc
fi

# Setup some global variables
export PROJECT_NAME=p10
export PROJECT_ROOT=$ROOTDIR
export TOOLSDIR=$PROJECT_ROOT/tools
export PERLMODULES=$TOOLSDIR/perl.modules
export HOOKSDIR=$PROJECT_ROOT/.git/hooks
export EKBHOOKSDIR=$TOOLSDIR/hooks
export EKBENVDIR=$TOOLSDIR/envsetup

export UNAME=`uname -s`

# set path for Python 3
if [ -f /opt/xsite/cte/tools/python/bin/python3 ]; then
    export PATH_PYTHON3=/opt/xsite/cte/tools/python/bin/python3
else
    export PATH_PYTHON3=/usr/bin/python3
fi

# Check for env variable OPENPOWER_BUILD
if [ "${OPENPOWER_BUILD}" == "" ]; then

## Set CTE path if not already set
if [ -z "${CTEPATH}" ]; then
    export CTEPATH=/afs/apd.pok.ibm.com/projects/cte
fi

if [ "$UNAME" == 'AIX' ]
then
    export PATH=/opt/xsite/contrib/bin/:$PATH
fi

# Copyright license file for project
export LICENSE=$PROJECT_ROOT/LICENSE_PROLOG

# Update PATH
export PATH=${PATH}:$TOOLSDIR:"$TOOLSDIR/test"


# make sure ECMD_RELEASE is set
if [ -z "${ECMD_RELEASE}" ]; then
    export ECMD_RELEASE=ver-14-21
fi
ECMD_LIB_PATH=${CTEPATH}/tools/ecmd/${ECMD_RELEASE}/x86_64/lib

PPE_LIB_PATH=${CTEPATH}/tools/ppetools/prod/lib

# setup the ld library path
if [ -n "${LD_LIBRARY_PATH}" ]; then
    export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${ECMD_LIB_PATH}:${PPE_LIB_PATH}
else
    export LD_LIBRARY_PATH=${ECMD_LIB_PATH}:${PPE_LIB_PATH}
fi

# This is done for ipl_image_tool to get build in OP env.
export OPENPOWER_BUILD=1

if [ -n "${SANDBOXROOT}" ]; then
    if [ -n "${SANDBOXNAME}" ]; then
        export SANDBOXBASE="${SANDBOXROOT}/${SANDBOXNAME}"
    fi
fi

fi
## Search and set gerrit host
# Gerrit host name should be in .ssh/config file
# Example:
# Host gerrit-server
#     Hostname gfw160.aus.stglabs.ibm.com
#     Port 29418
#     AFSTokenPassing no
if [ -e $HOME/.ssh/config ]; then
if [ -e $EKBENVDIR/gerrit-hostname ]; then
    echo "Searching for Gerrit Host..."
    eval $($EKBENVDIR/gerrit-hostname) || exit -1
fi
fi

##  run setupgithooks.pl
if [ -e $HOOKSDIR ]; then
if [ -e $EKBENVDIR/setupgithooks ]; then
    $EKBENVDIR/setupgithooks || exit -1
fi
fi
