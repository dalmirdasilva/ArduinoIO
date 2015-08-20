/**
 * Arduino IO
 * 
 * ByteArraySeekableInputStream
 * 
 * A ByteArraySeekableInputStream obtains input bytes from a resource in 
 * a file system that implements SeekableInputStream interface. 
 */

#ifndef __ARDUINO_IO_BYTE_ARRAY_SEEKABLE_INPUT_STREAM_H__
#define __ARDUINO_IO_BYTE_ARRAY_SEEKABLE_INPUT_STREAM_H__ 1

#include <SeekableInputStream.h>
#include <ByteArrayInputStream.h>

class ByteArraySeekableInputStream : public SeekableInputStream,
        public ByteArrayInputStream {

public:

    ByteArraySeekableInputStream(unsigned char* buf, unsigned int count);

    virtual void seek(unsigned int pos);
};

#endif /* __ARDUINO_IO_BYTE_ARRAY_SEEKABLE_INPUT_STREAM_H__ */
