/**
 * Arduino IO
 * 
 * OutputStream
 * 
 * This abstract class is the superclass of all classes representing
 * an output stream of bytes. An output stream accepts output bytes
 * and sends them to some sink.
 * <p>
 * Applications that need to define a subclass of
 * <code>OutputStream</code> must always provide at least a method
 * that writes one unsigned char of output.
 */

#ifndef __ARDUINO_IO_OUTPUT_STREAM_H__
#define __ARDUINO_IO_OUTPUT_STREAM_H__ 1

#include <Closeable.h>

class OutputStream : public Closeable {
public:

    /**
     * Closes this output stream and releases any system resources associated 
     * with this stream.
     */
    virtual void close();
    
    /**
     * Flushes this output stream and forces any buffered output bytes to be 
     * written out.
     */
    virtual void flush();
    
    /**
     * Writes the specified unsigned char to this output stream.
     */
    virtual void write(unsigned char b) = 0;
    
    /**
     * Writes len bytes from the specified unsigned char array to 
     * this output stream.
     * 
     * @param b
     * @param len
     */
    virtual void write(unsigned char* b, int len);
    
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
 
#endif /* __ARDUINO_IO_OUTPUT_STREAM_H__ */
