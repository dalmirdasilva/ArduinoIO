/**
 * Arduino IO
 * 
 * GprsInputStream
 * 
 * A GprsInputStream obtains input bytes from a GPRS driver.
 */

#ifndef __ARDUINO_IO_GPRS_INPUT_STREAM_CPP__
#define __ARDUINO_IO_GPRS_INPUT_STREAM_CPP__ 1

#include "GprsInputStream.h"

GprsInputStream::GprsInputStream(Gprs *gprs, char connection)
        : gprs(gprs), connection(connection) {
}

int GprsInputStream::available() {
    return 0;
}

int GprsInputStream::read() {
    return -1;
}

#endif /* __ARDUINO_IO_GPRS_INPUT_STREAM_CPP__ */
