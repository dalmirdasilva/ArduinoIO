#include <Wire.h>
#include <Closeable.h>
#include <OutputStream.h>
#include <ExternalEepromOutputStream.h> 
#include <ExternalEeprom.h>
#include <External24cl256Eeprom.h>

void setup() {
  Serial.begin(9600);
  long i;
  
  External24cl256Eeprom ee(0x50);
  ExternalEepromOutputStream eeos(&ee);

  Serial.print("Started at: ");
  Serial.println(millis());

  for (i = 0; i < ee.getDeviceSize(); i++) {
    eeos.write(0x00);
  }
  eeos.close();

  Serial.print("Finished at: ");
  Serial.println(millis());
}

void loop() {
}

