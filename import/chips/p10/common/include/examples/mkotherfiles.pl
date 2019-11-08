#!/usr/bin/perl
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/common/include/examples/mkotherfiles.pl $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019
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

open( BUF,  "p10_acs.C" );
open( WRT0, ">p10_acs_nochk.C" );
open( WRT1, ">p10_test_fail.C" );
open( WRT2, ">p10_test_nochk_fail.C" );

print WRT0 "#define NO_SCOM_CHECKING\n";
print WRT2 "#define NO_SCOM_CHECKING\n";
while ( $line = <BUF> )
{
    $wrt0_ln = $line;
    $wrt1_ln = $line;
    $wrt2_ln = $line;
    $wrt0_ln =~ s/p10_acs/p10_acs_nochk/g;
    $wrt1_ln =~ s/p10_acs/p10_test_fail/g;
    $wrt2_ln =~ s/p10_acs/p10_test_nochk_fail/g;
    print WRT0 $wrt0_ln;
    print WRT1 $wrt1_ln;
    print WRT2 $wrt2_ln;

    if ( $line =~ /^\s*FAPI_TRY\(GET_/ )
    {
        print WRT1 "\n\nSET_ATOMIC_LOCK_REG_ID(0xFull, l_data);\n\n";
        print WRT2 "\n\nSET_ATOMIC_LOCK_REG_ID(0xFull, l_data);\n\n";
    }
}

close(BUF);
close(WRT0);
close(WRT1);
close(WRT2);
