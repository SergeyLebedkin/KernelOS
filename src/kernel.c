typedef unsigned long long uint64_t;

void _start() {
    uint64_t* video_mem = (uint64_t*)0xB8000;
    video_mem[0] = 0x1F201F201F201F20;
    while(1);
}