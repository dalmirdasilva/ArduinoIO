/**
 * Arduino IO
 * 
 * GprsInputStream
 * 
 * A GprsInputStream obtains input bytes from a GPRS driver.
 */

#ifndef __ARDUINO_IO_GPRS_INPUT_STREAM_H__
#define __ARDUINO_IO_GPRS_INPUT_STREAM_H__ 1

#include <InputStream.h>
#include <Gprs.h>

class GprsInputStream : public InputStream {
protected:

    /**
     * GPRS driver.
     */
    Gprs *gprs;

    /**
     * Gprs connection.
     */
    char connection;

public:

    /**
     * Public constructor.
     * 
     * @param serial
     * @param boudRate
     */
    GprsInputStream(Gprs *gprs, char connection);

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

#endif /* __ARDUINO_IO_GPRS_INPUT_STREAM_H__ */
