/**
 * Arduino IO
 * 
 * ResourceOutputStream
 *
 * A resource output stream is an output stream for writing data to a Resource.
 */

#ifndef __ARDUINO_IO_RESOURCE_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_RESOURCE_OUTPUT_STREAM_CPP__ 1

#include "ResourceOutputStream.h"

ResourceOutputStream::ResourceOutputStream(Resource* resource) : resource(resource) {
}

void ResourceOutputStream::close() {
    resource->close();
}

void ResourceOutputStream::write(unsigned char b) {
    resource->write(b);
}

#endif /* __ARDUINO_IO_RESOURCE_OUTPUT_STREAM_CPP__ */
