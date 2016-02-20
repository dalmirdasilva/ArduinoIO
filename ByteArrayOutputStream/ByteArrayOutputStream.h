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

#include <SeekableOutputStream.h>

class ByteArrayOutputStream: public SeekableOutputStream {

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

    /**
     * The currently marked position in the stream.
     */
    unsigned int markpos;

public:

    /**
     * Public constructor.
     * 
     * @param buf
     * @param count
     */
    ByteArrayOutputStream(unsigned char* buf, unsigned int count);

    /**
     * Virtual destructor.
     */
    virtual ~ByteArrayOutputStream() {
    }

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

    /**
     * Marks the current position in this input stream.
     */
    virtual void mark();

    /**
     * Tests if this input stream supports the mark and reset methods.
     *
     * @return bool
     */
    virtual bool markSupported();

    /**
     * Repositions this stream to the position at the time the mark method was
     * last called on this input stream.
     */
    virtual void reset();

    /**
     * Seeks to the desired position.
     *
     * @param pos The position we want to point to.
     */
    virtual void seek(unsigned int pos);
};

#endif /* __ARDUINO_IO_BYTE_ARRAY_OUTPUT_STREAM_H__ */
