#include <Wire.h>
#include <Closeable.h>
#include <Seekable.h>
#include <InputStream.h>
#include <SeekableInputStream.h>
#include <ExternalEepromInputStream.h> 
#include <ExternalEepromSeekableInputStream.h>
#include <ExternalEeprom.h>
#include <External24cl256Eeprom.h>

void setup() {
  Serial.begin(9600);
  long i;
  
  External24cl256Eeprom ee(0x50);
  ExternalEepromSeekableInputStream eeis(&ee);

  Serial.print("Started at: ");
  Serial.println(millis());

  Serial.println("reading 0xff bytes.");
  for (i = 0; i < 0xff; i++) {
    Serial.println(eeis.read(), HEX);
  }

  Serial.println("seeking to 0x0f and read more 0xff bytes.");
  eeis.seek(0x0f);

  for (i = 0; i < 0xff; i++) {
    Serial.println(eeis.read(), HEX);
  }

  eeis.close();

  Serial.print("Finished at: ");
  Serial.println(millis());
}

void loop() {
}

