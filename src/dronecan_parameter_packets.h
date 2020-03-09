// dronecan_parameter_packets.h was generated by ProtoGen version 2.19.a

/**

Copyright (c) 2020 DroneCAN

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

**/

#ifndef _DRONECAN_PARAMETER_PACKETS_H
#define _DRONECAN_PARAMETER_PACKETS_H

// C++ compilers: don't mangle us
#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \file
 */

#include "DroneCANProtocol.h"
#include "dronecan_packets.h"

//! Create the DroneCAN_ParameterRequest packet
void encodeDroneCAN_ParameterRequestPacket(void* pkt, uint8_t format);

//! Decode the DroneCAN_ParameterRequest packet
int decodeDroneCAN_ParameterRequestPacket(const void* pkt, uint8_t* format);

//! return the packet ID for the DroneCAN_ParameterRequest packet
#define getDroneCAN_ParameterRequestPacketID() (PKT_DC_PARAM_REQUEST)

//! return the minimum encoded length for the DroneCAN_ParameterRequest packet
#define getDroneCAN_ParameterRequestMinDataLength() (1)

//! return the maximum encoded length for the DroneCAN_ParameterRequest packet
#define getDroneCAN_ParameterRequestMaxDataLength() (1)

/*!
 * Parameter description
 */
typedef struct
{
    uint16_t index;   
    uint8_t  format;  
    char     name[96];
}DroneCAN_ParameterInfo_t;

//! Create the DroneCAN_ParameterInfo packet
void encodeDroneCAN_ParameterInfoPacketStructure(void* pkt, const DroneCAN_ParameterInfo_t* user);

//! Decode the DroneCAN_ParameterInfo packet
int decodeDroneCAN_ParameterInfoPacketStructure(const void* pkt, DroneCAN_ParameterInfo_t* user);

//! Create the DroneCAN_ParameterInfo packet
void encodeDroneCAN_ParameterInfoPacket(void* pkt, uint16_t index, uint8_t format, const char name[96]);

//! Decode the DroneCAN_ParameterInfo packet
int decodeDroneCAN_ParameterInfoPacket(const void* pkt, uint16_t* index, uint8_t* format, char name[96]);

//! return the packet ID for the DroneCAN_ParameterInfo packet
#define getDroneCAN_ParameterInfoPacketID() (PKT_DC_PARAM_INFO)

//! return the minimum encoded length for the DroneCAN_ParameterInfo packet
#define getDroneCAN_ParameterInfoMinDataLength() (4)

//! return the maximum encoded length for the DroneCAN_ParameterInfo packet
#define getDroneCAN_ParameterInfoMaxDataLength() (99)

//! Create the DroneCAN_ParameterNull packet
void encodeDroneCAN_ParameterNullPacket(void* pkt, uint16_t index);

//! Decode the DroneCAN_ParameterNull packet
int decodeDroneCAN_ParameterNullPacket(const void* pkt, uint16_t* index);

//! return the packet ID for the DroneCAN_ParameterNull packet
#define getDroneCAN_ParameterNullPacketID() (PKT_DC_PARAM_INFO)

//! return the minimum encoded length for the DroneCAN_ParameterNull packet
#define getDroneCAN_ParameterNullMinDataLength() (3)

//! return the maximum encoded length for the DroneCAN_ParameterNull packet
#define getDroneCAN_ParameterNullMaxDataLength() (3)

/*!
 * Parameter value
 */
typedef struct
{
    uint16_t index;  
    uint8_t  data[4];
}DroneCAN_ParameterValueBytes_t;

//! Create the DroneCAN_ParameterValueBytes packet
void encodeDroneCAN_ParameterValueBytesPacket(void* pkt, uint16_t index, const uint8_t data[4]);

//! Decode the DroneCAN_ParameterValueBytes packet
int decodeDroneCAN_ParameterValueBytesPacket(const void* pkt, uint16_t* index, uint8_t data[4]);

//! return the packet ID for the DroneCAN_ParameterValueBytes packet
#define getDroneCAN_ParameterValueBytesPacketID() (PKT_DC_PARAM_VALUE)

//! return the minimum encoded length for the DroneCAN_ParameterValueBytes packet
#define getDroneCAN_ParameterValueBytesMinDataLength() (7)

//! return the maximum encoded length for the DroneCAN_ParameterValueBytes packet
#define getDroneCAN_ParameterValueBytesMaxDataLength() (7)

/*!
 * Parameter value
 */
typedef struct
{
    uint16_t index;
    int8_t   data; 
}DroneCAN_ParameterValueS8_t;

//! Create the DroneCAN_ParameterValueS8 packet
void encodeDroneCAN_ParameterValueS8Packet(void* pkt, uint16_t index, int8_t data);

//! Decode the DroneCAN_ParameterValueS8 packet
int decodeDroneCAN_ParameterValueS8Packet(const void* pkt, uint16_t* index, int8_t* data);

//! return the packet ID for the DroneCAN_ParameterValueS8 packet
#define getDroneCAN_ParameterValueS8PacketID() (PKT_DC_PARAM_VALUE)

//! return the minimum encoded length for the DroneCAN_ParameterValueS8 packet
#define getDroneCAN_ParameterValueS8MinDataLength() (4)

//! return the maximum encoded length for the DroneCAN_ParameterValueS8 packet
#define getDroneCAN_ParameterValueS8MaxDataLength() (4)

/*!
 * Parameter value
 */
typedef struct
{
    uint16_t index;
    uint8_t  data; 
}DroneCAN_ParameterValueU8_t;

//! Create the DroneCAN_ParameterValueU8 packet
void encodeDroneCAN_ParameterValueU8Packet(void* pkt, uint16_t index, uint8_t data);

//! Decode the DroneCAN_ParameterValueU8 packet
int decodeDroneCAN_ParameterValueU8Packet(const void* pkt, uint16_t* index, uint8_t* data);

//! return the packet ID for the DroneCAN_ParameterValueU8 packet
#define getDroneCAN_ParameterValueU8PacketID() (PKT_DC_PARAM_VALUE)

//! return the minimum encoded length for the DroneCAN_ParameterValueU8 packet
#define getDroneCAN_ParameterValueU8MinDataLength() (4)

//! return the maximum encoded length for the DroneCAN_ParameterValueU8 packet
#define getDroneCAN_ParameterValueU8MaxDataLength() (4)

/*!
 * Parameter value
 */
typedef struct
{
    uint16_t index;
    int16_t  data; 
}DroneCAN_ParameterValueS16_t;

//! Create the DroneCAN_ParameterValueS16 packet
void encodeDroneCAN_ParameterValueS16Packet(void* pkt, uint16_t index, int16_t data);

//! Decode the DroneCAN_ParameterValueS16 packet
int decodeDroneCAN_ParameterValueS16Packet(const void* pkt, uint16_t* index, int16_t* data);

//! return the packet ID for the DroneCAN_ParameterValueS16 packet
#define getDroneCAN_ParameterValueS16PacketID() (PKT_DC_PARAM_VALUE)

//! return the minimum encoded length for the DroneCAN_ParameterValueS16 packet
#define getDroneCAN_ParameterValueS16MinDataLength() (5)

//! return the maximum encoded length for the DroneCAN_ParameterValueS16 packet
#define getDroneCAN_ParameterValueS16MaxDataLength() (5)

/*!
 * Parameter value
 */
typedef struct
{
    uint16_t index;
    uint16_t data; 
}DroneCAN_ParameterValueU16_t;

//! Create the DroneCAN_ParameterValueU16 packet
void encodeDroneCAN_ParameterValueU16Packet(void* pkt, uint16_t index, uint16_t data);

//! Decode the DroneCAN_ParameterValueU16 packet
int decodeDroneCAN_ParameterValueU16Packet(const void* pkt, uint16_t* index, uint16_t* data);

//! return the packet ID for the DroneCAN_ParameterValueU16 packet
#define getDroneCAN_ParameterValueU16PacketID() (PKT_DC_PARAM_VALUE)

//! return the minimum encoded length for the DroneCAN_ParameterValueU16 packet
#define getDroneCAN_ParameterValueU16MinDataLength() (5)

//! return the maximum encoded length for the DroneCAN_ParameterValueU16 packet
#define getDroneCAN_ParameterValueU16MaxDataLength() (5)

/*!
 * Parameter value
 */
typedef struct
{
    uint16_t index;
    int32_t  data; 
}DroneCAN_ParameterValueS32_t;

//! Create the DroneCAN_ParameterValueS32 packet
void encodeDroneCAN_ParameterValueS32Packet(void* pkt, uint16_t index, int32_t data);

//! Decode the DroneCAN_ParameterValueS32 packet
int decodeDroneCAN_ParameterValueS32Packet(const void* pkt, uint16_t* index, int32_t* data);

//! return the packet ID for the DroneCAN_ParameterValueS32 packet
#define getDroneCAN_ParameterValueS32PacketID() (PKT_DC_PARAM_VALUE)

//! return the minimum encoded length for the DroneCAN_ParameterValueS32 packet
#define getDroneCAN_ParameterValueS32MinDataLength() (7)

//! return the maximum encoded length for the DroneCAN_ParameterValueS32 packet
#define getDroneCAN_ParameterValueS32MaxDataLength() (7)

/*!
 * Parameter value
 */
typedef struct
{
    uint16_t index;
    uint32_t data; 
}DroneCAN_ParameterValueU32_t;

//! Create the DroneCAN_ParameterValueU32 packet
void encodeDroneCAN_ParameterValueU32Packet(void* pkt, uint16_t index, uint32_t data);

//! Decode the DroneCAN_ParameterValueU32 packet
int decodeDroneCAN_ParameterValueU32Packet(const void* pkt, uint16_t* index, uint32_t* data);

//! return the packet ID for the DroneCAN_ParameterValueU32 packet
#define getDroneCAN_ParameterValueU32PacketID() (PKT_DC_PARAM_VALUE)

//! return the minimum encoded length for the DroneCAN_ParameterValueU32 packet
#define getDroneCAN_ParameterValueU32MinDataLength() (7)

//! return the maximum encoded length for the DroneCAN_ParameterValueU32 packet
#define getDroneCAN_ParameterValueU32MaxDataLength() (7)

/*!
 * Parameter value
 */
typedef struct
{
    uint16_t index;
    float    data; 
}DroneCAN_ParameterValueFloat_t;

//! Create the DroneCAN_ParameterValueFloat packet
void encodeDroneCAN_ParameterValueFloatPacket(void* pkt, uint16_t index, float data);

//! Decode the DroneCAN_ParameterValueFloat packet
int decodeDroneCAN_ParameterValueFloatPacket(const void* pkt, uint16_t* index, float* data);

//! return the packet ID for the DroneCAN_ParameterValueFloat packet
#define getDroneCAN_ParameterValueFloatPacketID() (PKT_DC_PARAM_VALUE)

//! return the minimum encoded length for the DroneCAN_ParameterValueFloat packet
#define getDroneCAN_ParameterValueFloatMinDataLength() (7)

//! return the maximum encoded length for the DroneCAN_ParameterValueFloat packet
#define getDroneCAN_ParameterValueFloatMaxDataLength() (7)

#ifdef __cplusplus
}
#endif
#endif
