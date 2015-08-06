#include <Wire.h>
#include <Closeable.h>
#include <InputStream.h>
#include <OutputStream.h>
#include <SerialInputStream.h>
#include <SerialOutputStream.h>
#include <HardwareSerialInputStream.h>
#include <HardwareSerialOutputStream.h>


void setup() {
  
  HardwareSerialInputStream sis(9600);
  HardwareSerialOutputStream sos(9600);

  while (true) {
    if (sis.available()) {
      sos.write(sis.read());
    }
  }
}

void loop() {
  
}
