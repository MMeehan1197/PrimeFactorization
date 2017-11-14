################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Document.cpp \
../src/Node.cpp \
../src/PrimeLL.cpp \
../src/PrimeMain.cpp 

OBJS += \
./src/Document.o \
./src/Node.o \
./src/PrimeLL.o \
./src/PrimeMain.o 

CPP_DEPS += \
./src/Document.d \
./src/Node.d \
./src/PrimeLL.d \
./src/PrimeMain.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


