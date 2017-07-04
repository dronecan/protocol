// dc_pkt_block.h was generated by ProtoGen version 2.2.d

#ifndef _DC_PKT_BLOCK_H
#define _DC_PKT_BLOCK_H

// C++ compilers: don't mangle us
#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \file
 */

#include "DC_BlockProtocol.h"

typedef struct
{
    uint32_t datSize;   //!< Total data size (bytes)
    uint16_t blockSize; //!< Single block size (bytes)
}DC_Block_BlockEndpointInfo_t;

#define getMinLengthOfDC_Block_BlockEndpointInfo_t() (6)

//! Encode a DC_Block_BlockEndpointInfo_t structure into a byte array
void encodeDC_Block_BlockEndpointInfo_t(uint8_t* data, int* bytecount, const DC_Block_BlockEndpointInfo_t* user);

//! Decode a DC_Block_BlockEndpointInfo_t structure from a byte array
int decodeDC_Block_BlockEndpointInfo_t(const uint8_t* data, int* bytecount, DC_Block_BlockEndpointInfo_t* user);

typedef struct
{
    uint8_t  endpoint;
    uint32_t size;    
}DC_Block_BlockDataEndpointInfo_t;

#define getMinLengthOfDC_Block_BlockDataEndpointInfo_t() (5)

//! Create the DC_Block_BlockDataEndpointInfo packet
void encodeDC_Block_BlockDataEndpointInfoPacketStructure(DC_Packet_t* pkt, const DC_Block_BlockDataEndpointInfo_t* user);

//! Decode the DC_Block_BlockDataEndpointInfo packet
int decodeDC_Block_BlockDataEndpointInfoPacketStructure(const DC_Packet_t* pkt, DC_Block_BlockDataEndpointInfo_t* user);

//! return the packet ID for the DC_Block_BlockDataEndpointInfo packet
#define getDC_Block_BlockDataEndpointInfoPacketID() (DC_PKT_ENDPOINT_INFO)

//! return the minimum data length for the DC_Block_BlockDataEndpointInfo packet
#define getDC_Block_BlockDataEndpointInfoMinDataLength() (5)

//! return the maximum data length for the DC_Block_BlockDataEndpointInfo packet
#define getDC_Block_BlockDataEndpointInfoMaxDataLength() (5)

typedef struct
{
    uint8_t                      endpoint;
    DC_Block_BlockEndpointInfo_t info;    
}DC_Block_BlockEndpointInfo_t;

#define getMinLengthOfDC_Block_BlockEndpointInfo_t() (7)

//! Create the DC_Block_BlockEndpointInfo packet
void encodeDC_Block_BlockEndpointInfoPacket(DC_Packet_t* pkt, uint8_t endpoint, const DC_Block_BlockEndpointInfo_t* info);

//! Decode the DC_Block_BlockEndpointInfo packet
int decodeDC_Block_BlockEndpointInfoPacket(const DC_Packet_t* pkt, uint8_t* endpoint, DC_Block_BlockEndpointInfo_t* info);

//! return the packet ID for the DC_Block_BlockEndpointInfo packet
#define getDC_Block_BlockEndpointInfoPacketID() (DC_PKT_ENDPOINT_INFO)

//! return the minimum data length for the DC_Block_BlockEndpointInfo packet
#define getDC_Block_BlockEndpointInfoMinDataLength() (7)

//! return the maximum data length for the DC_Block_BlockEndpointInfo packet
#define getDC_Block_BlockEndpointInfoMaxDataLength() (7)

#define getMinLengthOfDC_Block_GetBlockEndpointInfo_t() (1)

//! Create the DC_Block_GetBlockEndpointInfo packet
void encodeDC_Block_GetBlockEndpointInfoPacket(DC_Packet_t* pkt, uint8_t endpoint);

//! Decode the DC_Block_GetBlockEndpointInfo packet
int decodeDC_Block_GetBlockEndpointInfoPacket(const DC_Packet_t* pkt, uint8_t* endpoint);

//! return the packet ID for the DC_Block_GetBlockEndpointInfo packet
#define getDC_Block_GetBlockEndpointInfoPacketID() (DC_PKT_ENDPOINT_INFO)

//! return the minimum data length for the DC_Block_GetBlockEndpointInfo packet
#define getDC_Block_GetBlockEndpointInfoMinDataLength() (1)

//! return the maximum data length for the DC_Block_GetBlockEndpointInfo packet
#define getDC_Block_GetBlockEndpointInfoMaxDataLength() (1)

typedef struct
{
    uint32_t address;  //!< Block starting address
    uint8_t  endpoint; //!< Block data endpoint
}DC_Block_BlockAddress_t;

#define getMinLengthOfDC_Block_BlockAddress_t() (5)

//! Create the DC_Block_BlockAddress packet
void encodeDC_Block_BlockAddressPacketStructure(DC_Packet_t* pkt, const DC_Block_BlockAddress_t* user);

//! Decode the DC_Block_BlockAddress packet
int decodeDC_Block_BlockAddressPacketStructure(const DC_Packet_t* pkt, DC_Block_BlockAddress_t* user);

//! Create the DC_Block_BlockAddress packet
void encodeDC_Block_BlockAddressPacket(DC_Packet_t* pkt, uint32_t address, uint8_t endpoint);

//! Decode the DC_Block_BlockAddress packet
int decodeDC_Block_BlockAddressPacket(const DC_Packet_t* pkt, uint32_t* address, uint8_t* endpoint);

//! return the packet ID for the DC_Block_BlockAddress packet
#define getDC_Block_BlockAddressPacketID() (DC_PKT_BLOCK_ADDRESS)

//! return the minimum data length for the DC_Block_BlockAddress packet
#define getDC_Block_BlockAddressMinDataLength() (5)

//! return the maximum data length for the DC_Block_BlockAddress packet
#define getDC_Block_BlockAddressMaxDataLength() (5)

typedef struct
{
    uint32_t address;  //!< Block starting address
    uint8_t  endpoint; //!< Block data endpoint
    uint16_t checksum; //!< Block checksum
}DC_Block_BlockChecksum_t;

#define getMinLengthOfDC_Block_BlockChecksum_t() (7)

//! Create the DC_Block_BlockChecksum packet
void encodeDC_Block_BlockChecksumPacketStructure(DC_Packet_t* pkt, const DC_Block_BlockChecksum_t* user);

//! Decode the DC_Block_BlockChecksum packet
int decodeDC_Block_BlockChecksumPacketStructure(const DC_Packet_t* pkt, DC_Block_BlockChecksum_t* user);

//! Create the DC_Block_BlockChecksum packet
void encodeDC_Block_BlockChecksumPacket(DC_Packet_t* pkt, uint32_t address, uint8_t endpoint, uint16_t checksum);

//! Decode the DC_Block_BlockChecksum packet
int decodeDC_Block_BlockChecksumPacket(const DC_Packet_t* pkt, uint32_t* address, uint8_t* endpoint, uint16_t* checksum);

//! return the packet ID for the DC_Block_BlockChecksum packet
#define getDC_Block_BlockChecksumPacketID() (DC_PKT_BLOCK_CHECKSUM)

//! return the minimum data length for the DC_Block_BlockChecksum packet
#define getDC_Block_BlockChecksumMinDataLength() (7)

//! return the maximum data length for the DC_Block_BlockChecksum packet
#define getDC_Block_BlockChecksumMaxDataLength() (7)

typedef struct
{
    uint8_t  id;       //!< Transfer ID
    uint8_t  endpoint; //!< Transfer endpoint
    uint32_t address;  //!< Transfer address
    uint16_t size;     //!< Transfer size (bytes)
}DC_Block_StartBlockTransfer_t;

#define getMinLengthOfDC_Block_StartBlockTransfer_t() (8)

//! Create the DC_Block_StartBlockTransfer packet
void encodeDC_Block_StartBlockTransferPacketStructure(DC_Packet_t* pkt, const DC_Block_StartBlockTransfer_t* user);

//! Decode the DC_Block_StartBlockTransfer packet
int decodeDC_Block_StartBlockTransferPacketStructure(const DC_Packet_t* pkt, DC_Block_StartBlockTransfer_t* user);

//! return the packet ID for the DC_Block_StartBlockTransfer packet
#define getDC_Block_StartBlockTransferPacketID() (DC_PKT_BLK_START)

//! return the minimum data length for the DC_Block_StartBlockTransfer packet
#define getDC_Block_StartBlockTransferMinDataLength() (8)

//! return the maximum data length for the DC_Block_StartBlockTransfer packet
#define getDC_Block_StartBlockTransferMaxDataLength() (8)

#ifdef __cplusplus
}
#endif
#endif