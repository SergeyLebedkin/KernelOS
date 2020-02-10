all: clean
	# make folders
	mkdir -p bin
	mkdir -p obj
	# compile boot sector
	fasm ./src/boot.asm ./bin/boot.bin
	# compile kernel
	gcc -nostdlib -nostdinc -ffreestanding -Wall -Wextra -fno-exceptions -c ./src/kernel.c -o ./obj/kernel.o
	# link kernel
	ld ./obj/kernel.o -o ./bin/kernel.elf
	objcopy -O binary ./bin/kernel.elf ./bin/kernel.bin
	# get kernel assembler (for debug only)
	objdump -M intel -b binary -m i386:x86-64 -D ./bin/kernel.bin > kernel.s
	# create image
	cat ./bin/boot.bin ./bin/kernel.bin > image.bin
	# run
	qemu-system-x86_64 image.bin

clean:
	rm -rf ./*.bin
	rm -rf ./*.s
	rm -rf ./bin
	rm -rf ./obj
