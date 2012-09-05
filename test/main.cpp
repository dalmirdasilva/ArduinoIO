#include <stdint.h>
#include <stdio.h>
typedef uint16_t word;

#include <Closeable.cpp>
#include <Seekable.cpp>
#include <DataInput.cpp>
#include <DataOutput.cpp>
#include <InputStream.cpp>
#include <OutputStream.cpp>
#include <DataInputStream.cpp>
#include <DataOutputStream.cpp>
#include <ByteArrayInputStream.cpp>
#include <ByteArrayOutputStream.cpp>
#include <SeekableInputStream.cpp>
#include <RandomAccess.cpp>
//#include <ResourceInputStream.cpp>
//#include <ResourceOutputStream.cpp>
#include <RandomAccessByteArray.cpp>
//#include <ResourceSeekableInputStream.cpp>
#include <ByteArraySeekableInputStream.cpp>
//#include <RandomAccessResource.cpp>
#include <ExternalEeprom.cpp>
#include <ExternalByteArrayEeprom.cpp>
#include <ExternalEepromInputStream.cpp>
#include <ExternalEepromOutputStream.cpp>
#include <RandomAccessExternalEeprom.cpp>

void testByteArrayOutputStream() {
    bool error = false;
    unsigned char byteArray[100];
    ByteArrayOutputStream baos(byteArray, 100);
    baos.write(1);
    baos.write(2);
    baos.write(3);
    baos.write(4);
    baos.write(5);
    if (byteArray[0] != 1 || byteArray[3] != 4 || byteArray[4] != 5) {
        error = 1;
    }
    baos.reset();
    baos.write(5);
    if (byteArray[0] != 5) {
        error = 1;
    }
    if (error) {
        printf("(F) ByteArrayOutputStream failed.\n");
    } else {
        printf("(*) ByteArrayOutputStream passed.\n");
    }
}

void testDataOutputStream() {
    bool error = false;
    unsigned char byteArray[100];
    for (int i = 0; i < 100; i++) {
        byteArray[i] = 0x00;
    }
    ByteArrayOutputStream baos(byteArray, 100);
    DataOutputStream dos(&baos);
    dos.writeInt(0xfdef);
    if (byteArray[0] != 0xfd || byteArray[1] != 0xef || byteArray[2] != 0x00) {
        error = true;
    }
    dos.writeFloat(0x00112233);
    if (byteArray[2] != 0x00 || byteArray[4] != 0x22 || byteArray[5] != 0x33) {
        error = true;
    }
    dos.writeByte(0xff);
    if (byteArray[6] != 0xff) {
        error = true;
    }
    dos.writeUnsignedChar(0xdd);
    dos.writeChar(0x99);
    if (byteArray[7] != 0xdd || byteArray[8] != 0x99) {
        error = true;
    }
    if (error) {
        printf("(F) DataOutputStream failed.\n");
    } else {
        printf("(*) DataOutputStream passed.\n");
    }
}

void testExternalEepromInputStream() {
    unsigned int i;
    bool error = false;
    unsigned char byteArray[0xff];
    unsigned char r1, r2, r3, r4[3];
    for (i = 0; i < 0xff; i++) {
        byteArray[i] = i;
    }
    ExternalByteArrayEeprom eve(byteArray, 0xff);
    ExternalEepromInputStream eeis(&eve);
    r1 = eeis.read();
    r2 = eeis.read();
    r3 = eeis.read();
    if (r1 != 0x00 && r2 != 0x02 && r3 != 0x02) {
        error = true;
    }
    if(eeis.skip(0xf0) != 0xf0) {
        error = true;
    }
    if (!eeis.markSupported()) {
        error = true;
    }
    eeis.mark();
    r1 = eeis.read();
    r2 = eeis.read();
    r3 = eeis.read();
    if (r1 != 0xf3 && r2 != 0xf4 && r3 != 0xf5) {
        error = true;
    }
    eeis.skip(10);
    eeis.reset();
    r1 = eeis.read();
    r2 = eeis.read();
    r3 = eeis.read();
    if (r1 != 0xf3 && r2 != 0xf4 && r3 != 0xf5) {
        error = true;
    }
    eeis.read((unsigned char*)r4, 3);
    if (r4[0] != 0xf6 && r4[1] != 0xf7 && r4[2] != 0xf8) {
        error = true;
    }
    if (error) {
        printf("(F) ExternalEepromInputStream failed.\n");
    } else {
        printf("(*) ExternalEepromInputStream passed.\n");
    }
}

void testExternalEepromOutputStream() {
    unsigned int i;
    bool error = false;
    unsigned char byteArray[0xff];
    unsigned char r1, r2, r3, r4[3];
    for (i = 0; i < 0xff; i++) {
        byteArray[i] = 0;
    }
    ExternalByteArrayEeprom eve(byteArray, 0xff);
    ExternalEepromOutputStream eeos(&eve);
    eeos.write(0xff);
    eeos.write(0x99);
    eeos.write(0x44);
    if (byteArray[0] != 0xff && byteArray[1] != 0x99 && byteArray[2] != 0x44) {
        error = true;
    }
    r4[0] = 0xaa;
    r4[1] = 0xab;
    r4[2] = 0xac;
    eeos.write(r4, 3);
    if (byteArray[3] != 0xaa && byteArray[4] != 0xab && byteArray[5] != 0xac) {
        error = true;
    }
    if (error) {
        printf("(F) ExternalEepromOutputStream failed.\n");
    } else {
        printf("(*) ExternalEepromOutputStream passed.\n");
    }
}

int main() {
    testByteArrayOutputStream();
    testDataOutputStream();
    testExternalEepromInputStream();
    testExternalEepromOutputStream();
    return 0;
}
