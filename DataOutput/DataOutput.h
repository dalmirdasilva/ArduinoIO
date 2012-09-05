/**
 * Arduino IO
 * 
 * DataOutput
 *
 * The DataOutput interface provides for converting data from any of the 
 * primitive types to a series of bytes and writing these bytes to a binary stream.
 */

#ifndef __ARDUINO_IO_DATA_OUTPUT_H__
#define __ARDUINO_IO_DATA_OUTPUT_H__ 1

class DataOutput {
public:

    /**
     * Writes an array of bytes into the stream.
     * 
     * @param b         The array of bytes.
     * @param len       The length of such array.
     */
    virtual void write(unsigned char* b, int len) = 0;

    /**
     * Writes a unsigned char into the stream.
     * 
     * @param b         The unsigned char to be written.
     */
    virtual void write(unsigned char b) = 0;

    /**
     * Writes a unsigned char into the stream.
     * 
     * @param b         The unsigned char to be written.
     */
    virtual void writeByte(unsigned char b) = 0;

    /**
     * Writes an array of bytes into the stream.
     * 
     * @param b         The array of bytes.
     * @param len       The length of such array.
     */
    virtual void writeBytes(unsigned char* b, int len) = 0;

    /**
     * Writes a bool into the stream.
     * 
     * @param v         The bool to be written.
     */
    virtual void writeBoolean(bool v) = 0;

    /**
     * Writes a char into the stream.
     * 
     * @param c         The char to be written.
     */
    virtual void writeChar(char c) = 0;

    /**
     * Writes an unsigned char into the stream.
     * 
     * @param c         The unsigned char to be written.
     */
    virtual void writeUnsignedChar(unsigned char c) = 0;

    /**
     * Writes an int into the stream.
     * 
     * @param v         The int to be written.
     */
    virtual void writeInt(int v) = 0;

    /**
     * Writes an unsigned int into the stream.
     * 
     * @param v         The unsigned int to be written.
     */
    virtual void writeUnsignedInt(unsigned int v) = 0;

    /**
     * Writes a word into the stream.
     * 
     * @param v         The word to be written.
     */
    virtual void writeWord(word v) = 0;

    /**
     * Writes a long into the stream.
     * 
     * @param v         The long to be written.
     */
    virtual void writeLong(long v) = 0;

    /**
     * Writes a unsigned long into the stream.
     * 
     * @param v         The unsigned long to be written.
     */
    virtual void writeUnsignedLong(unsigned long v) = 0;

    /**
     * Writes a float into the stream.
     * 
     * @param v         The float to be written.
     */
    virtual void writeFloat(float v) = 0;

    /**
     * Writes a double into the stream.
     * 
     * @param v         The double to be written.
     */
    virtual void writeDouble(double v) = 0;
};

#endif /* __ARDUINO_IO_DATA_OUTPUT_H__ */
