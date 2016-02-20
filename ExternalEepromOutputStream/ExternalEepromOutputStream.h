/**
 * Arduino IO
 * 
 * ExternalEepromOutputStream
 *
 * A resource output stream is an output stream for writing data to an 
 * ExternalEeprom.
 */

#ifndef __ARDUINO_IO_EXTERNAL_EEPROM_OUTPUT_STREAM_H__
#define __ARDUINO_IO_EXTERNAL_EEPROM_OUTPUT_STREAM_H__ 1

#include <SeekableOutputStream.h>
#include <ExternalEeprom.h>

class ExternalEepromOutputStream : public SeekableOutputStream {

    /**
     * The associated eeprom.
     */
    ExternalEeprom* externalEeprom;

    /**
     * Current eeprom position.
     */
    unsigned int pos;

    /**
     * The currently marked position in the stream.
     */
    unsigned int markpos;

    /*
     * The size of the externalEeprom.
     */
    unsigned int externalEepromSize;

public:

    /**
     * Public constructor.
     * 
     * @param externalEeprom
     */
    ExternalEepromOutputStream(ExternalEeprom* externalEeprom);

    /**
     * Using parent write.
     */
    using OutputStream::write;

    /**
     * Writes the specified unsigned char to this output stream.
     * 
     * @param b
     */
    virtual void write(unsigned char b);

    /**
     * Writes len bytes from the specified unsigned char array starting at offset off to 
     * this output stream.
     * 
     * @param b
     * @param off
     * @param len
     */
    virtual void write(unsigned char* b, int off, int len);

    /**
     * Seeks to the desired position.
     *
     * @param pos The position we want to point to.
     */
    virtual void seek(unsigned int pos);

    /**
     * Marks the current position in this output stream.
     */
    virtual void mark();

    /**
     * Tests if this output stream supports the mark and reset methods.
     */
    virtual bool markSupported();

    /**
     * Repositions this stream to the position at the time the mark method was
     * last called on this output stream.
     */
    virtual void reset();
};

#endif /* __ARDUINO_IO_EXTERNAL_EEPROM_OUTPUT_STREAM_H__ */
