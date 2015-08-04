/**
 * Arduino IO
 * 
 * SoftwareSerialOutputStream
 *
 * A software serial output stream is a output stream to write in a serial port.
 */

#ifndef __ARDUINO_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_H__
#define __ARDUINO_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_H__ 1

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <OutputStream.h>
#include <SerialOutputStream.h>

class SoftwareSerialOutputStream : public SerialOutputStream {
protected:

    /* 
     * The software serial where data is written.
     */
    SoftwareSerial *softwareSerial;

public:

<<<<<<< HEAD:SoftwareSerialOutputStream/SoftwareSerialOutputStream.h
    SoftwareSerialOutputStream(SoftwareSerial *serial, unsigned int boudRate);
=======
    SoftwareSerialOutputStream(SoftwareSerial *softwareSerial, unsigned int boundRate);
>>>>>>> crosscompiling:src/SoftwareSerialOutputStream/SoftwareSerialOutputStream.h

    /**
     * Writes the specified unsigned char to this output stream.
     */
    virtual void write(unsigned char b);
};

#endif /* __ARDUINO_IO_SOFTWARE_SERIAL_OUTPUT_STREAM_H__ */
