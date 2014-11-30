/**
 */

#ifndef __ARDUINO_IO_FAKE_SOFTWARE_SERIAL_H__
#define __ARDUINO_IO_FAKE_SOFTWARE_SERIAL_H__ 1

class SoftwareSerial {

public:
  void begin(unsigned int boundRate) {
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

#endif /* __ARDUINO_IO_FAKE_SOFTWARE_SERIAL_H__ */