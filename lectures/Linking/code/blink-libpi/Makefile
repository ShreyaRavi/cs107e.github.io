APPLICATION = blink
MODULES = timer.o gpio.o

CFLAGS = -Og -Wall -std=c99 -ffreestanding
ASFLAGS = --warn --fatal-warnings
LDFLAGS = -nostdlib -T memmap

all : $(APPLICATION).bin

%.bin: %.elf
	arm-none-eabi-objcopy $< -O binary $@

%.elf: %.o libpi.a
	arm-none-eabi-ld $(LDFLAGS) $^ -o $@

libpi.a: $(MODULES) cstart.o start.o
	arm-none-eabi-ar crf $@ $^

%.o: %.c
	arm-none-eabi-gcc $(CFLAGS) -c $< -o $@

%.o: %.s
	arm-none-eabi-as $(ASFLAGS) $< -o $@

install: $(APPLICATION).bin
	rpi-install.py $<

clean:
	rm -f *.a *.o *.i *.bin *.elf *.list *~ blink.s gpio.s timer.s cstart.s

.PHONY: all clean install

.PRECIOUS: %.o %.elf

# empty recipe used to disable built-in rules for native build
%:%.c
%:%.o
%:%.s
