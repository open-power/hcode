/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/avs_driver.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2014
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file avs_driver.c
/// \brief OCC level voltage change driver
///
///

#include "pk.h"
#include "avs_driver.h"
#include "p9_pgpe_gppb.h"

#define CLOCK_SPIVID_MHZ        10 //\todo determine if this should come from attribute

extern GlobalPstateParmBlock* G_gppb;

//#################################################################################################
// Function which generates a 3 bit CRC value for 29 bit data
//#################################################################################################
uint32_t CRC_calc(uint32_t data)
{
    //Polynomial =  x^3 + x^2 + 1 = 1*x^3 + 0*x^2 + 1*x^1 + 1*x^0  = divisor(1011)

    uint32_t crc_value = 0;
    uint32_t polynomial = 0xb0000000;
    uint32_t msb = 0x80000000;

    crc_value = data & 0xfffffff8ull;

    while (crc_value & 0xfffffff8ull)
    {
        if (crc_value & msb)
        {
            //if msb is 1'b1, divide by polynomial and shift polynomial to the right
            crc_value = crc_value ^ polynomial;
            polynomial = polynomial >> 1;
        }
        else
        {
            // if msb is zero, shift polynomial
            polynomial = polynomial >> 1;
        }

        msb = msb >> 1;
    }

    return crc_value;
}


//#################################################################################################
// Function polls OCB status register O2SST for o2s_ongoing=0
//#################################################################################################
uint8_t pollVoltageTransDone(void)
{
    uint8_t   rc = 0;
    uint32_t  ocbRegReadData = 0;
    uint8_t   ongoingFlag = 1;
    uint8_t   count = 0;
    uint32_t BusMask = (in32(OCB_OCCS2) & AVS_BUS_NUM_MASK) << 4;

    // The point of MAX_POLL_COUNT_AVS is to verify that ongoingFlag turns to
    //   zero very fast. Otherwise, something wrong with this i/f and error out.
    while (ongoingFlag || (count <= MAX_POLL_COUNT_AVS))
    {
        ocbRegReadData = in32(OCB_O2SST0A | BusMask);
        ocbRegReadData = ocbRegReadData & 0x80000000;

        if (!ocbRegReadData)
        {
            ongoingFlag = 0;
        }

        count++;
    }

    if (ongoingFlag)
    {
        rc = 1;
    }

    return rc;
}


//#################################################################################################
// Function which writes to OCB registers to initialize the AVS Slave with an idle frame
//#################################################################################################
uint8_t driveIdleFrame(void)
{
    uint8_t  rc = 0;
    uint32_t idleframe = 0xFFFFFFFF;
    uint32_t BusMask = (in32(OCB_OCCS2) & AVS_BUS_NUM_MASK) << 4;

    // Clear sticky bits in o2s_status_reg
    out32(OCB_O2SCMD0A | BusMask , 0x40000000);

    // Compose and send frame
    out32(OCB_O2SWD0A | BusMask , idleframe);

    // Wait on o2s_ongoing = 0
    rc = pollVoltageTransDone();

    return rc;
}


//#################################################################################################
// Function which writes to OCB registers to initiate a AVS write transaction
//#################################################################################################
uint8_t driveWrite(uint32_t CmdDataType, uint32_t CmdData)
{
    uint8_t  rc = 0;
    uint32_t ocbRegWriteData = 0;

    uint32_t RailSelect  =  in32(OCB_OCCS2) & AVS_RAIL_NUM_MASK;
    uint32_t StartCode   = 1;
    uint32_t CmdType     = 0; // 0:write+commit, 1:write+hold, 2: d/c, 3:read
    uint32_t CmdGroup    = 0;
    uint32_t CRC         = 0;
    uint32_t BusMask = (in32(OCB_OCCS2) & AVS_BUS_NUM_MASK) << 4;

    // Clear sticky bits in o2s_status_reg
    out32(OCB_O2SCMD0A | BusMask, 0x40000000);

    // Compose frame
    // CRC(31:29), CmdData(28:13), RailSelect(12:9), CmdDataType(8:5),
    //   CmdGroup(4), CmdType(3:2), StartCode(1:0)
    ocbRegWriteData = (StartCode << 30) | (CmdType << 28) | (CmdGroup << 27) |
                      (CmdDataType << 23) | (RailSelect << 19) | (CmdData << 3);

    // Generate CRC
    CRC = CRC_calc(ocbRegWriteData);
    ocbRegWriteData = ocbRegWriteData | CRC;

    // Send frame
    //PK_TRACE_DBG("RegWrite=0x%x", ocbRegWriteData);
    out32(OCB_O2SWD0A | BusMask, ocbRegWriteData);

    // Wait on o2s_ongoing = 0
    rc = pollVoltageTransDone();

    return rc;
}


//#################################################################################################
// Function which writes to OCB registers to initiate a AVS read transaction
//#################################################################################################
uint8_t driveRead(uint32_t CmdDataType, uint32_t* CmdData)
{
    uint8_t  rc = 0;
    uint32_t ocbRegReadData = 0;
    uint32_t ocbRegWriteData = 0;

    uint32_t RailSelect  =  in32(OCB_OCCS2) & AVS_RAIL_NUM_MASK;
    uint32_t StartCode   = 1;
    uint32_t CmdType     = 3; // 0:write+commit, 1:write+hold, 2: d/c, 3:read
    uint32_t CmdGroup    = 0;
    uint32_t Reserved    = 0xFFFF;
    uint32_t CRC         = 0;

    uint32_t BusMask = (in32(OCB_OCCS2) & AVS_BUS_NUM_MASK) << 4;

    // Clear sticky bits in o2s_status_reg
    out32(OCB_O2SCMD0A | BusMask, 0x40000000);

    // Compose frame
    // CRC(31:29), Reserved(28:13), RailSelect(12:9), CmdDataType(8:5),
    //   CmdGroup(4),CmdType(3:2),StartCode(1:0)
    ocbRegWriteData = (StartCode << 30) | (CmdType << 28) | (CmdGroup << 27) |
                      (CmdDataType << 23) | (RailSelect << 19) | (Reserved << 3);

    // Generate CRC
    CRC = CRC_calc(ocbRegWriteData);
    ocbRegWriteData = ocbRegWriteData | CRC;

    // Send frame
    out32(OCB_O2SWD0A | BusMask, ocbRegWriteData);

    // Wait on o2s_ongoing = 0
    rc = pollVoltageTransDone();

    if (rc)
    {
        pk_halt();
    }

    // Read returned voltage value from Read frame
    ocbRegReadData = in32(OCB_O2SRD0A | BusMask);
    PK_TRACE_DBG("RegRead=0x%x", ocbRegReadData);
    *CmdData = (ocbRegReadData >> 8) & 0x0000FFFF;

    return rc;
}


//#################################################################################################
// Function which initializes the OCB O2S registers
//#################################################################################################
void external_voltage_control_init(uint32_t* vext_read_mv)
{
    uint8_t   rc = 0;
    uint32_t  CmdDataRead = 0;

//#if EPM_P9_TUNING
// We do not need to initialize O2S and AVS slave in product
//   because this is done in istep 6. But for EPM, we need to do it.
//\todo Read from Parameter Block. These are attributes
#define CLOCK_SPIVID_MHZ        10
    PK_TRACE_DBG("NestFreq=0x%x", G_gppb->nest_frequency_mhz);
    uint32_t  ocbRegReadData = 0;
    uint32_t  ocbRegWriteData = 0;
    uint32_t  O2SCTRLF_value = 0b10000010000011111100000000000000; //0x820FC000
    uint32_t  O2SCTRLS_value = 0b00000000000010000000000000000000; //0x00080000
    uint32_t  O2SCTRL2_value = 0b00000000000000000000000000000000; //0x00000000
    uint32_t  O2SCTRL1_value = 0b10010000000000000100000000000000 |
                               (G_gppb->nest_frequency_mhz / (8 * CLOCK_SPIVID_MHZ) - 1) << 18;

    //
    // OCI to SPIPMBus (O2S) bridge initialization
    //

    uint32_t BusMask = (in32(OCB_OCCS2) & AVS_BUS_NUM_MASK) << 4;

    // O2SCTRLF
    ocbRegReadData = in32(OCB_O2SCTRLF0A | BusMask);
    ocbRegWriteData = (0x000000FF & ocbRegReadData) | O2SCTRLF_value;
    out32(OCB_O2SCTRLF0A | BusMask, ocbRegWriteData);

    // O2SCTRLS
    ocbRegReadData = in32(OCB_O2SCTRLS0A | BusMask);
    ocbRegWriteData = (0x00003FFF & ocbRegReadData) | O2SCTRLS_value;
    out32(OCB_O2SCTRLS0A | BusMask, ocbRegWriteData);

    // O2SCTRL2
    ocbRegReadData = in32(OCB_O2SCTRL20A | BusMask);
    ocbRegWriteData = (0x00007FFF & ocbRegReadData) | O2SCTRL2_value;
    out32(OCB_O2SCTRL20A | BusMask, ocbRegWriteData);

    // O2SCTRL1
    ocbRegReadData = in32(OCB_O2SCTRL10A | BusMask);
    ocbRegWriteData = (0x4FFCBFFF & ocbRegReadData) | O2SCTRL1_value;
    out32(OCB_O2SCTRL10A | BusMask, ocbRegWriteData);

    //
    // AVS slave initialization
    //
    // Drive AVS transaction with a frame value 0xFFFFFFFF (idle frame)
    // to initialize the AVS slave.
    // In principle this only has to be done once. Though Doug Lane
    // says that due to noise on the chip this init should be done
    // periodically.

    rc = driveIdleFrame();

    if (rc)
    {
        pk_halt();
    }

    // Drive read transaction to return initial setting of rail voltage and wait on o2s_ongoing=0
    rc = driveRead(0, &CmdDataRead);

    if (rc)
    {
        PK_TRACE_DBG("Slew-rate driveRead Init FAIL");
        pk_halt();
    }

    *vext_read_mv = CmdDataRead;

}


//#################################################################################################
// Main function to initiate an eVRM voltage change.  There is a write followed by a
// read, and then a voltage value compare check.
//#################################################################################################
void external_voltage_control_write(uint32_t vext_write_mv)
{
    uint8_t   rc = 0;
    uint32_t  CmdDataType = 0; // 0b0000=Target rail voltage

    // Drive write transaction with a target voltage on a particular rail and wait on o2s_ongoing=0
    rc = driveWrite(CmdDataType, vext_write_mv);

    if (rc)
    {
        pk_halt();
    }

#if !EPM_P9_TUNING
    uint32_t  CmdDataRead = 0;
    // Drive read transaction to return the voltage on the same rail and wait on o2s_ongoing=0
    rc = driveRead(CmdDataType, &CmdDataRead);

    if (rc)
    {
        PK_TRACE_DBG("Drive Read  driveRead FAIL");
        pk_halt();
    }


    if (CmdDataRead != vext_write_mv)
    {
        PK_TRACE_DBG("Vext write FAIL: Read=%d != Write=%d", CmdDataRead, vext_write_mv);
        pk_halt();
    }

#endif

}
