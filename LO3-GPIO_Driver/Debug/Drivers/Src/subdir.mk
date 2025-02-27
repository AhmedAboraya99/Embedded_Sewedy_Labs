################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Src/GPIO_STM32F401xx.c 

OBJS += \
./Drivers/Src/GPIO_STM32F401xx.o 

C_DEPS += \
./Drivers/Src/GPIO_STM32F401xx.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Src/%.o Drivers/Src/%.su Drivers/Src/%.cyclo: ../Drivers/Src/%.c Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"C:/Users/Ahmed.AboRaya/STM32CubeIDE/workspace_1.17.0/LED/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-Src

clean-Drivers-2f-Src:
	-$(RM) ./Drivers/Src/GPIO_STM32F401xx.cyclo ./Drivers/Src/GPIO_STM32F401xx.d ./Drivers/Src/GPIO_STM32F401xx.o ./Drivers/Src/GPIO_STM32F401xx.su

.PHONY: clean-Drivers-2f-Src

