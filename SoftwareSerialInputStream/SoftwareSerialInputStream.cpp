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

SoftwareSerialInputStream::SoftwareSerialInputStream(SoftwareSerial *serial, unsigned int boundRate) : serial(serial) {
    serial->begin(boundRate);
}

int SoftwareSerialInputStream::available() {
    serial->available();
}

int SoftwareSerialInputStream::read() {
    if (available() > 0) {
        return serial->read();
    }
    return -1;
}

#endif /* __ARDUINO_IO_SOFTWARE_SERIAL_INPUT_STREAM_CPP__ */
