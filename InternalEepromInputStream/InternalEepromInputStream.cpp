/**
 * Arduino IO
 * 
 * InternalEepromInputStream
 * 
 * An InternalEepromInputStream obtains input bytes from a
 * externalEeprom. 
 */

#include "InternalEepromInputStream.h"
#include <avr/eeprom.h>
#include <Arduino.h>

InternalEepromInputStream::InternalEepromInputStream()
        : maxAvailableChunk(0x08), pos(0), markpos(0), eepromSize(E2END) {
}

int InternalEepromInputStream::available() {
    int room = eepromSize - pos;
    if (room > maxAvailableChunk) {
        return maxAvailableChunk;
    }
    return room;
}

void InternalEepromInputStream::mark() {
    markpos = pos;
}

bool InternalEepromInputStream::markSupported() {
    return true;
}

int InternalEepromInputStream::read() {
    if (pos >= eepromSize) {
        return -1;
    }
    return (int) eeprom_read_byte((const unsigned char *)pos++);
}

int InternalEepromInputStream::read(unsigned char* b, int off, int len) {
    unsigned int available = (eepromSize - pos);
    len = (int) ((unsigned int) len > available) ? available : len;
    eeprom_read_block((void *)&b[off], (const void*)pos, len);
    pos += len;
    return len;
}

void InternalEepromInputStream::reset() {
    pos = markpos;
}
