/**
 * Arduino IO
 * 
 * ResourceInputStream
 * 
 * A ResourceInputStream obtains input bytes from a resource in a file system. 
 */

#ifndef __ARDUINO_IO_RESOURCE_INPUT_STREAM_H__
#define __ARDUINO_IO_RESOURCE_INPUT_STREAM_H__ 1

#if USING_RESOURCE_LIBRARIES

#include <InputStream.h>
#include <Resource.h>

class ResourceInputStream : public virtual InputStream {
protected:

    /* 
     * The resource where data is stored.
     */
    Resource* resource;

    /*
     * Current position
     */
    unsigned int pos;

    /*
     * The currently marked position in the stream.
     */
    unsigned int markpos;

    /*
     * The size of the resource.
     */
    unsigned int resourceSize;

public:

    ResourceInputStream(Resource* resource);

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
     * Using the parent read.
     */
    using InputStream::read;

    /**
     * Reads the next unsigned char of data from the input stream.
     */
    virtual int read();

    /**
     * Repositions this stream to the position at the time the mark method was 
     * last called on this input stream.
     */
    virtual void reset();
};

#endif /* USING_RESOURCE_LIBRARIES */

#endif /* __ARDUINO_IO_RESOURCE_INPUT_STREAM_H__ */
