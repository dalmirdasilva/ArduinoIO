/**
 * Arduino IO
 * 
 * BufferedInputStream
 *
 * A <code>BufferedInputStream</code> adds
 * functionality to another input stream-namely,
 * the ability to buffer the input and to
 * support the <code>mark</code> and <code>reset</code>
 * methods. When  the <code>BufferedInputStream</code>
 * is created, an internal buffer array is
 * passed. As bytes from the stream are read
 * or skipped, the internal buffer is refilled
 * as necessary  from the contained input stream,
 * many bytes at a time. The <code>mark</code>
 * operation  remembers a point in the input
 * stream and the <code>reset</code> operation
 * causes all the  bytes read since the most
 * recent <code>mark</code> operation to be
 * reread before new bytes are taken from
 * the contained input stream.
 */

#ifndef __ARDUINO_IO_BUFFERED_INPUT_STREAM_H__
#define __ARDUINO_IO_BUFFERED_INPUT_STREAM_H__ 1

#include <FilterInputStream.h>

class BufferedInputStream : public FilterInputStream {

    /**
     * The size of the buffer.
     */
    unsigned int size;
    
protected:
    
    /**
     * The internal buffer array where the data is stored.
     */
    unsigned char* buf;
    
    /**
     * The index one greater than the index of the last valid unsigned char in 
     * the buffer. 
     * This value is always
     * in the range <code>0</code> through <code>size</code>;
     * elements <code>buf[0]</code>  through <code>buf[count-1]
     * </code>contain buffered input data obtained
     * from the underlying  input stream.
     */
    int count;

    /**
     * The current position in the buffer. This is the index of the next 
     * character to be read from the <code>buf</code> array. 
     * <p>
     * This value is always in the range <code>0</code>
     * through <code>count</code>. If it is less
     * than <code>count</code>, then  <code>buf[pos]</code>
     * is the next unsigned char to be supplied as input;
     * if it is equal to <code>count</code>, then
     * the  next <code>read</code> or <code>skip</code>
     * operation will require more bytes to be
     * read from the contained  input stream.
     */
    int pos;
    
    /**
     * The value of the <code>pos</code> field at the time the last
     * <code>mark</code> method was called.
     * <p>
     * This value is always
     * in the range <code>0</code> through <code>pos</code>.
     * If there is no marked position in the input
     * stream, this field is <code>-1</code>. If
     * there is a marked position in the input
     * stream,  then <code>buf[markpos]</code>
     * is the first unsigned char to be supplied as input
     * after a <code>reset</code> operation. If
     * <code>markpos</code> is not <code>-1</code>,
     * then all bytes from positions <code>buf[markpos]</code>
     * through  <code>buf[pos-1]</code> must remain
     * in the buffer array (though they may be
     * moved to  another place in the buffer array,
     * with suitable adjustments to the values
     * of <code>count</code>,  <code>pos</code>,
     * and <code>markpos</code>); they may not
     * be discarded unless and until the difference
     * between <code>pos</code> and <code>markpos</code>
     * exceeds <code>marklimit</code>.
     */
    int markpos;

    /**
     * Flag to determine if there is a marker on this input stream.
     */
    bool marked;
    
public:
    
    /**
     * Public constructor.
     * 
     * @param in
     * @param buf
     * @param size
     */
    BufferedInputStream(InputStream* in, unsigned char* buf, int size);

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
    virtual int read();
    
    /**
     * Reads some number of bytes from the input stream and stores them into 
     * the buffer array b.
     * 
     * @param b
     * @param len
     * @return 
     */
    virtual int read(unsigned char* b, int len);
    
    /**
     * Reads some number of bytes from the input stream and stores them into 
     * the buffer array b.
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
    
private:
    
    /**
     * Moves the valid bytes on the buffer to the left side of the buffer.
     */
    void realineBufferContent();
    
    /**
     * Fills the buffer.
     * 
     * @param startPos
     */
    void fill(int startPos);
};

#endif /* __ARDUINO_IO_BUFFERED_INPUT_STREAM_H__ */
