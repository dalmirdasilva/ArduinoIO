/**
 * Arduino IO
 * 
 * InputStream
 *
 * This abstract class is the superclass of all classes representing an input 
 * stream of bytes.
 * 
 * Applications that need to define a subclass of InputStream must always 
 * provide a method that returns the next unsigned char of input.
 */

#ifndef __ARDUINO_IO_INPUT_STREAM_CPP__
#define __ARDUINO_IO_INPUT_STREAM_CPP__ 1

#include "InputStream.h"

int InputStream::available() {
    return 0;
}

void InputStream::close() {
}

void InputStream::mark() {
}

bool InputStream::markSupported() {
    return false;
}

int InputStream::read(unsigned char* b, int len) {
    return read(b, 0, len);
}

int InputStream::read(unsigned char* b, int off, int len) {
    int i, c;
    if (b == (unsigned char*) 0) {
        return 0;
    }
    c = read();
    if (c == -1) {
        return -1;
    }
    b[off] = (unsigned char) c;
    for (i = 1; i < len; i++) {
        c = read();
        if (c == -1) {
            break;
        }
        b[off + i] = (unsigned char) c;
    }
    return i;
}

void InputStream::reset() {
}

unsigned int InputStream::skip(unsigned int n) {
    unsigned int i;
    for (i = 0; i < n && available() > 0; i++) {
        read();
    }
    return i;
}

#endif /* __ARDUINO_IO_INPUT_STREAM_CPP__ */
