/**
 * Arduino IO
 * 
 * InternalEepromOutputStream
 *
 * A resource output stream is an output stream for writing data to an 
 * internal EEPROM.
 */

#ifndef __ARDUINO_IO_INTERNAL_EEPROM_OUTPUT_STREAM_H__
#define __ARDUINO_IO_INTERNAL_EEPROM_OUTPUT_STREAM_H__ 1

#include <OutputStream.h>
#include <avr/eeprom.h>

class InternalEepromOutputStream : public OutputStream {

    /**
     * Current eeprom position.
     */
    unsigned int pos;

public:

    /**
     * Public constructor.
     */
    InternalEepromOutputStream();

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
};

#endif /* __ARDUINO_IO_INTERNAL_EEPROM_OUTPUT_STREAM_H__ */
