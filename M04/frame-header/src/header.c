#include "header.h"

/*
 * You are required to implement the parser functions below.
 *
 * int validateHeader(uint32_t header); function validates the header. A header is valid if all the conditions below evaluate true.
 *  - SYNC field is equal to 0x2a
 *  - if ACK bit is set V bit is also
 *  - if ACK bit is reset TYPE is non-zero.
 *  - SOURCE ADDRESS and DESTINATION ADDRESS are non-zero and different than each other.
 *
 *  If the header is valid, the function returns 1 otherwise it returns 0.
 *
 * int getFrameId(uint32_t header); function returns FRAME ID field if the header is valid, possibly checked using validateHeader function above.
 *  - If the header is not valid, it returns -1.
 *  - Otherwise, it returns non-negative integer corresponding to FRAME ID field.
 *
 * int getFrameType(uint32_t header); function returns TYPE field if the header is valid, possibly checked using validateHeader function above, and ACK bit is reset.
 *  - If the header is not valid, it returns -1.
 *  - If ACK bit is set, it returns 0.
 *  - Otherwise, it returns non-negative integer corresponding to TYPE field.
 *
 * int getSourceAddress(uint32_t header); function returns SOURCE ADDRESS field if the header is valid, possibly checked using validateHeader function above.
 *  - If the header is not valid, it returns -1.
 *  - Otherwise, it returns non-negative integer corresponding to SOURCE ADDRESS field.
 */

#define SYNC_MASK 0x3F
#define SINGLE_MASK 0x01
#define TYPE_MASK 0x07
#define ADDRESS_MASK 0x0F


int validateHeader(uint32_t header) {
    uint8_t ack, src, dst;

    if ((header & SYNC_MASK) != 0x2A) return 0;     // No Sync

    header >>= 6;
    ack = (header & SINGLE_MASK);
    header >>= 1;
    if (ack && !(header & SINGLE_MASK)) return 0;   // ACK/V mismatch

    header >>= 1;
    if (ack && !(header & TYPE_MASK)) return 0;     // ACK/Type mismatch

    header >>= 8;
    src = (header & ADDRESS_MASK);
    header >>= 8;
    dst = (header & ADDRESS_MASK);
    if (!(src) || !(dst) || (src == dst)) return 0; // Address checks
    
    return 1;
}
int getFrameId(uint32_t header)
{
    
    return -2;
}
int getFrameType(uint32_t header)
{
    
    return -2;
}
int getSourceAddress(uint32_t header)
{
    
    return -2;
}

uint32_t createAckHeader(int destAddress, int sourceAddress, uint8_t frameId, char valid)
{
    
    return 0;
}

uint32_t createHeader(int destAddress, int sourceAddress, uint8_t frameId, uint8_t type)
{
    
    return 0;
}
