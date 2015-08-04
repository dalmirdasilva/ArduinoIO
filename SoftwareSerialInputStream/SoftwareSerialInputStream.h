/**
 * Arduino IO
 * 
 * SoftwareSerialInputStream
 * 
 * A SoftwareSerialInputStream obtains input bytes from a serial port.
 */

#ifndef __ARDUINO_IO_SOFTWARE_SERIAL_INPUT_STREAM_H__
#define __ARDUINO_IO_SOFTWARE_SERIAL_INPUT_STREAM_H__ 1

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <InputStream.h>
#include <SerialInputStream.h>

class SoftwareSerialInputStream : public SerialInputStream {
protected:

    /**
     * The software serial where the data will be read.
     */
    SoftwareSerial *serial;

public:

    /**
     * Public constructor.
     * 
     * @param serial
     * @param boudRate
     */
    SoftwareSerialInputStream(SoftwareSerial *serial, unsigned int boudRate);

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

#endif /* __ARDUINO_IO_SOFTWARE_SERIAL_INPUT_STREAM_H__ */
