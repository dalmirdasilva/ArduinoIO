/**
 * Arduino IO
 * 
 * DataInputStream
 *
 * A data input stream lets an application read data from a InputStream.
 */

#ifndef __ARDUINO_IO_DATA_INPUT_STREAM_H__
#define __ARDUINO_IO_DATA_INPUT_STREAM_H__ 1

#include <DataInput.h>
#include <InputStream.h>

class DataInputStream : public DataInput {

    /**
     * The used input stream.
     */
    InputStream* inputStream;

public:

    /**
     * Public constructor.
     * 
     * @param inputStream
     */
    DataInputStream(InputStream* inputStream);

    /**
     * Reads a unsigned char from the stream.
     * 
     * @return unsigned char
     */
    virtual unsigned char readByte();

    /**
     * Reads a bool from the stream.
     * 
     * @return bool
     */
    virtual bool readBoolean();

    /**
     * Reads a char from the stream.
     * 
     * @return char
     */
    virtual char readChar();

    /**
     * Reads an unsigned char from the stream.
     * 
     * @return unsigned char
     */
    virtual unsigned char readUnsignedChar();

    /**
     * Reads an int from the stream.
     * 
     * @return int
     */
    virtual int readInt();

    /**
     * Reads an unsigned int from the stream.
     * 
     * @return unsigned int
     */
    virtual unsigned int readUnsignedInt();

    /**
     * Reads a word from the stream.
     * 
     * @return word
     */
    virtual word readWord();

    /**
     * Reads a long from the stream.
     * 
     * @return long
     */
    virtual long readLong();

    /**
     * Reads a unsigned long from the stream.
     * 
     * @return unsigned long
     */
    virtual unsigned long readUnsignedLong();

    /**
     * Reads a float from the stream.
     * 
     * @return float
     */
    virtual float readFloat();

    /**
     * Reads a double from the stream.
     * 
     * @return double
     */
    virtual double readDouble();

    /**
     * Reads a array of bytes from the stream.
     * 
     * @param b
     * @param len
     */
    virtual void readFully(unsigned char* b, int len);

    /**
     * Skips n bytes of the stream.
     * 
     * @param n
     * @return unsigned int The number of skipped bytes.
     */
    virtual unsigned int skipBytes(unsigned int n);
};

#endif /* __ARDUINO_IO_DATA_INPUT_STREAM_H__ */
