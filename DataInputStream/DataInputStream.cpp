/**
 * Arduino IO
 * 
 * DataInputStream
 *
 * A data input stream lets an application read data from a InputStream.
 */

#ifndef __ARDUINO_IO_DATA_INPUT_STREAM_CPP__
#define __ARDUINO_IO_DATA_INPUT_STREAM_CPP__ 1

#include "DataInputStream.h"

DataInputStream::DataInputStream(InputStream* inputStream) :
        inputStream(inputStream) {
}

unsigned char DataInputStream::readByte() {
    return (unsigned char) inputStream->read();
}

bool DataInputStream::readBoolean() {
    return (bool) inputStream->read();
}

char DataInputStream::readChar() {
    return (char) inputStream->read();
}

unsigned char DataInputStream::readUnsignedChar() {
    return (unsigned char) inputStream->read();
}

int DataInputStream::readInt() {
    int v = 0;
    readFully((unsigned char *) &v, sizeof(int));
    return v;
}

unsigned int DataInputStream::readUnsignedInt() {
    return (unsigned int) readInt();
}

word DataInputStream::readWord() {
    return (word) readInt();
}

long DataInputStream::readLong() {
    long v = 0;
    readFully((unsigned char *) &v, sizeof(long));
    return v;
}

unsigned long DataInputStream::readUnsignedLong() {
    return (unsigned long) readLong();
}

float DataInputStream::readFloat() {
    float v = 0;
    readFully((unsigned char *) &v, sizeof(float));
    return v;
}

double DataInputStream::readDouble() {
    return (double) readLong();
}

void DataInputStream::readFully(unsigned char* b, int len) {
    for (int i = 0; i < len; i++) {
        b[i] = inputStream->read();
    }
}

unsigned int DataInputStream::skipBytes(unsigned int n) {
    return inputStream->skip(n);
}

#endif /* __ARDUINO_IO_DATA_INPUT_STREAM_CPP__ */
