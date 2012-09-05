/**
 * Arduino IO
 * 
 * ExternalEepromSeekableInputStream
 * 
 * A ExternalEepromSeekableInputStream obtains input bytes from a external
 * input stream. 
 */

#ifndef __ARDUINO_IO_EXTERNAL_EEPROM_SEEKABLE_INPUT_STREAM_H__
#define __ARDUINO_IO_EXTERNAL_EEPROM_SEEKABLE_INPUT_STREAM_H__ 1

#include <ExternalEeprom.h>
#include <SeekableInputStream.h>
#include <ExternalEepromInputStream.h>

class ExternalEepromSeekableInputStream : public ExternalEepromInputStream, public SeekableInputStream {
public:
    
    /**
     * Public constructor.
     * 
     * @param resource  The external eeprom to be used.
     */
    ExternalEepromSeekableInputStream(ExternalEeprom* externalEeprom);

    /**
     * Seeks this input stream to the position.
     * 
     * @param pos       THe position.
     */
    virtual void seek(unsigned int pos);
};

#endif /* __ARDUINO_IO_EXTERNAL_EEPROM_SEEKABLE_INPUT_STREAM_H__ */
