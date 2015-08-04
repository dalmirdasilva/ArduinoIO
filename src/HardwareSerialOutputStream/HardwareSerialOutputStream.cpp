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

<<<<<<< HEAD:HardwareSerialOutputStream/HardwareSerialOutputStream.cpp
HardwareSerialOutputStream::HardwareSerialOutputStream(unsigned int boudRate) {
    Serial.begin(9600);
=======
HardwareSerialOutputStream::HardwareSerialOutputStream(unsigned int boundRate) {
    Serial.begin(boundRate);
>>>>>>> crosscompiling:src/HardwareSerialOutputStream/HardwareSerialOutputStream.cpp
}

void HardwareSerialOutputStream::write(unsigned char b) {
    Serial.write(b);
}

#endif /* __ARDUINO_IO_HARDWARE_SERIAL_OUTPUT_STREAM_CPP__ */
