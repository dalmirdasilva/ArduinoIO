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

SoftwareSerialOutputStream::SoftwareSerialOutputStream(SoftwareSerial *softwareSerial) :
        softwareSerial(softwareSerial) {
}

void SoftwareSerialOutputStream::write(unsigned char b) {
    softwareSerial->write(b);
}

#endif /* __ARDUINO_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_CPP__ */
