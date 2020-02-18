#include <cinttypes>
#include <ostream>

// main
extern "C" void kmain() {
    uint64_t *vid_mem = (uint64_t *)0xb8000;
    vid_mem[1] = 0x1F201F201F201F20;
}