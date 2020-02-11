all: link
	# run
	cat ./bin/boot.bin ./bin/kernel.bin > image.bin
	qemu-system-x86_64 image.bin

link: compile
	# link kernel
	ld ./obj/kernel/entry.o ./obj/kernel/kernel.o -o ./bin/kernel.elf
	objcopy -O binary ./bin/kernel.elf ./bin/kernel.bin
	# get kernel assembler (for debug only)
	objdump -M intel -b binary -m i386:x86-64 -D ./bin/kernel.bin > kernel.s

compile: prepare
	# compile boot sector
	fasm ./src/boot/boot.asm ./bin/boot.bin
	# compile kernel
	gcc -nostdlib -nostdinc -ffreestanding -Wall -Wextra -fno-exceptions -c ./src/kernel/kernel.c -o ./obj/kernel/kernel.o
	as -c ./src/kernel/entry.asm -o ./obj/kernel/entry.o

prepare: clean
	mkdir -p bin
	mkdir -p obj
	mkdir -p obj/kernel

clean:
	rm -rf ./*.bin
	rm -rf ./*.s
	rm -rf ./bin
	rm -rf ./obj
