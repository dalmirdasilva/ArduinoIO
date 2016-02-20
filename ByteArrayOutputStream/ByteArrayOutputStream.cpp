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

ByteArrayOutputStream::ByteArrayOutputStream(unsigned char* buf,
        unsigned int count)
        : buf(buf), count(count), pos(0), markpos(0) {
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

void ByteArrayOutputStream::mark() {
    markpos = pos;
}

bool ByteArrayOutputStream::markSupported() {
    return true;
}

void ByteArrayOutputStream::reset() {
    pos = markpos;
}

void ByteArrayOutputStream::seek(unsigned int pos) {
    if (pos < count) {
        this->pos = pos;
    }
}

#endif /* __ARDUINO_IO_BYTE_ARRAY_OUTPUT_STREAM_CPP__ */
