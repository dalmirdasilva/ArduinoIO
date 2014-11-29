/**
 */

#ifndef __ARDUINO_IO_FAKE_WIRE_H__
#define __ARDUINO_IO_FAKE_WIRE_H__ 1

class FakeWire {

public:

  void begin(unsigned int boundRate) {
  }

  int beginTransmission(unsigned char address) {
    return 1;
  }

  void endTransmission() {
  }

  void requestFrom(unsigned char address, int len){
  }

  int read() {
    return 1;
  }

  int write(unsigned char b) {
    return 1;
  }

  int available() {
    return 0;
  }
};

extern FakeWire Wire;

#endif /* __ARDUINO_IO_FAKE_WIRE_H__ */