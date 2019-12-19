/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/ppetracepp/ppeTrex.C $   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
/* [+] International Business Machines Corp.                              */
/*                                                                        */
/*                                                                        */
/* Licensed under the Apache License, Version 2.0 (the "License");        */
/* you may not use this file except in compliance with the License.       */
/* You may obtain a copy of the License at                                */
/*                                                                        */
/*     http://www.apache.org/licenses/LICENSE-2.0                         */
/*                                                                        */
/* Unless required by applicable law or agreed to in writing, software    */
/* distributed under the License is distributed on an "AS IS" BASIS,      */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or        */
/* implied. See the License for the specific language governing           */
/* permissions and limitations under the License.                         */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */
#include "ppeTrex.H"
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <stdint.h>
#include <string.h>
#include <byteswap.h>
#include <arpa/inet.h>

#define TYPE_UINT64 1
#define TYPE_FLOAT  2
#define TYPE_STRING 3

#define TRACEE(FMT, args...)

int32_t trexMyVsnprintf(char* io_dest,
                        size_t dest_size,
                        const char* i_fmt,
                        const char* i_vparms,
                        int i_vparms_size,
                        bool i_swap);

Trex::Trex(ostream& i_err)
    : iv_err(i_err)
{
}

void Trex::dump(ostream& out)
{
    out << "FSP_TRACE_v2|||Fri Jun 28 09:14:31 CDT 2019|||BUILD:." << endl;

    for(map<int, string>::const_iterator i = iv_map.begin(); i != iv_map.end(); ++i)
    {
        iv_err << dec << (uint32_t)i->first << "||" << i->second << "||local" << endl;
    }
}

bool Trex::load(string& filepath)
{
    bool result = true;
    ifstream ins(filepath.c_str());

    if(!ins)
    {
        iv_err << "Could not open " << filepath << endl;
        return false;
    }

    string line;

    while(getline(ins, line))
    {
        if(line[0] == '#')
        {
            continue;
        }

        size_t pos = line.find("||", 0);

        if(pos == string::npos)
        {
            continue;
        }

        string hash(line.substr(0, pos));
        size_t startpos = pos + 2;
        pos = line.find("||", startpos);

        if(pos == string::npos)
        {
            continue;
        }

        string text(line.substr(startpos, pos - startpos));
        int hashval = strtol(hash.c_str(), NULL, 10);
        iv_map[hashval] = text;
        //iv_err << (unsigned int)hashval << ":" << text << endl;
    }

    return result;
}

void Trex::addHash(int i_hashVal, const string& text)
{
    iv_map[i_hashVal] = text;
}

void Trex::print(const PpeTraceEntry& i_entry)
{
    int hash = i_entry.getHash();
    int parmCount = i_entry.parmCount();
    const unsigned int* parms = i_entry.parms();

    char b[256];
    string s = iv_map[hash];
    const char* format = s.c_str();

    iv_err << i_entry.getTimeStamp() << "|";

    // TODO  isOpTrace needed?
    if(i_entry.isOpTrace())
    {
        iv_err << "Mark: " << hex << setfill('0') << setw(2) << parms[0];

        if(parmCount > 1)
        {
            iv_err << " args:";

            for(int i = 1; i < parmCount; ++i)
            {
                iv_err << " 0x" << hex << setfill('0') << setw(8) << parms[i];
            }
        }

        iv_err << endl;
    }
    else
    {
        if(0 == s.length())
        {
            iv_err << "Missing format hash " << dec << (uint32_t)hash
                   << " [0x" << hex << setfill('0') << setw(8) << hash << "] Data: ";

            for(int i = 0; i < parmCount; ++i)
            {
                iv_err << hex << setfill('0') << setw(8) << ntohl(parms[i]) << ' ';
            }
        }

        trexMyVsnprintf(b,
                        256,
                        format,
                        reinterpret_cast<const char*>(parms),
                        parmCount * sizeof(uint32_t),
                        (1 != htonl(1)));

        iv_err << b << endl;

        if(i_entry.isBinary())
        {
            iv_err << "                  |";

            for(int i = 0; i < parmCount; ++i)
            {
                iv_err << "0x" << hex << setfill('0') << setw(8)
                       << parms[i] << ' ';

                if(i % 4 == 3)
                {
                    iv_err << endl << "                  |";
                }
            }

            iv_err << endl;
        }
    }
}

// This code segment was taken from fsp-trace   github/open-power/fps-trace
// with a few modifications.
typedef union
    {
        uint64_t u64;
        uint32_t u32;
        unsigned short u16;
        float f32;
        const char* s;
    } args;

/*!
 * @brief Input data vector is assumed to be in packed form.  Characters are
 *  treated as 1 byte, and strings are assumed to consist of string literals
 *  instead of char * pointers. \n
 *  All short (16 bit) and char(8bit) values are assumed to be type cast to 32
 *  bits before they were placed into the data vector.  Therefore support for
 *  the 'h' modifier is not included and the 'l' modifier is essentially ignored.
 *  To indicate a 64 bit value the 'L' modifier must be specified.
 *
 *  Now supported : string(%s), 32 bit integers(c,d,i,o,u,x,X), 64 bit
 *  integers(%ll = %L with c,d,i,o,u,x,X), pointers(%p), floats(%f).
 *
 *  Unsupported : double/long double (%lf, %Lf, %n)
 *
 * @param io_dest Pointer to destination buffer for the formatted string.
 * @param dest_size Size of the dest buffer.
 * @param i_fmt Formatting parameters to apply to the data vector.
 * @param i_vparms Pointer to packed data vector to be formatted.
 * @param i_swap Endian byte swap flag.
 *
 * @return Length of the final formatted string pointed to by io_dest.
 */
int32_t trexMyVsnprintf(char* io_dest, size_t dest_size,
                        const char* i_fmt, const char* i_vparms,
                        int i_vparms_size, bool i_swap)
{
    //  Local Variables
    int longflag = 0;    /* =1 if "L" specified */
    uint8_t len_args = 17;
    args pargs[len_args];
    int argnum = 0;
    const char* fmtstring = i_fmt;
    char ch;
    const char* vparms_end;
    uint32_t uint32_empty = 0;

    uint8_t fields[len_args]; /* 64bit fields*/
    uint32_t len_sfmt[len_args]; /* massive of lens of printable elements */
    uint32_t len_fmt = 0; /* len of not formatted string */
    uint8_t i;
    char tmpdata[dest_size]; /* temp data for copy */
    uint32_t prev_size = 0; /* previous size of not formatted string*/
    uint32_t prev_size_fmtd = 0; /* previous size of formatted string */
    uint32_t size = 0; /* size of formatted string */

    memset(fields, 0, len_args);
    memset(len_sfmt, 0, sizeof(uint32_t) * len_args);

    vparms_end = i_vparms + i_vparms_size - 1;

    for (ch = 1; ch; ch = *i_fmt++, len_fmt++)
    {
        if (argnum > 16)
        {
            break;
        }

        if (ch != '%')
        {
            continue;
        }

        // skip %
        ch = *i_fmt++;
        len_fmt++;

        // check for '%%'
        if (ch == '%')
        {
            continue;
        }

        // skip optional flags, search for format specifier
        while (1)
        {

            if (ch == 'l' && i_fmt[0] == 'l')
            {
                longflag = 1;
                i_fmt++;    // skip first l, second is skipped below
                len_fmt++;
            }
            else if (ch == 'L')
            {
                longflag = 1;
            }
            else if (!strchr("-+0123456789#lLw. 'Ihjzt", ch))
            {
                break;
            }

            ch = *i_fmt++;    // skip optional char
            len_fmt++;
        }

        switch (ch)    // diouxXeEfFgGaAcpn
        {
            case 's':
                /* use marker if no data left in trace entry */
                len_sfmt[argnum] = len_fmt;

                if (i_vparms >= vparms_end)
                {
                    pargs[argnum].s = "[[NODATA]]";
                    break;
                }

                fields[argnum] = TYPE_STRING;

                if (!*i_vparms)   /* empty string */
                {
                    pargs[argnum].s = "";
                    i_vparms += 4; /* word aligned */
                }
                else
                {
                    uint32_t tmpint;
                    pargs[argnum].s = i_vparms;
                    /* increase iv_parms by multiple of 4. we can't
                     * align i_vparms to a multiple of 4 as
                     * i_vparms isn't garanteed to be aligned */
                    tmpint = strlen(i_vparms) + 1;
                    tmpint = (tmpint + 3) & ~3;
                    i_vparms += tmpint;
                }

                break;

            case 'p':
            case 'c':
            case 'd':
            case 'i':
            case 'o':
            case 'u':
            case 'x':
            case 'X':
                len_sfmt[argnum] = len_fmt;

                if (i_vparms > vparms_end)
                {
                    pargs[argnum].u32 =  uint32_empty;
                }
                else
                {
                    if (longflag)
                    {
                        pargs[argnum].u64 = *(uint64_t*) i_vparms;
                        i_vparms += sizeof(uint64_t);

                        /* Do endian swap if neccessary. */
                        if (i_swap)
                        {
                            pargs[argnum].u64 = bswap_64(pargs[argnum].u64);
                        }

                        fields[argnum] = TYPE_UINT64;
                        longflag = 0;
                    }
                    else
                    {
                        pargs[argnum].u32 = *(uint32_t*) i_vparms;
                        i_vparms += sizeof(uint32_t);

                        /* Do endian swap if neccessary. */
                        if (i_swap)
                        {
                            pargs[argnum].u32 = bswap_32(pargs[argnum].u32);
                        }
                    }
                }

                break;

            case 'e':
            case 'f':
            case 'E':
            case 'F':
            case 'g':
            case 'G':
            case 'a':
            case 'A':
                if (longflag)
                {
                    TRACEE("unsupported double/long-double value in trace found: %s\n",
                           fmtstring);
                    goto out;
                }

                len_sfmt[argnum] = len_fmt;
                pargs[argnum].f32 = *(float*) i_vparms;
                i_vparms += sizeof(float);

                fields[argnum] = TYPE_FLOAT;

                if (i_swap)
                {
                    pargs[argnum].f32 = bswap_32(pargs[argnum].f32);
                }

                break;

            default:
                TRACEE("unsupported format specifier in trace found: %c\n",
                       ch);
                goto out;
        }        // switch(ch) between % and fmt

        argnum++;
    }            /* End of for loop */

    /*
     * We go on arguments and fill it with 32/64 bit
     * elements after we add tail.
     */
    for (i = 0; i < argnum; i++)
    {
        memset(tmpdata, 0, dest_size);
        memcpy(tmpdata, &fmtstring[prev_size], len_sfmt[i] - prev_size);

        if (fields[i] == TYPE_UINT64)
        {
            size = snprintf(NULL, 0, tmpdata, pargs[i].u64);

            if ((prev_size_fmtd + size + 1) > dest_size)
            {
                snprintf(&io_dest[prev_size_fmtd],
                         dest_size - prev_size_fmtd, tmpdata,
                         pargs[i].u64);
                goto out;
            }

            snprintf(&io_dest[prev_size_fmtd], size + 1, tmpdata, pargs[i].u64);
        }
        else if (fields[i] == TYPE_FLOAT)
        {
            size = snprintf(NULL, 0, tmpdata, pargs[i].f32);

            if ((prev_size_fmtd + size + 1) > dest_size)
            {
                snprintf(&io_dest[prev_size_fmtd],
                         dest_size - prev_size_fmtd, tmpdata,
                         pargs[i].f32);
                goto out;
            }

            snprintf(&io_dest[prev_size_fmtd], size + 1, tmpdata, pargs[i].f32);
        }
        else if (fields[i] == TYPE_STRING)
        {
            /* pointer size/value is different for x86/x86_64 */
            if (__WORDSIZE == 32)
            {
                size = snprintf(NULL, 0, tmpdata, pargs[i].u32);

                if ((prev_size_fmtd + size + 1) > dest_size)
                {
                    snprintf(&io_dest[prev_size_fmtd],
                             dest_size - prev_size_fmtd, tmpdata,
                             pargs[i].u32);
                    goto out;
                }

                snprintf(&io_dest[prev_size_fmtd], size + 1, tmpdata, pargs[i].u32);
            }
            else
            {
                size = snprintf(NULL, 0, tmpdata, pargs[i].u64);

                if ((prev_size_fmtd + size + 1) > dest_size)
                {
                    snprintf(&io_dest[prev_size_fmtd],
                             dest_size - prev_size_fmtd, tmpdata,
                             pargs[i].u64);
                    goto out;
                }

                snprintf(&io_dest[prev_size_fmtd], size + 1, tmpdata, pargs[i].u64);
            }
        }
        else
        {
            size = snprintf(NULL, 0, tmpdata, pargs[i].u32);

            if ((prev_size_fmtd + size + 1) > dest_size)
            {
                snprintf(&io_dest[prev_size_fmtd],
                         dest_size - prev_size_fmtd, tmpdata,
                         pargs[i].u32);
                goto out;
            }

            snprintf(&io_dest[prev_size_fmtd], size + 1, tmpdata, pargs[i].u32);
        }

        prev_size_fmtd += size;
        prev_size = len_sfmt[i];
    }

    memset(tmpdata, 0, dest_size);
    memcpy(tmpdata, &fmtstring[prev_size], dest_size - prev_size);

    size = snprintf(NULL, 0, "%s", tmpdata);

    if ((prev_size_fmtd + size + 1) > dest_size)
    {
        snprintf(&io_dest[prev_size_fmtd], dest_size - prev_size_fmtd, "%s", tmpdata);
        goto out;
    }

    snprintf(&io_dest[prev_size_fmtd], dest_size - prev_size, "%s", tmpdata);

out:
    return (strlen(io_dest));
}
