/**
 * Arduino IO
 * 
 * HardwareSerialOutputStream
 *
 * A software serial output stream is a output stream to write in a serial port.
 */

#ifndef __ARDUINO_IO_HARDWARE_SERIAL_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_HARDWARE_SERIAL_OUTPUT_STREAM_CPP__ 1

#include "HardwareSerialOutputStream.h"

HardwareSerialOutputStream::HardwareSerialOutputStream(unsigned int boundRate) {
    Serial.begin(boundRate);
}

void HardwareSerialOutputStream::write(unsigned char b) {
    Serial.write(b);
}

#endif /* __ARDUINO_IO_HARDWARE_SERIAL_OUTPUT_STREAM_CPP__ */
