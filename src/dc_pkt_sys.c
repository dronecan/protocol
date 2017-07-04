// dc_pkt_sys.c was generated by ProtoGen version 2.2.d

#include "dc_pkt_sys.h"
#include "fielddecode.h"
#include "fieldencode.h"
#include "scaleddecode.h"
#include "scaledencode.h"

/*!
 * \brief Create the DC_Sys_DeviceId packet
 *
 * Device Identification packet, uniquely identifies a particular device
 * \param pkt points to the packet which will be created by this function
 * \param user points to the user data that will be encoded in pkt
 */
void encodeDC_Sys_DeviceIdPacketStructure(DC_Packet_t* pkt, const DC_Sys_DeviceId_t* user)
{
    uint8_t* data = getDC_SystemPacketData(pkt);
    int byteindex = 0;

    encodeDC_Sys_UID_t(data, &byteindex, &user->uid);

    // complete the process of creating the packet
    finishDC_SystemPacket(pkt, byteindex, getDC_Sys_DeviceIdPacketID());
}

/*!
 * \brief Decode the DC_Sys_DeviceId packet
 *
 * Device Identification packet, uniquely identifies a particular device
 * \param pkt points to the packet being decoded by this function
 * \param user receives the data decoded from the packet
 * \return 0 is returned if the packet ID or size is wrong, else 1
 */
int decodeDC_Sys_DeviceIdPacketStructure(const DC_Packet_t* pkt, DC_Sys_DeviceId_t* user)
{
    int numBytes;
    int byteindex = 0;
    const uint8_t* data;

    // Verify the packet identifier
    if(getDC_SystemPacketID(pkt) != getDC_Sys_DeviceIdPacketID())
        return 0;

    // Verify the packet size
    numBytes = getDC_SystemPacketSize(pkt);
    if(numBytes < getDC_Sys_DeviceIdMinDataLength())
        return 0;

    // The raw data from the packet
    data = getDC_SystemPacketDataConst(pkt);

    if(decodeDC_Sys_UID_t(data, &byteindex, &user->uid) == 0)
        return 0;

    return 1;
}

/*!
 * \brief Create the DC_Sys_DeviceId packet
 *
 * Device Identification packet, uniquely identifies a particular device
 * \param pkt points to the packet which will be created by this function
 * \param uid is 
 */
void encodeDC_Sys_DeviceIdPacket(DC_Packet_t* pkt, const DC_Sys_UID_t* uid)
{
    uint8_t* data = getDC_SystemPacketData(pkt);
    int byteindex = 0;

    encodeDC_Sys_UID_t(data, &byteindex, uid);

    // complete the process of creating the packet
    finishDC_SystemPacket(pkt, byteindex, getDC_Sys_DeviceIdPacketID());
}

/*!
 * \brief Decode the DC_Sys_DeviceId packet
 *
 * Device Identification packet, uniquely identifies a particular device
 * \param pkt points to the packet being decoded by this function
 * \param uid receives 
 * \return 0 is returned if the packet ID or size is wrong, else 1
 */
int decodeDC_Sys_DeviceIdPacket(const DC_Packet_t* pkt, DC_Sys_UID_t* uid)
{
    int byteindex = 0;
    const uint8_t* data = getDC_SystemPacketDataConst(pkt);
    int numBytes = getDC_SystemPacketSize(pkt);

    // Verify the packet identifier
    if(getDC_SystemPacketID(pkt) != getDC_Sys_DeviceIdPacketID())
        return 0;

    if(numBytes < getDC_Sys_DeviceIdMinDataLength())
        return 0;

    if(decodeDC_Sys_UID_t(data, &byteindex, uid) == 0)
        return 0;

    return 1;
}

/*!
 * \brief Create the DC_Sys_FirmwareInfo packet
 *
 * Device firmware version
 * \param pkt points to the packet which will be created by this function
 * \param user points to the user data that will be encoded in pkt
 */
void encodeDC_Sys_FirmwareInfoPacketStructure(DC_Packet_t* pkt, const DC_Sys_FirmwareInfo_t* user)
{
    uint8_t* data = getDC_SystemPacketData(pkt);
    int byteindex = 0;

    // Major release number
    uint8ToBytes((uint8_t)user->versionMajor, data, &byteindex);

    // Minor release number
    uint8ToBytes((uint8_t)user->versionMinor, data, &byteindex);

    // Sub release number
    uint8ToBytes((uint8_t)user->versionSub, data, &byteindex);

    // Firmware checksum
    uint32ToBeBytes((uint32_t)user->checksum, data, &byteindex);

    // Reserved for future use
    uint8ToBytes((uint8_t)0x00, data, &byteindex);

    // complete the process of creating the packet
    finishDC_SystemPacket(pkt, byteindex, getDC_Sys_FirmwareInfoPacketID());
}

/*!
 * \brief Decode the DC_Sys_FirmwareInfo packet
 *
 * Device firmware version
 * \param pkt points to the packet being decoded by this function
 * \param user receives the data decoded from the packet
 * \return 0 is returned if the packet ID or size is wrong, else 1
 */
int decodeDC_Sys_FirmwareInfoPacketStructure(const DC_Packet_t* pkt, DC_Sys_FirmwareInfo_t* user)
{
    int numBytes;
    int byteindex = 0;
    const uint8_t* data;

    // Verify the packet identifier
    if(getDC_SystemPacketID(pkt) != getDC_Sys_FirmwareInfoPacketID())
        return 0;

    // Verify the packet size
    numBytes = getDC_SystemPacketSize(pkt);
    if(numBytes < getDC_Sys_FirmwareInfoMinDataLength())
        return 0;

    // The raw data from the packet
    data = getDC_SystemPacketDataConst(pkt);

    // Major release number
    user->versionMajor = (uint8_t)uint8FromBytes(data, &byteindex);

    // Minor release number
    user->versionMinor = (uint8_t)uint8FromBytes(data, &byteindex);

    // Sub release number
    user->versionSub = (uint8_t)uint8FromBytes(data, &byteindex);

    // Firmware checksum
    user->checksum = (uint32_t)uint32FromBeBytes(data, &byteindex);

    // Reserved for future use
    byteindex += 1;

    return 1;
}

/*!
 * \brief Create the DC_Sys_FirmwareInfo packet
 *
 * Device firmware version
 * \param pkt points to the packet which will be created by this function
 * \param versionMajor is Major release number
 * \param versionMinor is Minor release number
 * \param versionSub is Sub release number
 * \param checksum is Firmware checksum
 */
void encodeDC_Sys_FirmwareInfoPacket(DC_Packet_t* pkt, uint8_t versionMajor, uint8_t versionMinor, uint8_t versionSub, uint32_t checksum)
{
    uint8_t* data = getDC_SystemPacketData(pkt);
    int byteindex = 0;

    // Major release number
    uint8ToBytes((uint8_t)versionMajor, data, &byteindex);

    // Minor release number
    uint8ToBytes((uint8_t)versionMinor, data, &byteindex);

    // Sub release number
    uint8ToBytes((uint8_t)versionSub, data, &byteindex);

    // Firmware checksum
    uint32ToBeBytes((uint32_t)checksum, data, &byteindex);

    // Reserved for future use
    uint8ToBytes((uint8_t)0x00, data, &byteindex);

    // complete the process of creating the packet
    finishDC_SystemPacket(pkt, byteindex, getDC_Sys_FirmwareInfoPacketID());
}

/*!
 * \brief Decode the DC_Sys_FirmwareInfo packet
 *
 * Device firmware version
 * \param pkt points to the packet being decoded by this function
 * \param versionMajor receives Major release number
 * \param versionMinor receives Minor release number
 * \param versionSub receives Sub release number
 * \param checksum receives Firmware checksum
 * \return 0 is returned if the packet ID or size is wrong, else 1
 */
int decodeDC_Sys_FirmwareInfoPacket(const DC_Packet_t* pkt, uint8_t* versionMajor, uint8_t* versionMinor, uint8_t* versionSub, uint32_t* checksum)
{
    int byteindex = 0;
    const uint8_t* data = getDC_SystemPacketDataConst(pkt);
    int numBytes = getDC_SystemPacketSize(pkt);

    // Verify the packet identifier
    if(getDC_SystemPacketID(pkt) != getDC_Sys_FirmwareInfoPacketID())
        return 0;

    if(numBytes < getDC_Sys_FirmwareInfoMinDataLength())
        return 0;

    // Major release number
    *versionMajor = (uint8_t)uint8FromBytes(data, &byteindex);

    // Minor release number
    *versionMinor = (uint8_t)uint8FromBytes(data, &byteindex);

    // Sub release number
    *versionSub = (uint8_t)uint8FromBytes(data, &byteindex);

    // Firmware checksum
    *checksum = (uint32_t)uint32FromBeBytes(data, &byteindex);

    // Reserved for future use
    byteindex += 1;

    return 1;
}

/*!
 * \brief Create the DC_Sys_RevisionDate packet
 *
 * Firmware release date
 * \param pkt points to the packet which will be created by this function
 * \param user points to the user data that will be encoded in pkt
 */
void encodeDC_Sys_RevisionDatePacketStructure(DC_Packet_t* pkt, const DC_Sys_RevisionDate_t* user)
{
    uint8_t* data = getDC_SystemPacketData(pkt);
    int byteindex = 0;

    // Release date: year
    uint16ToBeBytes((uint16_t)user->versionYear, data, &byteindex);

    // Release date: month
    uint8ToBytes((uint8_t)user->versionMonth, data, &byteindex);

    // Release date: day
    uint8ToBytes((uint8_t)user->versionDay, data, &byteindex);

    // complete the process of creating the packet
    finishDC_SystemPacket(pkt, byteindex, getDC_Sys_RevisionDatePacketID());
}

/*!
 * \brief Decode the DC_Sys_RevisionDate packet
 *
 * Firmware release date
 * \param pkt points to the packet being decoded by this function
 * \param user receives the data decoded from the packet
 * \return 0 is returned if the packet ID or size is wrong, else 1
 */
int decodeDC_Sys_RevisionDatePacketStructure(const DC_Packet_t* pkt, DC_Sys_RevisionDate_t* user)
{
    int numBytes;
    int byteindex = 0;
    const uint8_t* data;

    // Verify the packet identifier
    if(getDC_SystemPacketID(pkt) != getDC_Sys_RevisionDatePacketID())
        return 0;

    // Verify the packet size
    numBytes = getDC_SystemPacketSize(pkt);
    if(numBytes < getDC_Sys_RevisionDateMinDataLength())
        return 0;

    // The raw data from the packet
    data = getDC_SystemPacketDataConst(pkt);

    // Release date: year
    user->versionYear = (uint16_t)uint16FromBeBytes(data, &byteindex);

    // Release date: month
    user->versionMonth = (uint8_t)uint8FromBytes(data, &byteindex);

    // Release date: day
    user->versionDay = (uint8_t)uint8FromBytes(data, &byteindex);

    return 1;
}

/*!
 * \brief Create the DC_Sys_CPUInfo packet
 *
 * Processor information
 * \param pkt points to the packet which will be created by this function
 * \param user points to the user data that will be encoded in pkt
 */
void encodeDC_Sys_CPUInfoPacketStructure(DC_Packet_t* pkt, const DC_Sys_CPUInfo_t* user)
{
    uint8_t* data = getDC_SystemPacketData(pkt);
    int byteindex = 0;

    // Current CPU occupancy
    uint8ToBytes((uint8_t)user->cpuOccupancy, data, &byteindex);

    // Maximum CPU occupancy
    uint8ToBytes((uint8_t)user->cpuWatermark, data, &byteindex);

    // Cause of most recent power cycle event (implementation specific)
    uint16ToBeBytes((uint16_t)user->resetCode, data, &byteindex);

    // Number of logged power cycles
    uint16ToBeBytes((uint16_t)user->powerCycles, data, &byteindex);

    // complete the process of creating the packet
    finishDC_SystemPacket(pkt, byteindex, getDC_Sys_CPUInfoPacketID());
}

/*!
 * \brief Decode the DC_Sys_CPUInfo packet
 *
 * Processor information
 * \param pkt points to the packet being decoded by this function
 * \param user receives the data decoded from the packet
 * \return 0 is returned if the packet ID or size is wrong, else 1
 */
int decodeDC_Sys_CPUInfoPacketStructure(const DC_Packet_t* pkt, DC_Sys_CPUInfo_t* user)
{
    int numBytes;
    int byteindex = 0;
    const uint8_t* data;

    // Verify the packet identifier
    if(getDC_SystemPacketID(pkt) != getDC_Sys_CPUInfoPacketID())
        return 0;

    // Verify the packet size
    numBytes = getDC_SystemPacketSize(pkt);
    if(numBytes < getDC_Sys_CPUInfoMinDataLength())
        return 0;

    // The raw data from the packet
    data = getDC_SystemPacketDataConst(pkt);

    // Current CPU occupancy
    user->cpuOccupancy = (uint8_t)uint8FromBytes(data, &byteindex);

    // Maximum CPU occupancy
    user->cpuWatermark = (uint8_t)uint8FromBytes(data, &byteindex);

    // Cause of most recent power cycle event (implementation specific)
    user->resetCode = (uint16_t)uint16FromBeBytes(data, &byteindex);

    // Number of logged power cycles
    user->powerCycles = (uint16_t)uint16FromBeBytes(data, &byteindex);

    return 1;
}

/*!
 * \brief Create the DC_Sys_SystemCommand packet
 *

 * \param pkt points to the packet which will be created by this function
 * \param command is System command (device specific)
 * \param payload is 
 */
void encodeDC_Sys_SystemCommandPacket(DC_Packet_t* pkt, uint16_t command, const uint8_t payload[6])
{
    uint8_t* data = getDC_SystemPacketData(pkt);
    int byteindex = 0;
    int i = 0;

    // System command (device specific)
    uint16ToBeBytes((uint16_t)command, data, &byteindex);

    for(i = 0; i < 6; i++)
        uint8ToBytes((uint8_t)payload[i], data, &byteindex);

    // complete the process of creating the packet
    finishDC_SystemPacket(pkt, byteindex, getDC_Sys_SystemCommandPacketID());
}

/*!
 * \brief Decode the DC_Sys_SystemCommand packet
 *

 * \param pkt points to the packet being decoded by this function
 * \param command receives System command (device specific)
 * \param payload receives 
 * \return 0 is returned if the packet ID or size is wrong, else 1
 */
int decodeDC_Sys_SystemCommandPacket(const DC_Packet_t* pkt, uint16_t* command, uint8_t payload[6])
{
    int i = 0;
    int byteindex = 0;
    const uint8_t* data = getDC_SystemPacketDataConst(pkt);
    int numBytes = getDC_SystemPacketSize(pkt);

    // Verify the packet identifier
    if(getDC_SystemPacketID(pkt) != getDC_Sys_SystemCommandPacketID())
        return 0;

    if(numBytes < getDC_Sys_SystemCommandMinDataLength())
        return 0;

    // System command (device specific)
    *command = (uint16_t)uint16FromBeBytes(data, &byteindex);

    for(i = 0; i < 6; i++)
        payload[i] = (uint8_t)uint8FromBytes(data, &byteindex);

    return 1;
}

/*!
 * \brief Create the DC_Sys_AssignNodeID packet
 *

 * \param pkt points to the packet which will be created by this function
 * \param user points to the user data that will be encoded in pkt
 */
void encodeDC_Sys_AssignNodeIDPacketStructure(DC_Packet_t* pkt, const DC_Sys_AssignNodeID_t* user)
{
    uint8_t* data = getDC_SystemPacketData(pkt);
    int byteindex = 0;

    encodeDC_Sys_UID_t(data, &byteindex, &user->uid);

    uint8ToBytes((uint8_t)user->nodeID, data, &byteindex);

    // complete the process of creating the packet
    finishDC_SystemPacket(pkt, byteindex, getDC_Sys_AssignNodeIDPacketID());
}

/*!
 * \brief Decode the DC_Sys_AssignNodeID packet
 *

 * \param pkt points to the packet being decoded by this function
 * \param user receives the data decoded from the packet
 * \return 0 is returned if the packet ID or size is wrong, else 1
 */
int decodeDC_Sys_AssignNodeIDPacketStructure(const DC_Packet_t* pkt, DC_Sys_AssignNodeID_t* user)
{
    int numBytes;
    int byteindex = 0;
    const uint8_t* data;

    // Verify the packet identifier
    if(getDC_SystemPacketID(pkt) != getDC_Sys_AssignNodeIDPacketID())
        return 0;

    // Verify the packet size
    numBytes = getDC_SystemPacketSize(pkt);
    if(numBytes < getDC_Sys_AssignNodeIDMinDataLength())
        return 0;

    // The raw data from the packet
    data = getDC_SystemPacketDataConst(pkt);

    if(decodeDC_Sys_UID_t(data, &byteindex, &user->uid) == 0)
        return 0;

    user->nodeID = (uint8_t)uint8FromBytes(data, &byteindex);

    return 1;
}
// end of dc_pkt_sys.c
