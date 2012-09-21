/**
 * Arduino IO
 * 
 * PgmspaceSeekableInputStream
 * 
 * A PgmspaceSeekableInputStream obtains input bytes from a resource in 
 * a file system that implements SeekableInputStream interface. 
 */

#ifndef __ARDUINO_IO_PGMSPACE_SEEKABLE_INPUT_STREAM_CPP__
#define __ARDUINO_IO_PGMSPACE_SEEKABLE_INPUT_STREAM_CPP__ 1

#include "PgmspaceSeekableInputStream.h"
    
PgmspaceSeekableInputStream::PgmspaceSeekableInputStream(prog_char* buf, unsigned int count) : PgmspaceInputStream(buf, count) {
}

void PgmspaceSeekableInputStream::seek(unsigned int pos) {
    this->pos = pos;
}

#endif /* __ARDUINO_IO_PGMSPACE_SEEKABLE_INPUT_STREAM_CPP__ */
