/**
 * Arduino IO
 * 
 * HardwareSerialInputStream
 * 
 * A HardwareSerialInputStream obtains input bytes from a serial port.
 */

#ifndef __ARDUINO_IO_HARDWARE_SERIAL_INPUT_STREAM_CPP__
#define __ARDUINO_IO_HARDWARE_SERIAL_INPUT_STREAM_CPP__ 1

#include "HardwareSerialInputStream.h"

HardwareSerialInputStream::HardwareSerialInputStream(unsigned int boundRate) {
    Serial.begin(boundRate);
}

int HardwareSerialInputStream::available() {
    return Serial.available();
}

int HardwareSerialInputStream::read() {
    if (available() > 0) {
        return Serial.read();
    }
    return -1;
}

#endif /* __ARDUINO_IO_HARDWARE_SERIAL_INPUT_STREAM_CPP__ */
