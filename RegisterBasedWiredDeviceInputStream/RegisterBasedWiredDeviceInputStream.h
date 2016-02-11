/**
 * Arduino IO
 * 
 * RegisterBasedWiredDeviceInputStream
 * 
 * A RegisterBasedWiredDeviceInputStream obtains input bytes from a serial port.
 */

#ifndef __ARDUINO_IO_REGISTER_BASED_WIRED_DEVICE_INPUT_STREAM_H__
#define __ARDUINO_IO_REGISTER_BASED_WIRED_DEVICE_INPUT_STREAM_H__ 1

#include <Arduino.h>
#include <InputStream.h>
#include <RegisterBasedWiredDevice.h>

class RegisterBasedWiredDeviceInputStream : public InputStream {
protected:

    /**
     * The software serial where the data will be read.
     */
    RegisterBasedWiredDevice *device;

    /**
     * First register address.
     */
    unsigned int startAddress;

    /**
     * Last register address.
     */
    unsigned int endAddress;

    /**
     * Current position.
     */
    unsigned int pos;

    /**
     * Current marked position.
     */
    unsigned int markedPos;

public:

    /**
     * Public constructor.
     * 
     * @param device        The RegisterBasedWiredDevice instance which this input stream will retrieve bytes from.
     * @param startAddress  First register address that this input stream is mapping.
     * @param endAddress    Last register address that this input stream is mapping.
     */
    RegisterBasedWiredDeviceInputStream(RegisterBasedWiredDevice *device, unsigned int startAddress, unsigned int endAddress);

    /**
     * Returns the number of bytes that can be read(or skipped over) from this 
     * input stream without blocking by the next caller of a method for this input stream.
     */
    virtual int available();

    /**
     * Marks the current position in this input stream.
     */
    void mark();

    /**
     * Tests if this input stream supports the mark and reset methods.
     */
    bool markSupported();

    /**
     * Reads the next unsigned char of data from the input stream.
     */
    int read();

    /**
     * Reads len of bytes from the stream.
     *
     * @param b     Pointer to a array of chars.
     * @param off   Offset.
     * @param len   How many bytes should be read.
     * @return      If >= 0: How many bytes were read.
     *              If < 0: Error code:
     *                  <ul>
     *                      <li>-1: data too long to fit in transmit buffer</li>
     *                      <li>-2: received NACK on transmit of address</li>
     *                      <li>-3: received NACK on transmit of data</li>
     *                      <li>-4: other error</li>
     *                      <li>-5: timeout</li>
     *                  </ul>
     */
    int read(unsigned char* b, int off, int len);

    /**
     * Repositions this stream to the position at the time the mark method was
     * last called on this input stream.
     */
    void reset();

    /**
     * Skips over and discards n bytes of data from this input stream.
     */
    unsigned int skip(unsigned int n);
};

#endif /* __ARDUINO_IO_REGISTER_BASED_WIRED_DEVICE_INPUT_STREAM_H__ */
