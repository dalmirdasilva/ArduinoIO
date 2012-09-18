/**
 * Arduino IO
 * 
 * WireInputStream
 * 
 * A WireInputStream obtains input bytes from the wire bus.
 */

#ifndef __ARDUINO_IO_WIRE_INPUT_STREAM_H__
#define __ARDUINO_IO_WIRE_INPUT_STREAM_H__ 1

#include <Arduino.h>
#include <Wire.h>
#include <InputStream.h>

class WireInputStream : public InputStream {
protected:
    
    /**
     * The wire device address.
     */
    unsigned char address;
    
public:
    
    /**
     * Public constructor.
     * 
     * @param address
     */
    WireInputStream(unsigned char addredd);

    /**
     * Returns the number of bytes that can be read(or skipped over) from this 
     * input stream without blocking by the next caller of a method for this input stream.
     */
    virtual int available();
    
    /**
     * Reads the next unsigned char of data from the input stream.
     */
    virtual int read();
    
    /**
     * Writes len of bytes into the stream.
     * 
     * @param b
     * @param off
     * @param len
     * @return 
     */
    virtual int read(unsigned char* b, int off, int len);
};

#endif /* __ARDUINO_IO_WIRE_INPUT_STREAM_H__ */
