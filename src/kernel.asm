    use64
start:
    mov     rsp, 0xFFFF_8000_0010_0000

    ; blank out the screen to a blue color.
    mov     edi, 0xB8000
    mov     rcx, 500
    mov     rax, 0x1F20_1F20_1F20_1F20
    rep     stosq

    jmp      $
IDTPointer:
    dw 4096-1
    dq 0x8000