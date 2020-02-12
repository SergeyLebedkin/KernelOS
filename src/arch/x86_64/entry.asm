    .code64
    .intel_syntax noprefix
    .extern kmain
    .text
start:
    # set new rsp value
    mov     rsp, 0xFFFF8000001FFFF0
    call    kmain
    jmp     .
