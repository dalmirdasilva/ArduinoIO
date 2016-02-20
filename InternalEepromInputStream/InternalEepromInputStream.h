/**
 * Arduino IO
 * 
 * ExternalEepromInputStream
 * 
 * An ExternalEepromInputStream obtains input bytes from a 
 * externalEeprom. 
 */

#ifndef __ARDUINO_IO_EXTERNAL_EEPROM_INPUT_STREAM_H__
#define __ARDUINO_IO_EXTERNAL_EEPROM_INPUT_STREAM_H__ 1

#include <SeekableInputStream.h>

class InternalEepromInputStream: public virtual SeekableInputStream {

protected:

    /**
     * When asking for available, this is the max number to return.
     */
    const int maxAvailableChunk;

    /**
     * Current position
     */
    unsigned int pos;

    /**
     * The currently marked position in the stream.
     */
    unsigned int markpos;

    /**
     * The size of the eeprom.
     */
    unsigned int eepromSize;

public:

    /**
     * Public constructor.
     */
    InternalEepromInputStream();

    /**
     * Returns the number of bytes that can be read(or skipped over) from this 
     * input stream without blocking by the next caller of a method for this 
     * input stream.
     * 
     * @return int      The available number of bytes.
     */
    virtual int available();

    /**
     * Using the parent read.
     */
    using InputStream::read;

    /**
     * Reads the next unsigned char of data from the input stream.
     * 
     * @return int      The read unsigned char as an int.
     */
    virtual int read();

    /**
     * Reads len of bytes from the input stream.
     * 
     * @param b
     * @param off
     * @param len
     * @return 
     */
    virtual int read(unsigned char* b, int off, int len);

    /**
     * Marks the current position in this input stream.
     */
    virtual void mark();

    /**
     * Tests if this input stream supports the mark and reset methods.
     *
     * @return bool
     */
    virtual bool markSupported();

    /**
     * Repositions this stream to the position at the time the mark method was 
     * last called on this input stream.
     */
    virtual void reset();

    /**
     * Seeks to the desired position.
     *
     * @param pos The position we want to point to.
     */
    virtual void seek(unsigned int pos);
};

#endif /* __ARDUINO_IO_EXTERNAL_EEPROM_INPUT_STREAM_H__ */
