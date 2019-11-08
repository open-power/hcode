#!/usr/bin/perl
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/common/include/mkexamples.pl $
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

open( RAW, ">examples/p10_raw.C" ) || die "blah";
open( ACS, ">examples/p10_acs.C" ) || die "blah";

print RAW "#include \"fapi2.H\"\n";
print RAW "#include \"p10_raw.H\"\n";
print RAW "\n";
print RAW "fapi2::ReturnCode p10_raw(\n";
print RAW "    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target)\n";
print RAW "{\n";
print RAW "    fapi2::buffer<uint64_t> l_data;\n";
print RAW "\n";

print ACS "#include \"fapi2.H\"\n";
print ACS "#include \"p10_acs.H\"\n";
print ACS "#include \"p10_scom_c.H\"\n";
print ACS "#include \"p10_scom_eq.H\"\n";
print ACS "#include \"p10_scom_iohs.H\"\n";
print ACS "#include \"p10_scom_mc.H\"\n";
print ACS "#include \"p10_scom_mcc.H\"\n";
print ACS "#include \"p10_scom_omi.H\"\n";
print ACS "#include \"p10_scom_omic.H\"\n";
print ACS "#include \"p10_scom_phb.H\"\n";
print ACS "#include \"p10_scom_perv.H\"\n";
print ACS "#include \"p10_scom_pec.H\"\n";
print ACS "#include \"p10_scom_nmmu.H\"\n";
print ACS "#include \"p10_scom_pau.H\"\n";
print ACS "#include \"p10_scom_pauc.H\"\n";
print ACS "#include \"p10_scom_proc.H\"\n";
print ACS "#include \"p10_ppe_eq.H\"\n";
print ACS "#include \"p10_ppe_c.H\"\n";
print ACS "#include \"p10_oci_proc.H\"\n";
print ACS "\n";
print ACS "fapi2::ReturnCode p10_acs(\n";
print ACS "    const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target)\n";
print ACS "{\n";
print ACS "    using namespace scomt;\n";
print ACS "    using namespace scomt::perv;\n";
print ACS "\n";
print ACS "    fapi2::buffer<uint64_t> l_data;\n";
print ACS "\n";
print ACS "    FAPI_TRY(init(i_target));\n";
print ACS "\n";

$getscom = 1;
$lstreg  = "";
$lstaddr = "";
$lstdial = "";
$lstbit  = 0;
@pervlst = (
    "p10_scom_perv_0.H", "p10_scom_perv_1.H", "p10_scom_perv_2.H", "p10_scom_perv_3.H",
    "p10_scom_perv_4.H", "p10_scom_perv_5.H", "p10_scom_perv_6.H", "p10_scom_perv_7.H",
    "p10_scom_perv_8.H", "p10_scom_perv_9.H", "p10_scom_perv_a.H", "p10_scom_perv_b.H",
    "p10_scom_perv_c.H", "p10_scom_perv_d.H", "p10_scom_perv_e.H", "p10_scom_perv_f.H",
);

foreach $fl (@pervlst)
{
    open( BUF, $fl ) || die "blah";
    while ( $line = <BUF> )
    {
        if ( $line =~ /(\S+) = 0x(\S+);/ )
        {
            $nreg  = $1;
            $naddr = $2;
            if ( $lstreg ne "" )
            {
                if ( $lstdial ne "" )
                {
                    print RAW "    l_data.setBit<$lstbit>();\n";
                    print ACS "    SET_${lstreg}${lstdial}(l_data);\n";
                    $lstdial = "";
                }
                print RAW "    FAPI_TRY(fapi2::putScom(i_target, 0x${lstaddr}, l_data));\n\n";
                print ACS "    FAPI_TRY(PUT_${lstreg}(i_target, l_data));\n\n";
            }
            $lstreg  = $nreg;
            $lstaddr = $naddr;
            if ($getscom)
            {
                print RAW "    FAPI_TRY(fapi2::getScom(i_target, 0x${lstaddr}, l_data));\n";
                print ACS "    FAPI_TRY(GET_${lstreg}(i_target, l_data));\n";
                $getscom = 0;
            }
            else
            {
                print RAW "    l_data.flush<0>();\n";
                print ACS "    l_data.flush<0>();\n";
                print ACS "    FAPI_TRY(PREP_${lstreg}(i_target));\n";
                $getscom = 1;
            }
        }
        elsif ( $line =~ /${lstreg}(\S+) = (\d+);/ && $line !~ /^\s*\/\// )
        {
            $dial   = $1;
            $bitlen = $2;
            print("dial: $dial bitlen: $bitlen lstdial: $lstdial lstbit: $lstbit\n");
            if ( $dial =~ /${lstdial}_LEN$/ )
            {
                print RAW "    l_data.insertFromRight<$lstbit, $bitlen>(0xFull);\n";
                print ACS "    SET_${lstreg}${lstdial}(0xFull, l_data);\n";
                $lstdial = "";
            }
            else
            {
                if ( $lstdial ne "" )
                {
                    print RAW "    l_data.setBit<$lstbit>();\n";
                    print ACS "    SET_${lstreg}${lstdial}(l_data);\n";
                }
                $lstdial = $dial;
                $lstbit  = $bitlen;
            }
        }
    }
    close(BUF);
}
if ( $lstreg ne "" )
{
    print RAW "    FAPI_TRY(fapi2::putScom(i_target, 0x${lstaddr}, l_data));\n\n";
    print ACS "    FAPI_TRY(PUT_${lstreg}(i_target, l_data));\n\n";
}

print RAW "fapi_try_exit:\n";
print RAW "    return fapi2::current_err;\n";
print RAW "}\n\n";
close(RAW);

print ACS "fapi_try_exit:\n";
print ACS "    return fapi2::current_err;\n";
print ACS "}\n\n";
close(ACS);
