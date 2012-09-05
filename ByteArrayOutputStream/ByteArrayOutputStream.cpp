/**
 * Arduino IO
 * 
 * ByteArrayOutputStream
 *
 * This class implements an output stream in which the data is written into a 
 * unsigned char array.
 */

#ifndef __ARDUINO_IO_BYTE_ARRAY_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_BYTE_ARRAY_OUTPUT_STREAM_CPP__ 1

#include "ByteArrayOutputStream.h"

ByteArrayOutputStream::ByteArrayOutputStream(unsigned char* buf, unsigned int count) : buf(buf), count(count) {
    pos = 0;
}

void ByteArrayOutputStream::reset() {
    pos = 0;
}

unsigned int ByteArrayOutputStream::size() {
    return count;
}

unsigned char* ByteArrayOutputStream::toByteArray() {
    return buf;
}

void ByteArrayOutputStream::write(unsigned char b) {
    buf[pos++] = b;
}

#endif /* __ARDUINO_IO_BYTE_ARRAY_OUTPUT_STREAM_CPP__ */
