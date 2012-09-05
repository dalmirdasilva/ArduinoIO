/**
 * Arduino IO
 * 
 * ByteArraySeekableInputStream
 * 
 * A ByteArraySeekableInputStream obtains input bytes from a resource in 
 * a file system that implements SeekableInputStream interface. 
 */

#ifndef __ARDUINO_IO_BYTE_ARRAY_SEEKABLE_INPUT_STREAM_CPP__
#define __ARDUINO_IO_BYTE_ARRAY_SEEKABLE_INPUT_STREAM_CPP__ 1

#include "ByteArraySeekableInputStream.h"
    
ByteArraySeekableInputStream::ByteArraySeekableInputStream(unsigned char* buf, unsigned int count) : ByteArrayInputStream(buf, count) {
}

void ByteArraySeekableInputStream::seek(unsigned int pos) {
    this->pos = pos;
}

#endif /* __ARDUINO_IO_BYTE_ARRAY_SEEKABLE_INPUT_STREAM_CPP__ */
