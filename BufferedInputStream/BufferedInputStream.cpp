/**
 * Arduino IO
 * 
 * BufferedInputStream
 *
 * A <code>BufferedInputStream</code> adds
 * functionality to another input stream-namely,
 * the ability to buffer the input and to
 * support the <code>mark</code> and <code>reset</code>
 * methods. When  the <code>BufferedInputStream</code>
 * is created, an internal buffer array is
 * passed. As bytes from the stream are read
 * or skipped, the internal buffer is refilled
 * as necessary  from the contained input stream,
 * many bytes at a time. The <code>mark</code>
 * operation  remembers a point in the input
 * stream and the <code>reset</code> operation
 * causes all the  bytes read since the most
 * recent <code>mark</code> operation to be
 * reread before new bytes are taken from
 * the contained input stream.
 */

#ifndef __ARDUINO_IO_BUFFERED_INPUT_STREAM_CPP__
#define __ARDUINO_IO_BUFFERED_INPUT_STREAM_CPP__ 1

#include "BufferedInputStream.h"

BufferedInputStream::BufferedInputStream(InputStream* in, unsigned char* buf,
        int size) :
        FilterInputStream(in), buf(buf) {
    this->size = size;
    count = 0;
    pos = 0;
}

int BufferedInputStream::available() {
    return in->available() + (count - pos);
}

void BufferedInputStream::close() {
    in->close();
}

void BufferedInputStream::reset() {
    if (marked) {
        pos = markpos;
    }
}

int BufferedInputStream::read(unsigned char* b, int len) {
    return read(b, 0, len);
}

int BufferedInputStream::read(unsigned char* b, int off, int len) {
    int cnt, available;
    available = count - pos;

    /*
     * The needed data are already in the buffer? 
     */
    if (available >= len) {
        for (int i = 0; i < len; i++) {
            b[off + i] = buf[pos + i];
        }
        pos += len;
        return len;
    }

    /*
     * The buffer data is not enough, but is necessary.
     */
    for (int i = 0; i < available; i++) {
        b[off + i] = buf[pos + i];
    }
    marked = false;
    pos = 0;
    count = 0;

    /*
     * Reads the rest from the stream.
     */
    cnt = in->read(b, off + available, len - available);

    /*
     * Tests if we had enough data.
     */
    if (cnt < 0) {
        return available;
    } else if (cnt < (len - available)) {
        return available + cnt;
    } else {
        fill(0);
    }
    return len;
}

int BufferedInputStream::read() {

    /*
     * Tests if the buffer is completely used.
     */
    if (pos >= count) {
        marked = false;
        fill(0);
        if (count == 0) {
            return -1;
        }
        pos = 0;
    }
    return (int) buf[pos++];
}

void BufferedInputStream::realineBufferContent() {
    int n;
    if (pos > 0) {
        n = count - pos;
        for (int i = 0; i < n; i++) {
            buf[i] = buf[pos + i];
        }
        count -= pos;
        pos = 0;
    }
}

void BufferedInputStream::fill(int startPos) {
    int n, needed;
    needed = size - startPos;
    if (needed <= 0) {
        return;
    }
    n = in->read(buf, startPos, needed);
    if (n > 0) {
        count = startPos + n;
    }
}

void BufferedInputStream::mark() {
    realineBufferContent();
    fill(count);
    markpos = 0;
    marked = true;
}

bool BufferedInputStream::markSupported() {
    return true;
}

unsigned int BufferedInputStream::skip(unsigned int n) {
    unsigned int buffered, skiped;
    buffered = count - pos;
    if (buffered >= n) {
        pos += n;
        return n;
    }
    pos = 0;
    count = 0;
    marked = false;
    skiped = buffered + in->skip(n - buffered);
    return skiped;
}

#endif /* __ARDUINO_IO_BUFFERED_INPUT_STREAM_CPP__ */
