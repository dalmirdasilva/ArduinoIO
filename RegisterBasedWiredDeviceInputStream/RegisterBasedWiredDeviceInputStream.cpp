/**
 * Arduino IO
 * 
 * A RegisterBasedWiredDeviceInputStream obtains input bytes from the
 * device register array.
 */

#ifndef __ARDUINO_IO_REGISTER_BASED_WIRED_DEVICE_INPUT_STREAM_CPP__
#define __ARDUINO_IO_REGISTER_BASED_WIRED_DEVICE_INPUT_STREAM_CPP__ 1

#include "RegisterBasedWiredDeviceInputStream.h"

RegisterBasedWiredDeviceInputStream::RegisterBasedWiredDeviceInputStream(RegisterBasedWiredDevice *device, unsigned int startAddress, unsigned int endAddress)
        : device(device), startAddress(startAddress), endAddress(endAddress), pos(0), markedPos(0) {
}

int RegisterBasedWiredDeviceInputStream::available() {
    return endAddress - (startAddress + pos);
}

int RegisterBasedWiredDeviceInputStream::read() {
    unsigned char b[1];
    int r = read((unsigned char*) &b, 0, 1);
    if (r == 1) {
        r = *b;
    }
    return r;
}

void RegisterBasedWiredDeviceInputStream::mark() {
    markedPos = pos;
}

bool RegisterBasedWiredDeviceInputStream::markSupported() {
    return true;
}

int RegisterBasedWiredDeviceInputStream::read(unsigned char* b, int off, int len) {
    int available = this->available();
    if (available - off <= 0) {
        return 0;
    }
    if (off + len > available) {
        len = available - off;
    }
    int r = device->readRegisterBlock(startAddress + pos + off, b, len);
    if (r > 0) {
        pos += r;
    }
    return r;
}

void RegisterBasedWiredDeviceInputStream::reset() {
    pos = markedPos;
}

unsigned int RegisterBasedWiredDeviceInputStream::skip(unsigned int n) {
    int available = this->available();
    if (available <= 0) {
        return 0;
    }
    if (n > (unsigned int) available) {
        n = (unsigned int) available;
    }
    pos += n;
    return n;
}

#endif /* __ARDUINO_IO_REGISTER_BASED_WIRED_DEVICE_INPUT_STREAM_CPP__ */
