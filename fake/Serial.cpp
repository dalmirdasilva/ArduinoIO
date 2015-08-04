/**
 */

#ifndef __ARDUINO_IO_FAKE_SERIAL_CPP__
#define __ARDUINO_IO_FAKE_SERIAL_CPP__ 1

#include <Serial.h>

void FakeSerial::begin(unsigned int boundRate) {
}

int FakeSerial::read() {
  return 1;
}

int FakeSerial::write(unsigned char b) {
  return b;
}

int FakeSerial::available() {
  return 0;
}

FakeSerial Serial = FakeSerial();

#endif /* __ARDUINO_IO_FAKE_SERIAL_CPP__ */