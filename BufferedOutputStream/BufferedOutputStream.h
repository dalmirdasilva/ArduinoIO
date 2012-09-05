/**
 * Arduino IO
 * 
 * BufferedOutputStream
 * 
 * The class implements a buffered output stream. By setting up such
 * an output stream, an application can write bytes to the underlying
 * output stream without necessarily causing a call to the underlying
 * system for each unsigned char written.
 */

#ifndef __ARDUINO_IO_BUFFERED_OUTPUT_STREAM_H__
#define __ARDUINO_IO_BUFFERED_OUTPUT_STREAM_H__ 1

#include <FilterOutputStream.h>

class BufferedOutputStream : public FilterOutputStream {
protected:

    /**
     * The internal buffer where data is stored.
     */
    unsigned char* buf;

    /**
     * The size of the buffer where data is stored.
     */
    int size;

    /**
     * The number of valid bytes in the buffer. This value is always
     * in the range <tt>0</tt> through <tt>len</tt>; elements
     * <tt>buf[0]</tt> through <tt>buf[count-1]</tt> contain valid
     * unsigned char data.
     */
    int count;
    
public:

    /**
     * Creates a new buffered output stream to write data to the
     * specified underlying output stream with the specified buffer
     * size.
     *
     * @param   out    the underlying output stream.
     * @param   size   the buffer size.
     */
    BufferedOutputStream(OutputStream* out, unsigned char* buf, int size);

    /**
     * Writes the specified unsigned char to this buffered output stream.
     *
     * @param      b   the unsigned char to be written.
     * @exception  IOException  if an I/O error occurs.
     */
    void write(unsigned char b);
    
    /**
     * Writes len bytes from the specified unsigned char array to this output stream. 
     * The general contract for write(b, len) is that it should have exactly 
     * the same effect as the call write(b, 0, len).
     * 
     * @param b
     * @param len
     */
    virtual void write(unsigned char* b, int len);

    /**
     * Writes <code>len</code> bytes from the specified unsigned char array
     * starting at offset <code>off</code> to this buffered output stream.
     *
     * <p> Ordinarily this method stores bytes from the given array into this
     * stream's buffer, flushing the buffer to the underlying output stream as
     * needed.  If the requested length is at least as large as this stream's
     * buffer, however, then this method will flush the buffer and write the
     * bytes directly to the underlying output stream.  Thus redundant
     * <code>BufferedOutputStream</code>s will not copy data unnecessarily.
     *
     * @param      b     the data.
     * @param      off   the start offset in the data.
     * @param      len   the number of bytes to write.
     */
    virtual void write(unsigned char* b, int off, int len);

    /**
     * Flushes this buffered output stream. This forces any buffered
     * output bytes to be written out to the underlying output stream.
     */
    virtual void flush();
    
    virtual void close();

private:

    /** 
     * Flush the internal buffer 
     */
    void flushBuffer();
};

#endif /* __ARDUINO_IO_BUFFERED_OUTPUT_STREAM_H__ */