/**
 * Arduino IO
 * 
 * ResourceSeekableInputStream
 * 
 * A ResourceSeekableInputStream obtains input bytes from a resource in 
 * a file system that implements SeekableInputStream interface. 
 */

#ifndef __ARDUINO_IO_RESOURCE_SEEKABLE_INPUT_STREAM_CPP__
#define __ARDUINO_IO_RESOURCE_SEEKABLE_INPUT_STREAM_CPP__ 1

#if USING_RESOURCE_LIBRARIES

#include "ResourceSeekableInputStream.h"

ResourceSeekableInputStream::ResourceSeekableInputStream(Resource* resource) : ResourceInputStream(resource) {
}

void ResourceSeekableInputStream::seek(unsigned int pos) {
    resource->seek((Resource::ResourceSeekOrigin)0, pos);
}

#endif /* USING_RESOURCE_LIBRARIES */

#endif /* __ARDUINO_IO_RESOURCE_SEEKABLE_INPUT_STREAM_CPP__ */
