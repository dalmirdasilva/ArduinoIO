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

<<<<<<< HEAD:SoftwareSerialInputStream/SoftwareSerialInputStream.cpp
SoftwareSerialInputStream::SoftwareSerialInputStream(SoftwareSerial *serial,
        unsigned int boudRate) :
        serial(serial) {
    serial->begin(boudRate);
=======
SoftwareSerialInputStream::SoftwareSerialInputStream(SoftwareSerial *softwareSerial,
        unsigned int boundRate) :
        softwareSerial(softwareSerial) {
    softwareSerial->begin(boundRate);
>>>>>>> crosscompiling:src/SoftwareSerialInputStream/SoftwareSerialInputStream.cpp
}

int SoftwareSerialInputStream::available() {
    softwareSerial->available();
}

int SoftwareSerialInputStream::read() {
    return softwareSerial->read();
}

#endif /* __ARDUINO_IO_SOFTWARE_SERIAL_INPUT_STREAM_CPP__ */
