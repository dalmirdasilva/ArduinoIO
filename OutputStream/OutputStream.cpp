/**
 * Arduino IO
 *
 * OutputStream
 * 
 * This abstract class is the superclass of all classes representing an output 
 * stream of bytes. An output stream accepts output bytes and sends them to 
 * some sink.
 */

#ifndef __ARDUINO_IO_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_OUTPUT_STREAM_CPP__ 1

#include <stdio.h>

#include "OutputStream.h"

void OutputStream::write(unsigned char* b, int len) {
    write(b, 0, len);
}

void OutputStream::write(unsigned char* b, int off, int len) {
    if (b == (unsigned char*) 0 || len == 0) {
        return;
    }
    for (int i = 0; i < len; i++) {
        write(b[off + i]);
    }
}

void OutputStream::flush() {
}

void OutputStream::close() {
}

void OutputStream::mark() {
}

bool OutputStream::markSupported() {
    return false;
}

void OutputStream::reset() {
}

#endif /* __ARDUINO_IO_OUTPUT_STREAM_CPP__ */
