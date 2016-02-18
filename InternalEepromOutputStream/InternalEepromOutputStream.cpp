/**
 * Arduino IO
 * 
 * InternalEepromOutputStream
 *
 * A internalEeprom output stream is an output stream for writing data to the EEPROM.
 */

#ifndef __ARDUINO_IO_INTERNAL_EEPROM_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_INTERNAL_EEPROM_OUTPUT_STREAM_CPP__ 1

#include "InternalEepromOutputStream.h"
#include <Arduino.h>
#include <avr/eeprom.h>

InternalEepromOutputStream::InternalEepromOutputStream() :
        pos(0), eepromSize(E2END) {
}

void InternalEepromOutputStream::write(unsigned char b) {
    if (pos < eepromSize) {
        eeprom_write_byte((unsigned char *) (pos++), b);
    }
}

void InternalEepromOutputStream::write(unsigned char* b, int off, int len) {
    unsigned int available = eepromSize - pos;
    if (available < len) {
        len = available;
    }
    eeprom_write_block((const void *) pos, (void *) b, len);
    pos += len;
}

void InternalEepromOutputStream::seek(unsigned int pos) {
    if (pos < eepromSize) {
        this->pos = pos;
    }
}

#endif /* __ARDUINO_IO_EXTERNAL_EEPROM_OUTPUT_STREAM_CPP__ */
