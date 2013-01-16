/**
 * Araduino IO
 * 
 * RandomAccessResource
 * 
 * Instances of this class support both reading and writing to a random access 
 * resource. A random access resource behaves like a large array of bytes 
 * stored in the resource system.
 */

#ifndef __ARDUINO_IO_RANDOM_ACCESS_RESOURCE_CPP__
#define __ARDUINO_IO_RANDOM_ACCESS_RESOURCE_CPP__ 1

#if USING_RESOURCE_LIBRARIES

#include "RandomAccessResource.h"

RandomAccessResource::RandomAccessResource(Resource* resource) : resource(resource) {
}

unsigned int RandomAccessResource::length() {
    return (unsigned int) resource->size();
}

void RandomAccessResource::seek(unsigned int pos) {
    resource->seek(0, pos);
}

void RandomAccessResource::close() {
    resource->close();
}

void RandomAccessResource::write(unsigned char* b, int len) {
    writeBytes(b, len);
}

void RandomAccessResource::write(unsigned char b) {
    writeByte(b);
}

void RandomAccessResource::writeByte(unsigned char b) {
    resource->write(b);
}

void RandomAccessResource::writeBytes(unsigned char* b, int len) {
    for (int i = 0; i < len; i++) {
        resource->write(b[i]);
    }
}

void RandomAccessResource::writeBoolean(bool v) {
    resource->write((unsigned char) v);
}

void RandomAccessResource::writeChar(char c) {
    resource->write((unsigned char) c);
}

void RandomAccessResource::writeUnsignedChar(unsigned char c) {
    resource->write((unsigned char) c);
}

void RandomAccessResource::writeInt(int v) {
    resource->write((unsigned char) ((v >> 8) & 0xff));
    resource->write((unsigned char) (v & 0xff));
}

void RandomAccessResource::writeUnsignedInt(unsigned int v) {
    writeInt((int) v);
}

void RandomAccessResource::writeWord(word v) {
    writeInt((int) v);
}

void RandomAccessResource::writeLong(long v) {
    resource->write((unsigned char) ((v >> 24) & 0xff));
    resource->write((unsigned char) ((v >> 16) & 0xff));
    resource->write((unsigned char) ((v >> 8) & 0xff));
    resource->write((unsigned char) (v & 0xff));
}

void RandomAccessResource::writeUnsignedLong(unsigned long v) {
    writeLong((long) v);
}

void RandomAccessResource::writeFloat(float v) {
    writeLong((long) v);
}

void RandomAccessResource::writeDouble(double v) {
    writeLong((long) v);
}

unsigned char RandomAccessResource::readByte() {
    return (unsigned char) resource->read();
}

bool RandomAccessResource::readBoolean() {
    return (bool) resource->read();
}

char RandomAccessResource::readChar() {
    return (char) resource->read();
}

unsigned char RandomAccessResource::readUnsignedChar() {
    return (unsigned char) resource->read();
}

int RandomAccessResource::readInt() {
    int v = 0;
    v = resource->read();
    v <<= 8;
    v |= (resource->read() & 0xff);
    return v;
}

unsigned int RandomAccessResource::readUnsignedInt() {
    return (unsigned int) readInt();
}

word RandomAccessResource::readWord() {
    return (word) readInt();
}

long RandomAccessResource::readLong() {
    long v = 0;
    v = resource->read();
    v <<= 8;
    v |= (resource->read() & 0xff);
    v <<= 8;
    v |= (resource->read() & 0xff);
    v <<= 8;
    v |= (resource->read() & 0xff);
    return v;
}

unsigned long RandomAccessResource::readUnsignedLong() {
    return (unsigned long) readLong();
}

float RandomAccessResource::readFloat() {
    return (float) readLong();
}

double RandomAccessResource::readDouble() {
    return (double) readLong();
}

void RandomAccessResource::readFully(unsigned char* b, int len) {
    for (int i = 0; i < len; i++) {
        b[i] = resource->read();
    }
}

unsigned int RandomAccessResource::skipBytes(unsigned int n) {
    unsigned int pos;
    unsigned int len;
    unsigned int newpos;
    pos = (unsigned int) resource->tell();
    len = resource->size();
    newpos = pos + n;
    if (newpos > len) {
        newpos = len;
    }
    seek(newpos);
    return (unsigned int) (newpos - pos);
}

#endif /* USING_RESOURCE_LIBRARIES */

#endif /* __ARDUINO_IO_RANDOM_ACCESS_RESOURCE_CPP__ */
