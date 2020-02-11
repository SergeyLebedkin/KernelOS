CC  = gcc 
AS  = as 
CPP = g++ -nostdlib -nostdinc -ffreestanding -Wall -Wextra -fno-exceptions
LD = ld

CFLAGS    = -nostdlib -nostdinc -ffreestanding -Wall -Wextra -fno-exceptions
ASFLAGS   = 
CPPFLAGS  = -nostdlib -nostdinc -ffreestanding -Wall -Wextra -fno-exceptions
LDFLAGS   = 

all: link
	# run
	cat ./bin/boot.bin ./bin/kernel.bin > image.bin
	qemu-system-x86_64 image.bin

link: compile
	# link kernel
	${LD}                 \
	./obj/kernel/entry.o  \
	./obj/kernel/kernel.o \
	-o ./bin/kernel.elf
	# get raw kernel code
	objcopy -O binary ./bin/kernel.elf ./bin/kernel.bin
	# get kernel assembler (for debug only)
	objdump -M intel -b binary -m i386:x86-64 -D ./bin/kernel.bin > kernel.s

compile: prepare
	# compile boot sector
	fasm ./src/boot/boot.asm ./bin/boot.bin
	# compile kernel
	${CPP} ${CPPFLAGS} -c ./src/kernel/kernel.cpp  -o ./obj/kernel/kernel.o
	${AS}  ${ASFLAGS}  -c ./src/kernel/entry.asm   -o ./obj/kernel/entry.o

prepare: clean
	mkdir -p bin
	mkdir -p obj
	mkdir -p obj/kernel

clean:
	rm -rf ./*.bin
	rm -rf ./*.s
	rm -rf ./bin
	rm -rf ./obj
