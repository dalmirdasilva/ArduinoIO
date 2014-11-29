/**
 */

#ifndef __ARDUINO_IO_FAKE_SERIAL_H__
#define __ARDUINO_IO_FAKE_SERIAL_H__ 1

class FakeSerial {

public:
  void begin(unsigned int boundRate);

  int read();

  int write(unsigned char b);

  int available();
};

extern FakeSerial Serial;

#endif /* __ARDUINO_IO_FAKE_SERIAL_H__ */