################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/GPIO_Prog.c \
../Src/RCC_Prog.c \
../Src/croutine.c \
../Src/event_groups.c \
../Src/heap_4.c \
../Src/list.c \
../Src/main.c \
../Src/port.c \
../Src/queue.c \
../Src/stream_buffer.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/tasks.c \
../Src/timers.c 

OBJS += \
./Src/GPIO_Prog.o \
./Src/RCC_Prog.o \
./Src/croutine.o \
./Src/event_groups.o \
./Src/heap_4.o \
./Src/list.o \
./Src/main.o \
./Src/port.o \
./Src/queue.o \
./Src/stream_buffer.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/tasks.o \
./Src/timers.o 

C_DEPS += \
./Src/GPIO_Prog.d \
./Src/RCC_Prog.d \
./Src/croutine.d \
./Src/event_groups.d \
./Src/heap_4.d \
./Src/list.d \
./Src/main.d \
./Src/port.d \
./Src/queue.d \
./Src/stream_buffer.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/tasks.d \
./Src/timers.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/GPIO_Prog.cyclo ./Src/GPIO_Prog.d ./Src/GPIO_Prog.o ./Src/GPIO_Prog.su ./Src/RCC_Prog.cyclo ./Src/RCC_Prog.d ./Src/RCC_Prog.o ./Src/RCC_Prog.su ./Src/croutine.cyclo ./Src/croutine.d ./Src/croutine.o ./Src/croutine.su ./Src/event_groups.cyclo ./Src/event_groups.d ./Src/event_groups.o ./Src/event_groups.su ./Src/heap_4.cyclo ./Src/heap_4.d ./Src/heap_4.o ./Src/heap_4.su ./Src/list.cyclo ./Src/list.d ./Src/list.o ./Src/list.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/port.cyclo ./Src/port.d ./Src/port.o ./Src/port.su ./Src/queue.cyclo ./Src/queue.d ./Src/queue.o ./Src/queue.su ./Src/stream_buffer.cyclo ./Src/stream_buffer.d ./Src/stream_buffer.o ./Src/stream_buffer.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su ./Src/tasks.cyclo ./Src/tasks.d ./Src/tasks.o ./Src/tasks.su ./Src/timers.cyclo ./Src/timers.d ./Src/timers.o ./Src/timers.su

.PHONY: clean-Src

