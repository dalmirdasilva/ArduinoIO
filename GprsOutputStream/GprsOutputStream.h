/**
 * Arduino IO
 * 
 * GprsOutputStream
 *
 * A GPRS output stream is a output stream to write in a GPRS driver.
 */

#ifndef __ARDUINO_IO_GPRS_OUTPUT_STREAM_H__
#define __ARDUINO_IO_GPRS_OUTPUT_STREAM_H__ 1

#include <OutputStream.h>
#include <Gprs.h>

class GprsOutputStream : public OutputStream {

protected:

    /* 
     * The software serial where data is written.
     */
    Gprs *gprs;

    /**
     * Gprs connection number
     */
    char connection;

public:

    GprsOutputStream(Gprs *gprs, char connection);

    /**
     * Writes the specified unsigned char to this output stream.
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

#endif /* __ARDUINO_IO_GPRS_OUTPUT_STREAM_H__ */
