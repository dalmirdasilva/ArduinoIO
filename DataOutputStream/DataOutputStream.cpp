/**
 * Arduino IO
 * 
 * DataOutputStream
 *
 * A data output stream lets an application write types to an OutputStream.
 */

#ifndef __ARDUINO_IO_DATA_OUTPUT_STREAM_CPP__
#define __ARDUINO_IO_DATA_OUTPUT_STREAM_CPP__ 1

#include "DataOutputStream.h"

DataOutputStream::DataOutputStream(OutputStream* outputStream) :
        outputStream(outputStream) {
}

void DataOutputStream::write(unsigned char* b, int len) {
    writeBytes(b, len);
}

void DataOutputStream::write(unsigned char b) {
    writeByte(b);
}

void DataOutputStream::writeByte(unsigned char b) {
    outputStream->write(b);
}

void DataOutputStream::writeBytes(unsigned char* b, int len) {
    for (int i = 0; i < len; i++) {
        outputStream->write(b[i]);
    }
}

void DataOutputStream::writeBoolean(bool v) {
    outputStream->write((unsigned char) v);
}

void DataOutputStream::writeChar(char c) {
    outputStream->write((unsigned char) c);
}

void DataOutputStream::writeUnsignedChar(unsigned char c) {
    outputStream->write((unsigned char) c);
}

void DataOutputStream::writeInt(int v) {
    outputStream->write((unsigned char) ((v >> 8) & 0xff));
    outputStream->write((unsigned char) (v & 0xff));
}

void DataOutputStream::writeUnsignedInt(unsigned int v) {
    writeInt((int) v);
}

void DataOutputStream::writeWord(word v) {
    writeInt((int) v);
}

void DataOutputStream::writeLong(long v) {
    outputStream->write((unsigned char) ((v >> 24) & 0xff));
    outputStream->write((unsigned char) ((v >> 16) & 0xff));
    outputStream->write((unsigned char) ((v >> 8) & 0xff));
    outputStream->write((unsigned char) (v & 0xff));
}

void DataOutputStream::writeUnsignedLong(unsigned long v) {
    writeLong((long) v);
}

void DataOutputStream::writeFloat(float v) {
    writeLong((long) v);
}

void DataOutputStream::writeDouble(double v) {
    writeLong((long) v);
}

#endif /* __ARDUINO_IO_DATA_OUTPUT_STREAM_CPP__ */
