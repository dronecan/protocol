// DC_TelemetryProtocol.h was generated by ProtoGen version 2.3.b

/*
 * This program source code file is part of DroneCAN protocol specification
 *
 * Website: www.dronecan.org
 * GitHub: www.github.com/dronecan
 *
 * Copyright (C) 2017 Currawong Engineering Pty Ltd, see AUTHORS.txt for contributors.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you may find one here:
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 * or you may search the http://www.gnu.org website for the version 2 license,
 * or you may write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#ifndef _DC_TELEMETRYPROTOCOL_H
#define _DC_TELEMETRYPROTOCOL_H

// C++ compilers: don't mangle us
#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \file
 * \mainpage DC_Telemetry protocol stack
 *

 *
 * The protocol API enumeration is incremented anytime the protocol is changed
 * in a way that affects compatibility with earlier versions of the protocol.
 * The protocol enumeration for this version is: 1
 *
 * The protocol version is 1.0
 */

#include <stdint.h>
#include "drone_can_packet.h"	// DroneCAN packet definition

//! \return the protocol API enumeration
#define getDC_TelemetryApi() 1

//! \return the protocol version string
#define getDC_TelemetryVersion() "1.0"
typedef enum
{
    DC_PKT_TELEM_STATUS = 0x00,//!< Device status information
    DC_PKT_TELEM_WARNING,    //!< Device specific warning codes
    DC_PKT_TELEM_ERRORS      //!< Device specific error codes
} DroneCAN_TelemetryMessages;

//! \return the label of a 'DroneCAN_TelemetryMessages' enum entry, based on its value
const char* DroneCAN_TelemetryMessages_EnumLabel(int value);

typedef enum
{
    DC_DEV_STATUS_OK = 0x00, 
    DC_DEV_STATUS_WARN,      
    DC_DEV_STATUS_ERR,       
    DC_DEV_STATUS_CRIT       
} DroneCAN_DeviceStatus;

typedef enum
{
    DC_DEV_MODE_NORMAL = 0x00,
    DC_DEV_MODE_STANDBY,     //!< Device is disarmed
    DC_DEV_MODE_INIT,        //!< Device is in initialization routine
    DC_DEV_MODE_PREFLIGHT,   //!< Device is performing preflight checks
    DC_DEV_MODE_CALIBRATE,   //!< Device is in calibration mode
    DC_DEV_MODE_UPDATE,      //!< Device is performing firmware update
    DC_DEV_MODE_SHUTDOWN     //!< Device is in shutdown mode
} DroneCAN_DeviceMode;


// The prototypes below provide an interface to the packets.
// They are not auto-generated functions, but must be hand-written

//! \return the packet data pointer from the packet
uint8_t* getDC_TelemetryPacketData(DC_Packet_t* pkt);

//! \return the packet data pointer from the packet, const
const uint8_t* getDC_TelemetryPacketDataConst(const DC_Packet_t* pkt);

//! Complete a packet after the data have been encoded
void finishDC_TelemetryPacket(DC_Packet_t* pkt, int size, uint32_t packetID);

//! \return the size of a packet from the packet header
int getDC_TelemetryPacketSize(const DC_Packet_t* pkt);

//! \return the ID of a packet from the packet header
uint32_t getDC_TelemetryPacketID(const DC_Packet_t* pkt);

#ifdef __cplusplus
}
#endif
#endif
