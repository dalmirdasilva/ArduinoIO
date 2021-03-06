#include <avr/pgmspace.h>
#include <Closeable.h>
#include <Seekable.h>
#include <InputStream.h>
#include <SeekableInputStream.h>
#include <PgmspaceInputStream.h>
#include <PgmspaceSeekableInputStream.h>

prog_char font[] PROGMEM  = {
  0x0, 0x5, 0x8, 0x9, 0x20, 0x21, 0x0, 0x28, 0x44, 0x44, 0x0, 0x32, 0x53, 0x53, 0x0, 0x37, 0x61, 0x61, 0x0, 0x3c, 0x64, 0x64, 0x0, 0x41, 0x69, 0x69, 0x0, 0x46, 0x6c, 0x6d, 0x0, 0x4b, 0x72, 0x72, 0x0, 0x55, 0x76, 0x76, 0x0, 0x5a,
  0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0xfa, 0x60, 0x0, 0xfe, 0x82, 0x82, 0x82, 0x7c, 0x64, 0x92, 0x92, 0x92, 0x4c, 0x4, 0x2a, 0x2a, 0x2a, 0x1e, 0x1c, 0x22, 0x22, 0x22, 0xfe, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x2, 0x0, 0x3e, 0x20, 0x18, 0x20, 0x1e, 0x22, 0x1e, 0x22, 0x20, 0x10, 0x38, 0x4, 0x2, 0x4, 0x38
};
  
void setup() {
  
  Serial.begin(9600);
  PgmspaceSeekableInputStream is(font, sizeof(font));
  
  while (is.available()) {
    Serial.println(is.read());
  }
}

void loop() {

}

