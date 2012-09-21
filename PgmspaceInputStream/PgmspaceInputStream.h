/**
 * Arduino IO
 * 
 * PgmspaceInputStream
 *
 * A PgmspaceInputStream contains an internal buffer that contains bytes that 
 * may be read from the stream mapped to an part of the pgmspace.
 */

#ifndef __ARDUINO_IO_PGMSPACE_INPUT_STREAM_H__
#define __ARDUINO_IO_PGMSPACE_INPUT_STREAM_H__ 1

#include <InputStream.h>
#include <avr/pgmspace.h>

class PgmspaceInputStream : public virtual InputStream {
protected:

    /* 
     * The buffer where data is stored.
     */
    prog_char* buf;

    /*
     * The number of valid bytes in the buffer.
     */
    unsigned int count;

    /*
     * Current position
     */
    unsigned int pos;

    /*
     * The currently marked position in the stream.
     */
    unsigned int markpos;

public:

    explicit PgmspaceInputStream(prog_char* buf, unsigned int count);

    /**
     * Returns the number of bytes that can be read(or skipped over) from this 
     * input stream without blocking by the next caller of a method for this input stream.
     * 
     * @return 
     */
    virtual int available();

    /**
     * Marks the current position in this input stream.
     */
    virtual void mark();

    /**
     * Tests if this input stream supports the mark and reset methods.
     * 
     * @return 
     */
    virtual bool markSupported();

    /**
     * Using the parent read.
     */
    using InputStream::read;

    /**
     * Reads the next unsigned char of data from the input stream.
     * 
     * @return 
     */
    virtual int read();

    /**
     * Repositions this stream to the position at the time the mark method was 
     * last called on this input stream.
     */
    virtual void reset();
};

#endif /* __ARDUINO_IO_PGMSPACE_INPUT_STREAM_H__ */
