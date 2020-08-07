#!/usr/bin/perl
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/iohs/generate_reg_arrays.pl $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019,2020
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

use warnings;
use strict;

my $numargs = @ARGV;

if ( $numargs < 2 )
{
    print "Required args: <section> <ppe_file>\n";
    exit(1);
}

my $hfile            = $ARGV[0];
my $cfile            = $ARGV[1];
my $ppefile          = $ARGV[2];
my $suffix           = $ARGV[3];
my $sectionarrayname = $ARGV[4];
my $sectionfiles     = $ARGV[5];
my $lastsection      = $ARGV[6];

my @sections = split( /,/, $sectionfiles );

open( HBUF, ">>${hfile}" ) || die "Could not write file: $hfile";
open( CBUF, ">>${cfile}" ) || die "Could not write file: $cfile";

print HBUF "\n";
print HBUF "p10_io_ppe_cache ${sectionarrayname}[${suffix}];\n";
print HBUF "\n";

print CBUF "${sectionarrayname}{\n";
for ( my $cnt = 0; $cnt < $suffix; $cnt++ )
{
    my $section = $sections[$cnt];
    print CBUF "p10_io_ppe_cache(&p10_io_phy_ppe_scom_regs, ${section}_start)";
    if ( $cnt < $suffix - 1 ) { print CBUF ","; }
    print CBUF "\n";
}
print CBUF "},\n";

open( BUF, $ppefile ) || die "Could not open ppe file: $ppefile";

my $register;
my $addr;
my $shift;
my $mask;
my $firstpass = 1;
while ( my $line = <BUF> )
{
    if ( $line =~ /\#define\s+(\S+)_addr\s+(\S+)/ )
    {
        $register = $1;
        $addr     = $2;
    }
    if ( $line =~ /\#define\s+(\S+)_shift\s+(\S+)/ )
    {
        $shift = $2;
    }
    if ( $line =~ /\#define\s+(\S+)_mask\s+(\S+)/ )
    {
        $mask = $2;
        print HBUF "p10_io_ppe_sram_reg p10_io_ppe_${register}[${suffix}];\n";

        if ( !$firstpass ) { print CBUF ",\n"; }
        $firstpass = 0;
        print CBUF "p10_io_ppe_${register}{\n";
        for ( my $cnt = 0; $cnt < $suffix; $cnt++ )
        {
            print CBUF "p10_io_ppe_sram_reg(&${sectionarrayname}[$cnt], $addr, $mask, $shift)";
            if ( $cnt < $suffix - 1 ) { print CBUF ","; }
            print CBUF "\n";
        }
        print CBUF "}";
    }
}

if   ( $lastsection eq "y" ) { print CBUF " {}\n"; }
else                         { print CBUF ",\n"; }

close(HBUF);
close(CBUF);
