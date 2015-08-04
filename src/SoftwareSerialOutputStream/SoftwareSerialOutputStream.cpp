/**
 * Arduino IO
 * 
 * SoftwareSerialOutputStream
 *
 * A software serial output stream is a output stream to write in a serial port.
 */

#ifndef __ARDUINO_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_CPP__ 1

#include "SoftwareSerialOutputStream.h"

<<<<<<< HEAD:SoftwareSerialOutputStream/SoftwareSerialOutputStream.cpp
SoftwareSerialOutputStream::SoftwareSerialOutputStream(SoftwareSerial *serial,
        unsigned int boudRate) :
        serial(serial) {
    serial->begin(boudRate);
=======
SoftwareSerialOutputStream::SoftwareSerialOutputStream(SoftwareSerial *softwareSerial,
        unsigned int boundRate) :
        softwareSerial(softwareSerial) {
    softwareSerial->begin(boundRate);
>>>>>>> crosscompiling:src/SoftwareSerialOutputStream/SoftwareSerialOutputStream.cpp
}

void SoftwareSerialOutputStream::write(unsigned char b) {
    softwareSerial->write(b);
}

#endif /* __ARDUINO_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_CPP__ */
