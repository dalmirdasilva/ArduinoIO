/**
 * Arduino IO
 * 
 * PgmspaceInputStream
 *
 * A PgmspaceInputStream contains an internal buffer that contains bytes that 
 * may be read from the stream mapped to an part of the pgmspace.
 */

#ifndef __ARDUINO_IO_PGMSPACE_INPUT_STREAM_CPP__
#define __ARDUINO_IO_PGMSPACE_INPUT_STREAM_CPP__ 1

#include "PgmspaceInputStream.h"

PgmspaceInputStream::PgmspaceInputStream(prog_char* buf, unsigned int count) : buf(buf), count(count) {
    markpos = 0;
    pos = 0;
}

int PgmspaceInputStream::available() {
    if ((count - pos) > 0) {
        return 1;
    }
    return 0;
}

void PgmspaceInputStream::mark() {
    markpos = pos;
}

bool PgmspaceInputStream::markSupported() {
    return true;
}

int PgmspaceInputStream::read() {
    return pgm_read_byte(buf + pos++);
}

void PgmspaceInputStream::reset() {
    pos = markpos;
}

#endif /* __ARDUINO_IO_PGMSPACE_INPUT_STREAM_CPP__ */
