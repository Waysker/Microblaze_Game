################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/objects/ball.c \
../src/objects/game.c \
../src/objects/player.c 

OBJS += \
./src/objects/ball.o \
./src/objects/game.o \
./src/objects/player.o 

C_DEPS += \
./src/objects/ball.d \
./src/objects/game.d \
./src/objects/player.d 


# Each subdirectory must supply rules for building sources it contributes
src/objects/%.o: ../src/objects/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MicroBlaze gcc compiler'
	mb-gcc -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -I../../Game_bsp/microblaze_0/include -mlittle-endian -mcpu=v11.0 -mxl-soft-mul -Wl,--no-relax -ffunction-sections -fdata-sections -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


