/**
 * Arduino IO
 * 
 * WireInputStream
 * 
 * A WireInputStream obtains input bytes from the wire bus.
 */

#ifndef __ARDUINO_IO_WIRE_INPUT_STREAM_CPP__
#define __ARDUINO_IO_WIRE_INPUT_STREAM_CPP__ 1

#include "WireInputStream.h"

WireInputStream::WireInputStream(unsigned char address) {
    this->address = address;
    Wire.begin(address);
}

int WireInputStream::available() {
    return Wire.available();
}

int WireInputStream::read() {
    Wire.beginTransmission(address);
    Wire.write((unsigned char) (address & 0xff));
    Wire.endTransmission();
    Wire.requestFrom(address, 1);
    while (!Wire.available());
    return Wire.read();
}

int WireInputStream::read(unsigned char* b, int off, int len) {
    int i;
    Wire.beginTransmission(address);
    Wire.write((unsigned char) (address & 0xff));
    Wire.endTransmission();
    Wire.requestFrom(address, len);
    for (i = 0; i < len; i++) {
        while (!Wire.available());
        b[off + i] = (unsigned char) Wire.read();
    }
    return i;
}

#endif /* __ARDUINO_IO_WIRE_INPUT_STREAM_CPP__ */
