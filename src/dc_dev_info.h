// dc_dev_info.h was generated by ProtoGen version 2.3.b

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

#ifndef _DC_DEV_INFO_H
#define _DC_DEV_INFO_H

// C++ compilers: don't mangle us
#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \file
 *
 * Unique Identifier for device
 */

#include "DC_SystemProtocol.h"

/*!
 * Unique Identifier for device
 */
typedef struct
{
    uint16_t vid;    //!< Vendor ID
    uint16_t pid;    //!< Product ID
    uint32_t serial; //!< Device serial number
}DC_Sys_UID_t;

//! return the minimum encoded length for the DC_Sys_UID_t structure
#define getMinLengthOfDC_Sys_UID_t() (7)

//! Encode a DC_Sys_UID_t structure into a byte array
void encodeDC_Sys_UID_t(uint8_t* data, int* bytecount, const DC_Sys_UID_t* user);

//! Decode a DC_Sys_UID_t structure from a byte array
int decodeDC_Sys_UID_t(const uint8_t* data, int* bytecount, DC_Sys_UID_t* user);

/*!
 * Device firmware version information
 */
typedef struct
{
    uint8_t major; //!< Major release number
    uint8_t minor; //!< Minor release number
    uint8_t sub;   //!< Sub release number
}DC_Sys_DevFwVersion_t;

//! return the minimum encoded length for the DC_Sys_DevFwVersion_t structure
#define getMinLengthOfDC_Sys_DevFwVersion_t() (3)

//! Encode a DC_Sys_DevFwVersion_t structure into a byte array
void encodeDC_Sys_DevFwVersion_t(uint8_t* data, int* bytecount, const DC_Sys_DevFwVersion_t* user);

//! Decode a DC_Sys_DevFwVersion_t structure from a byte array
int decodeDC_Sys_DevFwVersion_t(const uint8_t* data, int* bytecount, DC_Sys_DevFwVersion_t* user);

/*!
 * Device firmware release date information
 */
typedef struct
{
    uint16_t year;  //!< Year of release
    uint8_t  month; //!< Month of release
    uint8_t  day;   //!< Day of release
}DC_Sys_DevFwDate_t;

//! return the minimum encoded length for the DC_Sys_DevFwDate_t structure
#define getMinLengthOfDC_Sys_DevFwDate_t() (4)

//! Encode a DC_Sys_DevFwDate_t structure into a byte array
void encodeDC_Sys_DevFwDate_t(uint8_t* data, int* bytecount, const DC_Sys_DevFwDate_t* user);

//! Decode a DC_Sys_DevFwDate_t structure from a byte array
int decodeDC_Sys_DevFwDate_t(const uint8_t* data, int* bytecount, DC_Sys_DevFwDate_t* user);

#ifdef __cplusplus
}
#endif
#endif
