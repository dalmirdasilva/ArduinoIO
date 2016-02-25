/**
 * Arduino IO
 * 
 * GprsOutputStream
 *
 * A GPRS output stream is a output stream to write in a GPRS driver.
 */

#ifndef __ARDUINO_IO_GPRS_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_GPRS_OUTPUT_STREAM_CPP__ 1

#include "GprsOutputStream.h"

GprsOutputStream::GprsOutputStream(Gprs *gprs, char connection)
        : gprs(gprs), connection(connection) {
}

void GprsOutputStream::write(unsigned char b) {
    write(&b, 0, 1);
}

void GprsOutputStream::write(unsigned char* b, int off, int len) {
    gprs->send(connection, &b[off], len);
}

#endif /* __ARDUINO_IO_GPRS_OUTPUT_STREAM_CPP__ */
