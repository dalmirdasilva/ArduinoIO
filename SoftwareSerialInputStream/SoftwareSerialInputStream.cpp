/**
 * Arduino IO
 * 
 * SoftwareSerialInputStream
 * 
 * A SoftwareSerialInputStream obtains input bytes from a serial port.
 */

#ifndef __ARDUINO_IO_SOFTWARE_SERIAL_INPUT_STREAM_CPP__
#define __ARDUINO_IO_SOFTWARE_SERIAL_INPUT_STREAM_CPP__ 1

#include "SoftwareSerialInputStream.h"

SoftwareSerialInputStream::SoftwareSerialInputStream(SoftwareSerial *softwareSerial) :
        softwareSerial(softwareSerial) {
}

int SoftwareSerialInputStream::available() {
    return softwareSerial->available();
}

int SoftwareSerialInputStream::read() {
    return softwareSerial->read();
}

int SoftwareSerialInputStream::read(unsigned char* b, int off, int len) {
    return softwareSerial->readBytes(&b[off], len);
}

#endif /* __ARDUINO_IO_SOFTWARE_SERIAL_INPUT_STREAM_CPP__ */
