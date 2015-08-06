################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/WireInputStream/WireInputStream.cpp 

OBJS += \
./src/WireInputStream/WireInputStream.o 

CPP_DEPS += \
./src/WireInputStream/WireInputStream.d 


# Each subdirectory must supply rules for building sources it contributes
src/WireInputStream/%.o: ../src/WireInputStream/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/work/opensource/personal/microcontroller/arduino/core/ArduinoCore" -I"/work/opensource/personal/microcontroller/arduino/library/io/spec" -I"/work/opensource/personal/microcontroller/arduino/core/ArduinoCore/libraries/SoftwareSerial" -I"/work/opensource/personal/microcontroller/arduino/core/ArduinoCore/libraries/Wire" -I"/work/opensource/personal/microcontroller/arduino/core/ArduinoCore/variants/standard" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/BufferedInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/BufferedOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/ByteArrayInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/ByteArrayOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/ByteArraySeekableInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/Closeable" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/DataInput" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/DataInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/DataOutput" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/DataOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/ExternalEepromInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/ExternalEepromOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/ExternalEepromSeekableInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/FilterInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/FilterOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/HardwareSerialInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/HardwareSerialOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/InputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/OutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/PgmspaceInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/PgmspaceSeekableInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/RandomAccess" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/RandomAccessByteArray" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/RandomAccessExternalEeprom" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/RandomAccessResource" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/ResourceInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/ResourceOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/ResourceSeekableInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/Seekable" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/SeekableInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/SerialInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/SerialOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/SoftwareSerialInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/SoftwareSerialOutputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/WireInputStream" -I"/work/opensource/personal/microcontroller/arduino/library/io/src/WireOutputStream" -I"/work/opensource/personal/microcontroller/arduino/driver/memory" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/External24cl256Eeprom" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/External24x16Eeprom" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/ExternalByteArrayEeprom" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/ExternalEeprom" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/ExternalFileEeprom" -I"/work/opensource/personal/microcontroller/arduino/driver/memory/ExternalMappedEeprom" -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


