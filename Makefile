CC  = gcc 
AS  = as 
CPP = g++
LD = ld

CFLAGS     = -nostdlib -nostdinc -ffreestanding -Wall -Wextra -fno-exceptions
CINCLUDE   = -I ./src/include/libc
ASFLAGS    = 
ASINCLUDE  =
CPPFLAGS   = -nostdlib -nostdinc -ffreestanding -Wall -Wextra -fno-exceptions
CPPINCLUDE = -I ./src/include/libc -I ./src/include/libcxx
LDFLAGS    = 


all: link
	# run
	cat ./bin/boot.bin ./bin/kernel.bin > image.bin
	qemu-system-x86_64 image.bin

link: compile
	# link kernel
	${LD} ${LDFLAGS}               \
		./obj/arch/x86_64/entry.o  \
		./obj/kernel/main.o      \
		-o ./bin/kernel.elf
	# get raw kernel code
	objcopy -O binary ./bin/kernel.elf ./bin/kernel.bin
	# get kernel assembler (for debug only)
	# objdump -M intel -b binary -m i386:x86-64 -D ./bin/kernel.bin > kernel.s

compile: prepare
	# compile boot sector
	fasm ./src/boot/boot.asm ./bin/boot.bin
	# compile kernel
	${AS}  ${ASFLAGS}  ${ASINCLUDE}  -c ./src/arch/x86_64/entry.asm -o ./obj/arch/x86_64/entry.o
	${CPP} ${CPPFLAGS} ${CPPINCLUDE} -c ./src/kernel/main.cpp       -o ./obj/kernel/main.o

prepare: clean
	mkdir -p bin
	mkdir -p obj
	mkdir -p obj/arch/x86_64
	mkdir -p obj/kernel

clean:
	rm -rf ./*.bin
	rm -rf ./*.s
	rm -rf ./bin
	rm -rf ./obj
