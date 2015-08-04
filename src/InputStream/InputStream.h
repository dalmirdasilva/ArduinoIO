/**
 * Arduino IO
 * 
 * InputStream
 *
 * This abstract class is the superclass of all classes representing an input 
 * stream of bytes.
 * 
 * Applications that need to define a subclass of InputStream must always 
 * provide a method that returns the next unsigned char of input.
 */

#ifndef __ARDUINO_IO_INPUT_STREAM_H__
#define __ARDUINO_IO_INPUT_STREAM_H__ 1

#include <Closeable.h>

class InputStream : public Closeable {
public:

    /**
     * Returns the number of bytes that can be read(or skipped over) from this 
     * input stream without blocking by the next caller of a method for this input stream.
     * 
     */
    virtual int available();

    /**
     * Closes this input stream and releases any system resources associated 
     * with the stream.
     */
    virtual void close();

    /**
     * Marks the current position in this input stream.
     */
    virtual void mark();

    /**
     * Tests if this input stream supports the mark and reset methods.
     */
    virtual bool markSupported();

    /**
     * Reads the next unsigned char of data from the input stream.
     */
    virtual int read() = 0;

    /**
     * Reads some number of bytes from the input stream and stores them into 
     * the buffer array b.
     */
    virtual int read(unsigned char* b, int len);

    /**
     * Writes len of bytes into the stream.
     * 
     * @param b
     * @param off
     * @param len
     * @return 
     */
    virtual int read(unsigned char* b, int off, int len);

    /**
     * Repositions this stream to the position at the time the mark method was 
     * last called on this input stream.
     */
    virtual void reset();

    /**
     * Skips over and discards n bytes of data from this input stream.
     */
    virtual unsigned int skip(unsigned int n);
};

#endif /* __ARDUINO_IO_INPUT_STREAM_H__ */
