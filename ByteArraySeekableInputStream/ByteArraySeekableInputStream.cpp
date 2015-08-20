/**
 * Arduino IO
 * 
 * ByteArraySeekableInputStream
 * 
 * A ByteArraySeekableInputStream obtains input bytes from a resource in 
 * a file system that implements SeekableInputStream interface. 
 */

#include "ByteArraySeekableInputStream.h"

ByteArraySeekableInputStream::ByteArraySeekableInputStream(unsigned char* buf, unsigned int count)
        : ByteArrayInputStream(buf, count) {
}

void ByteArraySeekableInputStream::seek(unsigned int pos) {
    this->pos = pos;
}
