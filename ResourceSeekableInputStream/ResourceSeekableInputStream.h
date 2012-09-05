/**
 * Arduino IO
 * 
 * ResourceSeekableInputStream
 * 
 * A ResourceSeekableInputStream obtains input bytes from a resource in 
 * a file system that implements SeekableInputStream interface. 
 */

#ifndef __ARDUINO_IO_RESOURCE_SEEKABLE_INPUT_STREAM_H__
#define __ARDUINO_IO_RESOURCE_SEEKABLE_INPUT_STREAM_H__ 1

#include <SeekableInputStream.h>
#include <ResourceInputStream.h>
#include <Resource.h>

class ResourceSeekableInputStream : public ResourceInputStream, public SeekableInputStream {
public:
    
    /**
     * Public constructor.
     * 
     * @param resource  The resource to be used.
     */
    ResourceSeekableInputStream(Resource* resource);

    /**
     * Seeks this input stream to the position.
     * 
     * @param pos       THe position.
     */
    virtual void seek(unsigned int pos);
};

#endif /* __ARDUINO_IO_RESOURCE_SEEKABLE_INPUT_STREAM_H__ */
