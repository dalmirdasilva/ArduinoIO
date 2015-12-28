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
#include <avr/eeprom.h>

InternalEepromOutputStream::InternalEepromOutputStream() {
    pos = 0;
}

void InternalEepromOutputStream::write(unsigned char b) {
    eeprom_write_byte((unsigned char *)(pos++), b);
}

void InternalEepromOutputStream::write(unsigned char* b, int off, int len) {
    eeprom_write_block((const void *)pos, (void *)b, len);
    pos += len;
}

#endif /* __ARDUINO_IO_EXTERNAL_EEPROM_OUTPUT_STREAM_CPP__ */
