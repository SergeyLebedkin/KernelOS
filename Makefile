all:
	mkdir -p bin
	fasm ./src/boot.asm ./bin/boot.bin
	qemu-system-x86_64 ./bin/boot.bin