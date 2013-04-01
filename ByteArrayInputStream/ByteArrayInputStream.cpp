/**
 * Arduino IO
 * 
 * ByteArrayInputStream
 * 
 * A ByteArrayInputStream contains an internal buffer that contains bytes that 
 * may be read from the stream.
 */

#ifndef __ARDUINO_IO_BYTE_ARRAY_INPUT_STREAM_CPP__
#define __ARDUINO_IO_BYTE_ARRAY_INPUT_STREAM_CPP__ 1

#include "ByteArrayInputStream.h"

ByteArrayInputStream::ByteArrayInputStream(unsigned char* buf,
        unsigned int count) :
        buf(buf), count(count) {
    markpos = 0;
    pos = 0;
}

int ByteArrayInputStream::available() {
    if ((count - pos) > 0) {
        return 1;
    }
    return 0;
}

void ByteArrayInputStream::mark() {
    markpos = pos;
}

bool ByteArrayInputStream::markSupported() {
    return true;
}

int ByteArrayInputStream::read() {
    if (pos >= count) {
        return -1;
    }
    return buf[pos++];
}

void ByteArrayInputStream::reset() {
    pos = markpos;
}

#endif /* __ARDUINO_IO_BYTE_ARRAY_INPUT_STREAM_CPP__ */
