ARDUINO_LIB_PATH=/usr/share/arduino/libraries
LIB_LIST=BufferedInputStream \
	src/DataOutput \
	src/FilterInputStream \
	src/RandomAccessExternalEeprom \
	src/BufferedOutputStream \
	src/DataOutputStream \
	src/FilterOutputStream \
	src/RandomAccessResource \
	src/ByteArrayInputStream \
	src/InputStream \
	src/ResourceInputStream \
	src/ByteArrayOutputStream \
	src/ResourceOutputStream \
	src/ByteArraySeekableInputStream \
	src/ResourceSeekableInputStream \
	src/Closeable \
	src/ExternalEepromInputStream \
	src/OutputStream \
	src/Seekable \
	src/DataInput \
	src/ExternalEepromOutputStream \
	src/RandomAccess \
	src/SeekableInputStream \
	src/DataInputStream \
	src/ExternalEepromSeekableInputStream \
	src/RandomAccessByteArray \
	src/SerialInputStream \
	src/SoftwareSerialInputStream \
	src/SerialOutputStream \
	src/SoftwareSerialOutputStream \
	src/HardwareSerialOutputStream \
	src/HardwareSerialInputStream \
	src/PgmspaceInputStream \
	src/PgmspaceSeekableInputStream \
	src/WireInputStream \
	src/WireOutputStream
SOURCE_PATH=`pwd`

all: 
	@echo "Use [install], [unistall] or [doc]"

install:
	@echo "Instaling all libraries..."
	@for lib in $(LIB_LIST) ; do \
		ln -s  $(SOURCE_PATH)/$$lib $(ARDUINO_LIB_PATH); \
	done
	@echo "done."
	
uninstall:
	@echo "Uninstaling all libraries..."
	@for lib in $(LIB_LIST) ; do \
		rm -r $(ARDUINO_LIB_PATH)/$$lib ; \
	done
	@echo "done."
		
doc:
	@echo "Running doxygen..."
	@rm -rf doc
	@mkdir doc
	doxygen doxygen.conf
	@echo "done."
	
	
