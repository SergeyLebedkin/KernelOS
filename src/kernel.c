// unsigned integer data types
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

// signed integer data types
typedef signed char        int8_t;
typedef signed short       int16_t;
typedef signed int         int32_t;
typedef signed long long   int64_t;

void printh(uint16_t value);

void _start() {
    
    printh(0x0123);
    printh(0x4567);
    printh(0x789A);
    printh(0xBCDE);
    while(1);
}

static uint32_t cursor_pos = 0;
uint16_t* video_mem = (uint16_t*)0xB8000;
const char SYMBOL_ARRAY[] = "0123456789ABCDEF";

void printh(uint16_t value) {
    video_mem[cursor_pos++] = 0x0700 | '0';
    video_mem[cursor_pos++] = 0x0700 | 'x';
    video_mem[cursor_pos++] = 0x0700 | SYMBOL_ARRAY[(value & 0xf000) >> 12];
    video_mem[cursor_pos++] = 0x0700 | SYMBOL_ARRAY[(value & 0x0f00) >>  8];
    video_mem[cursor_pos++] = 0x0700 | SYMBOL_ARRAY[(value & 0x00f0) >>  4];
    video_mem[cursor_pos++] = 0x0700 | SYMBOL_ARRAY[(value & 0x000f)];
    video_mem[cursor_pos++] = 0x0700 | ' ';
}