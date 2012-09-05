/**
 * Arduino IO
 * 
 * FilterOutputStream
 * 
 * This class is the superclass of all classes that filter output
 * streams. These streams sit on top of an already existing output
 * stream (the <i>underlying</i> output stream) which it uses as its
 * basic sink of data, but possibly transforming the data along the
 * way or providing additional functionality.
 * <p>
 * The class <code>FilterOutputStream</code> itself simply overrides
 * all methods of <code>OutputStream</code> with versions that pass
 * all requests to the underlying output stream. Subclasses of
 * <code>FilterOutputStream</code> may further override some of these
 * methods as well as provide additional methods and fields.
 */

#ifndef __ARDUINO_IO_FILTER_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_FILTER_OUTPUT_STREAM_CPP__ 1

#include "FilterOutputStream.h"

FilterOutputStream::FilterOutputStream(OutputStream* out) : out(out) {
}

void FilterOutputStream::write(unsigned char b) {
    out->write(b);
}

void FilterOutputStream::write(unsigned char* b, int len) {
    out->write(b, len);
}

void FilterOutputStream::write(unsigned char* b, int off, int len) {
    out->write(b, off, len);
}

void FilterOutputStream::flush() {
    out->flush();
}

void FilterOutputStream::close() {
    out->flush();
    out->close();
}

#endif /* __ARDUINO_IO_FILTER_OUTPUT_STREAM_CPP__ 1 */


