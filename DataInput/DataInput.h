/**
 * Arduino IO
 * 
 * DataInput
 *
 * The DataInput interface provides for reading bytes from a binary 
 * stream and reconstructing from them data in any of the primitive 
 * arduino types.
 */

#ifndef __ARDUINO_IO_DATA_INPUT_H__
#define __ARDUINO_IO_DATA_INPUT_H__ 1

#include <Arduino.h>

class DataInput {
public:

    /**
     * Reads a unsigned char from the stream.
     * 
     * @return unsigned char
     */
    virtual unsigned char readByte() = 0;

    /**
     * Reads a bool from the stream.
     * 
     * @return bool
     */
    virtual bool readBoolean() = 0;

    /**
     * Reads a char from the stream.
     * 
     * @return char
     */
    virtual char readChar() = 0;

    /**
     * Reads an unsigned char from the stream.
     * 
     * @return unsigned char
     */
    virtual unsigned char readUnsignedChar() = 0;

    /**
     * Reads an int from the stream.
     * 
     * @return int
     */
    virtual int readInt() = 0;

    /**
     * Reads an unsigned int from the stream.
     * 
     * @return unsigned int
     */
    virtual unsigned int readUnsignedInt() = 0;

    /**
     * Reads a word from the stream.
     * 
     * @return word
     */
    virtual word readWord() = 0;

    /**
     * Reads a long from the stream.
     * 
     * @return long
     */
    virtual long readLong() = 0;

    /**
     * Reads a unsigned long from the stream.
     * 
     * @return unsigned long
     */
    virtual unsigned long readUnsignedLong() = 0;

    /**
     * Reads a float from the stream.
     * 
     * @return float
     */
    virtual float readFloat() = 0;

    /**
     * Reads a double from the stream.
     * 
     * @return double
     */
    virtual double readDouble() = 0;

    /**
     * Reads a array of bytes from the stream.
     * 
     * @param b
     * @param len
     */
    virtual void readFully(unsigned char* b, int len) = 0;

    /**
     * Skips n bytes of the stream.
     * 
     * @param n
     * @return unsigned int The number of skipped bytes.
     */
    virtual unsigned int skipBytes(unsigned int n) = 0;
};

#endif /* __ARDUINO_IO_DATA_INPUT_H__ */
