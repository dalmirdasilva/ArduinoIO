/**
 * Arduino IO
 * 
 * DataOutputStream
 *
 * A data output stream lets an application write types to an OutputStream.
 */

#ifndef __ARDUINO_IO_DATA_OUTPUT_STREAM_H__
#define __ARDUINO_IO_DATA_OUTPUT_STREAM_H__ 1

#include <stdint.h>
#include <OutputStream.h>
#include <DataOutput.h>

class DataOutputStream : public DataOutput {

    /**
     * The stream to be used.
     */
    OutputStream* outputStream;

public:

    /**
     * Public constructor.
     * 
     * @param outputStream      The stream to be used.
     */
    DataOutputStream(OutputStream* outputStream);

    /**
     * Writes an array of bytes into the stream.
     * 
     * @param b         The array of bytes.
     * @param len       The length of such array.
     */
    virtual void write(unsigned char* b, int len);

    /**
     * Writes a unsigned char into the stream.
     * 
     * @param b         The unsigned char to be written.
     */
    virtual void write(unsigned char b);

    /**
     * Writes a unsigned char into the stream.
     * 
     * @param b         The unsigned char to be written.
     */
    virtual void writeByte(unsigned char b);

    /**
     * Writes an array of bytes into the stream.
     * 
     * @param b         The array of bytes.
     * @param len       The length of such array.
     */
    virtual void writeBytes(unsigned char* b, int len);

    /**
     * Writes a bool into the stream.
     * 
     * @param v         The bool to be written.
     */
    virtual void writeBoolean(bool v);

    /**
     * Writes a char into the stream.
     * 
     * @param c         The char to be written.
     */
    virtual void writeChar(char c);

    /**
     * Writes an unsigned char into the stream.
     * 
     * @param c         The unsigned char to be written.
     */
    virtual void writeUnsignedChar(unsigned char c);

    /**
     * Writes an int into the stream.
     * 
     * @param v         The int to be written.
     */
    virtual void writeInt(int v);

    /**
     * Writes an unsigned int into the stream.
     * 
     * @param v         The unsigned int to be written.
     */
    virtual void writeUnsignedInt(unsigned int v);

    /**
     * Writes a word into the stream.
     * 
     * @param v         The word to be written.
     */
    virtual void writeWord(word v);

    /**
     * Writes a long into the stream.
     * 
     * @param v         The long to be written.
     */
    virtual void writeLong(long v);

    /**
     * Writes a unsigned long into the stream.
     * 
     * @param v         The unsigned long to be written.
     */
    virtual void writeUnsignedLong(unsigned long v);

    /**
     * Writes a float into the stream.
     * 
     * @param v         The float to be written.
     */
    virtual void writeFloat(float v);

    /**
     * Writes a double into the stream.
     * 
     * @param v         The double to be written.
     */
    virtual void writeDouble(double v);
};

#endif /* __ARDUINO_IO_DATA_OUTPUT_STREAM_H__ */
