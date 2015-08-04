/**
 * Arduino IO
 * 
 * ExternalEepromOutputStream
 *
 * A externalEeprom output stream is an output stream for writing data to a ExternalEeprom.
 */

#ifndef __ARDUINO_IO_EXTERNAL_EEPROM_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_EXTERNAL_EEPROM_OUTPUT_STREAM_CPP__ 1

#include "ExternalEepromOutputStream.h"

ExternalEepromOutputStream::ExternalEepromOutputStream(
        ExternalEeprom* externalEeprom) :
        externalEeprom(externalEeprom) {
    pos = 0;
}

void ExternalEepromOutputStream::write(unsigned char b) {
    externalEeprom->write(pos++, b);
}

void ExternalEepromOutputStream::write(unsigned char* b, int off, int len) {
    externalEeprom->writeBytes(pos, &b[off], len);
    pos += len;
}

#endif /* __ARDUINO_IO_EXTERNAL_EEPROM_OUTPUT_STREAM_CPP__ */
