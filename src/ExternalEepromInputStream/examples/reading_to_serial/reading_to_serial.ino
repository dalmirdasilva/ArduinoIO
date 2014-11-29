#include <Wire.h>
#include <Closeable.h>
#include <InputStream.h>
#include <ExternalEepromInputStream.h> 
#include <ExternalEeprom.h>
#include <External24cl256Eeprom.h>

void setup() {
  Serial.begin(9600);
  
  External24cl256Eeprom ee(0x50);
  ExternalEepromInputStream eeis(&ee);

  Serial.print("Started at: ");
  Serial.println(millis());

  while (eeis.available()) {
    Serial.println(eeis.read(), HEX);
  }
  eeis.close();

  Serial.print("Finished at: ");
  Serial.println(millis());
}

void loop() {
}

