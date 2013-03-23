/**
 * Arduino IO
 * 
 * HardwareSerialOutputStream
 *
 * A software serial output stream is a output stream to write in a serial port.
 */

#ifndef __ARDUINO_IO_HARDWARE_SERIAL_OUTPUT_STREAM_H__
#define __ARDUINO_IO_HARDWARE_SERIAL_OUTPUT_STREAM_H__ 1

#include <Arduino.h>
#include <OutputStream.h>
#include <SerialOutputStream.h>

class HardwareSerialOutputStream : public SerialOutputStream {
public:

    /**
     * Public constructor.
     * 
     * @param boudRate
     */
    HardwareSerialOutputStream(unsigned int boudRate);

    /**
     * Writes the specified unsigned char to this output stream.
     */
    virtual void write(unsigned char b);
};

#endif /* __ARDUINO_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_H__ */
