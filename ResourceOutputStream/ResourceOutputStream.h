/**
 * Arduino IO
 * 
 * ResourceOutputStream
 *
 * A resource output stream is an output stream for writing data to a Resource.
 */

#ifndef __ARDUINO_IO_RESOURCE_OUTPUT_STREAM_H__
#define __ARDUINO_IO_RESOURCE_OUTPUT_STREAM_H__ 1

#include <OutputStream.h>
#include <Resource.h>

class ResourceOutputStream : public OutputStream {
protected:

    /* 
     * The resource where data is stored.
     */
    Resource* resource;
    
public:
    
    ResourceOutputStream(Resource* resource);

    /**
     * Closing a ResourceOutputStream has no effect.
     */
    virtual void close();
    
    /**
     * Using parent write.
     */
    using OutputStream::write;
    
    /**
     * Writes the specified unsigned char to this output stream.
     */
    virtual void write(unsigned char b);
};

#endif /* __ARDUINO_IO_RESOURCE_OUTPUT_STREAM_H__ */
