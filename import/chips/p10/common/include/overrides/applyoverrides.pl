#!/usr/bin/perl
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/common/include/overrides/applyoverrides.pl $
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

@orl = `ls -1 *.override`;

$overrides    = {};
$overridefile = {};

foreach $orf (@orl)
{
    chomp $orf;
    open( BUF, $orf ) || die "failed to open override file.";
    while ( $ln = <BUF> )
    {
        if ( $ln =~ /(\S+)\s*=\s*(\S+)/ )
        {
            $reg   = $1;
            $value = $2;
            if ( $value !~ /ull$/ && $value !~ /ULL$/ )
            {
                $value = $value . "ull";
            }
            $scope = "*";
            if ( $reg =~ /scomt\:\:(\S+)\:\:(\S+)/ )
            {
                $scope = $1;
                $reg   = $2;
            }
            elsif ( $reg =~ /(\S+)\:\:(\S+)/ )
            {
                $scope = $1;
                $reg   = $2;
            }
            $overrides->{$scope}->{$reg}  = $value;
            $overridefile->{$orf}->{$reg} = 0;
        }
    }
}

foreach $s ( keys %$overrides )
{
    $rl = $overrides->{$s};
    foreach $r ( keys %$rl )
    {
        $val = $rl->{$r};
        print " $s   $r   $val\n";
    }
}

@hfl = `ls -1 ../p10_scom_*.H`;

foreach $hf (@hfl)
{
    chomp $hf;
    if ( $hf =~ /p10_scom_(\S+)_\S\.H/ )
    {
        $scope = $1;
        open( TMP, ">.tmpheader" ) || die "Could not open temporary file";
        open( BUF, $hf )           || die "Could not open header file";
        while ( $ln = <BUF> )
        {
            if ( $ln =~ /\s*static\s+const\s+uint\S+\s+(\S+)\s*=\s*(\S+)\s*;/ )
            {
                $reg = $1;
                $val = $2;
                $nv  = -1;
                if ( exists $overrides->{$scope}->{$reg} )
                {
                    $nv = $overrides->{$scope}->{$reg};
                }
                elsif ( exists $overrides->{"*"}->{$reg} )
                {
                    $nv = $overrides->{"*"}->{$reg};
                }
                if ( $nv != -1 )
                {
                    if ( $val != $nv )
                    {
                        $ln =~ s/\s*=\s*$val\s*/ = $nv/;
                        foreach $fl ( keys %$overridefile )
                        {
                            $regl = $overridefile->{$fl};
                            if ( exists $regl->{$reg} )
                            {
                                $regl->{$reg} = 1;
                            }
                        }
                    }
                    else
                    {
                        print "FIXED!  $reg  $val == $nv\n";
                        foreach $fl ( keys %$overridefile )
                        {
                            $regl = $overridefile->{$fl};
                            if ( exists $regl->{$reg} )
                            {
                                $regl->{$reg} = 2;
                            }
                        }
                    }
                }
            }
            print TMP $ln;
        }
        close(TMP);
        close(BUF);
        system("mv .tmpheader $hf");
    }
}

foreach $fl ( keys %$overridefile )
{
    $allfnd = 1;
    $regl   = $overridefile->{$fl};
    foreach $reg ( keys %$regl )
    {
        if ( $regl->{$reg} == 1 )
        {
            $allfnd = 0;
        }
        if ( $regl->{$reg} == 0 )
        {
            print "Constant no longer exists: $fl  $reg\n";
        }
    }
    if ( $allfnd == 1 )
    {
        print "Not needed: $fl\n";
    }
}
