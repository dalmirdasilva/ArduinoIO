CC = g++
CFLAGS = -Wall -g -std=c++0x
INCLUDES = \
  -I ./BufferedOutputStream \
  -I ./BufferedInputStream \
  -I ./ByteArrayInputStream \
  -I ./ByteArrayOutputStream \
  -I ./ByteArraySeekableInputStream \
  -I ./Closeable \
  -I ./DataInput \
  -I ./DataInputStream \
  -I ./DataOutput \
  -I ./DataOutputStream \
  -I ./ExternalEepromInputStream \
  -I ./ExternalEepromOutputStream \
  -I ./ExternalEepromSeekableInputStream \
  -I ./FilterInputStream \
  -I ./FilterOutputStream \
  -I ./HardwareSerialInputStream \
  -I ./HardwareSerialOutputStream \
  -I ./InputStream \
  -I ./OutputStream \
  -I ./PgmspaceInputStream \
  -I ./PgmspaceSeekableInputStream \
  -I ./RandomAccess \
  -I ./RandomAccessByteArray \
  -I ./RandomAccessExternalEeprom \
  -I ./RandomAccessResource \
  -I ./ResourceInputStream \
  -I ./ResourceOutputStream \
  -I ./ResourceSeekableInputStream \
  -I ./Seekable \
  -I ./SeekableInputStream \
  -I ./SerialInputStream \
  -I ./SerialOutputStream \
  -I ./SoftwareSerialInputStream \
  -I ./SoftwareSerialOutputStream \
  -I ./WireInputStream \
  -I ./WireOutputStream \
  -I ../fake/ \
  -I ../ext/ \
  -I ../ext/ExternalEeprom \
  -I ../spec \
  -I ./

LFLAGS =
LIBRARIES = 
SOURCES = \
  BufferedOutputStream/BufferedOutputStream.cpp \
  BufferedInputStream/BufferedInputStream.cpp \
  ByteArrayInputStream/ByteArrayInputStream.cpp \
  ByteArrayOutputStream/ByteArrayOutputStream.cpp \
  ByteArraySeekableInputStream/ByteArraySeekableInputStream.cpp \
  Closeable/Closeable.cpp \
  DataInput/DataInput.cpp \
  DataInputStream/DataInputStream.cpp \
  DataOutput/DataOutput.cpp \
  DataOutputStream/DataOutputStream.cpp \
  ExternalEepromInputStream/ExternalEepromInputStream.cpp \
  ExternalEepromOutputStream/ExternalEepromOutputStream.cpp \
  ExternalEepromSeekableInputStream/ExternalEepromSeekableInputStream.cpp \
  FilterInputStream/FilterInputStream.cpp \
  FilterOutputStream/FilterOutputStream.cpp \
  HardwareSerialInputStream/HardwareSerialInputStream.cpp \
  HardwareSerialOutputStream/HardwareSerialOutputStream.cpp \
  InputStream/InputStream.cpp \
  OutputStream/OutputStream.cpp \
  PgmspaceInputStream/PgmspaceInputStream.cpp \
  PgmspaceSeekableInputStream/PgmspaceSeekableInputStream.cpp \
  RandomAccess/RandomAccess.cpp \
  RandomAccessByteArray/RandomAccessByteArray.cpp \
  RandomAccessExternalEeprom/RandomAccessExternalEeprom.cpp \
  RandomAccessResource/RandomAccessResource.cpp \
  ResourceInputStream/ResourceInputStream.cpp \
  ResourceOutputStream/ResourceOutputStream.cpp \
  ResourceSeekableInputStream/ResourceSeekableInputStream.cpp \
  Seekable/Seekable.cpp \
  SeekableInputStream/SeekableInputStream.cpp \
  SerialInputStream/SerialInputStream.cpp \
  SerialOutputStream/SerialOutputStream.cpp \
  SoftwareSerialInputStream/SoftwareSerialInputStream.cpp \
  SoftwareSerialOutputStream/SoftwareSerialOutputStream.cpp \
  WireInputStream/WireInputStream.cpp \
  WireOutputStream/WireOutputStream.cpp \
  Arduino.cpp \
  ../spec/Asserter.cpp \
  ../fake/Wire.cpp \
  ../fake/Serial.cpp \
  spec.cpp

OBJECTS = $(SOURCES:.cpp=.o)
MAIN = spec_bin

.PHONY: depend clean

all: $(MAIN)
	@echo  Arduino IO

$(MAIN): $(OBJECTS) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJECTS) $(LFLAGS) $(LIBRARIES)

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) *.o *~ spec/*.o spec/*~ $(MAIN)

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it


