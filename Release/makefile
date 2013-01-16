################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include WireOutputSream/subdir.mk
-include WireInputStream/subdir.mk
-include SoftwareSerialOutputStream/subdir.mk
-include SoftwareSerialInputStream/subdir.mk
-include SerialOutputStream/subdir.mk
-include SerialInputStream/subdir.mk
-include SeekableInputStream/subdir.mk
-include Seekable/subdir.mk
-include ResourceSeekableInputStream/subdir.mk
-include ResourceOutputStream/subdir.mk
-include ResourceInputStream/subdir.mk
-include RandomAccessResource/subdir.mk
-include RandomAccessExternalEeprom/subdir.mk
-include RandomAccessByteArray/subdir.mk
-include RandomAccess/subdir.mk
-include PgmspaceSeekableInputStream/subdir.mk
-include PgmspaceInputStream/subdir.mk
-include OutputStream/subdir.mk
-include InputStream/subdir.mk
-include HardwareSerialOutputStream/subdir.mk
-include HardwareSerialInputStream/subdir.mk
-include FilterOutputStream/subdir.mk
-include FilterInputStream/subdir.mk
-include ExternalEepromSeekableInputStream/subdir.mk
-include ExternalEepromOutputStream/subdir.mk
-include ExternalEepromInputStream/subdir.mk
-include DataOutputStream/subdir.mk
-include DataOutput/subdir.mk
-include DataInputStream/subdir.mk
-include DataInput/subdir.mk
-include Closeable/subdir.mk
-include ByteArraySeekableInputStream/subdir.mk
-include ByteArrayOutputStream/subdir.mk
-include ByteArrayInputStream/subdir.mk
-include BufferedOutputStream/subdir.mk
-include BufferedInputStream/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
libio.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: libio.a secondary-outputs

# Tool invocations
libio.a: $(OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR Archiver'
	avr-ar -r  "libio.a" $(OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

libio.lss: libio.a
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S libio.a  >"libio.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: libio.a
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p libio.a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(LSS)$(S_DEPS)$(CXX_DEPS)$(S_UPPER_DEPS)$(C++_DEPS)$(ASM_DEPS)$(CC_DEPS)$(ARCHIVES)$(CPP_DEPS)$(C_UPPER_DEPS)$(SIZEDUMMY) libio.a
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
