/**
 * Arduino IO
 * 
 * HardwareSerialInputStream
 * 
 * A HardwareSerialInputStream obtains input bytes from a serial port.
 */

#ifndef __ARDUINO_IO_HARDWARE_SERIAL_INPUT_STREAM_H__
#define __ARDUINO_IO_HARDWARE_SERIAL_INPUT_STREAM_H__ 1

#include <Arduino.h>
#include <InputStream.h>
#include <SerialInputStream.h>

class HardwareSerialInputStream : public SerialInputStream {
public:

    /**
     * Public constructor.
     * 
     * @param boundRate
     */
    HardwareSerialInputStream(unsigned int boundRate);

    /**
     * Returns the number of bytes that can be read(or skipped over) from this 
     * input stream without blocking by the next caller of a method for this input stream.
     */
    virtual int available();

    /**
     * Reads the next unsigned char of data from the input stream.
     */
    virtual int read();
};

#endif /* __ARDUINO_IO_HARDWARE_SERIAL_INPUT_STREAM_H__ */
