################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../RandomAccessByteArray/RandomAccessByteArray.cpp 

OBJS += \
./RandomAccessByteArray/RandomAccessByteArray.o 

CPP_DEPS += \
./RandomAccessByteArray/RandomAccessByteArray.d 


# Each subdirectory must supply rules for building sources it contributes
RandomAccessByteArray/%.o: ../RandomAccessByteArray/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/work/opensource/personal/microcontroller/arduino/core/ArduinoCore" -I"/work/opensource/personal/microcontroller/arduino/core/ArduinoCore/libraries/SoftwareSerial" -I"/work/opensource/personal/microcontroller/arduino/core/ArduinoCore/libraries/Wire" -I"/work/opensource/personal/microcontroller/arduino/core/ArduinoCore/variants/standard" -I"/work/opensource/personal/microcontroller/arduino/driver/memory" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/External24cl256Eeprom" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/External24x16Eeprom" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/ExternalByteArrayEeprom" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/ExternalEeprom" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/ExternalFileEeprom" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/ExternalMappedEeprom" -I"/work/opensource/personal/microcontroller/arduino/library/io/BufferedInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/BufferedOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/ByteArrayInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/ByteArrayOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/ByteArraySeekableInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/Closeable" -I"/work/opensource/personal/microcontroller/arduino/library/io/DataInput" -I"/work/opensource/personal/microcontroller/arduino/library/io/DataInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/DataOutput" -I"/work/opensource/personal/microcontroller/arduino/library/io/DataOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/ExternalEepromInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/ExternalEepromOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/ExternalEepromSeekableInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/FilterInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/FilterOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/HardwareSerialInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/HardwareSerialOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/InputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/nbproject" -I"/work/opensource/personal/microcontroller/arduino/library/io/OutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/PgmspaceInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/PgmspaceSeekableInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/RandomAccess" -I"/work/opensource/personal/microcontroller/arduino/library/io/RandomAccessByteArray" -I"/work/opensource/personal/microcontroller/arduino/library/io/RandomAccessExternalEeprom" -I"/work/opensource/personal/microcontroller/arduino/library/io/RandomAccessResource" -I"/work/opensource/personal/microcontroller/arduino/library/io/Release" -I"/work/opensource/personal/microcontroller/arduino/library/io/ResourceInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/ResourceOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/ResourceSeekableInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/Seekable" -I"/work/opensource/personal/microcontroller/arduino/library/io/SeekableInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/SerialInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/SerialOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/SoftwareSerialInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/SoftwareSerialOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/WireInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/WireOutputStream" -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


