    .code64
    .intel_syntax noprefix
    .extern kernel_main
    .text
start:
    # set new rsp value
    mov     rsp, 0xFFFF8000001FFFF0
    call    kernel_main
    jmp     .
