/**
 * Arduino IO
 * 
 * ExternalEepromInputStream
 * 
 * An ExternalEepromInputStream obtains input bytes from a 
 * externalEeprom. 
 */

#include "ExternalEepromInputStream.h"

ExternalEepromInputStream::ExternalEepromInputStream(ExternalEeprom* externalEeprom)
        : maxAvailableChunk(0x08), externalEeprom(externalEeprom), pos(0), markpos(0), externalEepromSize(externalEeprom->getDeviceSize()) {
}

int ExternalEepromInputStream::available() {
    int room = externalEepromSize - pos;
    if (room > maxAvailableChunk) {
        return maxAvailableChunk;
    }
    return room;
}

void ExternalEepromInputStream::mark() {
    markpos = pos;
}

bool ExternalEepromInputStream::markSupported() {
    return true;
}

int ExternalEepromInputStream::read() {
    if (pos >= externalEepromSize) {
        return -1;
    }
    return (int) externalEeprom->read(pos++);
}

int ExternalEepromInputStream::read(unsigned char* b, int off, int len) {
    unsigned int available = (externalEepromSize - pos);
    int total;
    len = (int) ((unsigned int) len > available) ? available : len;
    total = externalEeprom->readBytes(pos, &b[off], len);
    pos += total;
    return total;
}

void ExternalEepromInputStream::reset() {
    pos = markpos;
}
