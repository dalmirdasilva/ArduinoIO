/**
 * Araduino IO
 * 
 * RandomAccessResource
 * 
 * Instances of this class support both reading and writing to a random access 
 * resource. A random access resource behaves like a large array of bytes 
 * stored in the resource system.
 */

#ifndef __ARDUINO_IO_RANDOM_ACCESS_RESOURCE_H__
#define __ARDUINO_IO_RANDOM_ACCESS_RESOURCE_H__ 1

#include <RandomAccess.h>
#include <Closeable.h>
#include <Resource.h>

class RandomAccessResource : public RandomAccess {
    
    /**
     * The resource to be used.
     */
    Resource* resource;

public:

    /**
     * Public constructor.
     * 
     * @param resource          The resource to be used.
     */
    RandomAccessResource(Resource* resource);

    /**
     * Seeks the stream at the position.
     * 
     * @param pos       The position.
     */
    virtual void seek(unsigned int pos);

    /**
     * Returns the length of the stream.
     * 
     * @return          The length.
     */
    unsigned int length();

    /**
     * Closes the associated resource.
     */
    virtual void close();

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
#endif /* __ARDUINO_IO_RANDOM_ACCESS_RESOURCE_H__ */
