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

SoftwareSerialInputStream::SoftwareSerialInputStream(SoftwareSerial *softwareSerial,
        unsigned int boudRate) :
        softwareSerial(softwareSerial) {
    softwareSerial->begin(boudRate);
}

int SoftwareSerialInputStream::available() {
    softwareSerial->available();
}

int SoftwareSerialInputStream::read() {
    return softwareSerial->read();
}

#endif /* __ARDUINO_IO_SOFTWARE_SERIAL_INPUT_STREAM_CPP__ */
