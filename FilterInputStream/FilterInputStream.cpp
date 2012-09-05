/**
 * A <code>FilterInputStream</code> contains
 * some other input stream, which it uses as
 * its  basic source of data, possibly transforming
 * the data along the way or providing  additional
 * functionality. The class <code>FilterInputStream</code>
 * itself simply overrides all  methods of
 * <code>InputStream</code> with versions that
 * pass all requests to the contained  input
 * stream. Subclasses of <code>FilterInputStream</code>
 * may further override some of  these methods
 * and may also provide additional methods
 * and fields.
 */

#ifndef __ARDUINO_IO_FILTER_INPUT_STREAM_CPP__
#define __ARDUINO_IO_FILTER_INPUT_STREAM_CPP__ 1

#include "FilterInputStream.h"

FilterInputStream::FilterInputStream(InputStream* in) : in(in) {
}

int FilterInputStream::read() {
    return in->read();
}

int FilterInputStream::read(unsigned char* b, int len) {
    return in->read(b, len);
}

int FilterInputStream::read(unsigned char* b, int off, int len) {
    return in->read(b, off, len);
}

unsigned int FilterInputStream::skip(unsigned int n) {
    return in->skip(n);
}

int FilterInputStream::available() {
    return in->available();
}

void FilterInputStream::close() {
    in->close();
}

void FilterInputStream::mark() {
    in->mark();
}

void FilterInputStream::reset() {
    in->reset();
}

bool FilterInputStream::markSupported() {
    return in->markSupported();
}

#endif /* __ARDUINO_IO_FILTER_INPUT_STREAM_CPP__ */