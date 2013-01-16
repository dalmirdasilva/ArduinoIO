/**
 * Arduino IO
 * 
 * PgmspaceSeekableInputStream
 * 
 * A PgmspaceSeekableInputStream obtains input bytes from a resource in 
 * a file system that implements SeekableInputStream interface. 
 */

#ifndef __ARDUINO_IO_PGMSPACE_SEEKABLE_INPUT_STREAM_H__
#define __ARDUINO_IO_PGMSPACE_SEEKABLE_INPUT_STREAM_H__ 1

#include <SeekableInputStream.h>
#include <PgmspaceInputStream.h>

class PgmspaceSeekableInputStream : public SeekableInputStream,
        public PgmspaceInputStream {
public:

    PgmspaceSeekableInputStream(char PROGMEM* buf, unsigned int count);

    virtual void seek(unsigned int pos);
};

#endif /* __ARDUINO_IO_PGMSPACE_SEEKABLE_INPUT_STREAM_H__ */
