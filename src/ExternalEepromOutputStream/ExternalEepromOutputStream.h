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

#include <OutputStream.h>
#include <ExternalEeprom.h>

class ExternalEepromOutputStream : public OutputStream {

    /**
     * The associated eeprom.
     */
    ExternalEeprom* externalEeprom;

    /**
     * Current eeprom position.
     */
    unsigned int pos;

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
};

#endif /* __ARDUINO_IO_EXTERNAL_EEPROM_OUTPUT_STREAM_H__ */
