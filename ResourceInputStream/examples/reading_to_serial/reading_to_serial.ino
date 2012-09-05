#include <Wire.h>
#include <ExternalEeprom.h>
#include <External24cl256Eeprom.h>
#include <rs.h>
#include <rs_util.h>
#include <rs_io.h>
#include <rs_init_partition.h>
#include <Resource.h>
#include <ResourceIO.h>
#include <ResourceSystem.h>
#include <SimpleResource.h>
#include <SimpleResourceIO.h>
#include <SimpleResourceSystem.h>
#include <SimpleExternalEepromResourceIO.h>
#include <Closeable.h>
#include <InputStream.h>
#include <ResourceInputStream.h> 

rs_global_flags_t rs_global_flags;
SimpleResourceIO* SimpleResourceIO::association[RESOURCE_IO_DRIVERS_NUM];

void setup() {
  Serial.begin(9600);
  
  SimpleResourceSystem resourceSystem(RS_DRIVER_ARDUINO_EEPROM);
  External24cl256Eeprom eeprom(0x04);
  SimpleExternalEepromResourceIO io(&eeprom);
  SimpleResourceIO::associateIO(&io, RS_DRIVER_ARDUINO_EEPROM);

  Serial.print("Started at: ");
  Serial.println(millis());

  Serial.print("Monting... ");
  if (resourceSystem.mount(ResourceSystem::MOUNT_READ_ONLY)) {
    Serial.println("done.");
  } else {
    Serial.print("fail. Last operation result: ");
    Serial.println((int)resourceSystem.getLastOperationResult());
    return;
  }
  
  SimpleResource sr = resourceSystem.getResourceByCode(0);

  if (!sr.open(Resource::OPEN_READ_ONLY)) {
    Serial.print("Cannot open resource. Error: ");
    Serial.println((int)sr.getLastOperationResult());
    return;
  }
  
  ResourceInputStream ris(&sr);
  
  Serial.print("Size: ");
  Serial.println(sr.size());
  
  if (sr.size() > 0) {
    while (ris.available()) {
      Serial.println(ris.read(), HEX);
    }
  }
  ris.close();

  Serial.print("Umonting... ");
  if (resourceSystem.umount()) {
    Serial.println("done.");
  } else {
    Serial.print("fail. Last operation result: ");
    Serial.println((int)resourceSystem.getLastOperationResult());
    return;
  }

  Serial.print("Finished at: ");
  Serial.println(millis());
}

void loop() {
}

