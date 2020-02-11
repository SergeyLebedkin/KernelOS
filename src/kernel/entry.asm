    # use 64-bit code
    .code64
    # use intel syntax
    .intel_syntax noprefix

    # externs section (ignored by as)
    .extern kernel_main

    # code section
    .text
start:
    # set new rsp value
    mov     rsp, 0xFFFF8000001FFFF0

    # blank out the screen to a blue color.
    mov     edi, 0xB8000
    mov     rcx, 500
    mov     rax, 0x1F201F201F201F20
    mov     [edi], rax

    call    kernel_main

    # blank out the screen to a blue color.
    mov     edi, 0xB8100
    mov     rcx, 500
    mov     rax, 0x1F201F201F201F20
    mov     [edi], rax
    jmp      .