################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../SerialOutputStream/SerialOutputStream.cpp 

OBJS += \
./SerialOutputStream/SerialOutputStream.o 

CPP_DEPS += \
./SerialOutputStream/SerialOutputStream.d 


# Each subdirectory must supply rules for building sources it contributes
SerialOutputStream/%.o: ../SerialOutputStream/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/storage/microcontroller/arduino/driver/memory/ExternalEeprom" -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/hardware/arduino/cores/arduino -I"/storage/microcontroller/arduino/library/io/BufferedInputStream" -I"/storage/microcontroller/arduino/library/io/BufferedOutputStream" -I"/storage/microcontroller/arduino/library/io/ByteArrayInputStream" -I"/storage/microcontroller/arduino/library/io/ByteArrayOutputStream" -I"/storage/microcontroller/arduino/library/io/ByteArraySeekableInputStream" -I"/storage/microcontroller/arduino/library/io/Closeable" -I"/storage/microcontroller/arduino/library/io/DataInput" -I"/storage/microcontroller/arduino/library/io/DataInputStream" -I"/storage/microcontroller/arduino/library/io/DataOutput" -I"/storage/microcontroller/arduino/library/io/DataOutputStream" -I"/storage/microcontroller/arduino/library/io/ExternalEepromInputStream" -I"/storage/microcontroller/arduino/library/io/ExternalEepromOutputStream" -I"/storage/microcontroller/arduino/library/io/ExternalEepromSeekableInputStream" -I"/storage/microcontroller/arduino/library/io/FilterInputStream" -I"/storage/microcontroller/arduino/library/io/FilterOutputStream" -I"/storage/microcontroller/arduino/library/io/HardwareSerialInputStream" -I"/storage/microcontroller/arduino/library/io/HardwareSerialOutputStream" -I"/storage/microcontroller/arduino/library/io/InputStream" -I"/storage/microcontroller/arduino/library/io/OutputStream" -I"/storage/microcontroller/arduino/library/io/PgmspaceInputStream" -I"/storage/microcontroller/arduino/library/io/PgmspaceSeekableInputStream" -I"/storage/microcontroller/arduino/library/io/RandomAccess" -I"/storage/microcontroller/arduino/library/io/RandomAccessByteArray" -I"/storage/microcontroller/arduino/library/io/RandomAccessExternalEeprom" -I"/storage/microcontroller/arduino/library/io/RandomAccessResource" -I"/storage/microcontroller/arduino/library/io/ResourceInputStream" -I"/storage/microcontroller/arduino/library/io/ResourceOutputStream" -I"/storage/microcontroller/arduino/library/io/ResourceSeekableInputStream" -I"/storage/microcontroller/arduino/library/io/Seekable" -I"/storage/microcontroller/arduino/library/io/SeekableInputStream" -I"/storage/microcontroller/arduino/library/io/SerialInputStream" -I"/storage/microcontroller/arduino/library/io/SerialOutputStream" -I"/storage/microcontroller/arduino/library/io/SoftwareSerialInputStream" -I"/storage/microcontroller/arduino/library/io/SoftwareSerialOutputStream" -I"/storage/microcontroller/arduino/library/io/WireInputStream" -I"/storage/microcontroller/arduino/library/io/WireOutputSream" -Wall -Os -fpack-struct -fshort-enums -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


