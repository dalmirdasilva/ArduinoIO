/**
 */

#include <ByteArrayOutputStreamSpec.h>
#include <ByteArrayOutputStream.h>
#include <Asserter.h>

void ByteArrayOutputStreamSpec::run() {
  resetSpec();
  sizeSpec();
  toByteArraySpec();
  writeSpec();
}

void ByteArrayOutputStreamSpec::resetSpec() {
  unsigned int size = 100;
  unsigned char byteArray[size];
  ByteArrayOutputStream baos = ByteArrayOutputStream((unsigned char *) byteArray, size);
  baos.write(0x22);
  baos.reset();
  baos.write(0x11);
  Asserter::assertEqual(byteArray[0], 0x11, "resetSpec: It should reset the stream.");
}

void ByteArrayOutputStreamSpec::sizeSpec() {
}

void ByteArrayOutputStreamSpec::toByteArraySpec() {
}

void ByteArrayOutputStreamSpec::writeSpec() {
}


08.666.222/0001-50
08.666.222/0001-50