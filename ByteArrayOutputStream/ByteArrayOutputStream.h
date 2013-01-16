/**
 * Arduino IO
 * 
 * ByteArrayOutputStream
 *
 * This class implements an output stream in which the data is written into a 
 * unsigned char array.
 */

#ifndef __ARDUINO_IO_BYTE_ARRAY_OUTPUT_STREAM_H__
#define __ARDUINO_IO_BYTE_ARRAY_OUTPUT_STREAM_H__ 1

#include <OutputStream.h>

class ByteArrayOutputStream : public OutputStream {
protected:

    /* 
     * The buffer where data is stored.
     */
    unsigned char* buf;

    /*
     * The number of valid bytes in the buffer.
     */
    unsigned int count;

    /*
     * Current position
     */
    unsigned int pos;

public:

    /**
     * Public constructor.
     * 
     * @param buf
     * @param count
     */
    ByteArrayOutputStream(unsigned char* buf, unsigned int count);

    /**
     * Resets the count field of this unsigned char array output stream to zero.
     */
    void reset();

    /**
     * Returns the current size of the buffer.
     * 
     * @return unsigned int The size of the stream.
     */
    unsigned int size();

    /**
     * Creates a newly allocated unsigned char array.
     * 
     * @return unsigned char* The unsigned char array.
     */
    unsigned char* toByteArray();

    /**
     * Using parent write.
     */
    using OutputStream::write;

    /**
     * Writes the specified unsigned char to this output stream.
     * 
     * @param b The unsigned char to be written.
     */
    virtual void write(unsigned char b);
};

#endif /* __ARDUINO_IO_BYTE_ARRAY_OUTPUT_STREAM_H__ */
