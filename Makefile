all:
	mkdir -p bin
	fasm ./src/boot.asm ./bin/boot.bin
	fasm ./src/kernel.asm ./bin/kernel.bin
	cat ./bin/boot.bin ./bin/kernel.bin > ./bin/image.bin
	qemu-system-x86_64 ./bin/image.bin