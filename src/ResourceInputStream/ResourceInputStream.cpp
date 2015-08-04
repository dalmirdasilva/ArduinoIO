/**
 * Arduino IO
 * 
 * ResourceInputStream
 * 
 * A ResourceInputStream obtains input bytes from a resource in a file system. 
 */

#ifndef __ARDUINO_IO_RESOURCE_INPUT_STREAM_CPP__
#define __ARDUINO_IO_RESOURCE_INPUT_STREAM_CPP__ 1

#if USING_RESOURCE_LIBRARIES

#include "ResourceInputStream.h"

ResourceInputStream::ResourceInputStream(Resource* resource) : resource(resource) {
    markpos = 0;
    pos = 0;
    resourceSize = resource->size();
    resource->rewind();
}

int ResourceInputStream::available() {
    if ((resourceSize - pos) > 0) {
        return 1;
    }
    return 0;
}

void ResourceInputStream::close() {
    resource->close();
}

void ResourceInputStream::mark() {
    markpos = pos;
}

bool ResourceInputStream::markSupported() {
    return true;
}

int ResourceInputStream::read() {
    if (resource->eor()) {
        pos = resourceSize;
        return -1;
    }
    pos++;
    return (int) resource->read();
}

void ResourceInputStream::reset() {
    resource->seek((Resource::ResourceSeekOrigin)0, markpos);
}

#endif /* USING_RESOURCE_LIBRARIES */

#endif /* __ARDUINO_IO_RESOURCE_INPUT_STREAM_CPP__ */
