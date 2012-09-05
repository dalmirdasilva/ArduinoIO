/**
 * Arduino IO
 * 
 * BufferedOutputStream
 * 
 * The class implements a buffered output stream. By setting up such
 * an output stream, an application can write bytes to the underlying
 * output stream without necessarily causing a call to the underlying
 * system for each unsigned char written.
 */

#ifndef __ARDUINO_IO_BUFFERED_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_BUFFERED_OUTPUT_STREAM_CPP__ 1

#include "BufferedOutputStream.h"

BufferedOutputStream::BufferedOutputStream(OutputStream* out, unsigned char* buf, int size) : FilterOutputStream(out), buf(buf) {
    this->size = size;
    count = 0;
}

void BufferedOutputStream::write(unsigned char b) {
    if (count >= size) {
        flushBuffer();
    }
    buf[count++] = b;
}

void BufferedOutputStream::write(unsigned char* b, int len) {
    write(b, 0, len);
}

void BufferedOutputStream::write(unsigned char* b, int off, int len) {
    /*
     * If the request length exceeds the size of the output buffer,
     * flush the output buffer and then write the data directly.
     * In this way buffered streams will cascade harmlessly. 
     */
    if (len >= size) {
        flushBuffer();
        out->write(b, off, len);
        return;
    }
    if (len > size - count) {
        flushBuffer();
    }
    for (int i = 0; i < len; i++) {
        buf[count + i] = b[off + i];
    }
    count += len;
}

void BufferedOutputStream::flush() {
    flushBuffer();
    out->flush();
}

void BufferedOutputStream::close() {
    flush();
    out->close();
}

void BufferedOutputStream::flushBuffer() {
    if (count > 0) {
        out->write(buf, 0, count);
        count = 0;
    }
}

#endif /* __ARDUINO_IO_BUFFERED_OUTPUT_STREAM_CPP__ */