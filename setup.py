# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: setup.py $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2020,2023
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
import os.path
import os
import shutil
from setuptools.command.install import install
"""
 Setuptools is an open source package.
 Documentation on setuptools can be found on the web.

 HCODE Usages:

 Command to run from HCODE repo:
   python3 setup.py bdist_wheel

   dist/HCODE-0.1-py3-none-any.whl will be produced.

   If desired, export PELTOOL_VERSION can be defined
   to customize the version before running setup.py
     export PELTOOL_VERSION=6.7.1006

 To install the HCODE wheel:
   pip3 install --user HCODE-0.1.py3-non-any.whl

 If necessary, setup the environment before starting:
   scl enable rh-python36 "bash"

 At this time the HCODE whl package relies on the base
 Hostboot source pel parsing packages.  The content
 of this setup.py consists ONLY of packaging the
 trexStringFiles since the location of these binaries
 resides ONLY in the HCODE repository.

"""
from setuptools import setup


# Handy debug environment tips
# HERE = os.path.abspath(os.path.dirname(__file__))
# custom_data_files is a list of tuples
custom_data_files = [  ( 'hcode_data', ['output/images_x86_64/qme_p10dd20/QMESTRINGFILE',
                                     'output/images_x86_64/pgpe_p10dd20/PGPESTRINGFILE',
                                     'output/images_x86_64/xgpe_p10dd20/XGPESTRINGFILE']) ]

# copy_files_dict will take the key value pair and produce a copy of the file
copy_files_dict = {"output/images_x86_64/qme_p10dd20/QMESTRINGFILE"   : "output/images_x86_64/qme_p10dd20/trexStringFile",
                   "output/images_x86_64/pgpe_p10dd20/PGPESTRINGFILE" : "output/images_x86_64/pgpe_p10dd20/trexStringFile",
                   "output/images_x86_64/xgpe_p10dd20/XGPESTRINGFILE" : "output/images_x86_64/xgpe_p10dd20/trexStringFile",
}

def check_environment_files():
    """
    Check the environment for the needed files

    HCODE setup.py is invoked in two contexts:
    1 - op-build, where the trexStringFile(s) exist, post build
    2 - OpenBMC, where the trexStringFile(s) do NOT exist
        OpenBMC clones a clean HCODE repo (source only)

    setup.py will fail if data_files do not exist,
    so if we encounter a missing file, clear the
    expectation and only populate the wheel with
    the usual python source files.
    """

    # First copy any files to the proper packaging names
    for output_key_name, source_value_name in copy_files_dict.items():
        shutil.copy(source_value_name, output_key_name)

    # Now that we have the proper file names, validate that the custom_data_files really exist
    for i in custom_data_files:
        for x in i[1]:
            if not os.path.isfile(x):
                custom_data_files.clear()
                return

class CustomHCODECommand(install):
    """
    Subclass the install command

    This allows the capability to add custom build
    steps.
    """
    def run(self):
        # First run the custom environment setup needed.
        # Then call the standard install once the files
        # have been properly copied to their packaging names.
        check_environment_files()
        install.run(self)

setup(
    name            = "hcode-pel-parser",
    cmdclass        = {'install': CustomHCODECommand},
    version         = os.getenv('PELTOOL_VERSION', '0.1'),
    data_files      = custom_data_files,
)
