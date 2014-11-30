/**
 */

#ifndef __ARDUINO_IO_ARDUINO_H__
#define __ARDUINO_IO_ARDUINO_H__ 1

extern "C" {
  #include <stdlib.h>
  #include <time.h>
  #include <unistd.h>
}
#include <Serial.h>

typedef unsigned char word;

void randomSeed(unsigned int seed);

long random(long to);

long random(long from, long to);

long map(long x, long inMin, long inMax, long outMin, long outMax);

long analogRead(unsigned char port);

void delay(long millis);

void interrupts();

void noInterrupts();

#endif /* __ARDUINO_IO_ARDUINO_H__ */